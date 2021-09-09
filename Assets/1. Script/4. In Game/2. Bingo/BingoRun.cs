using Photon.Pun;
using Photon.Realtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;
using UnityEngine.SceneManagement;

public class BingoRun : MonoBehaviourPunCallbacks, IPunOwnershipCallbacks
{
    public static BingoRun instance;

    public GameObject bingoChoiceMap;
    public GameObject bingoMap;
    public GameObject bingoPanel;
    public GameObject turnPlay;

    GameObject myBingoChoiceMap;
    GameObject myBingoMap;
    GameObject myBingoPanel;
    
    Hashtable mapHash;

    PrefabBingoChoiceMap prefabChoiceMap;
    PrefabBingoMap prefabMap;
    PrefabBingoPanel prefabPanel;


    #region 프로퍼티
    public static BingoRun Instance
    {
        get
        {
            return instance;
        }
    }
    public PrefabBingoChoiceMap PrefabChoiceMap
    {
        get
        {
            return prefabChoiceMap;
        }
    }
    public PrefabBingoMap PrefabMap
    {
        set
        {
            prefabMap = value;
        }
        get
        {
            return prefabMap;
        }
    }
    public PrefabBingoPanel PrefabPanel
    {
        get
        {
            return prefabPanel;
        }
    }
    public Hashtable MapHash
    {
        get
        {
            return mapHash;
        }
    }
    #endregion


    private void Awake()
    {
        instance = this;


        mapHash = new Hashtable();

        myBingoChoiceMap = Instantiate(bingoChoiceMap);
        prefabChoiceMap = myBingoChoiceMap.GetComponent<PrefabBingoChoiceMap>();
        //선택된 번호 맵
        myBingoMap = PhotonNetwork.Instantiate(nameof(bingoMap), new Vector3(0, 0, 0), Quaternion.identity, 0);
        prefabMap = myBingoMap.GetComponent<PrefabBingoMap>();
        mapHash.Add(PhotonNetwork.LocalPlayer.NickName, myBingoMap.GetPhotonView().ViewID);
        //내 빙고판
    }
    void Start()
    {
        GameManager.Instance.ViewList.Add(myBingoMap.GetPhotonView());
        //맵 포톤뷰

        myBingoPanel = null;
        prefabPanel = null;

        if (PhotonNetwork.IsMasterClient)
        {
            myBingoPanel = PhotonNetwork.InstantiateRoomObject(nameof(bingoPanel), new Vector3(0, 0, 0), Quaternion.identity);
            prefabPanel = myBingoPanel.GetComponent<PrefabBingoPanel>();
            //패널 변수 설정
            GameManager.Instance.ViewList.Add(myBingoPanel.GetPhotonView());
            //패널 포톤뷰

            turnPlay = PhotonNetwork.InstantiateRoomObject(nameof(turnPlay), new Vector3(0, 0, 0), Quaternion.identity, 0);
            GameManager.Instance.ViewList.Add(turnPlay.GetPhotonView());
            //턴을 넘기기 위한 포톤뷰

            if(PhotonNetwork.PlayerList.Length > 1)
            {
                if (PhotonNetwork.IsMasterClient)
                {
                    Save.CurPhotonView.RPC(nameof(PrefabPlayer.instance.GiveMap), RpcTarget.Others);
                    //맵을 요청
                }
            }
        }
    }
    void IPunOwnershipCallbacks.OnOwnershipTransferFailed(PhotonView targetView, Player senderOfFailedRequest) { }
    void IPunOwnershipCallbacks.OnOwnershipRequest(PhotonView targetView, Player requestingPlayer) { }
    void IPunOwnershipCallbacks.OnOwnershipTransfered(PhotonView targetView, Player previousOwner)
    {
        if (targetView == GameManager.Instance.ViewList[2] && GameManager.Instance.ViewList[2].IsMine)
        {
            prefabChoiceMap.StartTimer();
        }
        //내턴이면 타이머 시작
    }


    #region 포톤 콜백
    public override void OnPlayerLeftRoom(Player otherPlayer)
    {
        if(GameManager.Instance.ViewList[2].IsMine)
        {
            for(int i = 0; i < GameStart.Instance.PlayerTrunList.Count; i++)
            {
                if (otherPlayer == GameStart.Instance.PlayerTrunList[i])
                {
                    int index = i + 1;

                    if (index == GameStart.Instance.PlayerTrunList.Count)
                    {
                        index = 0;
                    }

                    if (GameStart.Instance.PlayerTrunList[index] == PhotonNetwork.LocalPlayer)
                    //내턴이면 타이머 시작
                    {
                        prefabChoiceMap.StartTimer();
                    }
                    else
                    //다음 턴에게 넘김
                    {
                        GameManager.Instance.ViewList[2].TransferOwnership(GameStart.Instance.PlayerTrunList[index]);
                    }
                }
            }
        }
        
        if (PhotonNetwork.IsMasterClient)
        {
            if (Save.CurPhotonView.IsMine)
            {
                Save.CurPhotonView.RPC(nameof(PrefabPlayer.instance.DeleteMap), RpcTarget.All, otherPlayer.NickName);
            }
        }
        //없어진 포톤뷰 찾아서 해쉬 갱신
    }
    public override void OnPlayerEnteredRoom(Player newPlayer)
    {
        if (PhotonNetwork.IsMasterClient)
        {
            Save.CurPhotonView.RPC(nameof(PrefabPlayer.instance.GiveMap), RpcTarget.Others);
            //맵을 요청
        }
    }
    #endregion


