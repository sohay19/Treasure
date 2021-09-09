using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using System.Linq;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System;

public class Lobby : MonoBehaviourPunCallbacks
{
    public static Lobby instance;

    public GameObject myInfoMenu;

    List<RoomInfo> roomAllList;
    //현재 방리스트
    int roomCounter;
    //방번호


    #region 프로퍼티
    public List<RoomInfo> RoomList
    {
        get
        {
            return roomAllList;
        }
    }
    public int RoomCounter
    {
        get
        {
            return roomCounter;
        }
    }
    public static Lobby Instance
    {
        get
        {
            return instance;
        }
    }
    #endregion


    private void Awake()
    {
        instance = this;
    }
    void Start()
    {
        roomAllList = new List<RoomInfo>();
        roomCounter = 1;

        if (PhotonNetwork.IsConnectedAndReady)
        {
            PhotonNetwork.JoinLobby(new TypedLobby("MainLobby", LobbyType.Default));
        }
    }


    #region Photon CallBack
    public override void OnConnectedToMaster()
    {
        PhotonNetwork.JoinLobby(new TypedLobby("MainLobby", LobbyType.Default));
    }
    public override void OnJoinedLobby()
    {
        if (PhotonNetwork.InLobby)
        {
            Save.Instance.ChangeLevel();
            UpdateProfile();
        }
    }
    public override void OnRoomListUpdate(List<RoomInfo> roomList)
    {
        if (roomList.Count != 0)
        //갱신O
        {
            UpdataRoom(roomList);
        }
        //룸 갱신 및 정렬

        if (roomAllList.Count == 0)
        {
            PrintRoom.Instance.RoomPrint(1);
        }
        else
        {
            PrintRoom.Instance.RoomPrint(PrintRoom.Instance.CurrentPage);
        }
    }
    #endregion


    #region 사용자 함수
    void UpdataRoom(List<RoomInfo> roomList)
    {
        foreach (RoomInfo room in roomList)
        {
            int index = roomAllList.FindIndex(x => x.Name == room.Name);

            if (room.PlayerCount != 0)
            //사람이 있는 방
            {
                if (index == -1)
                //리스트에 방 없음(추가)
                {
                    roomAllList.Add(room);
                }
                else
                //리스트에 방있음(업데이트)
                {
                    roomAllList[index] = room;
                }
            }
            else
            //비어있는방
            {
                if (index != -1)
                //리스트에 있으니 제거
                {
                    roomAllList.RemoveAt(index);
                    //현재 방 리스트에서 제거
                }
            }
        }
        //룸 갱신

        roomAllList = roomAllList.OrderBy(x => x.CustomProperties[enumType.roomKeysList[0]]).ToList();
        //룸 정렬

        roomCounter = 1;
        for (int i = 0; i < roomAllList.Count; i++)
        {
            if (roomCounter == int.Parse(roomAllList[i].Name))
            {
                roomCounter++;
            }
        }
        //방번호 갱신
    }
    public void UpdateProfile()
    {
        ExitGames.Client.Photon.Hashtable hash = PhotonNetwork.LocalPlayer.CustomProperties;

        myInfoMenu.transform.GetChild(2).GetComponent<Text>().text = hash[enumType.playerKeysList[(int)enumType.playerKey.NickName]].ToString();
        //닉네임
        myInfoMenu.transform.GetChild(1).GetComponent<Image>().material = Resources.Load<Material>(hash[enumType.playerKeysList[(int)enumType.playerKey.Level]].ToString());
        //플레이어 이미지
        int index = enumType.levelKeysList.FindIndex(x => x == hash[enumType.playerKeysList[(int)enumType.playerKey.Level]].ToString());
        myInfoMenu.transform.GetChild(4).GetComponent<Text>().text = enumType.levelNameKeysList[index].ToString();
        //레벨
        myInfoMenu.transform.GetChild(6).GetComponent<Text>().text = hash[enumType.playerKeysList[(int)enumType.playerKey.Coin]].ToString();
        //코인
    }
    #endregion
}
