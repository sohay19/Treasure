using Photon.Pun;
using Photon.Realtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PrefabBingoChoiceMap : MonoBehaviour
{
    public List<Text> curNumTextList;
    public Image firstImage;
    public Text txtTime;

    RectTransform rect;
    List<int> choiceAllNumList;

    Coroutine timerCoroutine;

    bool isChoice;
    int curTime = 20;
    //타이머


    #region 프로퍼티
    public List<int> ChoiceAllNumList
    {
        get
        {
            return choiceAllNumList;
        }
    }
    public Coroutine TimerCoroutine
    {
        get
        {
            return timerCoroutine;
        }
    }
    public bool IsChoice
    {
        set
        {
            isChoice = value;
        }
        get
        {
            return isChoice;
        }
    }
    #endregion


    void Start()
    {
        isChoice = false;
        choiceAllNumList = new List<int>();
        timerCoroutine = null;

        GameObject tmpObject = GameObject.Find("Canvas").transform.Find("Panel_Game").gameObject;
        transform.SetParent(tmpObject.transform.GetChild(0));
        transform.localScale = new Vector3(1, 1, 1);

        rect = transform.GetComponent<RectTransform>();
        rect.localScale = new Vector3(1, 1, 1);
        rect.anchoredPosition3D = new Vector3(rect.anchoredPosition3D.x, rect.anchoredPosition3D.y, 0);

        transform.SetSiblingIndex(0);
    }


    #region 사용자함수
    public void AddChoiceNum(int num)
    {
        for(int i = (curNumTextList.Count-1); i >= 0; i--)
        {
            if (i == 0)
            {
                curNumTextList[i].text = num.ToString();
            }
            else
            {
                curNumTextList[i].text = curNumTextList[i-1].text;
                //앞쪽의 값을 가져오기
            }
        }
        StartCoroutine(pointImage());
    }
    IEnumerator pointImage()
    {
        firstImage.color = Color.magenta;

        yield return new WaitForSeconds(0.3f);

        firstImage.color = new Color32(255,244,107, 220);

        yield return new WaitForSeconds(0.3f);

        firstImage.color = Color.magenta;

        yield return new WaitForSeconds(0.3f);

        firstImage.color = new Color32(255, 244, 107, 220);
    }
    IEnumerator Timer()
    {
        curTime = 20;

        Audio.PlayTimerSound();
        while (curTime >= 0)
        {
            txtTime.text = curTime.ToString();

            if(isChoice)
            {
                break;
            }
            if (curTime == 5)
            {
                Audio.StopTimerSound();
                Audio.PlayTimerSpeedSound();
            }

            yield return new WaitForSecondsRealtime(1.0f);

            curTime--;
        }
        Audio.StopTimerSound();
        Audio.StopTimerSpeedSound();

        curTime = 20;
        txtTime.text = curTime.ToString();

        isChoice = false;

        foreach (Player curPlayer in PhotonNetwork.PlayerList)
        {
            if(curPlayer.NickName == PhotonNetwork.LocalPlayer.NickName)
            {
                GameManager.Instance.ViewList[2].TransferOwnership(curPlayer.GetNext());
            }
        }
        //턴넘기기

        timerCoroutine = null;
    }
    public void StartTimer()
    {
        timerCoroutine = StartCoroutine(Timer());
    }
    public void StopTimer()
    {
        if (timerCoroutine != null)
        {
            StopCoroutine(timerCoroutine);

            Audio.StopTimerSound();
            Audio.StopTimerSpeedSound();

            curTime = 20;
            txtTime.text = curTime.ToString();
        }

        if(GameEnd.Instance.IsEnd)
        {
            PhotonNetwork.RemoveCallbackTarget(this);
        }
    }
    #endregion
}
