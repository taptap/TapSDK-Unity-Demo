using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MS.NativeDialog;
using UnityEngine.Events;
using UnityNative.Toasts.Example;
using TapTap.Bootstrap;

public class MainScene : MonoBehaviour
{

    void Start()
    {
        var config = new TapConfig.Builder()
             .ClientID("FwFdCIr6u71WQDQwQN")
             .ClientSecret("8zkWbrNMBXYtdg6GTyGy3FLRcIi1C5PuKjxwWAUe")
             .RegionType(RegionType.CN)
             .TapDBConfig(false, "1.0.0", "1.0.0", false)
             .ConfigBuilder();
        TapBootstrap.Init(config);
        //注册回调
    }

    // Update is called once per frame
    void Update()
    {
      
    }



    private void OnGUI()
    {
        GUIStyle style = new GUIStyle(GUI.skin.button);
        style.fontSize = 40;

        if (GUI.Button(new Rect(60, 150, 180, 100), "登录", style))
        {
            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(1);
        }

        if (GUI.Button(new Rect(60, 300, 180, 100), "动态", style))
        {
            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(2);
        }
        if (GUI.Button(new Rect(60, 450, 180, 100), "TapDB", style))
        {
            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(3);
        }
        if (GUI.Button(new Rect(60, 600, 180, 100), "好友", style))
        {
            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(4);
        }


    }
}
