using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Net;
using System.Security.Cryptography;
using System.Text;
using System.Threading.Tasks;
using TapTap.Common;
using UnityEngine;
using UnityEngine.UI;
using ZXing;
using ZXing.Common;
using ZXing.QrCode.Internal;
using Debug = UnityEngine.Debug;
using Random = System.Random;

namespace TapTap.Login.Internal
{
    internal class QRCodeWindow : UIElement
    {
        // // \ue90f\ue91c\ue911\ue91a\ue901\ue902\ue903\ue90c  您已取消此次登录
        // private static readonly string TEXT_CANCEL_LOGIN = "";
        //
        // // \ue910\ue91f\ue91b\ue914\ue90d  请重新扫码
        // private static readonly string TEXT_PLEASE_RESCRAN = "";
        //
        // // \ue914\ue90d\ue900\ue907  扫码成功
        // private static readonly string TEXT_SCAN_SUCCESS = "";
        //
        // // \ue910\ue91e\ue917\ue90a\ue915\ue912\ue913 请在手机上确认
        // private static readonly string TEXT_CONFIRM_ON_PHONE = "";

        public RawImage QRCodeRawImage;
        public Text StatusText;
        public Text SubStatusText;
        public Image RefreshImage;
        public Button RefreshButton;
        public Button CloseButton;

        public Button WebLoginButton;

        private string clientId;
        private string[] permissions;
        private bool isLogin;

        private string deviceCode;
        private long expireAt = 0;
        private long lastCheckAt = 0;
        private long interval = 5;

        private Net net;
        private HttpListener _httpListener;

        private long lastWebRequestTime = 0;
        private string webRequestMode = "";

        public override Dictionary<string, object> Extra
        {
            get => extra;
            set
            {
                extra = value;
                if (extra != null)
                {
                    if (extra.ContainsKey("client_id"))
                    {
                        clientId = extra["client_id"] as string;
                        permissions = extra["permissions"] as string[];
                        isLogin = (bool)extra["isLogin"];
                    }
                }
            }
        }

        private void SetObjectText(string parentName, string objectName, string text)
        {
            try
            {
                var targetTransform = transform;
                if (!string.IsNullOrEmpty(parentName))
                {
                    targetTransform = transform.Find(parentName).gameObject.transform;
                }

                var targetObject = targetTransform.Find(objectName).gameObject;
                var gameText = targetObject.GetComponent<Text>();
                gameText.text = text;
            }
            catch (Exception e)
            {
                Debug.Log("SetObjectText fail" + parentName + "  " + objectName);
                Debug.Log("SetObjectText fail\n" + e);
            }
        }

        void Awake()
        {
            var qrImageObject = transform.Find("QRImage").gameObject;
            QRCodeRawImage = qrImageObject.GetComponent<RawImage>();
            var statusObject = transform.Find("Status").gameObject;
            StatusText = statusObject.GetComponent<Text>();
            var subStatusObject = transform.Find("SubStatus").gameObject;
            SubStatusText = subStatusObject.GetComponent<Text>();
            var refreshObject = transform.Find("Refresh").gameObject;
            RefreshImage = refreshObject.GetComponent<Image>();
            var refreshButtonObject = refreshObject.transform.Find("RefreshButton").gameObject;
            RefreshButton = refreshButtonObject.GetComponent<Button>();
            var closeObject = transform.Find("Close").gameObject;
            CloseButton = closeObject.GetComponent<Button>();

            var webLoginButtonObject = transform.Find("WebLoginButton").gameObject;
            WebLoginButton = webLoginButtonObject.GetComponent<Button>();

            WebLoginButton.onClick.AddListener(() =>
            {
                var now = GetCurrentTime();
                if (now - lastWebRequestTime > 1)
                {
                    StartWebLogin();
                }

                lastWebRequestTime = now;
            });
            RefreshImage.gameObject.SetActive(false);
            RefreshButton.onClick.AddListener(RefreshCode);
            SubStatusText.gameObject.SetActive(false);
            StatusText.gameObject.SetActive(false);
            CloseButton.onClick.AddListener(Close);

            // SetObjectText("TitleContent", "TitleUse", LoginLanguage.GetCurrentLang().TitleUse());
            SetObjectText("TitleContent", "TitleAccount", LoginLanguage.GetCurrentLang().TitleLogin());
            SetObjectText("", "ScanLogin", LoginLanguage.GetCurrentLang().QrTitleLogin());
            SetObjectText("", "ScanLogin", LoginLanguage.GetCurrentLang().QrTitleLogin());
            SetObjectText("Notice", "Notice1", LoginLanguage.GetCurrentLang().QrNoticeUse());
            SetObjectText("Notice", "Notice2", LoginLanguage.GetCurrentLang().QrNoticeClient());
            SetObjectText("", "Notice3", LoginLanguage.GetCurrentLang().QrNoticeScanToLogin());
            SetObjectText("", "WebLogin", LoginLanguage.GetCurrentLang().WebLogin());
            SetObjectText("", "WebDescription", LoginLanguage.GetCurrentLang().WebNotice());
            SetObjectText("WebLoginButton", "Text", LoginLanguage.GetCurrentLang().WebButtonJumpToWeb());

            refreshButtonObject.transform.Find("Text").gameObject.GetComponent<Text>().text =
                LoginLanguage.GetCurrentLang().QrRefresh();

            if (string.IsNullOrEmpty(LoginLanguage.GetCurrentLang().QrNoticeUse()) &&
                string.IsNullOrEmpty(LoginLanguage.GetCurrentLang().QrNoticeClient())) {
                GameObject logoGO = transform.Find("Notice/Logo").gameObject;
                logoGO.SetActive(false);
            }
        }

