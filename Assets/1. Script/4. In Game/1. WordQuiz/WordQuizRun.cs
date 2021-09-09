using System.Collections;
using System.Collections.Generic;
using System.IO;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine;
using UnityEngine.UI;

public class WordQuizRun : MonoBehaviourPunCallbacks
{
    public static WordQuizRun instance;

    public GameObject wordQuizMap;
    public GameObject wordQuizQuiz;
    public GameObject tabCheckAnswer;
    public TouchScreenKeyboard keyboard;

    PrefabWordMap prefabMap;
    PrefabWordQuiz prefabQuiz;
    GameObject tabMap;
    GameObject tabQuiz;




    #region 접근 함수
    public static WordQuizRun Instance
    {
        get
        {
            return instance;
        }
    }
    public GameObject TabMap
    {
        get
        {
            return tabMap;
        }
    }
    public GameObject TabQuiz
    {
        get
        {
            return tabQuiz;
        }
    }
    public PrefabWordMap PrefabMap
    {
        get
        {
            return prefabMap;
        }
    }
    public PrefabWordQuiz PrefabQuiz
    {
        get
        {
            return prefabQuiz;
        }
    }
    #endregion


    void Awake()
    {
        instance = this;
    }
    void Start()
    {
        if (PhotonNetwork.IsMasterClient)
        {
            tabMap = PhotonNetwork.InstantiateRoomObject(nameof(wordQuizMap), new Vector3(0, 0, 0), Quaternion.identity, 0);
            tabQuiz = PhotonNetwork.InstantiateRoomObject(nameof(wordQuizQuiz), new Vector3(0, 0, 0), Quaternion.identity, 0);
            prefabMap = tabMap.GetComponent<PrefabWordMap>();
            prefabQuiz = tabQuiz.GetComponent<PrefabWordQuiz>();

            PhotonView view;

            view = tabMap.transform.GetComponent<PhotonView>();
            GameManager.Instance.ViewList.Add(view);
            view = tabQuiz.transform.GetComponent<PhotonView>();
            GameManager.Instance.ViewList.Add(view);
        }
    }
    void Update()
    {
        if (keyboard != null && !Chat.Instance.IsChat)
        {
            if (keyboard.status == TouchScreenKeyboard.Status.Done && keyboard.text != "")
            {
                if (Save.CurPhotonView.IsMine)
                {
                    Save.CurPhotonView.RPC(nameof(PrefabPlayer.Instance.SendAnswer), RpcTarget.MasterClient, keyboard.text, PhotonNetwork.LocalPlayer.NickName);

                    keyboard.text = "";
                }
            }
        }
    }


    #region 포톤 콜백
    public override void OnPlayerEnteredRoom(Player newPlayer)
    {
        if (PhotonNetwork.IsMasterClient)
        {
            if (GameManager.Instance.ViewList[0].IsMine)
            {
                Save.CurPhotonView.RPC(nameof(PrefabPlayer.Instance.SetOther), RpcTarget.Others, GameManager.Instance.ViewList[0].ViewID, GameManager.Instance.ViewList[1].ViewID);
                //다른플레이어들도 세팅진행
            }
        }
    }
    public override void OnPlayerPropertiesUpdate(Player targetPlayer, ExitGames.Client.Photon.Hashtable changedProps)
    {
        if (changedProps[enumType.playerKey.Ready.ToString()] != null)
        {
            if (changedProps[enumType.playerKey.Ready.ToString()].ToString() == true.ToString())
            {
                if (GameManager.Instance.ViewList[0].IsMine)
                {
                    Save.CurPhotonView.RPC(nameof(PrefabPlayer.Instance.SetOther), RpcTarget.Others, GameManager.Instance.ViewList[0].ViewID, GameManager.Instance.ViewList[1].ViewID);
                    //다른플레이어들도 세팅진행
                }
            }
        }
    }
    #endregion


    #region 사용자함수
    public void SetOtherPlayer(int map, int quiz)
    {
        if (tabMap == null)
        {
            tabMap = PhotonView.Find(map).gameObject;
            tabQuiz = PhotonView.Find(quiz).gameObject;

            prefabMap = tabMap.GetComponent<PrefabWordMap>();
            prefabQuiz = tabQuiz.GetComponent<PrefabWordQuiz>();

            GameManager.Instance.ViewList.Add(tabMap.GetPhotonView());
            GameManager.Instance.ViewList.Add(tabQuiz.GetPhotonView());
        }
    }
    public void CheckAnswer(string answer, string nickName)
    {
        if (PhotonNetwork.IsMasterClient && Save.CurPhotonView.IsMine)
        {
            Save.CurPhotonView.RPC(nameof(prefabMap.CompareAnswer), RpcTarget.All, prefabMap.CompareAnswer(answer), answer, nickName);
        }
    }
    public void CorrectAnswer(string answer, string nickName)
    {
        if (prefabMap.CompareAnswer(answer))
        {
            int score = int.Parse(GameEnd.Instance.PlayerScoreHash[nickName].ToString());
            GameEnd.Instance.PlayerScoreHash[nickName] = score + 10;
            //스코어 증가
        }

        if (PhotonNetwork.IsMasterClient)
        {
            prefabMap.TurnCell();
        }

        Text txtMsg = tabCheckAnswer.transform.GetComponentInChildren<Text>();
        txtMsg.color = Color.yellow;

        txtMsg.text = "\"" + nickName + "\" 님" + "\n";
        txtMsg.text += "[" + answer + "]" + "\n";
        txtMsg.text += "정답입니다";

        Audio.PlayCorrectSound();

        StartCoroutine(ShowAnswer(true));
    }
    public void InCorrectAnswer(string answer, string nickName)
    {
        Text txtMsg = tabCheckAnswer.transform.GetComponentInChildren<Text>();
        txtMsg.color = Color.red;
        txtMsg.text = "[" + nickName + "]님" + "\n";
        txtMsg.text += "\"" + answer + "\"" + "\n";
        txtMsg.text += "틀렸습니다";

        Audio.PlayInCorrectSound();

        StartCoroutine(ShowAnswer(false));
    }
    IEnumerator ShowAnswer(bool isCorrect)
    {
        tabCheckAnswer.SetActive(true);

        yield return new WaitForSecondsRealtime(1.0f);

        tabCheckAnswer.SetActive(false);

        if (isCorrect)
        {
            prefabQuiz.IsRight = true;
        }
    }
    #endregion


    #region 버튼 이벤트
    public void OnClickAnswer()
    {
        if (PhotonNetwork.CurrentRoom.CustomProperties[enumType.roomKey.isPlaying.ToString()].ToString() == true.ToString())
        {
            keyboard = TouchScreenKeyboard.Open("", TouchScreenKeyboardType.Default);
        }
    }
    #endregion
}
