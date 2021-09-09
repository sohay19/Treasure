using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine.SceneManagement;
using System;
using System.Linq;
using UnityEngine.UI;

public class GameStart : MonoBehaviourPunCallbacks
{
    public static GameStart instance;

    public GameObject btnReady;
    public GameObject btnNotReady;
    public GameObject tabClosePopUp;
    public GameObject tabProcessPopUp;

    List<Player> playerTrunList;


    public static GameStart Instance
    {
        get
        {
            return instance;
        }
    }
    public List<Player> PlayerTrunList
    {
        get
        {
            return playerTrunList;
        }
    }


    private void Awake()
    {
        instance = this;
    }
    void Start()
    {
        btnReady.SetActive(true);
        btnNotReady.SetActive(false);

        playerTrunList = new List<Player>();

        if (PhotonNetwork.IsMasterClient)
        {
            Text txtReady = btnReady.GetComponentInChildren<Text>();
            txtReady.text = "Start";
        }
    }


    #region 포톤콜백
    public override void OnPlayerLeftRoom(Player otherPlayer)
    {
        if (PhotonNetwork.IsMasterClient)
        {
            Text txtReady = btnReady.GetComponentInChildren<Text>();
            txtReady.text = "Start";
        }
        //마스터 클라이언트면 버튼 텍스트 변경
    }
    #endregion


    #region 사용자 함수
    public void SetGame()
    {
        CurPlayersInfo.Instance.UpdatePlayerUI();
        //Ready에서 Go로 변경
        btnReady.SetActive(false);
        btnNotReady.SetActive(false);
        //Ready키 없애기

        int curCoin = int.Parse(PhotonNetwork.LocalPlayer.CustomProperties[enumType.playerKey.Coin.ToString()].ToString());
        ExitGames.Client.Photon.Hashtable hash = new ExitGames.Client.Photon.Hashtable();
        hash.Add(enumType.playerKeysList[(int)enumType.playerKey.Coin], (curCoin - 100).ToString());
        PhotonNetwork.LocalPlayer.SetCustomProperties(hash);
        //각자 스스로 코인 차감

        GameEnd.Instance.PlayerScoreHash.Clear();
        foreach (Player player in PhotonNetwork.PlayerList)
        {
            GameEnd.Instance.PlayerScoreHash.Add(player.NickName, 0);
            playerTrunList.Add(player);
        }
        GameEnd.Instance.TotalCoin = 100 * PhotonNetwork.PlayerList.Length;
        //플레이어 및 스코어 + 전체코인 세팅

        if (PhotonNetwork.IsMasterClient)
        {
            switch (int.Parse(PhotonNetwork.CurrentRoom.CustomProperties[enumType.roomKey.gameType.ToString()].ToString()))
            {
                case 1:
                    WordQuizRun.Instance.PrefabQuiz.ShowQuiz(WordQuizRun.Instance.PrefabQuiz.CurQuizNum);
                    break;
                case 2:
                    BingoRun.Instance.StartBingo();
                    break;
                case 3:
                    break;
                case 4:
                    break;
            }
        }
    }
    #endregion


    #region 버튼 이벤트
    public void OnClickReady()
    {
        if (PhotonNetwork.IsMasterClient)
        {
            if (PhotonNetwork.PlayerList.Length > 1)
            {
                int readyPlayerCount = 0; ;
                foreach (Player player in PhotonNetwork.PlayerList)
                {
                    if (player.CustomProperties[enumType.playerKeysList[(int)enumType.playerKey.Ready]].ToString() == true.ToString())
                    {
                        readyPlayerCount++;
                    }
                }
                if (readyPlayerCount == PhotonNetwork.PlayerList.Length)
                {
                    GameManager.Instance.UpdatRoomProperties(true);
                }
                else
                {
                    PopUp.Instance.ShowTabClose(tabClosePopUp, "준비하지 않은\n사용자가 존재합니다");
                }
            }
            else
            //플레이 인원 부족
            {
                PopUp.Instance.ShowTabClose(tabClosePopUp, "플레이 인원이\n부족합니다");
            }
        }
        else
        {
            if (PhotonNetwork.LocalPlayer.CustomProperties[enumType.playerKey.Ready.ToString()].ToString() == false.ToString())
            {
                btnReady.SetActive(false);
                btnNotReady.SetActive(true);

                GameManager.Instance.UpdatPlayerProperties(PhotonNetwork.LocalPlayer, true);
            }
            else
            {
                btnNotReady.SetActive(false);
                btnReady.SetActive(true);

                GameManager.Instance.UpdatPlayerProperties(PhotonNetwork.LocalPlayer, false);
            }
        }
    }
    #endregion
}
