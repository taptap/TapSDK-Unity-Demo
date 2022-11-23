using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using TapTap.Achievement;
using TapTap.Bootstrap;
using UnityNative.Toasts.Example;
using TapTap.Common;
using TapTap.Login;


public class AchievementScene : MonoBehaviour
{

    public GUISkin demoSkin;

    async void Start()
    {
        
       var currentUser = await TDSUser.GetCurrent();
       if (null == currentUser)
        {
            UnityNativeToastsHelper.ShowShortText("请先使用内建账户方式登录");
            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(1);
            return;
        }
        IAchievementCallback achievement = new AchievementCallback();

        TapAchievement.RegisterCallback(achievement);

        TapAchievement.InitData();





    }

    // Update is called once per frame
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

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "获取全部成就数据", style))
		{
           getAllAchievement();
        }

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "获取当前用户成就数据", style))
		{
           getMyAchievement();
        }

        btnTop += btnHeight + 20 * scale;

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "直接达成某个成就", style))
		{

            finishAcievement();
        }

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "增长成就步数", style))
		{
           addStep();
		}

        btnTop += btnHeight + 20 * scale;

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "设置冒泡开关", style))
		{

            TapAchievement.SetShowToast(true);

        }

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "打开成就展示页", style))
		{
           TapAchievement.ShowAchievementPage();

		}




    
    }


    public void getAllAchievement(){
        // 获取本地数据
        TapAchievement.GetLocalAllAchievementList((list, code) =>
        {
            if (code != null)
            {
                // 获取成就数据失败
                UnityNativeToastsHelper.ShowShortText("获取成就数据失败");
            }
            else
            {
                Debug.Log(list.ToString());
                // 获取成就数据成功
                UnityNativeToastsHelper.ShowShortText(list.ToString());

            }
            });
        

    }

    public void getMyAchievement(){
        // 获取本地数据
        TapAchievement.GetLocalUserAchievementList((list, code) =>
        {
            if (code != null)
            {
                 // 获取成就数据失败
                UnityNativeToastsHelper.ShowShortText("获取成就数据失败");
            }
            else
            {
                Debug.Log(list.ToString());
                // 获取成就数据成功
                UnityNativeToastsHelper.ShowShortText(list.ToString());
            }
            });
        
    }

    public void finishAcievement(){
        // displayID 是在开发者中心中添加成就时自行设定的 成就ID
        TapAchievement.Reach("win_battle_10");
         UnityNativeToastsHelper.ShowShortText("达成一个成就");

    }

    public void addStep(){
        // displayID 是在开发者中心中添加成就时自行设定的 成就ID
        TapAchievement.GrowSteps("win_battle_10", 1);
        UnityNativeToastsHelper.ShowShortText("该成就前进了 1 步！");
    }


    private class AchievementCallback:IAchievementCallback
    {
        public void OnAchievementSDKInitSuccess()
        {
            // 成就SDK 初始化成功
            UnityNativeToastsHelper.ShowShortText("成就SDK 初始化成功");

        }

        public void OnAchievementSDKInitFail(TapError errorCode)
        {
            if (errorCode != null)
            {
                //初始化失败
                UnityNativeToastsHelper.ShowShortText("初始化失败");
            }
        }

        public void OnAchievementStatusUpdate(TapAchievementBean bean, TapError errorCode)
        {
            if (errorCode != null)
            {
                // 成就状态更新失败
                UnityNativeToastsHelper.ShowShortText("成就状态更新失败");
                return;
            }

            if (bean != null)
            {
                UnityNativeToastsHelper.ShowShortText("成就状态更新成功");

            }
        }
    }

}
