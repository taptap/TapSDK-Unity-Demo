using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TapTap.Bootstrap;
using UnityNative.Toasts.Example;
using System;
using TapTap.Common;
using TapTap.Login;
using System;
using LeanCloud.Storage;


public class InsideAccoundScene : MonoBehaviour
{
	public GUISkin demoSkin;

    void Start()
    {
     
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

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "游客登录", style))
		{
            visitorsLogin();
        }

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "设置当前用户", style))
		{
            setCurrentUser();

        }

        btnTop += btnHeight + 20 * scale;

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "设置用户其他属性", style))
		{
           setUserAttribute();
        }

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "查询用户", style))
		{
            searchUser();
        }

        btnTop += btnHeight + 20 * scale;

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "第三方平台登录", style))
		{
           otherLogin();
        }

    }


    public async void visitorsLogin(){
        try{
            // 通过 tdsUSer 给出用户唯一标识，如果有的话
            var tdsUser = await TDSUser.LoginAnonymously();
            Debug.Log($"{tdsUser.ToString()}");
            UnityNativeToastsHelper.ShowShortText("游客登录成功！");

        }catch(Exception e){
            // 登录失败
            Debug.Log(e);
        }

    }

     public async void setCurrentUser(){
       // 使用 sesionToken 登录
        await TDSUser.BecomeWithSessionToken("nahzvwh8ln3zx3spql8716ojv");
         UnityNativeToastsHelper.ShowShortText("通过 SessionToken 设置用户成功！");

     }

     public async void setUserAttribute(){
        var currentUser = await TDSUser.GetCurrent();  // 获取当前登录的账户实例
        currentUser["age"] = "26";
        currentUser["birthday"] = "12-12";
        await currentUser.Save();
         
        UnityNativeToastsHelper.ShowShortText("设置属性成功！");

     }


      public async void searchUser(){
        LCQuery<TDSUser> userQuery = TDSUser.GetQuery();
        userQuery.WhereEqualTo("birthday", "12-12");
        int count = await userQuery.Count();
        UnityNativeToastsHelper.ShowShortText("生日为：12-12的用户有："+ count + "个" );

      }

      public async void otherLogin(){
          Dictionary<string, object> thirdPartyData = new Dictionary<string, object> {
            // 必须
            { "openid", "OPENID" },
            { "access_token", "ACCESS_TOKEN" },
            { "expires_in", 7200 },

            // 可选
            { "refresh_token", "REFRESH_TOKEN" },
            { "scope", "SCOPE" }
            };
            try{
                TDSUser currentUser = await TDSUser.LoginWithAuthData(thirdPartyData, "weixin");
                UnityNativeToastsHelper.ShowShortText("使用微信登录成功："+ currentUser.ToString() );

            } catch(Exception e){
                Debug.Log("第三方账户登录异常："+e.ToString());
                UnityNativeToastsHelper.ShowShortText("第三方账户登录异常："+e.ToString() );

            }

      }


}