        public override void OnEnter()
        {
            base.OnEnter();
            gameObject.AddComponent<Net>();
            net = gameObject.GetComponent<Net>();
            GetCode();
            WebLoginRequestManager.Instance.CreateNewLoginRequest(permissions);
            StartHttpServer();
        }

        public override void OnExit()
        {
            base.OnExit();
            Destroy(net.gameObject);
        }

        private void Close()
        {
            if (_httpListener != null)
            {
                try
                {
                    _httpListener.Stop();
                }
                catch (Exception)
                {
                    // ignored
                }
            }

            OnCallback(UIManager.RESULT_CLOSE, "Close button clicked.");
            GetUIManager().Pop();
        }

        private void StartHttpServer()
        {
            if (_httpListener == null)
            {
                _httpListener = new HttpListener();
                _httpListener.Prefixes.Add(WebLoginRequestManager.Instance.GetCurrentRequest().GetRedirectHost());
            }

            try
            {
                _httpListener.Start();
            }
            catch (Exception)
            {
                Debug.Log("Http listener start fail, maybe is already started");
            }
        }

        private void StartWebLogin()
        {
            ShowStatus("", "");

            Application.OpenURL(WebLoginRequestManager.Instance.GetCurrentRequest().GetWebLoginUrl());
            // Waits for the OAuth authorization response.

            _ = StartWaitForRequest();

            // _httpListener.BeginGetContext(HandleHttpRequest, _httpListener);
        }

        private async Task StartWaitForRequest()
        {
            HttpListenerContext context = await _httpListener.GetContextAsync();

            Debug.Log(context.Request.RawUrl);

            if (context.Request.HttpMethod == "OPTIONS") {
                // 跨域请求
                context.Response.StatusCode = 200;
                context.Response.Close();
            } else {
                webRequestMode = "";
                // NOTE@luran:这里负责监听 authorization code 的回调
                TapLogger.Debug($"[TapLogin] Get Authorization Code Response: {context.Request.RawUrl}");
                var resultCode = UrlCheck(context.Request.RawUrl);

                CodeToTokenFromWeb(resultCode);

                var response = context.Response;
                var buffer = Array.Empty<byte>();
                if (!string.IsNullOrEmpty(resultCode)) {
                    switch (webRequestMode) {
                        case "gif": {
                                response.StatusCode = 200;
                                response.AppendHeader("Access-Control-Allow-Origin", "*");
                                response.ContentType = "image/gif";
                                const string gif = "R0lGODlhAQABAIABAAAAAP///yH5BAEAAAEALAAAAAABAAEAAAICTAEAOw==";
                                try {
                                    buffer = Convert.FromBase64String(gif);
                                } catch (Exception) {
                                    buffer = Encoding.UTF8.GetBytes("ok");
                                }

                                break;
                            }
                        case "redirect":
                            response.Redirect(CodeUtil.GetTapTapOAuthRedirectUri());
                            break;
                        default:
                            response.StatusCode = 200;
                            response.AppendHeader("Access-Control-Allow-Origin", "*");
                            response.ContentType = "text/plain";
                            buffer = Encoding.UTF8.GetBytes("ok");
                            break;
                    }
                } else {
                    response.StatusCode = 404;
                }

                response.ContentLength64 = buffer.Length;
                var responseOutput = response.OutputStream;
                await responseOutput.WriteAsync(buffer, 0, buffer.Length)
                    .ContinueWith((task) => { responseOutput.Close(); });
            }

            _ = StartWaitForRequest();
        }

