using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WordQuiz
{
    public int numQuiz;
    public string quizString;
    public string answerStirng;
    public List<int> mapChildList;

    
    public WordQuiz()
    {
        numQuiz = 0;
        quizString = null;
        answerStirng = null;
        mapChildList = null;
    }
    public WordQuiz(int num, string quiz, string answer, List<int> list)
    {
        numQuiz = num;
        quizString = quiz;
        answerStirng = answer;
        mapChildList = list;
    }
}
