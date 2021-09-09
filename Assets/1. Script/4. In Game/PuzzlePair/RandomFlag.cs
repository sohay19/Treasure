using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class RandomFlag : MonoBehaviour
{
    public List<GameObject> objectFlag;

    List<int> numFlag;
    Hashtable flag;

    int index;


    void Start()
    {
        numFlag = new List<int>();
        flag = new Hashtable();

        ChoiceFlag();
        //6개의 깃발 선정 및 12개 늘리기

        ShuffleList();
        //깃발 섞기

        MadeFlagInHash();
        //Sprite 할당 및 해쉬테이블에 넣기
    }
    void Update()
    {

    }


    void ChoiceFlag()
    {
        index = Random.Range(1, 15);
        numFlag.Add(index);
        //처음 값 넣어주기
        
        while (numFlag.Count < 6)
        {
            index = Random.Range(1, 15);

            if (numFlag.FindIndex(x => x == index) == -1)
            {
                numFlag.Add(index);
            }
        }
        //6개까지 실행

        numFlag.AddRange(numFlag.ToArray());
        //리스트복사
    }
    void ShuffleList()
    {
        int random1, random2;
        int tmp;

        for (int i = 0; i < numFlag.Count; ++i)
        {
            random1 = Random.Range(0, numFlag.Count);
            random2 = Random.Range(0, numFlag.Count);

            tmp = numFlag[random1];
            numFlag[random1] = numFlag[random2];
            numFlag[random2] = tmp;
        }
    }
    void MadeFlagInHash()
    {
        for(int i = 0; i < objectFlag.Count; i++)
        {
            Image curImage = objectFlag[i].GetComponent<Image>();
            curImage.sprite = Resources.Load<Sprite>("ui_flags " + numFlag[i]);
            curImage.color = Color.black;

            Flag tmpFlag = new Flag("ui_flags " + numFlag[i], curImage);

            flag.Add(objectFlag[i].name, tmpFlag);
            //해시테이블구조
            //key = 객체이름
            //내부 = 깃발명, 해당 Image
        }
    }
}