        private string UrlCheck(string url)
        {
            // check url
            if (string.IsNullOrEmpty(url) || !url.Contains(CodeUtil.GetTapTapOAuthPrefix()))
            {
                return null;
            }

            var urlParams = url.Split('?');
            if (urlParams.Length <= 1)
            {
                return null;
            }

            var args = urlParams[1].Split('&');
            var dic = args.Select(arg => arg.Split('=')).ToDictionary(kv => kv[0], kv => kv[1]);

            var code = dic.ContainsKey("code") ? dic["code"] : "";
            var state = dic.ContainsKey("state") ? dic["state"] : "";
            webRequestMode = dic.ContainsKey("mode") ? dic["mode"] : "";
            if (string.IsNullOrEmpty(code) || string.IsNullOrEmpty(state))
            {
                return null;
            }

            var content = new StringBuilder();
            foreach (var VARIABLE in dic) {
                content.AppendLine($"key: {VARIABLE.Key}, value: {VARIABLE.Value}");
            }
            
            TapLogger.Debug($"[TapLogin] Get Authorization Code Response Content:\n {content.ToString()}");

            return !state.Equals(WebLoginRequestManager.Instance.GetCurrentRequest().GetState()) ? null : code;
        }

        private void CodeToTokenFromWeb(string code)
        {
            if (string.IsNullOrEmpty(code)) return;
            ShowStatus(LoginLanguage.GetCurrentLang().WebNoticeLogin(), "");
            // url is ok, go to get token
            var formParams = new Dictionary<string, string>
            {
                { "client_id", clientId },
                { "grant_type", "authorization_code" },
                { "secret_type", "hmac-sha-1" },
                { "code", code },
                { "redirect_uri", WebLoginRequestManager.Instance.GetCurrentRequest().GetRedirectUri() },
                { "code_verifier", WebLoginRequestManager.Instance.GetCodeVerifier() }
            };
            net.PostAsync(TapTapSdk.CurrentRegion.TokenUrl(), null, formParams, (result =>
            {
                TapLogger.Debug($"[TapLogin] Get Access Token Origin Result: {result}");
                if (Json.Deserialize(result) is Dictionary<string, object> resultDict &&
                    resultDict.ContainsKey("success") && (bool)resultDict["success"])
                {
                    if (resultDict["data"] is Dictionary<string, object> dataDict) {
                        // convert dataDict content to a format string for debug
                        #if UNITY_EDITOR
                        var c = new StringBuilder();
                        foreach (var kv in dataDict) {
                            c.AppendLine($"key: {kv.Key}, valuue: {kv.Value.ToString()}");
                        }
                        TapLogger.Debug($"[TapLogin] Get Access Token data:\n {c.ToString()}");
                        #endif
                        var token = new AccessToken
                        {
                            kid = dataDict["kid"] as string,
                            macKey = dataDict["mac_key"] as string,
                            accessToken = dataDict["access_token"] as string,
                            tokenType = dataDict["token_type"] as string,
                            macAlgorithm = dataDict["mac_algorithm"] as string,
                            scopeSet = new HashSet<string>((dataDict["scope"] as string)?.Split(' '))
                        };

                        // stop http server when success get token
                        _httpListener.Stop();
                        Debug.Log("HTTP server stopped.");
                        GetProfile(token);
                        return;
                    }
                }

                ShowStatus(LoginLanguage.GetCurrentLang().WebNoticeFail(),
                    LoginLanguage.GetCurrentLang().WebNoticeFail2());
                Debug.Log("CodeToTokenFromWeb success with fail data \n" + result);
            }), ((error, msg) =>
            {
                Debug.Log("CodeToTokenFromWeb fail \n" + msg);
                if (Json.Deserialize(msg) is Dictionary<string, object> resultDict &&
                    resultDict.ContainsKey("data"))
                {
                    if (resultDict["data"] is Dictionary<string, object> dataDict &&
                        dataDict.ContainsKey("error"))
                    {
                        var errorMsg = dataDict["error"] as string;
                        var errorDesc = dataDict["error_description"] as string;
                        ShowStatus(LoginLanguage.GetCurrentLang().WebNoticeFail(),
                            LoginLanguage.GetCurrentLang().WebNoticeFail2());
                        return;
                    }
                }

                ShowStatus(LoginLanguage.GetCurrentLang().WebNoticeFail(),
                    LoginLanguage.GetCurrentLang().WebNoticeFail2());
            }));
        }

