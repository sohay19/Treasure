using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Swap : MonoBehaviour
{
    public static Swap instance;

    List<Transform> resetList = new List<Transform>();
    List<Transform> boxList = new List<Transform>();
    Animation anim;

    bool isStop;


    #region 프로퍼티
    public static Swap Instance
    {
        get
        {
            return instance;
        }
    }
    public List<Transform> BoxList
    {
        get
        {
            return boxList;
        }
    }
    #endregion


    void Awake()
    {
        instance = this;
    }
    void Start()
    {
        isStop = false;
        foreach (Transform trans in boxList)
        {
            resetList.Add(trans);
        }
    }


    #region 사용자 함수
    public void StartSwap()
    {
        for(int i = 0; i < Map.Instance.SwapObject.transform.childCount; i++)
        {
            boxList.Add(Map.Instance.SwapObject.transform.GetChild(i));
        }
        anim = boxList[1].GetComponent<Animation>();

        anim.Play("OpenBox");

        StartCoroutine(WaitBoxAnim());
    }
    IEnumerator WaitBoxAnim()
    {
        yield return new WaitForSecondsRealtime(4.0f);

        SwapBox();
    }
    public void SwapBox()
    {
        int index = Random.Range(0, 3);
        int nextIndex = index + 1;

        if (index == 2)
        {
            nextIndex = 0;
        }
        StartCoroutine(Swap2Box(boxList[index], boxList[nextIndex], false));
        StartCoroutine(Swap2Box(boxList[nextIndex], boxList[index], true));
    }

    IEnumerator Swap2Box(Transform moveTrans, Transform dirTrans, bool isNext)
    {
        Vector3 dir = dirTrans.position;

        while (moveTrans.position != dir)
        {
            yield return new WaitForEndOfFrame();

            moveTrans.position = Vector3.MoveTowards(moveTrans.position, dir, Time.deltaTime * 4.0f);
        }

        if (isNext)
        {
            if (!isStop)
            {
                SwapBox();
            }
            else
            {
                ARGameManager.Instance.CheckSwap();

                isStop = false;
            }
        }

        yield return null;
    }
    public IEnumerator Timer()
    {
        yield return new WaitForSecondsRealtime(10.0f);

        isStop = true;
    }
    #endregion
}
