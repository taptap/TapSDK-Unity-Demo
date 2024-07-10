using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MS.NativeDialog;
using UnityEngine.Events;
using UnityNative.Toasts.Example;
using TapTap.Bootstrap; 
using TapTap.Common;
using System;
using LeanCloud;
using TapTap.Connect;
using TapTap.Themis;
using TapTap.AntiAddiction;
using TapTap.AntiAddiction.Model;


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

        // 判断初始化状态
        bool isInit = InitSpace.InitUnitl.isInit;

        if(!isInit){

            var config =  new TapConfig.Builder()
                .ClientID("hskcocvse6x1cgkklm")
                .ClientToken("XQuOYJZ5Oo2wHXf7J5pK1yEtRWH59Tp9AdfMpwOf") 
                .ServerURL("https://hskcocvs.cloud.tds1.tapapis.cn") 
                .RegionType(RegionType.CN)  
                .AntiAddictionConfig(true, true) 
                .TapDBConfig(true, "gameChannel", "3.29.2", true) 
                .ConfigBuilder();

            TapBootstrap.Init(config);

            TapThemis.InitTHEMIS();

            TapThemis.U3d_ConfigAutoReportLogLevel(TapTap.Themis.LogSeverity.LogError); // 设置日志上报等级

            // 注册日志监听
            TapThemis.U3d_UnregisterLogCallback(logcallback);
            

            TapConnect.SetEntryVisible(true);

            // 设置初始化状态
            InitSpace.InitUnitl.isInit = true;


        }

    
    }

    void Update()
    {
      
    }

    public void logcallback(string condition, string statckTrace, LogType type ){

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
        

        GUIStyle versionStyle = new GUIStyle();
        versionStyle.fontSize = 30;
        versionStyle.normal.textColor = Color.white;

		GUI.skin.button.fontSize = Convert.ToInt32(13 * scale);
        var style = new GUIStyle(GUI.skin.button) { fontSize = 20 };
         btnTop += btnHeight + 20 * scale;


        GUI.Label(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "TapSDK 版本：3.29.2", versionStyle);

        
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

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "TapDB", style))
		{

            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(3);

        }

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "合规认证", style))
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

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "数据存储", style))
		{

            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(7);

        }

         if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "云存档", style))
		{
			UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(8);

		}

        btnTop += btnHeight + 20 * scale;

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "排行榜", style))
		{

            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(9);

        }

         if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "礼包系统", style))
		{
			UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(10);

		}

         btnTop += btnHeight + 20 * scale;

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "唤起更新", style))
		{

            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(11);

        }

         if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "DLC/正版验证", style))
		{
			UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(12);

		}

    }


}