        private void RefreshCode()
        {
            StatusText.gameObject.SetActive(false);
            SubStatusText.gameObject.SetActive(false);
            GetCode();
        }

        private void GetCode() {
            RefreshImage.gameObject.SetActive(false);

            var formParams = new Dictionary<string, string>
            {
                { "client_id", clientId },
                { "response_type", "device_code" },
                { "scope", string.Join(",", permissions) },
                { "version", TapTapSdk.Version },
                { "platform", "unity" },
                { "info", "{\"device_id\":\"" + SystemInfo.deviceModel + "\"}" }
            };
            net.PostAsync(TapTapSdk.CurrentRegion.CodeUrl(),
                null,
                formParams,
                (result) =>
                {
                    if (Json.Deserialize(result) is Dictionary<string, object> resultDict &&
                        resultDict.ContainsKey("success") && (bool)resultDict["success"])
                    {
                        if (resultDict["data"] is Dictionary<string, object> dataDict &&
                            dataDict.ContainsKey("qrcode_url"))
                        {
                            var qrCodeUrl = dataDict["qrcode_url"] as string;
                            EncodeQrImage(qrCodeUrl, 309, 309);
                            if (dataDict.ContainsKey("device_code"))
                            {
                                deviceCode = dataDict["device_code"] as string;
                            }

                            if (dataDict.ContainsKey("expires_in"))
                            {
                                var expireIn = (long)dataDict["expires_in"];
                                var ts = DateTime.UtcNow - new DateTime(1970, 1, 1, 0, 0, 0, 0);
                                expireAt = Convert.ToInt64(ts.TotalSeconds) + expireIn;
                            }

                            if (dataDict.ContainsKey("interval"))
                            {
                                interval = (long)dataDict["interval"];
                            }

                            StartCheck();
                            Debug.Log("QRCODE Get");
                        }
                        else
                        {
                            //StatusText.text = "获取二维码失败";
                            ShowQrRefresh();
                            Debug.Log("QRCODE Get Fail 1");
                        }
                    }
                    else
                    {
                        //StatusText.text = "获取二维码失败";
                        ShowQrRefresh();
                        Debug.Log("QRCODE Get Fail 2");
                    }
                },
                (error, msg) =>
                {
                    //StatusText.text = "获取二维码失败";
                    ShowQrRefresh();
                    Debug.Log("QRCODE Get Fail 3");
                }
            );
        }

        private void EncodeQrImage(string content, int width, int height)
        {
            var writer = new MultiFormatWriter();
            var hints = new Dictionary<EncodeHintType, object>
            {
                { EncodeHintType.CHARACTER_SET, "UTF-8" },
                //hints.Add(EncodeHintType.MARGIN, 0);
                { EncodeHintType.ERROR_CORRECTION, ErrorCorrectionLevel.M }
            };
            var bitMatrix = writer.encode(content, BarcodeFormat.QR_CODE, width, height, hints);
            bitMatrix = DeleteWhite(bitMatrix);
            var w = bitMatrix.Width;
            var h = bitMatrix.Height;
            var texture = new Texture2D(w, h);
            for (var x = 0; x < h; x++)
            {
                for (var y = 0; y < w; y++)
                {
                    texture.SetPixel(y, x, bitMatrix[x, y] ? Color.black : Color.white);
                }
            }

            texture.Apply();
            texture.filterMode = FilterMode.Point;
            QRCodeRawImage.texture = texture;
        }

        private static BitMatrix DeleteWhite(BitMatrix matrix)
        {
            var rec = matrix.getEnclosingRectangle();
            var resWidth = rec[2];
            var resHeight = rec[3];

            var resMatrix = new BitMatrix(resWidth, resHeight);
            resMatrix.clear();
            for (var i = 0; i < resWidth; i++)
            {
                for (var j = 0; j < resHeight; j++)
                {
                    if (matrix[i + rec[0], j + rec[1]])
                    {
                        resMatrix.flip(i, j);
                    }
                }
            }

            return resMatrix;
        }

        private void StartCheck()
        {
            StartCoroutine(nameof(AutoCheck));
        }

        private void StopCheck()
        {
            StopCoroutine(nameof(AutoCheck));
        }

