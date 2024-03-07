using System;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;
using TapTap.Login.Internal.Http;
using TapTap.Common;
using TapTap.Common.Internal.Utils;
using UnityEngine.EventSystems;

namespace TapTap.Login.Internal {
    public class QRCodeController {
        private readonly static string DEMO_IMAGE_CN_HOST = "https://sdk-assets.tds1.tapfiles.cn";
        private readonly static string DEMO_IMAGE_URL_IOS_ZH = $"{DEMO_IMAGE_CN_HOST}/scan-guide/ios.png";
        private readonly static string DEMO_IMAGE_URL_ANDROID_ZH = $"{DEMO_IMAGE_CN_HOST}/scan-guide/android.png";

        private readonly static string DEMO_IMAGE_IO_HOST = "https://sdk-assets.ap-sg.tdsfiles.com";
        private readonly static string DEMO_IMAGE_URL_IOS_EN = $"{DEMO_IMAGE_IO_HOST}/scan-guide/ios.png";
        private readonly static string DEMO_IMAGE_URL_ANDROID_EN = $"{DEMO_IMAGE_IO_HOST}/scan-guide/android.png";

        private readonly static string DEFAULT_IOS_CLIENT = "Sprites/taptap-login-ios-client";
        private readonly static string DEFAULT_ANDROID_CLIENT = "Sprites/taptap-login-android-client";

        private readonly static string AUTH_PENDING = "authorization_pending";
        private readonly static string AUTH_WAITING = "authorization_waiting";
        private readonly static string AUTH_DENIED = "access_denied";
        private readonly static string AUTH_SUCCESS = "";

        private readonly Action<TokenData> onAuth;

        private readonly Text titleText;
        private readonly RawImage qrcodeImage;
        private readonly Text tipsText;
        private readonly GameObject scanTips;
        private readonly RawImage demoImage;

        private readonly Button refreshButton;

        private bool isRunning;
        private QRCodeData qrcodeData;

        private string clientId;
        private string[] permissions;

        public QRCodeController(Transform transform, Action<TokenData> onAuth) {
            this.onAuth = onAuth;

            titleText = transform.Find("Title").GetComponent<Text>();
            qrcodeImage = transform.Find("QRCode/Image").GetComponent<RawImage>();
            tipsText = transform.Find("Tips").GetComponent<Text>();

            ClientButtonListener iOSButtonListener = transform.Find("Clients/iOSButton").GetComponent<ClientButtonListener>();
            iOSButtonListener.GetComponent<Button>().onClick.AddListener(() => {
                EventSystem.current.SetSelectedGameObject(null);
            });
            iOSButtonListener.OnMouseEnter = OnShowIOSDemoImage;
            iOSButtonListener.OnMouseExit = OnCloseDemoImage;
            ClientButtonListener androidButtonListener = transform.Find("Clients/AndroidButton").GetComponent<ClientButtonListener>();
            androidButtonListener.OnMouseEnter = OnShowAndroidDemoImage;
            androidButtonListener.OnMouseExit = OnCloseDemoImage;
            androidButtonListener.GetComponent<Button>().onClick.AddListener(() => {
                EventSystem.current.SetSelectedGameObject(null);
            });

            scanTips = transform.Find("ScanTips").gameObject;
            demoImage = scanTips.transform.Find("DemoImage").GetComponent<RawImage>();
            scanTips.SetActive(false);

            refreshButton = transform.Find("QRCode/RefreshButton").GetComponent<Button>();
        }

        public void Load(string clientId, string[] permissions) {
            this.clientId = clientId;
            this.permissions = permissions;

            ILoginLang lang = LoginLanguage.GetCurrentLang();
            titleText.text = lang.QrTitleLogin();
            tipsText.text = $"{lang.QrNoticeUse()} <b>TapTap</b> {lang.QrNoticeClient()}{lang.QrNoticeScanToLogin()}";

            // 加载二维码
            _ = RefreshQRCode(clientId, permissions);
        }

        public void Unload() {
            isRunning = false;
        }

        private async Task RefreshQRCode(string clientId, string[] permissions) {
            try {
                refreshButton.gameObject.SetActive(false);
                qrcodeData = await LoginService.GetQRCodeUrl(clientId, permissions);
                qrcodeImage.texture = QRCodeUtils.EncodeQrImage(qrcodeData.Url, 320, 320);

                // 加载二维码完成后再开启监听
                _ = ListenScanQRCode(clientId);

                await Task.Delay(qrcodeData.ExpiresIn * 1000);

                // 过期暂停监听
                isRunning = false;
                ShowRefreshQRCode();
            } catch (Exception) {
                // 加载失败
                ShowRefreshQRCode();
                return;
            }
        }

        private async Task ListenScanQRCode(string clientId) {
            isRunning = true;
            while (isRunning) {
                if (qrcodeData == null) {
                    await Task.Delay(3 * 1000);
                } else {
                    try {
                        TokenData tokenData = await LoginService.RequestScanQRCodeResult(clientId, qrcodeData.DeviceCode);
                        onAuth.Invoke(tokenData);
                        
                        return ;
                    } catch (TapException e) {
                        ILoginLang lang = LoginLanguage.GetCurrentLang();
                        if (e.Message == AUTH_PENDING) {

                        } else if (e.Message == AUTH_WAITING) {
                            UI.UIManager.Instance.OpenToast(true, 
                                $"{lang.QrnNoticeSuccess()}，{lang.QrnNoticeSuccess2()}",
                                icon: UI.UIManager.WhiteToastSuccessIcon);
                        } else if (e.Message == AUTH_DENIED) {
                            UI.UIManager.Instance.OpenToast(true, 
                                $"{lang.QrNoticeCancel()}，{lang.QrNoticeCancel2()}",
                                icon: UI.UIManager.WhiteToastErrorIcon);
                            ShowRefreshQRCode();
                        }
                        await Task.Delay(qrcodeData.Interval * 1000);
                    } catch (Exception) {
                        await Task.Delay(qrcodeData.Interval * 1000);
                    }
                }
            }
        }

        private void OnShowIOSDemoImage() {
            string url = DEMO_IMAGE_URL_IOS_ZH;
            if (TapCommon.Config != null && TapCommon.Config.RegionType == RegionType.IO) {
                url = DEMO_IMAGE_URL_IOS_EN;
            }
            ShowDemoImage(url);
        }

        private void OnShowAndroidDemoImage() {
            string url = DEMO_IMAGE_URL_ANDROID_ZH;
            if (TapCommon.Config != null && TapCommon.Config.RegionType == RegionType.IO) {
                url = DEMO_IMAGE_URL_ANDROID_EN;
            }
            ShowDemoImage(url);
        }

        private async void ShowDemoImage(string url) {
            demoImage.texture = null;
            scanTips.SetActive(true);
            try {
                demoImage.texture = await ImageUtils.LoadImage(url);
            } catch (Exception) {
                demoImage.texture = null;
            }
        }

        private void OnCloseDemoImage() {
            scanTips.SetActive(false);
        }

        private void ShowRefreshQRCode() {
            qrcodeImage.texture = null;
            refreshButton.gameObject.SetActive(true);
            refreshButton.onClick.RemoveAllListeners();
            refreshButton.onClick.AddListener(() => {
                _ = RefreshQRCode(clientId, permissions);
            });
        }
    }
}
