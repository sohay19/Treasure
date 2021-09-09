using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerCellUI : MonoBehaviour
{
    public Image imgReady;
    public Image imgTurn;
    public Image imgPlayerProfile;
    public Text txtNinkName;
    public Text txtCoin;


    void Start()
    {
        RectTransform rect = GetComponent<RectTransform>();
        rect.localScale = new Vector3(1, 1, 1);
        rect.anchoredPosition3D = new Vector3(rect.anchoredPosition.x, rect.anchoredPosition.y, 0);
    }
}
