using System;
using System.Collections.Generic;
using TapTap.Common;
using UnityEngine;
using Object = UnityEngine.Object;

namespace TapTap.Login.Internal
{
    internal class LoginManager
    {
        public delegate void OnLoginResult(LoginResult result);

        private static LoginManager _instance;
        private static readonly object objlock = new object();

        public static LoginManager Instance
        {
            get
            {
                if (_instance == null)
                {
                    lock (objlock)
                    {
                        if (_instance == null)
                        {
                            _instance = new LoginManager();
                        }
                    }
                }
                return _instance;
            }
        }

        public void LogInWithReadPermissions(string[] permissions,
            OnLoginResult onLoginResult)
        {
            GameObject managerObject = new GameObject
            {
                name = "TapTapSDKUIManager"
            };
            Object.DontDestroyOnLoad(managerObject);
            UIManager manager = managerObject.GetComponent<UIManager>();
            if (manager == null)
            {
                managerObject.AddComponent<UIManager>();
            }
            manager = managerObject.GetComponent<UIManager>();

            Dictionary<string, object> configs = new Dictionary<string, object>
                    {
                        { "client_id", TapTapSdk.ClientId },
                        { "permissions", permissions }
                    };
            manager.ShowQRCodeLogin<QRCodeWindow>(configs, (code, data) =>
            {
                if (onLoginResult != null)
                {
                    if (code == UIManager.RESULT_CLOSE)
                    {
                        LoginResult result = new LoginResult();
                        result.IsCanceled = true;
                        onLoginResult(result);
                    } else if (code == UIManager.RESULT_SUCCESS && data != null & data is AccessToken)
                    {
                        LoginResult result = new LoginResult();
                        result.Token = data as AccessToken;
                        onLoginResult(result);
                    } else
                    {
                        LoginResult result = new LoginResult();
                        result.IsFaulted = true;
                        if (data != null)
                        {
                            result.Exception = new Exception(data.ToString());
                        } else
                        {
                            result.Exception = new Exception("unknown");
                        }
                        
                        onLoginResult(result);
                    }
                }
            });
        }

        public void Logout()
        {
            DataStorage.SaveString("taptapsdk_accesstoken", null);
            DataStorage.SaveString("taptapsdk_profile", null);
        }
    }

}
