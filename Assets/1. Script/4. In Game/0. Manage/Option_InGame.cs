using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEngine.UI;

public class Option_InGame : MonoBehaviour
{
    public GameObject setMenu;
    public GameObject playerInfoMenu;
    public GameObject roomInfoMenu;
    public GameObject chatMenu;
    public Slider bgmSlider;

    bool isOpen;
    bool isProccessing;


    void Start()
    {
        isOpen = false;
        isProccessing = false;
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
    public void OnClickPlayerInfo()
    {
        if (!isProccessing)
        {
            if (Chat.Instance.IsChatOpen)
            {
                OnClickChat();
            }
            else
            {
                RectTransform rect = playerInfoMenu.GetComponent<RectTransform>();
                float des;

                if (!isOpen)
                {
                    isOpen = true;
                    isProccessing = true;

                    roomInfoMenu.SetActive(false);

                    des = rect.anchoredPosition.y - rect.sizeDelta.y;

                    StartCoroutine(OpenTab(rect, des));
                }
                else
                {
                    isProccessing = true;

                    des = rect.anchoredPosition.y + rect.sizeDelta.y;

                    StartCoroutine(CloseTab(rect, des, roomInfoMenu));
                }
            }
        }
    }
    public void OnClickRoomInfo()
    {
        if (!isProccessing)
        {
            if(Chat.Instance.IsChatOpen)
            {
                OnClickChat();
            }
            else
            {
                RectTransform rect = roomInfoMenu.GetComponent<RectTransform>();
                float des;

                if (!isOpen)
                {
                    isOpen = true;
                    isProccessing = true;

                    playerInfoMenu.SetActive(false);

                    des = rect.anchoredPosition.y - rect.sizeDelta.y;

                    StartCoroutine(OpenTab(rect, des));
                }
                else
                {
                    isProccessing = true;

                    des = rect.anchoredPosition.y + rect.sizeDelta.y;

                    StartCoroutine(CloseTab(rect, des, playerInfoMenu));
                }
            }
        }
    }
    public void OnClickChat()
    {
        if (!isProccessing)
        {
            RectTransform rect = chatMenu.GetComponent<RectTransform>();
            float des;

            if (!isOpen)
            {
                Chat.Instance.IsChatOpen = true;
                isOpen = true;
                isProccessing = true;

                des = rect.anchoredPosition.y + rect.sizeDelta.y;

                StartCoroutine(OpenTab(rect, des));
            }
            else
            {
                isProccessing = true;

                des = rect.anchoredPosition.y - rect.sizeDelta.y;

                StartCoroutine(CloseTab(rect, des, null));

                Chat.Instance.IsChatOpen = false;
            }
        }
    }
    public void OnClickButtonSound()
    {
        Audio.PlayClickSound();
    }
    #endregion


    #region 코루틴
    IEnumerator OpenTab(RectTransform curRect, float desSize)
    {
        /*
        while (curRect.anchoredPosition.y != desSize)
        {
            curRect.anchoredPosition3D = Vector3.MoveTowards(curRect.anchoredPosition3D, new Vector3(curRect.anchoredPosition.x, desSize, 0), Time.deltaTime);
            
            if (Mathf.Abs(curRect.anchoredPosition.y - desSize) < 0.1f)
            {
                curRect.anchoredPosition3D = new Vector3(curRect.anchoredPosition.x, desSize, 0);
            }
        }
        */

        curRect.DOAnchorPos3D(new Vector3(curRect.anchoredPosition.x, desSize, 0), 0.5f);

        yield return null;

        isProccessing = false;
    }
    IEnumerator CloseTab(RectTransform curRect, float desSize, GameObject curObject)
    {
        /*
        while (curRect.anchoredPosition.y != desSize)
        {
            curRect.anchoredPosition3D = Vector3.MoveTowards(curRect.anchoredPosition3D, new Vector3(curRect.anchoredPosition.x, desSize, 0), Time.deltaTime);

            if(Mathf.Abs(curRect.anchoredPosition.y - desSize) < 0.1f)
            {
                curRect.anchoredPosition3D = new Vector3(curRect.anchoredPosition.x, desSize, 0);
            }
        }
        */

        Tweener tweener;
        tweener = curRect.DOAnchorPos3D(new Vector3(curRect.anchoredPosition.x, desSize, 0), 0.5f);

        tweener.OnComplete(() => {
            curObject.SetActive(true); ;
        });

        /*
        if (curRect.anchoredPosition3D == new Vector3(curRect.anchoredPosition.x, desSize, 0) && curObject != null)
        {
            curObject.SetActive(true);
        }
        */


        isOpen = false;
        isProccessing = false;

        yield return null;
    }
    #endregion
}
