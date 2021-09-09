using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TypingGame : MonoBehaviour
{
    public Text txtQuiz;

    TouchScreenKeyboard keyboard;
    List<int> preNum;

    int curNum;



    void Start()
    {
        txtQuiz.text = "";
        preNum = new List<int>();
        curNum = Random.Range(1, 11);

        ShowQuiz();
    }

    void Update()
    {
        if(keyboard.status == TouchScreenKeyboard.Status.Done)
        {
            if(keyboard.text == txtQuiz.text)
            {
                CorrectSentence();
            }
            else
            {
                InCorrectSentence();
            }
        }
    }


    void ShowQuiz()
    {
        keyboard = TouchScreenKeyboard.Open("", TouchScreenKeyboardType.Default);

        txtQuiz.text = "난이도: " + Sentence.Instance.GetLevel(curNum) + "\n";
        txtQuiz.text += Sentence.Instance.GetQuiz(curNum);
    }
    void NextQuiz()
    {
        preNum.Add(curNum);

        while (preNum.FindIndex(x => x == curNum) != -1)
        {
            curNum = Random.Range(1, 11);
        }
        //다음 문제

        ShowQuiz();
    }
    void CorrectSentence()
    {
        Debug.Log("성공");

        NextQuiz();
    }
    void InCorrectSentence()
    {
        Debug.Log("실패");
    }
}
