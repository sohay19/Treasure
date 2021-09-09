using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using PlayFab;
using PlayFab.ClientModels;
using UnityEngine.SceneManagement;
using Photon.Realtime;
using System;
using System.Linq;

public class Login : MonoBehaviourPunCallbacks
{
    public static Login instance;

    public GameObject tabClosePopUp;
    public GameObject tabProcessPopUp;
    public InputField inputId;
    public InputField inputPw;

    List<string> playerData = new List<string>();
    //플레이어 커스텀 프로퍼티

    string strId;
    string strPw;


    public static Login Instance
    {
        get
        {
            return instance;
        }
    }
    private void Awake()
    {
        instance = this;
    }
    void Start()
    {
        strId = "";
        strPw = "";

        PhotonNetwork.AutomaticallySyncScene = true;
    }


    #region 사용자 함수
    public void SetPlayerInfo()
    {
        if (PhotonNetwork.IsConnected)
        {
            PhotonNetwork.LocalPlayer.NickName = playerData[2];

            ExitGames.Client.Photon.Hashtable hash = new ExitGames.Client.Photon.Hashtable();

            for(int i = 0; i < playerData.Count; i++)
            {
                hash.Add(enumType.playerKeysList[i], playerData[i]);
            }

            PhotonNetwork.LocalPlayer.SetCustomProperties(hash);

            PhotonNetwork.LoadLevel("2.Lobby");
        }
    }
    #endregion


    #region Playfab 함수
    void LoginSuccess(LoginResult result)
    {
        var request = new GetUserDataRequest { PlayFabId = result.PlayFabId, Keys = enumType.playerKeysList };
        PlayFabClientAPI.GetUserData(request, UserDataGetSuccess, UserDataGetFailure);
    }
    void LoginFailure(PlayFabError error)
    {
        if (error.Error == PlayFabErrorCode.InvalidUsernameOrPassword)
        {
            PopUp.instance.ShowTabClose(tabClosePopUp, "아이디 또는 패스워드가\n잘못되었습니다");
        }
        else if (error.Error == PlayFabErrorCode.InvalidParams)
        {
            PopUp.instance.ShowTabClose(tabClosePopUp, "아이디는 3자 이상, 비밀번호는\n6자 이상 입력해야 합니다");
        }
        else
        {
            PopUp.instance.ShowTabClose(tabClosePopUp, "다시 시도 해주시기 바랍니다");
        }
    }
    //로그인
    void UserDataGetSuccess(GetUserDataResult result)
    {
        Debug.LogWarning("유저 정보가져오기 성공");

        playerData.Clear();
        for(int i = 0; i < result.Data.Count; i++)
        {
            playerData.Add(result.Data[enumType.playerKeysList[i].ToString()].Value.ToString());
        }

        if (playerData[(int)enumType.playerKey.Login].ToString() == false.ToString())
        //로그인상태아님
        {
            Dictionary<string, string> dirPlayer = new Dictionary<string, string>();
            dirPlayer.Add(enumType.playerKeysList[(int)enumType.playerKey.Login], true.ToString());

            var request = new UpdateUserDataRequest { Data = dirPlayer };
            PlayFabClientAPI.UpdateUserData(request, PlayerDataUpdateSuccess, PlayerDataUpdateFailure);
        }
        else
        //이미 로그인된 계정임
        {
            PopUp.instance.ShowTabClose(tabClosePopUp, "이미 로그인 된 계정입니다");
        }
    }
    void UserDataGetFailure(PlayFabError error)
    {
        Debug.LogWarning("유저 정보가져오기 실패");
    }
    void PlayerDataUpdateSuccess(UpdateUserDataResult result)
    {
        Debug.Log("플레이어 정보 업데이트 성공");

        PhotonNetwork.ConnectUsingSettings();
        //로그인 상태 업데이트 후 커넥트
    }
    void PlayerDataUpdateFailure(PlayFabError error)
    {
        Debug.LogWarning("플레이어 정보 업데이트 실패");
        Debug.LogWarning(error.GenerateErrorReport());
    }
    #endregion


    #region Photon CallBack
    public override void OnConnectedToMaster()
    {
        SetPlayerInfo();

        Save.Instance.ChangeLevel();
    }
    #endregion


    #region 버튼 이벤트 함수
    public void OnClickLogin()
    {
        strId = inputId.text;
        strPw = inputPw.text;

        var request = new LoginWithPlayFabRequest { Username = strId, Password = strPw };
        PlayFabClientAPI.LoginWithPlayFab(request, LoginSuccess, LoginFailure);

        PopUp.instance.ShowTabProcess(tabProcessPopUp, "처리 중 입니다", 5.0f);
    }
    #endregion
}
