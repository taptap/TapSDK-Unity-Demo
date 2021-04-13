using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MS.NativeDialog;
using UnityEngine.Events;
using UnityNative.Toasts.Example;
using TapTap.Bootstrap;

public class MainScene : MonoBehaviour, ITapUserStatusChangedListener
{

    void Start()
    {
            //初始化
            
            TapConfig tapConfig = new TapConfig("0RiAlMny7jiz086FaU", true);
            TapBootstrap.Init(tapConfig);

            //注册回调
            TapBootstrap.RegisterLoginResultListener(new MyLoginCallback());
            TapBootstrap.RegisterUserStatusChangedListener(this);
    }

    // Update is called once per frame
    void Update()
    {
      
    }


    public class MyLoginCallback : ITapLoginResultListener {
        public void OnLoginSuccess(AccessToken accessToken)
        {
            UnityNativeToastsHelper.ShowShortText("登录成功");
            Debug.Log("登录成功:  " + accessToken.ToJSON());

        }

        public void OnLoginError(TapError error)
        {
            Debug.Log("登录失败的error信息:  " + error.errorDescription);

        }

        public void OnLoginCancel()
        {
            UnityNativeToastsHelper.ShowShortText("取消登录");
        }

    }
    private bool isFlag = false;

   

    public void OnLogout(TapError error) {
        Debug.Log("登出失败的error信息:  " + error.errorDescription);
    }

    public void OnBind(TapError error) {
        Debug.Log("绑定的error信息:  " + error.errorDescription);
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


    }
}
