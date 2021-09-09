using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PrefabPlayerScore : MonoBehaviour
{
    public Text nickName;
    public Text score;

    void Start()
    {
        RectTransform rect = transform.GetComponent<RectTransform>();
        rect.localScale = new Vector3(1, 1, 1);
        rect.anchoredPosition3D = new Vector3(rect.anchoredPosition.x, rect.anchoredPosition.y, 0);
    }
}