        private IEnumerator AutoCheck()
        {
            while (true)
            {
                yield return new WaitForSeconds(0.5f);
                var ts = DateTime.UtcNow - new DateTime(1970, 1, 1, 0, 0, 0, 0);
                var now = Convert.ToInt64(ts.TotalSeconds);
                //Debug.Log("Now: " + now + "  ExpireAt: " + expireAt + "  Remain: " + (expireAt - now));
                if (now > expireAt)
                {
                    ShowQrRefresh();
                    StopCheck();
                    break;
                }

                if (now <= lastCheckAt + interval) continue;
                var wait = true;
                var stop = false;
                var formParams = new Dictionary<string, string>
                {
                    { "grant_type", "device_token" },
                    { "client_id", clientId },
                    { "secret_type", "hmac-sha-1" },
                    { "code", deviceCode },
                    { "version", "1.0" },
                    { "platform", "unity" },
                    { "info", "{\"device_id\":\"" + SystemInfo.deviceModel + "\"}" }
                };
                net.PostAsync(TapTapSdk.CurrentRegion.TokenUrl(),
                    null,
                    formParams,
                    (result) =>
                    {
                        //StatusText.text = "";
                        TapLogger.Debug(string.Format("qr code login result: {0}", result));
                        if (Json.Deserialize(result) is Dictionary<string, object> resultDict &&
                            resultDict.ContainsKey("success") && (bool)resultDict["success"])
                        {
                            //StatusText.text = "扫码成功";
                            //SubStatusText.gameObject.SetActive(false);
                            if (resultDict["data"] is Dictionary<string, object> dataDict)
                            {
                                var token = new AccessToken
                                {
                                    kid = dataDict["kid"] as string,
                                    macKey = dataDict["mac_key"] as string,
                                    accessToken = dataDict["access_token"] as string,
                                    tokenType = dataDict["token_type"] as string,
                                    macAlgorithm = dataDict["mac_algorithm"] as string,
                                    scopeSet = new HashSet<string>((dataDict["scope"] as string)?.Split(' '))
                                };

                                GetProfile(token);
                            }
                            else
                            {
                                ShowQrRefresh();
                            }
                        }
                        else
                        {
                            //StatusText.text = "扫描二维码失败";
                            ShowQrRefresh();
                        }

                        wait = false;
                        stop = true;
                        StopCheck();
                    },
                    (error, msg) =>
                    {
                        wait = false;

                        if (Json.Deserialize(msg) is Dictionary<string, object> resultDict &&
                            resultDict.ContainsKey("data"))
                        {
                            if (resultDict["data"] is Dictionary<string, object> dataDict &&
                                dataDict.ContainsKey("error"))
                            {
                                var errorMsg = dataDict["error"] as string;

                                // Debug.Log("QRCODE FAIL " + errorMsg);
                                switch (errorMsg)
                                {
                                    case "authorization_pending":
                                        //StatusText.text = "扫码二维码登录";
                                        break;
                                    case "authorization_waiting":
                                        ShowStatus(LoginLanguage.GetCurrentLang().QrnNoticeSuccess(),
                                            LoginLanguage.GetCurrentLang().QrnNoticeSuccess2());
                                        break;
                                    case "access_denied":
                                        ShowStatus(LoginLanguage.GetCurrentLang().QrNoticeCancel(),
                                            LoginLanguage.GetCurrentLang().QrNoticeCancel2());
                                        stop = true;
                                        StopCheck();
                                        GetCode();
                                        break;
                                    case "invalid_grant":
                                        ShowQrRefresh();
                                        stop = true;
                                        StopCheck();
                                        break;
                                    case "slow_down":
                                        break;
                                    default:
                                        ShowQrRefresh();
                                        stop = true;
                                        StopCheck();
                                        break;
                                }

                                return;
                            }
                        }

                        // if false then refresh
                        ShowQrRefresh();
                        stop = true;
                        StopCheck();
                    }
                );
                while (wait)
                {
                    yield return new WaitForSeconds(0.5f);
                }

                ts = DateTime.UtcNow - new DateTime(1970, 1, 1, 0, 0, 0, 0);
                lastCheckAt = Convert.ToInt64(ts.TotalSeconds);
                if (stop) break;
            }
        }

