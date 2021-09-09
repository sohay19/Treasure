using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;


public class PrefabWordQuiz : MonoBehaviour, IPunObservable
{
    public static PrefabWordQuiz instance;

    public Text txtQuiz;
    public Text txtTime;

    Coroutine showNextQuizCoroutine;

    bool isRight;
    int curQuizNum;
    //현재 문제 번호
    int sameQuizNum;
    //같은 문제 카운트
    int curTime = 30;
    //타이머


    #region 프로퍼티
    public int CurQuizNum
    {
        get
        {
            return curQuizNum;
        }
        set
        {
            curQuizNum = value;
        }
    }
    public bool IsRight
    {
        get
        {
            return isRight;
        }
        set
        {
            isRight = value;
        }
    }
    public static PrefabWordQuiz Instance
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
        curQuizNum = 1;
        sameQuizNum = 0;
        isRight = false;

        GameObject tmpObject = GameObject.Find("Canvas").transform.Find("Panel_Game").gameObject;
        transform.SetParent(tmpObject.transform.GetChild(0));
        //Panel_Game의 자식인 Tab_WordQuiz로가기

        RectTransform rect = GetComponent<RectTransform>();
        rect.localScale = new Vector3(1, 1, 1);
        rect.anchoredPosition3D = new Vector3(rect.anchoredPosition.x, rect.anchoredPosition.y, 0);
        //사이즈 조절
    }
    public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {
        if (stream.IsWriting)
        {
            stream.SendNext(txtQuiz.text);
            stream.SendNext(txtTime.text);
        }
        else
        {
            txtQuiz.text = (string)stream.ReceiveNext();
            txtTime.text = (string)stream.ReceiveNext();
        }
    }


    #region 실행 함수
    public void ShowQuiz(int num)
    {
        WordQuizRun.instance.PrefabMap.CheckCell(false);

        curQuizNum = num;

        if (GameManager.Instance.ViewList[0].IsMine)
        {
            Save.CurPhotonView.RPC(nameof(PrefabPlayer.Instance.SetQuizNum), RpcTarget.Others, curQuizNum);
        }

        showNextQuizCoroutine = StartCoroutine(ShowNextQuiz());
    }
    IEnumerator ShowNextQuiz()
    {
        Text txtNum = WordQuizRun.Instance.PrefabMap.TxtQuizNum;
        txtNum.text = curQuizNum + "번째 문제입니다";

        WordQuizRun.Instance.PrefabMap.TabQuizNumInfo.SetActive(true);

        yield return new WaitForSeconds(3.0f);

        WordQuizRun.Instance.PrefabMap.TabQuizNumInfo.SetActive(false);
        //문제 보여주기

        txtQuiz = WordQuizRun.Instance.TabQuiz.transform.GetChild(0).GetComponent<Text>();

        int index = WordQuizRun.Instance.PrefabMap.WordQuizList.FindIndex(x => x.numQuiz == curQuizNum);

        txtQuiz.text = "Quiz. " + curQuizNum + "\n";
        txtQuiz.text += WordQuizRun.Instance.PrefabMap.WordQuizList[index].quizString;

        WordQuizRun.instance.PrefabMap.CheckCell(true);
        //문제와 위치 출력

        curTime = 30;
        txtTime = WordQuizRun.Instance.TabQuiz.transform.GetChild(1).GetComponentInChildren<Text>();

        if (GameManager.Instance.ViewList[0].IsMine)
        {
            Save.CurPhotonView.RPC(nameof(PrefabPlayer.Instance.PlayTimerSound), RpcTarget.All);
        }
        while (curTime >= 0)
        {
            txtTime.text = curTime.ToString();

            if (isRight)
            {
                break;
            }
            if(curTime == 5)
            {
                if (GameManager.Instance.ViewList[0].IsMine)
                {
                    Save.CurPhotonView.RPC(nameof(PrefabPlayer.Instance.PlayTimerSpeedSound), RpcTarget.All);
                }
            }

            yield return new WaitForSecondsRealtime(1.0f);

            curTime--;
        }

        curTime = 0;
        txtTime.text = curTime.ToString();

        if (GameManager.Instance.ViewList[0].IsMine)
        {
            Save.CurPhotonView.RPC(nameof(PrefabPlayer.Instance.StopTimerSound), RpcTarget.All);
        }

        WordQuizRun.instance.PrefabMap.CheckCell(false);

        FindNextQuiz();

        if (PhotonNetwork.IsMasterClient && curQuizNum != 0)
        {
            WordQuizRun.Instance.PrefabQuiz.ShowQuiz(curQuizNum);
        }

        yield return null;
    }
    void FindNextQuiz()
    {
        int preQuizNum = 0;
        int nextQuizNum = 0;
        for (int i = 1; i <= WordQuizRun.Instance.PrefabMap.WordQuizList.Count; i++)
        {
            if (WordQuizRun.Instance.PrefabMap.CorrectQuizHash[i].ToString() == false.ToString() && curQuizNum < i)
            {
                if (nextQuizNum == 0 || nextQuizNum > i)
                {
                    nextQuizNum = i;
                }
            }
            else if (WordQuizRun.Instance.PrefabMap.CorrectQuizHash[i].ToString() == false.ToString() && curQuizNum > i)
            {
                if (preQuizNum == 0 || preQuizNum > i)
                {
                    preQuizNum = i;
                }
            }
        }
        //안푼문제 찾기

        isRight = false;
        //맞춤 상태 리셋
        if (nextQuizNum != 0)
        {
            curQuizNum = nextQuizNum;
        }
        else if (preQuizNum != 0)
        {
            curQuizNum = preQuizNum;
        }
        else
        //더이상 문제 없음
        {
            if (WordQuizRun.Instance.PrefabMap.CorrectQuizHash[curQuizNum].ToString() == false.ToString())
            //현재 문제를 못맞췄을 경우 한번 더
            {
                if (sameQuizNum != curQuizNum)
                {
                    sameQuizNum = curQuizNum;
                }
                else
                //이미 다시 낸 문제였다면 게임 종료
                {
                    if (GameManager.Instance.ViewList[0].IsMine)
                    {
                        Save.CurPhotonView.RPC(nameof(PrefabPlayer.Instance.SetEndGame), RpcTarget.All);
                    }
                }

            }
            else
            //현재 문제도 맞춘 문제임 게임 종료
            {
                if (GameManager.Instance.ViewList[0].IsMine)
                {
                    Save.CurPhotonView.RPC(nameof(PrefabPlayer.Instance.SetEndGame), RpcTarget.All);
                }
            }
        }
    }
    #endregion


    #region 사용자 함수
    public void StopCoroutineFunc()
    {
        if (GameManager.Instance.ViewList[0].IsMine)
        {
            Save.CurPhotonView.RPC(nameof(PrefabPlayer.Instance.StopTimerSound), RpcTarget.All);
        }

        WordQuizRun.instance.PrefabMap.CheckCell(false);

        txtQuiz.text = "";
        txtTime.text = "0";

        if (showNextQuizCoroutine != null)
        {
            StopCoroutine(showNextQuizCoroutine);
        }
    }
    #endregion
}
