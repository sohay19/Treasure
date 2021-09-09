using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Flag
{
    string flagName;
    //깃발 Sprite 이름
    Image flagImage;
    //해당 이미지


    public Flag()
    {
        flagName = null;
        flagImage = null;
    }
    public Flag(string name, Image image)
    {
        flagName = name;
        flagImage = image;
    }
    public string GetFlagSprite()
    {
        return flagName;
    }
    public Image GetFlagImage()
    {
        return flagImage;
    }
}