        private void GetProfile(AccessToken accessToken, int timestamp = 0) {
            var havePublicProfile = accessToken.scopeSet != null && accessToken.scopeSet.Contains("public_profile");
            var url = TapTapSdk.CurrentRegion.ProfileUrl(havePublicProfile) + clientId;
            var ts = timestamp;
            if (ts == 0)
            {
                var dt = DateTime.UtcNow - new DateTime(1970, 1, 1);
                ts = (int)dt.TotalSeconds;
            }

            var uri = new Uri(url);
            var sign = "MAC " + GetAuthorizationHeader(accessToken.kid,
                accessToken.macKey,
                accessToken.macAlgorithm,
                "GET",
                uri.PathAndQuery,
                uri.Host,
                "443", ts);

            net.GetAsync(url,
                sign,
                null,
                (result) =>
                {
                    try
                    {
                        var tokenDict = new Dictionary<string, string>
                        {
                            { "kid", accessToken.kid },
                            { "mac_key", accessToken.macKey },
                            { "access_token", accessToken.accessToken },
                            { "token_type", accessToken.tokenType },
                            { "mac_algorithm", accessToken.macAlgorithm },
                            { "scope", string.Join(" ", accessToken.scopeSet) },
                        };

                        if (Json.Deserialize(result) is Dictionary<string, object> resultDict &&
                            resultDict.ContainsKey("success") && (bool)resultDict["success"])
                        {
                            var dataDict = resultDict["data"] as Dictionary<string, object>;
                            var profileStr = Json.Serialize(dataDict);
                            Profile p = new Profile(profileStr);   
                            if (isLogin) {
                                DataStorage.SaveString("taptapsdk_accesstoken", Json.Serialize(tokenDict));
                                DataStorage.SaveString("taptapsdk_profile", profileStr);
                            }
                            OnCallback(UIManager.RESULT_SUCCESS, new Tuple<AccessToken, Profile>(accessToken, p));
                            GetUIManager().Pop();
                        }
                        else
                        {
                            OnCallback(UIManager.RESULT_FAILED, "Get profile error");
                            GetUIManager().Pop();
                        }
                    }
                    catch (Exception)
                    {
                        OnCallback(UIManager.RESULT_FAILED, "Get profile error");
                        GetUIManager().Pop();
                    }
                },
                (error, msg) =>
                {
                    if (timestamp == 0 && !string.IsNullOrEmpty(msg) && msg.Contains("invalid_time") &&
                        msg.Contains("now"))
                    {
                        try
                        {
                            if (!(Json.Deserialize(msg) is Dictionary<string, object> json)) return;
                            var now = (int)(long)json["now"];
                            GetProfile(accessToken, now);

                            return;
                        }
                        catch (Exception)
                        {
                            // ignored
                        }
                    }

                    OnCallback(UIManager.RESULT_FAILED, msg);
                    GetUIManager().Pop();
                });
        }

        private static string GetAuthorizationHeader(string kid,
            string macKey,
            string macAlgorithm,
            string method,
            string uri,
            string host,
            string port,
            int timestamp)
        {
            var nonce = new Random().Next().ToString();

            var normalizedString = $"{timestamp}\n{nonce}\n{method}\n{uri}\n{host}\n{port}\n\n";

            HashAlgorithm hashGenerator;
            switch (macAlgorithm)
            {
                case "hmac-sha-256":
                    hashGenerator = new HMACSHA256(Encoding.ASCII.GetBytes(macKey));
                    break;
                case "hmac-sha-1":
                    hashGenerator = new HMACSHA1(Encoding.ASCII.GetBytes(macKey));
                    break;
                default:
                    throw new InvalidOperationException("Unsupported MAC algorithm");
            }

            var hash = Convert.ToBase64String(hashGenerator.ComputeHash(Encoding.ASCII.GetBytes(normalizedString)));

            var authorizationHeader = new StringBuilder();
            authorizationHeader.AppendFormat(@"id=""{0}"",ts=""{1}"",nonce=""{2}"",mac=""{3}""",
                kid, timestamp, nonce, hash);

            return authorizationHeader.ToString();
        }

        private void ShowQrRefresh()
        {
            RefreshImage.gameObject.SetActive(true);
            SubStatusText.gameObject.SetActive(false);
            StatusText.gameObject.SetActive(false);
        }

        private void ShowStatus(string statusText, string subStatusText)
        {
            StatusText.text = statusText;
            SubStatusText.text = subStatusText;
            if (!string.IsNullOrEmpty(statusText))
            {
                StatusText.gameObject.SetActive(true);
            }

            if (!string.IsNullOrEmpty(subStatusText))
            {
                SubStatusText.gameObject.SetActive(true);
            }
        }

        private static long GetCurrentTime()
        {
            var ts = DateTime.UtcNow - new DateTime(1970, 1, 1, 0, 0, 0, 0);
            return Convert.ToInt64(ts.TotalSeconds);
        }
    }
}