using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PrefabRoom : MonoBehaviour
{
    public Text txtRoomNum;
    public Text txtoomName;
    public Text txtGmeType;
    public Image imgRoomSecret;
    public Image imgRoomPlaying;
    public Text txtPlayerCount;

    void Start()
    {
        RectTransform rect = GetComponent<RectTransform>();
        rect.localScale = new Vector3(1, 1, 1);
        rect.anchoredPosition3D = new Vector3(rect.anchoredPosition.x, rect.anchoredPosition.y, 0);
    }
}
