﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MS.NativeDialog;
using UnityEngine.Events;
using UnityNative.Toasts.Example;
using TapTap.Bootstrap; // 命名空间
using TapTap.Common; // 命名空间
using System;
using LeanCloud;
using TapTap.Connect; // 命名空间


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
                .ClientID("hskcocvse6x1cgkklm")  // 必须，开发者中心对应 Client ID
                .ClientToken("XQuOYJZ5Oo2wHXf7J5pK1yEtRWH59Tp9AdfMpwOf")  // 必须，开发者中心对应 Client Token
                .ServerURL("https://hskcocvs.cloud.tds1.tapapis.cn") // TapDC 后台获取
                .RegionType(RegionType.CN)  // 非必须，默认 CN 表示国内
                .AntiAddictionConfig(true)  // 3.27.0 版本开始防沉迷支持 TapBootstrap 初始化
                .TapDBConfig(true, "gameChannel", "gameVersion", true)  // TapDB 会根据 TapConfig 的配置进行自动初始化
                .ConfigBuilder();

            TapBootstrap.Init(config);


            TapConnect.SetEntryVisible(true);

            // 设置初始化状态
            InitSpace.InitUnitl.isInit = true;


        }

    
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

         if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "DLC 内购", style))
		{
			UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(12);

		}
        btnTop += btnHeight + 20 * scale;

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "多人对战", style))
		{

            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(13);

        }


    }


}
