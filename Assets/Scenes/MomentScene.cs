using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TapTap.Moment;
using UnityNative.Toasts.Example;
using System;

public class MomentScene : MonoBehaviour
{
        public GUISkin demoSkin;

    void Start()
    {
        TapMoment.FetchNotification();


       TapMoment.SetCallback((code, msg) =>
        {
            Debug.Log(code + "---" + msg);
            if (code == 20100)
            {
                UnityNativeToastsHelper.ShowShortText("获取新消息失败");
            } else if (code == 20000) {
                UnityNativeToastsHelper.ShowShortText("获取新消息成功: "+msg);
            } else if (code == 10000){
                UnityNativeToastsHelper.ShowShortText("动态发布成功");
            } else if (code == 10100){
                UnityNativeToastsHelper.ShowShortText("动态发布失败");
            } else if (code == 10200){
                UnityNativeToastsHelper.ShowShortText("关闭动态发布页面");
            } else if (code == 30000){
                UnityNativeToastsHelper.ShowShortText("动态页面打开");
            } else if (code == 30100){
                UnityNativeToastsHelper.ShowShortText("动态页面关闭");
            }  else if (code == 70000){
                UnityNativeToastsHelper.ShowShortText("场景化入口回调");
            } 
        });
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
        var labelStyle = new GUIStyle(GUI.skin.label) { fontSize = 30 };

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth /2, btnHeight), "返回", style))
		{
            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(0);
        }

        btnTop += btnHeight + 20 * scale;

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "打开动态", style))
		{
           TapMoment.Open(Orientation.ORIENTATION_DEFAULT);
        }

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "动态红点", style))
		{
            TapMoment.FetchNotification();
        }

         btnTop += btnHeight + 20 * scale;

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "场景化入口", style))
		{
           var sceneDic = new Dictionary<string, object>() { { TapMomentConstants.TapMomentPageShortCutKey, "taprl0242181001" } };
           TapMoment.DirectlyOpen(Orientation.ORIENTATION_DEFAULT, TapMomentConstants.TapMomentPageShortCut, sceneDic);
        }

         if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "一键发布", style))
		{
            string content = "分布的内容描述。。。。。。";
            string[] images = {"imgpath01","imgpath02","imgpath03"};
            TapMoment.Publish(Orientation.ORIENTATION_LANDSCAPE, images, content);

        }

            btnTop += btnHeight + 20 * scale;

         if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "关闭动态页面", style))
		{
            TapMoment.Close();
        }

    
    }
}