    #region 사용자 함수
    public void MakeMapList(string name, int viewID)
    {
        if (mapHash.ContainsKey(name) == false)
        {
            mapHash.Add(name, viewID);
        }
        //새로 받은 맵 추가

        if (Save.CurPhotonView.IsMine)
        {
            List<int> tmpList = new List<int>();
            foreach(PhotonView tmpView in GameManager.Instance.ViewList)
            {
                tmpList.Add(tmpView.ViewID);
            }
            tmpList.RemoveAt(0);
            //맨 앞의 방장 맵은 제외

            Save.CurPhotonView.RPC(nameof(PrefabPlayer.instance.SetView), RpcTarget.Others, (object)tmpList.ToArray());
            //PhotonViewList 전달
        }
        //viewList를 만들수 있도록 함

        string[] strArr = new string[mapHash.Count];
        int[] intArr = new int[mapHash.Count];

        mapHash.Keys.CopyTo(strArr, 0);
        mapHash.Values.CopyTo(intArr, 0);

        Save.CurPhotonView.RPC(nameof(PrefabPlayer.instance.SetMap), RpcTarget.Others, strArr, intArr);
        //추가된 플레이어 포톤맵 공유
        SetOtherPanel();
        //패널 맵 세팅
    }
    public void SetViewList(object viewidArr)
    {
        int[] tmpArray = viewidArr as int[];

        foreach(int tmp in tmpArray)
        {
            GameManager.Instance.ViewList.Add(PhotonView.Find(tmp));
            //리스트에 추가
        }

        myBingoPanel = GameManager.Instance.ViewList[1].gameObject;
        prefabPanel = myBingoPanel.GetComponent<PrefabBingoPanel>();
        //패널세팅
    }
    public void SetMapHash(object nameArr, object viewidArr)
    {
        string[] tmpNameArr = nameArr as string[];
        int[] tmpViewArr = viewidArr as int[];

        for (int i = 0; i < tmpNameArr.Length; i++)
        {
            if (mapHash.ContainsKey(tmpNameArr[i]) == false)
            {
                mapHash.Add(tmpNameArr[i], tmpViewArr[i]);
            }
            //테이블에 없을때만 추가
        }

        SetOtherPanel();
        //패널 맵 세팅
    }
    public void DeleteMapHash(string name)
    {
        prefabPanel.PanelMapHash.Remove(name);
        //패널판의 맵 제거
        mapHash.Remove(name);
        //나간 플레이어의 맵 제거
        prefabPanel.SetButton();
        //패널 버튼 업데이트
    }
    public void SetOtherPanel()
    {
        foreach (DictionaryEntry entry in mapHash)
        {
            if (!PhotonView.Find((int)entry.Value).IsMine)
            //내께 아니면 모두 패널 안쪽으로
            {
                PhotonView.Find((int)entry.Value).transform.SetParent(myBingoPanel.transform.GetChild(0));
                PrefabBingoMap prefabBingoMap = PhotonView.Find((int)entry.Value).GetComponent<PrefabBingoMap>();
                prefabBingoMap.SetScale();
                //위치옮기기

                if (!prefabPanel.PanelMapHash.ContainsKey(entry.Key))
                {
                    prefabPanel.PanelMapHash.Add(entry.Key, PhotonView.Find((int)entry.Value).gameObject);
                }
            }
        }

        prefabPanel.SetButton();
        //버튼에 닉네임 표기
        prefabPanel.SetClose();
        //패널 맵 전부 끄기
    }
    public void StartBingo()
    {
        if (PhotonNetwork.IsMasterClient)
        {
            Save.CurPhotonView.RPC(nameof(PrefabPlayer.instance.MakeBingoMap), RpcTarget.All);
            //빙고판 채우기
        }
    }
    #endregion


    #region 버튼 함수
    public void OnClickBingo()
    {
        if (BingoCheck.Instance.BingoCounter == 5 && Save.CurPhotonView.IsMine)
        {
            Save.CurPhotonView.RPC(nameof(PrefabPlayer.Instance.SetEndGame), RpcTarget.All);
            //빙고 5줄 완성 종료
        }
    }
    #endregion
}
