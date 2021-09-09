using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AnimationEvent : MonoBehaviour
{
    void TurnFrontColor()
    {
        GetComponent<Image>().color = Color.white;

        TurnImage.Instance.ComparePuzzle();

        TurnImage.Instance.SetIsTurn(false);
    }
    void TurnBackColor()
    {
        GetComponent<Image>().color = Color.black;
    }
}
