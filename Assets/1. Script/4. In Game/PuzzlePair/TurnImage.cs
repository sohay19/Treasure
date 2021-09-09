using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class TurnImage : MonoBehaviour
{
    public static TurnImage instance;

    public GameObject content;
    public Canvas canvas;

    GraphicRaycaster ray;
    PointerEventData eventData;
    List<Flag> compareFlag;

    bool isturn;


    public static TurnImage Instance
    {
        get
        {
            return instance;
        }
    }
    private void Awake()
    {
        instance = this;
    }
    void Start()
    {
        ray = canvas.GetComponent<GraphicRaycaster>();
        eventData = new PointerEventData(null);

        compareFlag = new List<Flag>();

        isturn = false;
    }
    void Update()
    {
        if (Input.GetMouseButtonDown(0) && !isturn)
        {
            eventData.position = Input.mousePosition;
            //마우스 포지션을 대입

            List<RaycastResult> result = new List<RaycastResult>();
            ray.Raycast(eventData, result);
            //레이를 이용하여 eventData에 저장


            if (result.Count > 0)
            {
                if (result[0].gameObject.layer == LayerMask.NameToLayer("Puzzle"))
                {
                    Image tmpImage = result[0].gameObject.transform.GetComponent<Image>();

                    Turn(tmpImage);

                    compareFlag.Add(new Flag(tmpImage.sprite.name, tmpImage));
                    //비교할 깃발추가
                }
            }
        }

        /*
        if (Input.touchCount > 0)
        {
            if (Input.GetTouch(0).phase == TouchPhase.Began)
            {
                eventData.position = Input.GetTouch(0).position;
                //터치 포지션을 대입

                List<RaycastResult> result = new List<RaycastResult>();
                ray.Raycast(eventData, result);
                //레이를 이용하여 eventData에 저장

                Debug.Log("result 카운트가 증가 되지않음");

                if (result.Count > 0)
                {
                    Debug.Log("닿은 오브젝트이름 = " + result[0].gameObject.name);


                    if (result[0].gameObject.layer == LayerMask.NameToLayer("Puzzle"))
                    {
                        Turn(result[0].gameObject.transform.GetComponent<Image>());
                    }
                }
            }
        }
        */
    }


    public void SetIsTurn(bool tmpBool)
    {
        isturn = tmpBool;
    }
    void Turn(Image curImage)
    {
        isturn = true;

        if (curImage.color == Color.black)
        //뒷면일때
        {
            curImage.transform.GetComponent<Animation>().Play("TurnFront");
        }
        else if (curImage.color == Color.white)
        //앞면일때
        {
            curImage.transform.GetComponent<Animation>().Play("TurnBack");
        }
    }
    public void ComparePuzzle()
    {
        if (compareFlag.Count == 2)
        {
            if (compareFlag[0].GetFlagSprite() == compareFlag[1].GetFlagSprite())
            //같은경우
            {

            }
            else
            //다른경우
            {
                Turn(compareFlag[0].GetFlagImage());
                Turn(compareFlag[1].GetFlagImage());
                //다시 돌리고
            }

            compareFlag.Clear();
            //깃발비교리스트 비우기
        }
    }
}
