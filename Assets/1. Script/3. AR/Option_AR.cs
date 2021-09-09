using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Option_AR : MonoBehaviour
{
    public Slider bgmSlider;
    bool isMain;


    private void Start()
    {
        isMain = true;
    }


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
    public void OnClickFind()
    {
        isMain = false;
        Map.Instance.MapMode = "Find";
    }
    public void OnClickSwap()
    {
        isMain = false;
        Map.Instance.MapMode = "Swap";
    }
    public void OnClickBack()
    {
        if (isMain)
        {
            PhotonNetwork.LoadLevel("2.Lobby");
        }
        else
        {
            PhotonNetwork.LoadLevel("3.AR");
        }
    }
    public void OnClickButtonSound()
    {
        Audio.PlayClickSound();
    }
    #endregion
}
