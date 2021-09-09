using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Audio : MonoBehaviour
{
    public static GameObject objectBGM;
    //bgm이 있는 오브젝트
    //Destroy하기위해 
    public static GameObject objectEffect;
    //Effect가 있는 오브젝트

    public static AudioSource music;
    //bgm파일
    public static AudioSource soundClick;
    //Click소리
    public static AudioSource soundCorrect;
    public static AudioSource soundInCorrect;
    public static AudioSource soundQuizStart;
    public static AudioSource soundTimer;
    public static AudioSource soundTimerSpeed;


    private void Awake()
    {
        objectBGM = GameObject.Find("Audio_BGM");
        objectEffect = GameObject.Find("Audio_Effect");

        music = objectBGM.GetComponent<AudioSource>();
        //BGM
        soundClick = objectEffect.GetComponent<AudioSource>();
        soundCorrect = objectEffect.transform.GetChild(0).GetComponent<AudioSource>();
        soundInCorrect = objectEffect.transform.GetChild(1).GetComponent<AudioSource>();
        soundQuizStart = objectEffect.transform.GetChild(2).GetComponent<AudioSource>();
        soundTimer = objectEffect.transform.GetChild(3).GetComponent<AudioSource>();
        soundTimerSpeed = objectEffect.transform.GetChild(4).GetComponent<AudioSource>();
        //Effect


        if (music.isPlaying)
        //bgm이 재생중이면 실행X
        {
            return;
        }
        else
        //bgm
        {
            music.Play();
            DontDestroyOnLoad(objectBGM);
        }
        DontDestroyOnLoad(objectEffect);
    }


    #region 사용자 함수
    public static float GetVoulme()
    {
        return music.volume;
    }
    public static void SetVoulme(float voulme)
    {
        music.volume = voulme;
    }
    public static void TurnOffBGM()
    {
        Destroy(objectBGM);
    }
    public static void TurnOffEffect()
    {
        soundClick.volume = 0;
        soundCorrect.volume = 0;
        soundInCorrect.volume = 0;
        soundQuizStart.volume = 0;
        soundTimer.volume = 0;
        soundTimerSpeed.volume = 0;
    }
    public static void TurnOnEffect()
    {
        soundClick.volume = 1;
        soundCorrect.volume = 1;
        soundInCorrect.volume = 1;
        soundQuizStart.volume = 1;
        soundTimer.volume = 1;
        soundTimerSpeed.volume = 1;
    }
    public static void PlayClickSound()
    {
        soundClick.Play();
    }
    public static void PlayCorrectSound()
    {
        soundCorrect.Play();
    }
    public static void PlayInCorrectSound()
    {
        soundInCorrect.Play();
    }
    public static void PlayQuizStartSound()
    {
        soundQuizStart.Play();
    }
    public static void PlayTimerSound()
    {
        soundTimer.Play();
    }
    public static void PlayTimerSpeedSound()
    {
        soundTimerSpeed.Play();
    }
    public static void StopTimerSound()
    {
        soundTimer.Stop();
    }
    public static void StopTimerSpeedSound()
    {
        soundTimerSpeed.Stop();
    }
    #endregion
}
