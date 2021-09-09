using Photon.Pun;
using Photon.Realtime;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class CurPlayersInfo : MonoBehaviourPunCallbacks
{
    public static CurPlayersInfo instance;

    public GameObject prefabPlayer;
    public GameObject uiPlayer;
    public GameObject content;

    Image imgReady;
    Text txtTurnNum;
    Image imgProfile;
    Text txtNick;
    Text txtCoin;


    public static CurPlayersInfo Instance
    {
        get
        {
            return instance;
        }
    }
    private void Awake()
    {
        instance = this;
        CreatePlayerPrefab();
        //포톤뷰가 달린 객체 플레이어 객체생성
    }
    void Start()
    {
        UpdatePlayerUI();
    }


    #region 포톤콜백
    public override void OnPlayerEnteredRoom(Player newPlayer)
    {
        UpdatePlayerUI();
    }
    public override void OnPlayerLeftRoom(Player otherPlayer)
    {
        UpdatePlayerUI();
    }
    public override void OnPlayerPropertiesUpdate(Player targetPlayer, ExitGames.Client.Photon.Hashtable changedProps)
    {
        UpdatePlayerUI();
    }
    #endregion


    #region 사용자 함수
    void CreatePlayerPrefab()
    {
        if (Save.CurPlayerPrefab == null)
        {
            Save.CurPlayerPrefab = PhotonNetwork.Instantiate(nameof(prefabPlayer), new Vector3(0, 0, 0), Quaternion.identity, 0);
            Save.CurPhotonView = Save.CurPlayerPrefab.GetComponent<PhotonView>();
        }
    }
    public void UpdatePlayerUI()
    {
        for(int i = 0; i <content.transform.childCount; i++)
        {
            Destroy(content.transform.GetChild(i).gameObject);
        }

        int turn = 0;
        foreach(Player player in PhotonNetwork.PlayerList)
        {
            GameObject tmpObject = Instantiate(uiPlayer);
            tmpObject.transform.SetParent(content.transform);
            //UI생성

            imgReady = tmpObject.GetComponent<PlayerCellUI>().imgReady;
            txtTurnNum = tmpObject.GetComponent<PlayerCellUI>().imgTurn.GetComponentInChildren<Text>();
            imgProfile = tmpObject.GetComponent<PlayerCellUI>().imgPlayerProfile;
            txtNick = tmpObject.GetComponent<PlayerCellUI>().txtNinkName;
            txtCoin = tmpObject.GetComponent<PlayerCellUI>().txtCoin;
            //UI 연결

            ExitGames.Client.Photon.Hashtable hash = player.CustomProperties;
            //커스텀프로퍼티 받아오기
            if (hash[enumType.playerKeysList[(int)enumType.playerKey.Ready]].ToString() == true.ToString())
            {
                imgReady.color = new Color32(255, 0, 0, 200);
                if(player.NickName == PhotonNetwork.MasterClient.NickName) //방장일경우
                {
                    Text txtGo = imgReady.GetComponentInChildren<Text>();
                    txtGo.text = "Start";
                }
                //방장표기
            }
            else
            {
                imgReady.color = new Color32(25, 5, 84, 200);
            }
            //Ready 여부
            turn++;
            txtTurnNum.text = turn.ToString();
            //순서
            if (player.NickName == PhotonNetwork.LocalPlayer.NickName) //자기자신일때
            {
                txtNick.color = Color.yellow;
            }
            txtNick.text = player.NickName;
            //닉네임
            imgProfile.material = Resources.Load<Material>(hash[enumType.playerKeysList[(int)enumType.playerKey.Level]].ToString());
            //프로필사진
            txtCoin.text = hash[enumType.playerKeysList[(int)enumType.playerKey.Coin]].ToString().ToString();
            //코인

            if (PhotonNetwork.CurrentRoom.CustomProperties[enumType.roomKeysList[(int)enumType.roomKey.isPlaying]].ToString() == true.ToString())
            {
                Text txtGo = imgReady.GetComponentInChildren<Text>();
                txtGo.text = "Go";
            }
            //게임 시작 모드
        }
    }
    #endregion
}
