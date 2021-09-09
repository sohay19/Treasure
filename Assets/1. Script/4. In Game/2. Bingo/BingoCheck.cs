using System.Collections;
using System.Collections.Generic;
using Photon.Pun;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class BingoCheck : MonoBehaviour
{
    public static BingoCheck instance;
    public Canvas canvas;

    GraphicRaycaster ray;
    PointerEventData eventData;

    bool isClick;
    int bingoCounter;


    #region 프로퍼티
    public static BingoCheck Instance
    {
        get
        {
            return instance;
        }
    }
    public int BingoCounter
    {
        get
        {
            return bingoCounter;
        }
    }
    #endregion


    private void Awake()
    {
        instance = this;
    }
    void Start()
    {
        ray = canvas.GetComponent<GraphicRaycaster>();
        eventData = new PointerEventData(null);
        bingoCounter = 0;
        isClick = false;
    }
    void Update()
    {

        if (GameManager.Instance.ViewList.Count > 2)
        {
            if(Input.touchCount > 0)
            {
                if (Input.GetTouch(0).phase == TouchPhase.Began)
                {
                    eventData.position = Input.mousePosition;
                //마우스 포지션을 대입

                List<RaycastResult> result = new List<RaycastResult>();
                ray.Raycast(eventData, result);
                //레이를 이용하여 eventData에 저장

                if (result.Count > 0)
                {
                    if (result[0].gameObject.layer == LayerMask.NameToLayer("Bingo"))
                    {
                        int index = BingoRun.Instance.PrefabMap.CellList.FindIndex(x => x.Name == result[0].gameObject.name);
                        //해당 셀 찾기
                        int num = BingoRun.Instance.PrefabMap.CellList[index].Num;
                        //해당 번호 찾기

                        if (BingoRun.Instance.PrefabMap.CellList[index].Check != 1)
                        //내 맵에서 눌리지 않은 번호
                        {
                            if (GameManager.Instance.ViewList[2].IsMine && !isClick && !BingoRun.Instance.PrefabChoiceMap.IsChoice)
                            //내턴일때
                            {
                                CheckMap(result[0].gameObject.name, index, num);

                                if (BingoRun.Instance.PrefabChoiceMap.ChoiceAllNumList.FindIndex(x => x == num) == -1)
                                //선택되지 않은 번호만 리스트 초이스맵추가
                                {
                                    isClick = true;

                                    CheckChoiceMap(num);
                                    //ChoiceMap 체크
                                }
                            }
                            else
                            //내턴아닐때
                            {
                                if (BingoRun.Instance.PrefabChoiceMap.ChoiceAllNumList.FindIndex(x => x == num) != -1)
                                //이미 선택된 번호여야만 눌림
                                {
                                    CheckMap(result[0].gameObject.name, index, num);
                                }
                            }
                        }
                    }
                }
                }
            }
        }

        /*
        if (PhotonNetwork.InRoom && PhotonNetwork.CurrentRoom.CustomProperties[enumType.roomKey.isPlaying.ToString()].ToString() == true.ToString())
        {
            if (Input.GetMouseButtonDown(0))
            {
                eventData.position = Input.mousePosition;
                //마우스 포지션을 대입

                List<RaycastResult> result = new List<RaycastResult>();
                ray.Raycast(eventData, result);
                //레이를 이용하여 eventData에 저장

                if (result.Count > 0)
                {
                    if (result[0].gameObject.layer == LayerMask.NameToLayer("Bingo"))
                    {
                        int index = BingoRun.Instance.PrefabMap.CellList.FindIndex(x => x.Name == result[0].gameObject.name);
                        //해당 셀 찾기
                        int num = BingoRun.Instance.PrefabMap.CellList[index].Num;
                        //해당 번호 찾기

                        if (BingoRun.Instance.PrefabMap.CellList[index].Check != 1)
                        //내 맵에서 눌리지 않은 번호
                        {
                            if (GameManager.Instance.ViewList[2].IsMine && !isClick && !BingoRun.Instance.PrefabChoiceMap.IsChoice)
                            //내턴일때
                            {
                                CheckMap(result[0].gameObject.name, index, num);

                                if (BingoRun.Instance.PrefabChoiceMap.ChoiceAllNumList.FindIndex(x => x == num) == -1)
                                //선택되지 않은 번호만 리스트 초이스맵추가
                                {
                                    isClick = true;

                                    CheckChoiceMap(num);
                                    //ChoiceMap 체크
                                }
                            }
                            else
                            //내턴아닐때
                            {
                                if (BingoRun.Instance.PrefabChoiceMap.ChoiceAllNumList.FindIndex(x => x == num) != -1)
                                //이미 선택된 번호여야만 눌림
                                {
                                    CheckMap(result[0].gameObject.name, index, num);
                                }
                            }
                        }
                    }
                }
            }
        }
        */

    }



    void CheckMap(string name, int index, int num)
    {
        BingoRun.Instance.PrefabMap.CellList[index].CheckUp();
        BingoRun.Instance.PrefabMap.CellList[index].Image.color = Color.gray;

        CheckBingo(name, index, num);
        //빙고 확인
    }
    void CheckBingo(string name, int index, int num)
    {
        List<List<BingoClass>> bingoLine = BingoRun.Instance.PrefabMap.pointList(name);
        foreach (List<BingoClass> list in bingoLine)
        {
            int count = 0;

            foreach (BingoClass bingo in list)
            {
                count += bingo.Check;
            }

            if (count == 7)
            {
                int score = int.Parse(GameEnd.Instance.PlayerScoreHash[PhotonNetwork.LocalPlayer.NickName].ToString());
                GameEnd.Instance.PlayerScoreHash[PhotonNetwork.LocalPlayer.NickName] = score + 20;
                //스코어 증가

                if (Save.CurPhotonView.IsMine)
                {
                    Save.CurPhotonView.RPC(nameof(PrefabPlayer.instance.OtherScoreUp), RpcTarget.Others, PhotonNetwork.LocalPlayer.NickName);
                }
                //다른 플레이어에게 스코어 전달

                bingoCounter++;

                Audio.PlayCorrectSound();

                BingoRun.Instance.PrefabMap.InfoBingoCount(bingoCounter);
                //빙고알림

                foreach (BingoClass completeBingo in list)
                {
                    int bingoIndex = BingoRun.Instance.PrefabMap.CellList.FindIndex(x => x.Name == completeBingo.Name);

                    completeBingo.Image.color = Color.red;

                    if (Save.CurPhotonView.IsMine)
                    {
                        Save.CurPhotonView.RPC(nameof(PrefabPlayer.instance.CheckBingoNum), RpcTarget.Others, PhotonNetwork.LocalPlayer.NickName, bingoIndex, completeBingo.Num);
                    }
                    //다른 플레이어에게 빙고줄 전달
                }
                //빙고가 된 줄은 색칠
            }
            else
            {
                PassMyMap(index, num);
                //내맵상태 넘기기
            }
            count = 0;
        }
    }
    public void CheckChoiceMap(int num)
    {
        BingoRun.Instance.PrefabChoiceMap.ChoiceAllNumList.Add(num);
        BingoRun.Instance.PrefabChoiceMap.AddChoiceNum(num);
        //초이스 맵 채우기

        if (GameManager.Instance.ViewList[2].IsMine)
        {
            Save.CurPhotonView.RPC(nameof(PrefabPlayer.instance.PassChoiceNum), RpcTarget.Others, num);
            BingoRun.Instance.PrefabChoiceMap.IsChoice = true;

            isClick = false;
        }
    }
    void PassMyMap(int index, int num)
    {
        if (Save.CurPhotonView.IsMine)
        {
            Save.CurPhotonView.RPC(nameof(PrefabPlayer.instance.CheckNum), RpcTarget.Others, PhotonNetwork.LocalPlayer.NickName, index, num);
        }
        //다른 플레이어에게 전달
    }
    public void CheckOtherMap(string name, int index, int num)
    {
        GameObject otherMap = PhotonView.Find((int)BingoRun.Instance.MapHash[name]).gameObject;
        PrefabBingoMap tmpMap = otherMap.GetComponent<PrefabBingoMap>();

        tmpMap.content.transform.GetChild(index).GetComponentInChildren<Image>().color = Color.gray;
        tmpMap.content.transform.GetChild(index).GetComponentInChildren<Text>().text = num.ToString();
        //상대 빙고판 표기
    }
    public void CheckBingoMap(string name, int index, int num)
    {
        GameObject otherMap = PhotonView.Find((int)BingoRun.Instance.MapHash[name]).gameObject;
        PrefabBingoMap tmpMap = otherMap.GetComponent<PrefabBingoMap>();

        tmpMap.content.transform.GetChild(index).GetComponentInChildren<Image>().color = Color.red;
        tmpMap.content.transform.GetChild(index).GetComponentInChildren<Text>().text = num.ToString();
        //상대 빙고판 표기
    }
    public void ScoreUp(string name)
    {
        int score = int.Parse(GameEnd.Instance.PlayerScoreHash[name].ToString());
        GameEnd.Instance.PlayerScoreHash[name] = score + 20;
        //해당 플레이어의 스코어 증가
    }
}
