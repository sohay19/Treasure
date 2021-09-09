using Photon.Pun;
using Photon.Realtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PrefabBingoPanel : MonoBehaviourPunCallbacks
{
    public List<Button> buttonList;
    public List<Text> textList;

    RectTransform rect;
    Hashtable panelMapHash = new Hashtable();


    #region 프로퍼티
    public Hashtable PanelMapHash
    {
        get
        {
            return panelMapHash;
        }
        set
        {
            panelMapHash = value;
        }
    }
    #endregion


    void Start()
    {
        GameObject tmpObject = GameObject.Find("Canvas").transform.Find("Panel_Game").gameObject;
        transform.SetParent(tmpObject.transform.GetChild(0));
        //Panel_Game의 자식인 Tab_Bingo로가기

        rect = transform.GetComponent<RectTransform>();
        rect.localScale = new Vector3(1, 1, 1);
        rect.anchoredPosition3D = new Vector3(rect.anchoredPosition3D.x, rect.anchoredPosition3D.y, 0);
    }


    #region 사용자 함수
    public void SetButton()
    {
        List<string> tmpList = new List<string>();
        if(panelMapHash.Count > 0)
        {
            foreach (DictionaryEntry entry in panelMapHash)
            {
                tmpList.Add(entry.Key.ToString());
            }
        }
        
        for (int i = 0; i < textList.Count; i++)
        {
            if (i < panelMapHash.Count)
            {
                textList[i].text = tmpList[i];
            }
            else
            {
                textList[i].text = "Empty";
            }
        }
    }
    public void SetClose()
    {
        foreach(DictionaryEntry entry in panelMapHash)
        {
            GameObject tmpObject = (GameObject)entry.Value;
            tmpObject.SetActive(false);
        }
    }
    #endregion


    #region 버튼 함수
    public void OnClickPlayer1()
    {
        foreach (DictionaryEntry entry in panelMapHash)
        {
            if(textList[0].text == entry.Key.ToString())
            {
                GameObject tmpObject = (GameObject)entry.Value;
                tmpObject.SetActive(true);
            }
            else
            {
                GameObject tmpObject = (GameObject)entry.Value;
                tmpObject.SetActive(false);
            }
        }
    }
    public void OnClickPlayer2()
    {
        foreach (DictionaryEntry entry in panelMapHash)
        {
            if (textList[1].text == entry.Key.ToString())
            {
                GameObject tmpObject = (GameObject)entry.Value;
                tmpObject.SetActive(true);
            }
            else
            {
                GameObject tmpObject = (GameObject)entry.Value;
                tmpObject.SetActive(false);
            }
        }
    }
    public void OnClickPlayer3()
    {
        foreach (DictionaryEntry entry in panelMapHash)
        {
            if (textList[2].text == entry.Key.ToString())
            {
                GameObject tmpObject = (GameObject)entry.Value;
                tmpObject.SetActive(true);
            }
            else
            {
                GameObject tmpObject = (GameObject)entry.Value;
                tmpObject.SetActive(false);
            }
        }
    }
    #endregion
}
