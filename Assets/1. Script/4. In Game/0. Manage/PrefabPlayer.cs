using Photon.Pun;
using Photon.Realtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PrefabPlayer : MonoBehaviour
{
    public static PrefabPlayer instance;

    PhotonView thisView;
    Player thisPlayer;



    #region 프로퍼티
    public static PrefabPlayer Instance
    {
        get
        {
            return instance;
        }
    }
    public PhotonView ThisView
    {
        get
        {
            return thisView;
        }
    }
    public Player ThisPlayer
    {
        get
        {
            return thisPlayer;
        }
    }
    #endregion


    private void Awake()
    {
        instance = this;
    }
    void Start()
    {
        transform.SetParent(GameObject.Find("DataManager").transform);
        //DataManager의 자식으로가기
        thisView = transform.GetComponent<PhotonView>();
        thisPlayer = thisView.Owner;
    }


    #region RPC
    [PunRPC]
    public void SendChat(string name, string msg)
    {
        Chat.Instance.SendMsg(name, msg);
    }
    [PunRPC]
    public void SetGameMode()
    {
        GameStart.Instance.SetGame();
    }
    [PunRPC]
    public void TurnMaster(string nick)
    {
        GameManager.Instance.TurnMasterClient(nick);
    }
    [PunRPC]
    public void SetEndGame()
    {
        GameEnd.Instance.EndGame();
    }
    #endregion


    #region RPC (WordQuiz)
    [PunRPC]
    public void SetOther(int map, int quiz)
    {
        WordQuizRun.Instance.SetOtherPlayer(map, quiz);
    }
    [PunRPC]
    public void SetQuizNum(int quizNum)
    {
        WordQuizRun.Instance.PrefabQuiz.CurQuizNum = quizNum;

        Audio.PlayQuizStartSound();
    }
    [PunRPC]
    public void PlayTimerSound()
    {
        Audio.PlayTimerSound();
    }
    [PunRPC]
    public void PlayTimerSpeedSound()
    {
        Audio.StopTimerSound();
        Audio.PlayTimerSpeedSound();
    }
    [PunRPC]
    public void StopTimerSound()
    {
        Audio.StopTimerSound();
        Audio.StopTimerSpeedSound();
    }
    [PunRPC]
    public void SendAnswer(string answer, string nickName)
    {
        WordQuizRun.Instance.CheckAnswer(answer, nickName);
    }
    [PunRPC]
    public void CompareAnswer(bool result, string answer, string nickName)
    {
        if(result)
        {
            WordQuizRun.Instance.CorrectAnswer(answer, nickName);
        }
        else
        {
            WordQuizRun.Instance.InCorrectAnswer(answer, nickName);
        }
    }
    #endregion


    #region RPC (Bingo)
    [PunRPC]
    public void GiveMap()
    //마스터클라이언트만 실행
    {
        BingoRun.Instance.PrefabMap.PassMyMap();
    }
    [PunRPC]
    public void PassMap(string name, int viewID)
    {
        BingoRun.Instance.MakeMapList(name, viewID);
    }
    [PunRPC]
    public void SetView(object viewidArr)
    {
        BingoRun.Instance.SetViewList(viewidArr);
    }
    [PunRPC]
    public void SetMap(object nameArr, object viewidArr)
    {
        BingoRun.Instance.SetMapHash(nameArr, viewidArr);
    }
    [PunRPC]
    public void DeleteMap(string name)
    {
        BingoRun.Instance.DeleteMapHash(name);
    }
    [PunRPC]
    public void MakeBingoMap()
    {
        BingoRun.Instance.PrefabMap.MakeBingo();
    }
    [PunRPC]
    public void CheckNum(string name, int index, int num)
    {
        BingoCheck.Instance.CheckOtherMap(name, index, num);
    }
    [PunRPC]
    public void CheckBingoNum(string name, int index, int num)
    {
        BingoCheck.Instance.CheckBingoMap(name, index, num);
    }
    [PunRPC]
    public void PassChoiceNum(int num)
    {
        BingoCheck.Instance.CheckChoiceMap(num);
    }
    [PunRPC]
    public void OtherScoreUp(string name)
    {
        BingoCheck.Instance.ScoreUp(name);
    }
    #endregion
}
