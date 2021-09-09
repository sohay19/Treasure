using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sentence : MonoBehaviour
{
    public static Sentence instance;

    public SentenceQuiz1 sentenceQuiz;

    List<string> quizLevel;
    List<string> quizValue;


    public static Sentence Instance
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
        quizLevel = new List<string>();
        quizValue = new List<string>();

        foreach (SentenceQuiz1Data data in sentenceQuiz.dataArray)
        {
            quizLevel.Add(data.Level);
            quizValue.Add(data.Quiz);
        }
    }
    void Update()
    {
        
    }


    public string GetLevel(int numQuiz)
    {
        return quizLevel[numQuiz-1];
    }
    public string GetQuiz(int numQuiz)
    {
        return quizValue[numQuiz - 1];
    }
}
