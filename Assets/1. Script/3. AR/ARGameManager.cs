using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class ARGameManager : MonoBehaviour
{
    public static ARGameManager instance;

    public GameObject tabFind;
    public GameObject tabSwap;

    GameObject btnSwap;
    Text txtFind;
    Text txtSwap;

    bool isFindStart;
    bool isSwapEnd;


    #region 프로퍼티
    public static ARGameManager Instance
    {
        get
        {
            return instance;
        }
    }
    public bool IsFindStart
    {
        get
        {
            return isFindStart;
        }
        set
        {
            isFindStart = value;
        }
    }
    public bool IsSwapEnd
    {
        get
        {
            return isSwapEnd;
        }
    }
    #endregion


    private void Awake()
    {
        instance = this;
    }
    void Start()
    {
        txtFind = tabFind.transform.GetChild(1).GetComponent<Text>();
        txtSwap = tabSwap.transform.GetChild(1).GetComponent<Text>();
        btnSwap = tabSwap.transform.GetChild(2).gameObject;

        isFindStart = false;
        isSwapEnd = false;
    }


    #region 사용자 함수
    public void CheckFind()
    {
        tabFind.SetActive(true);
        txtFind.text = "틀렸습니다. 다시 선택해주세요";

        StartCoroutine(ResetText());
    }
    IEnumerator ResetText()
    {
        yield return new WaitForSeconds(1.0f);

        tabFind.SetActive(false);
    }
    public void ResultFind()
    {
        tabFind.SetActive(true);
        txtFind.text = "정답입니다! 500코인을 획득하였습니다";

        int curCoin = int.Parse(PhotonNetwork.LocalPlayer.CustomProperties[enumType.playerKey.Coin.ToString()].ToString());
        ExitGames.Client.Photon.Hashtable hash = new ExitGames.Client.Photon.Hashtable();
        hash.Add(enumType.playerKeysList[(int)enumType.playerKey.Coin], (curCoin + 500).ToString());

        PhotonNetwork.LocalPlayer.SetCustomProperties(hash);
        //100코인추가

        StartCoroutine(LoadMain());
    }
    IEnumerator LoadMain()
    {
        yield return new WaitForSeconds(3.0f);

        PhotonNetwork.LoadLevel("3.AR");
    }
    public void CheckSwap()
    {
        tabSwap.SetActive(true);
        txtSwap.text = "코인이 들어있는 상자를 선택해주세요";

        Controll.Instance.TargetObject = null;
        Destroy(Controll.Instance.ArrowObject);

        isSwapEnd = true;
    }
    public void ResultSwap()
    {
        Swap swap = Map.Instance.SwapObject.GetComponent<Swap>();

        if (Controll.Instance.TargetObject == swap.BoxList[1].gameObject)
        {
            swap.BoxList[1].GetComponent<Animation>().Play("OpenBox");
            txtSwap.text = "정답입니다! 500코인을 획득하였습니다";

            int curCoin = int.Parse(PhotonNetwork.LocalPlayer.CustomProperties[enumType.playerKey.Coin.ToString()].ToString());
            ExitGames.Client.Photon.Hashtable hash = new ExitGames.Client.Photon.Hashtable();
            hash.Add(enumType.playerKeysList[(int)enumType.playerKey.Coin], (curCoin + 500).ToString());

            PhotonNetwork.LocalPlayer.SetCustomProperties(hash);
            //100코인추가
        }
        else
        {
            Controll.Instance.TargetObject.GetComponent<Animation>().Play("OpenBox");
            txtSwap.text = "틀렸습니다. 다시 한 번 도전해주세요";
        }

        Controll.Instance.TargetObject = null;
        Destroy(Controll.Instance.ArrowObject);

        btnSwap.SetActive(true);
    }
    #endregion
}
