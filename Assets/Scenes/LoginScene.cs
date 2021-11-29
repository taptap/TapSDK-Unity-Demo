using System;
using UnityEngine;
using TapTap.Bootstrap;
using TapTap.Common;
using TapTap.Login;
using UnityEngine.UI;

public class LoginScene : MonoBehaviour
{
    // Start is called before the first frame update

    //登录
    public Button login;

    //退出登录
    public Button loginout;

    //sessionToken
    public Button sessionToken;

    //用户详细信息
    public Button objectId;

    //篝火测试
    public Button bonfireTest;

    //文本
    public Text label;

    //返回
    public Button back;

    public Button guestLogin;

    void Start()
    {
        TapLogin.ChangeConfig(true, true);

        login.onClick.AddListener(OnLoginClicked);
        loginout.onClick.AddListener(OnLoginOutClicked);
        sessionToken.onClick.AddListener(GetSessionToken);
        objectId.onClick.AddListener(GetObjectId);
        bonfireTest.onClick.AddListener(OnBonfireTestClicked);
        back.onClick.AddListener(OnBackClicked);
        guestLogin.onClick.AddListener(GuestLogin);
    }

    // Update is called once per frame
    void Update()
    {
    }

    private async void OnLoginClicked()
    {
        try
        {
            var tdsUser = await TDSUser.LoginWithTapTap();
            label.text = $"login Success:{tdsUser}";
            Debug.Log($"login Success:{tdsUser}");
        }
        catch (Exception e)
        {
            if (e is TapException error)
            {
                label.text = $"Login Error:{error.code} message:{error.message}";
            }
            else
            {
                label.text = $"Login Error:{e}";
            }

            throw;
        }
    }

    private async void GuestLogin()
    {
        try
        {
            var tdsUser = await TDSUser.LoginAnonymously();
            label.text = $"Guest Login Success: {tdsUser}";
        }
        catch (Exception e)
        {
            label.text = $"Guest Login failed:{e.Message}";
        }
    }

    private void OnLoginOutClicked()
    {
        TDSUser.Logout();
        label.text = "Login Out";
    }

    private async void GetSessionToken()
    {
        try
        {
            var tdsUser = await TDSUser.GetCurrent();
            label.text = $"sessionToken:{tdsUser.SessionToken}";
        }
        catch (Exception e)
        {
            label.text = $"sessionToken error:{e.Message}";
        }
    }

    private async void GetObjectId()
    {
        try
        {
            var tdsUser = await TDSUser.GetCurrent();
            label.text = $"ObjectId:{tdsUser.ObjectId}";
        }
        catch (Exception e)
        {
            label.text = $"ObjectId error:{e.Message}";
        }
    }

    private async void OnBonfireTestClicked()
    {
        try
        {
            var test = await TapLogin.GetTestQualification();
            label.text = $"篝火测试:{test}";
        }
        catch (Exception e)
        {
            label.text = $"篝火测试 error:{e.Message}";
        }
    }

    private void OnBackClicked()
    {
        UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(0);
    }

}