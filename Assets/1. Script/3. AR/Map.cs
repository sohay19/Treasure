using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class Map : MonoBehaviour
{
    public static Map instance;

    public ARPlaneManager aRPlaneManager;
    public ARRaycastManager aRRaycastManager;

    public GameObject panelObject;
    public GameObject tabFind;
    public GameObject tabSwap;

    public GameObject prefabArrow;
    public GameObject prefabFindMap;
    public GameObject prefabSwapMap;

    GameObject arrowObject;
    GameObject findObject;
    GameObject swapObject;
    List<ARRaycastHit> hits;
    //AR Raycast가 닿은 결과 모음
    Pose pose;

    bool isMade;
    string mapMode;


    #region 접근함수
    public static Map Instance
    {
        get
        {
            return instance;
        }
    }
    public string MapMode
    {
        get
        {
            return mapMode;
        }
        set
        {
            mapMode = value;
        }
    }
    public GameObject FindObject
    {
        get
        {
            return findObject;
        }

    }
    public GameObject SwapObject
    {
        get
        {
            return swapObject;
        }
    }
    public GameObject PrefabArrow
    {
        get
        {
            return prefabArrow;
        }
    }
    public bool IsMade
    {
        get
        {
            return isMade;
        }
    }
    #endregion


    private void Awake()
    {
        instance = this;
    }
    void Start()
    {
        hits = new List<ARRaycastHit>();

        arrowObject = Instantiate(prefabArrow, Vector3.zero, prefabArrow.transform.rotation);
        arrowObject.transform.SetParent(panelObject.transform);
        arrowObject.transform.localScale = prefabArrow.transform.localScale;
        arrowObject.SetActive(false);
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
                    if (aRRaycastManager.Raycast(Input.GetTouch(0).position, hits, TrackableType.PlaneEstimated))
                    //ARRaycast를 터치한 위치에서 쏨
                    //ray에 닿은 물체가 Plane과 닿으면 그 결과를 hits에 저장
                    {
                        pose = hits[0].pose;
                        //레이에 닿은 위치 저장

                        Vector3 dir = new Vector3(pose.position.x, pose.position.y + 1.0f, pose.position.z);
                        arrowObject.SetActive(true);

                        arrowObject.transform.position = dir;
                    }
                }
            }
        }
    }


    #region 버튼 이벤트 함수
    public void OnClickMake()
    {
        Destroy(arrowObject);

        aRPlaneManager.enabled = false;
        isMade = true;

        if (mapMode == "Find")
        {
            findObject = Instantiate(prefabFindMap, pose.position, pose.rotation);
            findObject.transform.localScale = Vector3.one;
            findObject.transform.SetParent(panelObject.transform);

            tabFind.SetActive(true);
        }
        else if (mapMode == "Swap")
        {
            swapObject = Instantiate(prefabSwapMap, pose.position, pose.rotation);
            swapObject.transform.localScale = Vector3.one;
            swapObject.transform.SetParent(panelObject.transform);

            tabSwap.SetActive(true);
        }

        foreach (var plane in aRPlaneManager.trackables)
        {
            plane.gameObject.SetActive(false);
        }
        //평면 전부 끄기
    }
    public void OnClickFindStart()
    {
        ARGameManager.Instance.IsFindStart = true;
    }
    public void OnClickSwapStart()
    {
        Controll.Instance.TargetObject = null;
        Destroy(Controll.Instance.ArrowObject);

        Swap swap = swapObject.GetComponent<Swap>();
        swap.StartSwap();
        StartCoroutine(swap.Timer());
    }
    #endregion
}
