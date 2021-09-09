using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class Controll : MonoBehaviour
{
    public static Controll instance;

    public Camera camera;
    public ARSessionOrigin sessionOrigin;
    public GameObject tabProcessPopUp;
    public GameObject prefabArrow;

    GameObject targetObject;
    GameObject arrowObject;

    Ray ray;
    RaycastHit hit;


    #region 프로퍼티
    public static Controll Instance
    {
        get
        {
            return instance;
        }
    }
    public GameObject TargetObject
    {
        get
        {
            return targetObject;
        }
        set
        {
            targetObject = value;
        }
    }
    public GameObject ArrowObject
    {
        get
        {
            return arrowObject;
        }
        set
        {
            arrowObject = value;
        }
    }
    #endregion


    private void Awake()
    {
        instance = this;
    }
    void Update()
    {
        if (Input.touchCount > 0)
        //Input.touchCount = 터치한 손가락 수
        {
            if (Input.GetTouch(0).phase == TouchPhase.Began)
            //터치한순간
            {
                if (!EventSystem.current.IsPointerOverGameObject(0))
                //닿은 부분이 UI가 아님
                {
                    ray = camera.ScreenPointToRay(Input.GetTouch(0).position);

                    if (ARGameManager.Instance.IsFindStart)
                    {
                        if (Physics.Raycast(ray, out hit, LayerMask.NameToLayer("Find")))
                        {
                            ParticleSystem particle = hit.transform.GetComponentInChildren<ParticleSystem>();
                            particle.Play();
                            ARGameManager.Instance.ResultFind();
                        }
                        else
                        {
                            ARGameManager.Instance.CheckFind();
                        }
                    }

                    if (Physics.Raycast(ray, out hit) && Map.Instance.IsMade)
                    //ray에 닿은 물체를 감지
                    {
                        if (targetObject == null)
                        {
                            targetObject = hit.transform.gameObject;
                            //타겟

                            arrowObject = Instantiate(prefabArrow, Vector3.zero, prefabArrow.transform.rotation);
                            arrowObject.transform.SetParent(targetObject.transform);
                            arrowObject.transform.localScale = prefabArrow.transform.localScale;
                            arrowObject.transform.localPosition = prefabArrow.transform.localPosition;
                            //생성 후 위치 세팅
                            sessionOrigin.MakeContentAppearAt(targetObject.transform, hit.transform.position, hit.transform.rotation);
                            //타겟 지정

                            if (ARGameManager.Instance.IsSwapEnd)
                            {
                                ARGameManager.Instance.ResultSwap();
                            }
                            //Swap진행시 답확인

                        }
                        else if (targetObject != hit.transform.gameObject)
                        {
                            targetObject = hit.transform.gameObject;
                            //타겟 변경
                            arrowObject.transform.SetParent(targetObject.transform);
                            //위치 조정
                            sessionOrigin.MakeContentAppearAt(targetObject.transform, hit.transform.position, hit.transform.rotation);
                            //타겟 지정
                        }
                        else
                        {
                            Destroy(arrowObject);
                            targetObject = null;
                            //해제
                        }
                    }
                }
            }
        }
    }


    #region OnChanged
    public void OnChangedSize(float scale)
    {
        if (targetObject != null)
        {
            float value = 20 * scale;

            if (value < 0.005f)
            {
                value = 0.1f;
            }
            sessionOrigin.transform.localScale = new Vector3(value, value, value);
        }
        else
        {
            PopUp.instance.ShowTabProcess(tabProcessPopUp, "선택되지 않았습니다", 2.0f);
        }
    }
    #endregion
}
