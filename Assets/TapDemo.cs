using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using AntiAddiction.StandAlone;
using System;

/*
	version 2.6.2_a
 */

public class TapDemo : MonoBehaviour
{
	public Action<int, string> onAntiAddictionResult;
	// Use this for initialization
	void Start()
	{

	}

	// Update is called once per frame
	void Update()
	{

	}

	void OnApplicationPause(bool pauseStatus)
	{
		if (pauseStatus)
		{
			Debug.Log("onAntiAddictionHandler onStop");
			AntiAddiction.StandAlone.AntiAddiction.onStop();

		}
		else
		{
			Debug.Log("onAntiAddictionHandler onResume");
			AntiAddiction.StandAlone.AntiAddiction.onResume();
			
		}
	}

	void OnGUI()
	{
		GUIStyle myButtonStyle = new GUIStyle(GUI.skin.button)
		{
			fontSize = 50
		};

		GUIStyle myLabelStyle = new GUIStyle(GUI.skin.label)
		{
			fontSize = 30
		};


		GUI.depth = 0;

		if (GUI.Button(new Rect(50, 200, 500, 60), "初始化", myButtonStyle))
		{
			onAntiAddictionResult += onAntiAddictionHandler;
			AntiAddiction.StandAlone.AntiAddiction.init(onAntiAddictionResult);
		}

		if (GUI.Button(new Rect(50, 300, 500, 60), "登录(checkState)", myButtonStyle))
		{
			AntiAddiction.StandAlone.AntiAddiction.checkState();
		}

		if (GUI.Button(new Rect(50, 400, 500, 60), "检查付费(50元)", myButtonStyle))
		{
			AntiAddiction.StandAlone.AntiAddiction.checkPayLimit(5000);
		}

		if (GUI.Button(new Rect(50, 500, 500, 60), "付费成功(50元)", myButtonStyle))
		{
			AntiAddiction.StandAlone.AntiAddiction.paySuccess(5000);
		}

		if (GUI.Button(new Rect(50, 600, 500, 60), "获取用户类型", myButtonStyle))
		{
			int type = AntiAddiction.StandAlone.AntiAddiction.getUserType();
			Debug.Log("onAntiAddictionHandler userType = " + type);
		}

	}

	public void onAntiAddictionHandler(int resultCode, string msg)
	{
		Debug.Log("onAntiAddictionHandler" + resultCode + " msg = " + msg);
        if(resultCode == 1040)
        {
			int type = AntiAddiction.StandAlone.AntiAddiction.getUserType();
			Debug.Log("onAntiAddictionHandler userType ====== " + type);
		}
	}
}