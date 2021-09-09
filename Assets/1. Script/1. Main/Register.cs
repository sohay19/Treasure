using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using PlayFab;
using PlayFab.ClientModels;
using System;
using System.Linq;

public class Register : MonoBehaviour
{
    public InputField inputId;
    public InputField inputNick;
    public InputField inputPw;
    public InputField inputPwCheck;
    public GameObject tabClosePopUp;
    public GameObject tabProcessPopUp;

    string strId;
    string strNick;
    string strPw;
    string strPwCheck;


    void Start()
    {
        strId = "";
        strNick = "";
        strPw = "";
        strPwCheck = "";
    }


    #region Playfab 함수
    void RegisterSuccess(RegisterPlayFabUserResult result)
    {
        Debug.Log("가입 성공");

        Dictionary<string, string> dirPlayer = new Dictionary<string, string>();
        dirPlayer.Add(enumType.playerKeysList[(int)enumType.playerKey.ID], result.Username);
        dirPlayer.Add(enumType.playerKeysList[(int)enumType.playerKey.PlayfabID], result.PlayFabId);
        dirPlayer.Add(enumType.playerKeysList[(int)enumType.playerKey.NickName], strNick);
        dirPlayer.Add(enumType.playerKeysList[(int)enumType.playerKey.Level], "Level1");
        dirPlayer.Add(enumType.playerKeysList[(int)enumType.playerKey.Coin], "1000");
        dirPlayer.Add(enumType.playerKeysList[(int)enumType.playerKey.Ready], false.ToString());
        dirPlayer.Add(enumType.playerKeysList[(int)enumType.playerKey.Login], false.ToString());

        var request = new UpdateUserDataRequest { Data = dirPlayer };
        PlayFabClientAPI.UpdateUserData(request, PlayerDataUpdateSuccess, PlayerDataUpdateFailure);
    }
    void RegisterFailure(PlayFabError error)
    {
        Debug.LogWarning("가입 실패");
        Debug.LogWarning(error.GenerateErrorReport());

        PopUp.instance.ShowTabClose(tabClosePopUp, "문제가 발생했습니다\n 다시 가입해주세요");
    }
    void PlayerDataUpdateSuccess(UpdateUserDataResult result)
    {
        Debug.Log("플레이어 정보 업데이트 성공");

        inputId.text = "";
        inputNick.text = "";
        inputPw.text = "";
        inputPwCheck.text = "";


        PopUp.Instance.StopPopUp();

        tabProcessPopUp.SetActive(false);
        gameObject.SetActive(false);
    }
    void PlayerDataUpdateFailure(PlayFabError error)
    {
        Debug.LogWarning("플레이어 정보 업데이트 실패");
        Debug.LogWarning(error.GenerateErrorReport());
    }
    #endregion


    #region 버튼 이벤트
    public void OnClickRegister()
    {
        strId = inputId.text;
        strNick = inputNick.text;
        strPw = inputPw.text;
        strPwCheck = inputPwCheck.text;


        if (strId.Length < 3 || strId.Length > 6)
        {
            PopUp.instance.ShowTabClose(tabClosePopUp, "아이디를 다시 확인해주세요");
        }
        else if (strNick.Length < 3 || strNick.Length > 6)
        {
            PopUp.instance.ShowTabClose(tabClosePopUp, "닉네임을 다시 확인해주세요");
        }
        else if (strPw.Length < 6 || strPw.Length > 10)
        {
            PopUp.instance.ShowTabClose(tabClosePopUp, "비밀번호를 다시 확인해주세요");
        }
        else if (strPw != strPwCheck)
        {
            PopUp.instance.ShowTabClose(tabClosePopUp, "비밀번호가 일치하지 않습니다");
        }
        else
        {
            var requestRes = new RegisterPlayFabUserRequest { Username = strId, Password = strPw, DisplayName = strNick, RequireBothUsernameAndEmail = false };
            PlayFabClientAPI.RegisterPlayFabUser(requestRes, RegisterSuccess, RegisterFailure);

            PopUp.instance.ShowTabProcess(tabProcessPopUp, "처리 중 입니다", 2.0f);
        }
    }
    #endregion
}
