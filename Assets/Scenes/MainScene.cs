using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MS.NativeDialog;
using UnityEngine.Events;
using UnityNative.Toasts.Example;
using TapTap.Bootstrap; // 命名空间
using TapTap.Common; // 命名空间
using System;
using TapTap.Billboard;
using LeanCloud;


public class MainScene : MonoBehaviour
{
	public GUISkin demoSkin;

    void Start()
    {

        LCLogger.LogDelegate = (LCLogLevel level, string info) => {
        switch (level) {
            case LCLogLevel.Debug:
                Debug.Log($"[DEBUG] {DateTime.Now} {info}\n");
                break;
            case LCLogLevel.Warn:
                Debug.Log($"[WARNING] {DateTime.Now} {info}\n");
                break;
            case LCLogLevel.Error:
                Debug.Log($"[ERROR] {DateTime.Now} {info}\n");
                break;
            default:
                Debug.Log(info);
                break;
        }
    };


        // 初始化 公告系统需要
        var dimensionSet = new HashSet<KeyValuePair<string, string>>();
        KeyValuePair<string, string> platformPair = new KeyValuePair<string, string>("platform", "TapTap");
        KeyValuePair<string, string> locationPair = new KeyValuePair<string, string>("location", "CN");
        dimensionSet.Add(platformPair);
        dimensionSet.Add(locationPair);
        var templateType = "navigate"; // 可选
        var billboardServerUrl = "https://tdsdemo.weijiash.cn"; // 开发者中心 > 你的游戏 > 游戏服务 > 应用配置 > 域名配置 > 公告


        var config =  new TapConfig.Builder()
            .ClientID("hskcocvse6x1cgkklm")  // 必须，开发者中心对应 Client ID
            .ClientToken("XQuOYJZ5Oo2wHXf7J5pK1yEtRWH59Tp9AdfMpwOf")  // 必须，开发者中心对应 Client Token
            .ServerURL("https://hskcocvs.cloud.tds1.tapapis.cn") // TapDC 后台获取
            .RegionType(RegionType.CN)  // 非必须，默认 CN 表示国内
            .TapBillboardConfig(dimensionSet, templateType, billboardServerUrl)
            .ConfigBuilder();


        TapBootstrap.Init(config);


    
    }

    void Update()
    {
      
    }



    private void OnGUI()
    {

        GUI.skin = demoSkin;
		
		float scale = 1.0f;

		
		float btnWidth= Screen.width / 5 * 2;
        float btnWidth2 = btnWidth + 80 * scale;

        float btnHeight = Screen.height / 25;
		float btnTop = 30 * scale;
		float btnGap = 20 * scale;

		GUI.skin.button.fontSize = Convert.ToInt32(13 * scale);
        var style = new GUIStyle(GUI.skin.button) { fontSize = 20 };
         btnTop += btnHeight + 20 * scale;

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "登录", style))
		{
            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(1);

		}

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "内嵌动态", style))
		{
            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(2);

        }

        btnTop += btnHeight + 20 * scale;

        GUIStyle labelStyle = new GUIStyle(GUI.skin.label);
        labelStyle.fontSize = 20;
        labelStyle.alignment = TextAnchor.MiddleLeft;
        
        GUI.Label(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "TapDB 对接需要联系 Tap 运营同学，仅供参考接口！", labelStyle);


        btnTop += btnHeight + 20 * scale;

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "TapDB", style))
		{

            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(3);

        }

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "防沉迷", style))
		{
			UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(4);

		}
        btnTop += btnHeight + 20 * scale;

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "内建账户", style))
		{

            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(5);

        }

         if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "成就系统", style))
		{
			UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(6);

		}

         btnTop += btnHeight + 20 * scale;

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "公告系统", style))
		{

            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(7);

        }

         if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "数据存储", style))
		{
			UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(8);

		}

        btnTop += btnHeight + 20 * scale;

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "云存档", style))
		{

            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(9);

        }

         if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "排行榜", style))
		{
			UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(10);

		}



    }
}
