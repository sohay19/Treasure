using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;

public class Chat : MonoBehaviour
{
    public static Chat instance;

    public RectTransform contentRect;

    TouchScreenKeyboard keyboard;
    Text txtMsg;
    PhotonView photonView;

    float addSize = 110f;
    float basicHeight = 1450f;

    bool isChatOpen;
    bool isChat;


    [ContextMenu("SendChatting1")]
    void SendChatting1()
    {
        photonView = Save.CurPhotonView;
        photonView.RPC(nameof(PrefabPlayer.Instance.SendChat), RpcTarget.All, PhotonNetwork.LocalPlayer.NickName, "넹 안녕하세요");
    }
    [ContextMenu("SendChatting2")]
    void SendChatting2()
    {
        photonView = Save.CurPhotonView;
        photonView.RPC(nameof(PrefabPlayer.Instance.SendChat), RpcTarget.All, PhotonNetwork.LocalPlayer.NickName, "ㄱㄱ합시당");
    }


    public static Chat Instance
    {
        get
        {
            return instance;
        }
    }
    public bool IsChatOpen
    {
        get
        {
            return isChatOpen;
        }
        set
        {
            isChatOpen = value;
        }
    }
    public bool IsChat
    {
        get
        {
            return isChat;
        }
    }


    private void Awake()
    {
        instance = this;
    }
    void Start()
    {
        txtMsg = contentRect.gameObject.GetComponentInChildren<Text>();

        isChat = false;
    }
    void Update()
    {
        if (contentRect.anchoredPosition.y < 0 || contentRect.sizeDelta.y < basicHeight)
        {
            contentRect.anchoredPosition = new Vector2(contentRect.anchoredPosition.x, 0);
        }
        else if (contentRect.anchoredPosition.y > contentRect.sizeDelta.y - basicHeight)
        {
            contentRect.anchoredPosition = new Vector2(contentRect.anchoredPosition.x, contentRect.sizeDelta.y - basicHeight);
        }
        //사이즈 조정

        if(keyboard != null)
        {
            if (keyboard.status == TouchScreenKeyboard.Status.Done && keyboard.text != "")
            {
                if (photonView.IsMine)
                {
                    photonView.RPC(nameof(PrefabPlayer.Instance.SendChat), RpcTarget.All, PhotonNetwork.LocalPlayer.NickName, keyboard.text);

                    keyboard.text = "";
                    isChat = false;
                }
            }
        }
        //키보드입력
    }

    #region 사용자 함수
    public void SendMsg(string name, string msg)
    {
        txtMsg.text += name + ": " + msg + "\n";

        contentRect.sizeDelta += new Vector2(0, addSize);
    }
    #endregion


    #region 버튼 이벤트 함수
    public void OnClickInputMsg()
    {
        isChat = true;

        photonView = Save.CurPhotonView;
        keyboard = TouchScreenKeyboard.Open("", TouchScreenKeyboardType.Default);
    }
    #endregion
}
