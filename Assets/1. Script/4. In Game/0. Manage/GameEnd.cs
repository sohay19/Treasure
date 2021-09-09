using Photon.Pun;
using Photon.Realtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameEnd : MonoBehaviourPunCallbacks
{
    public static GameEnd instance;

    public GameObject prefabScore;
    public GameObject tabScore;

    GameObject scorePlayer;
    Hashtable playerScoreHash;
    List<Player> goodPlayerList;
    Text txtNick;
    Text txtCoin;

    bool isEnd;

    int mostScore = -1;
    int totalCoin;


    #region 접근함수
    public Hashtable PlayerScoreHash
    {
        get
        {
            return playerScoreHash;
        }
    }
    public bool IsEnd
    {
        get
        {
            return isEnd;
        }
    }
    public int TotalCoin
    {
        get
        {
            return totalCoin;
        }
        set
        {
            totalCoin = value;
        }
    }
    public static GameEnd Instance
    {
        get
        {
            return instance;
        }
    }
    #endregion


    private void Awake()
    {
        instance = this;
    }
    void Start()
    {
        isEnd = false;
        playerScoreHash = new Hashtable();
        goodPlayerList = new List<Player>();
        scorePlayer = tabScore.transform.GetChild(3).gameObject;
        txtNick = scorePlayer.transform.GetChild(0).GetComponent<Text>();
        txtCoin = scorePlayer.transform.GetChild(1).GetComponentInChildren<Text>();
    }


    #region 포톤 콜백
    public override void OnLeftRoom()
    {
        playerScoreHash.Clear();
        goodPlayerList.Clear();
    }
    #endregion


    #region 사용자 함수
    public void EndGame()
    {
        isEnd = true;

        switch (int.Parse(PhotonNetwork.CurrentRoom.CustomProperties[enumType.roomKey.gameType.ToString()].ToString()))
        {
            case 1:
                if(PhotonNetwork.IsMasterClient)
                {
                    WordQuizRun.Instance.PrefabQuiz.StopCoroutineFunc();
                }
                break;
            case 2:
                BingoRun.Instance.PrefabChoiceMap.StopTimer();
                break;
            case 3:
                break;
            case 4:
                break;
        }

        tabScore.SetActive(true);
        CountingScore();
    }
    void CountingScore()
    {
        foreach (object key in PlayerScoreHash.Keys)
        {
            foreach (Player player in PhotonNetwork.PlayerList)
            {
                if (key.ToString() == player.NickName)
                {
                    GameObject tmpObjet = Instantiate(prefabScore);
                    tmpObjet.transform.SetParent(tabScore.transform.Find("Content").transform);

                    PrefabPlayerScore tmpScore = tmpObjet.GetComponent<PrefabPlayerScore>();

                    tmpScore.nickName.text = player.NickName;
                    tmpScore.score.text = PlayerScoreHash[key].ToString();


                    if (mostScore < int.Parse(PlayerScoreHash[key].ToString()))
                    {
                        mostScore = int.Parse(PlayerScoreHash[key].ToString());

                        if (goodPlayerList.Count == 0)
                        //리스트 비엇음
                        {
                            goodPlayerList.Add(player);
                        }
                        else
                        //리스트가 차있어서 업데이트
                        {
                            goodPlayerList[0] = player;
                        }
                    }
                    else if (mostScore == int.Parse(PlayerScoreHash[key].ToString()))
                    {
                        goodPlayerList.Add(player);
                    }
                }
            }
        }
        //스코어 계산

        PrintScore();
    }
    void PrintScore()
    {
        if (goodPlayerList.Count == 1)
        {
            txtNick.text = goodPlayerList[0].NickName;
            txtCoin.text = totalCoin.ToString();
        }
        else if (goodPlayerList.Count > 1)
        {
            foreach (Player player in goodPlayerList)
            {
                txtNick.text +=  player.NickName;

                if(player.NickName != goodPlayerList[goodPlayerList.Count-1].NickName)
                {
                    txtNick.text += ", ";
                }
            }
            txtCoin.text = (totalCoin / goodPlayerList.Count).ToString();
        }
        //1등 출력

        ResultCoin();
    }
    void ResultCoin()
    {
        if (PhotonNetwork.IsMasterClient)
        {
            if (goodPlayerList.Count == 1)
            {
                int curCoin = int.Parse(goodPlayerList[0].CustomProperties[enumType.playerKey.Coin.ToString()].ToString());
                ExitGames.Client.Photon.Hashtable hash = new ExitGames.Client.Photon.Hashtable();
                hash.Add(enumType.playerKeysList[(int)enumType.playerKey.Coin], (curCoin + totalCoin).ToString());

                goodPlayerList[0].SetCustomProperties(hash);
            }
            else if (goodPlayerList.Count > 1)
            {
                foreach (Player player in goodPlayerList)
                {
                    int curCoin = int.Parse(player.CustomProperties[enumType.playerKey.Coin.ToString()].ToString());
                    ExitGames.Client.Photon.Hashtable hash = new ExitGames.Client.Photon.Hashtable();
                    hash.Add(enumType.playerKeysList[(int)enumType.playerKey.Coin], (curCoin + totalCoin / goodPlayerList.Count).ToString());

                    player.SetCustomProperties(hash);
                }
            }
        }
        //코인 실제 적립

        playerScoreHash.Clear();
        goodPlayerList.Clear();

        StartCoroutine(Ending());
    }
    IEnumerator Ending()
    {
        yield return new WaitForSeconds(7.0f);

        tabScore.SetActive(false);

        if (PhotonNetwork.IsMasterClient)
        {
            foreach (Player player in PhotonNetwork.PlayerList)
            {
                GameManager.Instance.UpdatPlayerProperties(player, false);
            }
            foreach (PhotonView view in GameManager.Instance.ViewList)
            {
                if (view.IsMine)
                {
                    PhotonNetwork.Destroy(view.gameObject);
                }
            }
            GameManager.Instance.UpdatRoomProperties(false);
        }

        isEnd = false;
    }
    public void SetEndMode()
    {
        PhotonNetwork.IsMessageQueueRunning = false;
        PhotonNetwork.LoadLevel(SceneManager.GetActiveScene().name);
    }
    #endregion
}
