using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine;
using UnityEngine.UI;

public class PrintRoom : MonoBehaviour
{
    public static PrintRoom instance;

    public GameObject prefabRoom;
    public GameObject content;
    public Text emptyRoom;
    public Text pageRoom;

    List<GameObject> printRoom;

    Text roomNum;
    Text roomName;
    Text gameType;
    Image roomSecret;
    Image roomPlaying;
    Text playerCount;

    int curPage;
    int totalPage;


    #region
    public int CurrentPage
    {
        get
        {
            return curPage;
        }
    }
    public static PrintRoom Instance
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
        printRoom = new List<GameObject>();
        curPage = 1;
        totalPage = 1;
    }


    #region Room 관련 사용자 함수
    public void RoomPrint(int page)
    {
        foreach (GameObject roomObject in printRoom)
        {
            Destroy(roomObject);
        }
        //객체 리셋

        if(Lobby.Instance.RoomList.Count <= 5)
        {
            totalPage = 1;
        }
        else
        {
            if (Lobby.Instance.RoomList.Count % 5 > 0)
            {
                totalPage = (Lobby.Instance.RoomList.Count / 5) + 1;
            }
            else
            {
                totalPage = (Lobby.Instance.RoomList.Count / 5);
            }
        }
        //전체 페이지 계산

        if (page > totalPage)
        {
            page = totalPage;
            curPage = totalPage;
        }
        //페이지가 줄어버렸을때

        if (Lobby.Instance.RoomList.Count != 0)
        //룸리스트가 0이 아닐때
        {
            emptyRoom.gameObject.SetActive(false);

            if(curPage < totalPage)
            {
                page = 1;
            }

            for (int i = (5 * page) - 5; i < Lobby.Instance.RoomList.Count; i++)
            {
                if (i == 5 * page)
                {
                    break;
                }

                GameObject tmpObject = Instantiate(prefabRoom);
                tmpObject.transform.SetParent(content.transform);

                printRoom.Add(tmpObject);

                roomNum = tmpObject.GetComponent<PrefabRoom>().txtRoomNum;
                roomName = tmpObject.GetComponent<PrefabRoom>().txtoomName;
                gameType = tmpObject.GetComponent<PrefabRoom>().txtGmeType;
                roomSecret = tmpObject.GetComponent<PrefabRoom>().imgRoomSecret;
                roomPlaying = tmpObject.GetComponent<PrefabRoom>().imgRoomPlaying;
                playerCount = tmpObject.GetComponent<PrefabRoom>().txtPlayerCount;
                //화면에 룸 생성

                List<string> data = new List<string>();
                foreach (string key in enumType.roomKeysList)
                {
                    data.Add(Lobby.Instance.RoomList[i].CustomProperties[key].ToString());
                }

                roomNum.text = "No." + data[0];
                roomName.text = data[1];
                //방번호 및 제목
                int index = int.Parse(data[2]);
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
                //게임타입
                if (data[4].ToString() == true.ToString())
                {
                    roomSecret.gameObject.SetActive(true);

                    roomSecret.transform.GetComponentInChildren<Text>().text = data[3];
                }
                //비밀방인지
                if (data[5].ToString() == true.ToString())
                {
                    roomPlaying.color = Color.red;
                }
                //진행중인 방인지
                playerCount.text = Lobby.Instance.RoomList[i].PlayerCount + " / " + Lobby.Instance.RoomList[i].MaxPlayers;
                //플레이어 카운트
                pageRoom.text = curPage + " / " + totalPage;
                //페이지표기
            }
        }
        else
        //방이 0개
        {
            emptyRoom.gameObject.SetActive(true);
        }
        //룸 출력
    }
    #endregion


    #region 버튼 이벤트 함수
    public void OnClickNextRoomList()
    {
        if (curPage + 1 <= totalPage)
        //꽉 차있는 경우에만 넘길 수 있음
        {
            foreach (GameObject roomObject in printRoom)
            {
                GameObject.Destroy(roomObject);
            }

            curPage++;

            RoomPrint(curPage);
        }
    }
    public void OnClickPreRoomList()
    {
        if (curPage - 1 > 0)
        //첫페이지가 아니여야 뒤로 갈 수 있음
        {
            foreach (GameObject roomObject in printRoom)
            {
                GameObject.Destroy(roomObject);
            }

            curPage--;

            RoomPrint(curPage);
        }
    }
    #endregion
}
