using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PopUp : MonoBehaviour
{
    public static PopUp instance;
    GameObject prePopUp;
    Coroutine showmsgCoroutine;


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
            StopPopUp();
        }
        Text txt = popup.transform.GetChild(1).GetComponent<Text>();
        txt.text = msg;

        popup.SetActive(true);
    }

    public void ShowTabProcess(GameObject popup, string msg, float time)
    {
        showmsgCoroutine = StartCoroutine(ShowMSG(popup, msg, time));
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

