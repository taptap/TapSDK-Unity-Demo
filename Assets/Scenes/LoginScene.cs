using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TapTap.Bootstrap;
using UnityNative.Toasts.Example;
using TapTap.Login;

public class LoginScene : MonoBehaviour, ITapLoginResultListener, ITapUserStatusChangedListener
{
    // Start is called before the first frame update
    void Start()
    {
        TapBootstrap.RegisterLoginResultListener(this);
        TapBootstrap.RegisterUserStatusChangedListener(this);

        TapLogin.ChangeConfig(true, true);
    }

    // Update is called once per frame
    void Update()
    {
    }

    public void OnLoginSuccess(AccessToken token)
    {
        label = $"Login Success:{token.ToJSON()}";
    }

    public void OnLoginCancel()
    {
        label = "Login Cancel";
    }

    public void OnLoginError(TapError error)
    {
        if (error != null)
        {
            label = $"Login Error:{error.code} desc:{error.errorDescription}";
        }
        else
        {
            label = "Login Error";
        }
    }

    public void OnLogout(TapError error)
    {
        if (error != null)
        {
            label = $"Logout:{error.code} desc:{error.errorDescription}";
        }
        else
        {
            label = "Logout";
        }
    }

    public void OnBind(TapError error)
    {
        if (error != null)
        {
            label = $"Bind:{error.code} + desc:{error.errorDescription}";
        }
        else
        {
            label = $"Bind";
        }
    }

    private string label;

    private void OnGUI()
    {
        var style = new GUIStyle(GUI.skin.button) { fontSize = 40 };

        GUI.depth = 0;

        var labelStyle = new GUIStyle(GUI.skin.label)
        {
            fontSize = 20
        };

        GUI.Label(new Rect(400, 100, 400, 300), label, labelStyle);

        if (GUI.Button(new Rect(60, 150, 180, 100), "登录", style))
        {
            TapBootstrap.GetAccessToken((token, error) =>
            {
                if (token != null)
                {
                    label = $"LoginSuccess:{token.ToJSON()}";
                }
                else
                {
                    TapBootstrap.Login(LoginType.TAPTAP, new[] { "public_profile" });
                }
            });

            TapLogin.GetProfile(profile => Debug.Log($"Profile:{profile.ToJson()}"));
            TapLogin.GetTapToken(token => Debug.Log($"TapLoToken:{token.ToJson()}"));
        }

        if (GUI.Button(new Rect(60, 300, 180, 100), "退出登录", style))
        {
            TapBootstrap.Logout();
        }

        if (GUI.Button(new Rect(60, 450, 180, 100), "用户信息", style))
        {
            TapBootstrap.GetUser((user, error) =>
            {
                label = user != null
                    ? $"user:{user.ToJSON()}"
                    : $"Error:{error?.code} Descrption:{error?.errorDescription}";
            });
        }

        if (GUI.Button(new Rect(60, 600, 260, 100), "用户详细信息", style))
        {
            TapBootstrap.GetDetailUser((user, error) =>
            {
                label = user != null
                    ? $"detailUser:{user.ToJSON()}"
                    : $"Error:{error?.code} Descrption:{error?.errorDescription}";
            });
        }

        //if (GUI.Button(new Rect(60, 750, 260, 100), "用户中心", style))
        //{
        //    // TapBootstrap.OpenUserCenter();
        //}

        if (GUI.Button(new Rect(60, 900, 260, 100), "篝火测试", style))
        {
            TapBootstrap.GetTestQualification((b, error) =>
            {
                label = $"篝火测试资格:{b} Error:{error?.code} Descrption:{error?.errorDescription}";
            });
        }

        if (GUI.Button(new Rect(60, 1050, 180, 100), "返回", style))
        {
            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(0);
        }
    }
}
