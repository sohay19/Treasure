using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class PrefabBingoMap : MonoBehaviour
{
    public static PrefabBingoMap instance;

    public GameObject content;
    public GameObject popupInfo;
    public Text txtBingoCount;

    List<BingoClass> cellList = new List<BingoClass>();
    List<List<BingoClass>> lineAllList = new List<List<BingoClass>>();
    //빙고가 가능한 줄(총 16줄)
    //key = 객체 이름
    //value = List<BingoClass>
    Hashtable hashPointLine = new Hashtable();
    //key = 객체 이름
    //value = 해당 객체가 포함된 빙고가 가능한 줄의 인덱스번호 List
    RectTransform rect;


    #region 프로퍼티
    public List<BingoClass> CellList
    {
        get
        {
            return cellList;
        }
    }
    #endregion


    private void Awake()
    {
        instance = this;

        GameObject tmpObject = GameObject.Find("Canvas").transform.Find("Panel_Game").gameObject;
        transform.SetParent(tmpObject.transform.GetChild(0));
    }
    void Start()
    {
        rect = transform.GetComponent<RectTransform>();
        rect.localScale = new Vector3(1, 1, 1);
        rect.anchoredPosition3D = new Vector3(rect.anchoredPosition3D.x, rect.anchoredPosition3D.y, 0);
    }


    #region
    public void PassMyMap()
    {
        if (Save.CurPhotonView.IsMine)
        {
            Save.CurPhotonView.RPC(nameof(PrefabPlayer.instance.PassMap), RpcTarget.MasterClient, PhotonNetwork.LocalPlayer.NickName, gameObject.GetPhotonView().ViewID);
            //내 빙고맵의 포톤뷰 넘기기
        }
    }
    public void SetScale()
    {
        rect = transform.GetComponent<RectTransform>();
        rect.localScale = new Vector3(1, 1, 1);
    }
    public void MakeBingo()
    {
        SetMap();
        //숫자세팅
        SetBingo();
        //빙고판 세팅
        FindPoint();
        //빙고 가능 줄 및 포인트확인

        if (GameManager.Instance.ViewList[2].IsMine)
        {
            BingoRun.Instance.PrefabChoiceMap.StartTimer();
        }
        //내턴이면 타이머 시작
    }
    public void InfoBingoCount(int count)
    {
        txtBingoCount.text = count + "번째 빙고입니다!";

        StartCoroutine(ShowMassage());
    }
    IEnumerator ShowMassage()
    {
        popupInfo.SetActive(true);

        yield return new WaitForSeconds(1.0f);

        popupInfo.SetActive(false);
    }
    #endregion


    #region 사용자 함수
    public List<List<BingoClass>> pointList(string name)
    {
        List<List<BingoClass>> bingoList = new List<List<BingoClass>>();
        //선택된 숫자가 포함된 빙고줄 모음
        List<int> tmpList = hashPointLine[name] as List<int>;
        //선택된 숫자가 포함된 인덱스 리스트

        foreach (int index in tmpList)
        {
            bingoList.Add(lineAllList[index]);
        }

        return bingoList;
    }
    void FindPoint()
    {
        List<int> tmpList = new List<int>();

        for (int i = 0; i < cellList.Count; i++)
        {
            string nameImg = cellList[i].Name;

            for (int j = 0; j < lineAllList.Count; j++)
            {
                foreach (BingoClass bingo in lineAllList[j])
                {
                    if (bingo.Name == nameImg)
                    {
                        tmpList.Add(j);
                    }
                }
            }

            hashPointLine.Add(nameImg, tmpList.ToList());
            //한 객체의 빙고줄 파악 완료
            tmpList.Clear();
            //임시 리스트 비우기
        }
    }
    void SetBingo()
    {
        List<BingoClass> line = new List<BingoClass>();
        //빙고가 되는 한 줄(BingoClass의 집합)

        for (int i = 0; i < content.transform.childCount; i++)
        {
            line.Add(cellList[i]);

            if ((i + 1) % 7 == 0)
            {
                lineAllList.Add(line.ToList());
                //한 줄 완성 후 저장
                line.Clear();
                //비우기
            }
        }
        //가로 줄

        for (int i = 0; i < content.transform.childCount; i += 7)
        {
            line.Add(cellList[i]);

            if (i >= 42 && i <= 48)
            {
                lineAllList.Add(line.ToList());
                //한 줄 완성 후 저장
                line.Clear();
                //비우기

                if (i != 48)
                {
                    i -= 48;
                    //다음 i로 세팅
                }
            }
        }
        //세로 줄

        for (int i = 0; i < content.transform.childCount; i += 8)
        {
            line.Add(cellList[i]);
        }
        lineAllList.Add(line.ToList());
        //한 줄 완성 후 저장
        line.Clear();
        //비우기

        for (int i = 6; i < content.transform.childCount - 6; i += 6)
        {
            line.Add(cellList[i]);
        }
        lineAllList.Add(line.ToList());
        //한 줄 완성 후 저장
        line.Clear();
        //비우기

        //대각선 2줄
    }
    void SetMap()
    {
        List<int> tmpList = new List<int>();

        int randNum = Random.Range(1, 51);
        tmpList.Add(randNum);
        //처음 값 넣기

        while (tmpList.Count < 49)
        {
            randNum = Random.Range(1, 51);

            if (tmpList.FindIndex(x => x == randNum) == -1)
            {
                tmpList.Add(randNum);
            }
        }
        //49개의 랜덤 숫자 넣기

        int random1, random2;
        int tmp;

        for (int i = 0; i < tmpList.Count; ++i)
        {
            random1 = Random.Range(0, tmpList.Count);
            random2 = Random.Range(0, tmpList.Count);

            tmp = tmpList[random1];
            tmpList[random1] = tmpList[random2];
            tmpList[random2] = tmp;
        }
        //ShuffleList()

        for (int i = 0; i < content.transform.childCount; i++)
        {
            Image tmpImg = content.transform.GetChild(i).GetComponent<Image>();
            Text txt = tmpImg.GetComponentInChildren<Text>();

            txt.text = tmpList[0].ToString();
            tmpList.RemoveAt(0);
            //숫자표기

            cellList.Add(new BingoClass(tmpImg.name, tmpImg, int.Parse(txt.text)));
            //전체 칸에 대한 정보 생성
        }
    }
    #endregion
}
