using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimEvent : MonoBehaviour
{
    public GameObject boxCover;

    Animation anim;


    void Start()
    {
        anim = transform.GetComponent<Animation>();
    }


    #region 애니메이션 이벤트
    void OpenBox()
    {
        StartCoroutine(Opening());
    }
    void CloseBox()
    {
        anim.Stop();
    }
    IEnumerator Opening()
    {
        yield return new WaitForSeconds(1.0f);

        anim.Play("CloseBox");
    }
    #endregion
}
