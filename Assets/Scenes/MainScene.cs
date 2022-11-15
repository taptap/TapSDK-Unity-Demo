using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MS.NativeDialog;
using UnityEngine.Events;
using UnityNative.Toasts.Example;
using TapTap.Bootstrap; // 命名空间
using TapTap.Common; // 命名空间

public class MainScene : MonoBehaviour
{

    void Start()
    {
        var config =  new TapConfig.Builder()
            .ClientID("hskcocvse6x1cgkklm")  // 必须，开发者中心对应 Client ID
            .ClientToken("XQuOYJZ5Oo2wHXf7J5pK1yEtRWH59Tp9AdfMpwOf")  // 必须，开发者中心对应 Client Token
            .ServerURL("https://hskcocvs.cloud.tds1.tapapis.cn") // TapDC 后台获取
            .RegionType(RegionType.CN)  // 非必须，默认 CN 表示国内
            .ConfigBuilder();
        TapBootstrap.Init(config);
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

        GUIStyle labelStyle = new GUIStyle(GUI.skin.label);
        labelStyle.fontSize = 40;
        labelStyle.alignment = TextAnchor.MiddleLeft;
        
        GUI.Label(new Rect(60, 435, 800, 100), "TapDB 对接需要联系 Tap 运营同学，仅供参考接口！", labelStyle);
        
        if (GUI.Button(new Rect(60, 550, 180, 100), "TapDB", style))
        {
            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(3);
        }
    }
}
