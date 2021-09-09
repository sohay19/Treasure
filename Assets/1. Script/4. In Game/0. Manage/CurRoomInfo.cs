using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using Photon.Realtime;
using System;
using System.Linq;

public class CurRoomInfo : MonoBehaviourPunCallbacks
{
    Text roomNum;
    Text roomName;
    Text gameType;
    Text roomPerson;
    GameObject roomSecret;
    Image roomPlay;


    void Start()
    {
        roomNum = transform.GetChild(1).GetComponentInChildren<Text>();
        roomName = transform.GetChild(2).GetComponentInChildren<Text>();
        gameType = transform.GetChild(3).GetComponentInChildren<Text>();
        roomPerson = transform.GetChild(4).GetComponentInChildren<Text>();
        roomSecret = transform.GetChild(5).gameObject;
        roomPlay = transform.GetChild(6).GetComponentInChildren<Image>();

        ShowRoom();
    }


    #region 포톤 콜백
    public override void OnPlayerEnteredRoom(Player newPlayer)
    {
        roomPerson.text = PhotonNetwork.CurrentRoom.PlayerCount.ToString() + " / " + PhotonNetwork.CurrentRoom.MaxPlayers.ToString();
    }
    public override void OnPlayerLeftRoom(Player otherPlayer)
    {
        roomPerson.text = PhotonNetwork.CurrentRoom.PlayerCount.ToString() + " / " + PhotonNetwork.CurrentRoom.MaxPlayers.ToString();
    }
    public override void OnRoomPropertiesUpdate(ExitGames.Client.Photon.Hashtable propertiesThatChanged)
    {
        foreach(DictionaryEntry value in propertiesThatChanged)
        {
            if(value.Key.ToString() == enumType.roomKeysList[(int)enumType.roomKey.isPlaying].ToString())
            {
                if (propertiesThatChanged[enumType.roomKeysList[(int)enumType.roomKey.isPlaying]].ToString() == true.ToString())
                {
                    roomPlay.color = Color.red;
                }
            }
        }
    }
    #endregion


    #region 사용자 함수
    void ShowRoom()
    {
        roomNum.text = "No. " + PhotonNetwork.CurrentRoom.CustomProperties[enumType.roomKeysList[(int)enumType.roomKey.roomNum]].ToString();
        roomName.text = PhotonNetwork.CurrentRoom.CustomProperties[enumType.roomKeysList[(int)enumType.roomKey.roomName]].ToString();

        int index = int.Parse(PhotonNetwork.CurrentRoom.CustomProperties[enumType.roomKeysList[(int)enumType.roomKey.gameType]].ToString());
        enumType.gameType name;
        switch (index)
        {
            case 1:
                name = (enumType.gameType)index;
                gameType.text = name.ToString();
                break;
            case 2:
                name = (enumType.gameType)index;
                gameType.text = name.ToString();
                break;
            case 3:
                name = (enumType.gameType)index;
                gameType.text = name.ToString();
                break;
            case 4:
                name = (enumType.gameType)index;
                gameType.text = name.ToString();
                break;
        }

        roomPerson.text = PhotonNetwork.CurrentRoom.PlayerCount.ToString() + " / " + PhotonNetwork.CurrentRoom.MaxPlayers.ToString();

        if (PhotonNetwork.CurrentRoom.CustomProperties[enumType.roomKeysList[(int)enumType.roomKey.isSecret]].ToString() == true.ToString())
        {
            roomSecret.SetActive(true);
        }
    }
    #endregion
}
