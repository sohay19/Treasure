using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Option_Lobby : MonoBehaviour
{
    public Slider bgmSlider;
    public Text txtPage;
    public GameObject[] pageObjectArray;

    int curPage = 1;
    int totalPage = 2;


    #region OnChanged
    public void OnChangedVoulme(float voulme)
    {
        Audio.SetVoulme(voulme);
    }
    public void OnTurnOnEffect()
    {
        Audio.TurnOnEffect();
    }
    public void OnTurnOffEffect()
    {
        Audio.TurnOffEffect();
    }
    #endregion


    #region 버튼 이벤트 함수
    public void OnClickGetVoulme()
    {
        bgmSlider.value = Audio.GetVoulme();
    }
    public void OnClickCoin()
    {
        PhotonNetwork.LoadLevel("3.AR");
    }
    public void OnClickLogout()
    {
        PhotonNetwork.Disconnect();
    }
    public void OnClickExit()
    {
        Save.Instance.SavePlayerInfoToPlayfab();
        Save.Instance.IsQuit = true;
    }
    public void OnClickButtonSound()
    {
        Audio.PlayClickSound();
    }
    #endregion


    #region Help Tab
    public void OnClickPrevPage()
    {
        if(curPage > 1)
        {
            pageObjectArray[curPage - 1].SetActive(false);

            curPage--;
            txtPage.text = curPage.ToString() + " / " + totalPage.ToString();

            pageObjectArray[curPage - 1].SetActive(true);
        }
    }
    public void OnClickNextPage()
    {
        if (curPage < totalPage)
        {
            pageObjectArray[curPage - 1].SetActive(false);

            curPage++;
            txtPage.text = curPage.ToString() + " / " + totalPage.ToString();

            pageObjectArray[curPage - 1].SetActive(true);
        }
    }
    #endregion
}
