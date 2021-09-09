using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WatchVertical : MonoBehaviour
{
    private void Awake()
    {
        Application.runInBackground = true;
        //백그라운드 실행
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
        //스크린꺼짐방지
        Screen.orientation = ScreenOrientation.Portrait;
        //세로모드

        StartCoroutine(LoadCamera());
    }


    IEnumerator LoadCamera()
    {
        yield return new WaitForSeconds(1.0f);

        Screen.SetResolution(1080, 1920, false);
    }
}
