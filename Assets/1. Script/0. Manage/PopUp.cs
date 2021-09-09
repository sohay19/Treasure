using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PopUp : MonoBehaviour
{
    public static PopUp instance;
    GameObject prePopUp;
    IEnumerator showmsgCoroutine;


    public static PopUp Instance
    {
        get
        {
            return instance;
        }
    }
    void Awake()
    {
        instance = this;
    }



    public void ShowTabClose(GameObject popup, string msg)
    {
        if(showmsgCoroutine != null)
        {
            Debug.Log("프로세스 팝업 스탑");
            StopPopUp();
        }
        Text txt = popup.transform.GetChild(1).GetComponent<Text>();
        txt.text = msg;

        popup.SetActive(true);
    }

    public void ShowTabProcess(GameObject popup, string msg, float time)
    {
        showmsgCoroutine = ShowMSG(popup, msg, time);

        StartCoroutine(showmsgCoroutine);
    }

    IEnumerator ShowMSG(GameObject popup, string msg, float time)
    {
        prePopUp = popup;

        Text txt = prePopUp.transform.GetChild(1).GetComponent<Text>();
        txt.text = msg;

        popup.SetActive(true);

        yield return new WaitForSeconds(time);

        popup.SetActive(false);
    }
    public void StopPopUp()
    {
        prePopUp.SetActive(false);
        StopCoroutine(showmsgCoroutine);
    }
}

