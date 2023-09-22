using TapTap.Common;

namespace TapTap.Login.Internal
{
    public class LoginLanguage
    {
        private static volatile LoginLanguage _instance;
        private static readonly object ObjLock = new object();
        private readonly LoginLangZH zh;
        private readonly LoginLangEN en;
        private readonly LoginLangID id;
        private readonly LoginLangJA ja;
        private readonly LoginLangKO ko;
        private readonly LoginLangTH th;
        private readonly LoginLangZHTW tw;

        private static LoginLanguage Instance
        {
            get
            {
                if (_instance != null) return _instance;
                lock (ObjLock)
                {
                    if (_instance == null)
                    {
                        _instance = new LoginLanguage();
                    }
                }

                return _instance;
            }
        }

        private LoginLanguage()
        {
            zh = new LoginLangZH();
            en = new LoginLangEN();
            id = new LoginLangID();
            ja = new LoginLangJA();
            ko = new LoginLangKO();
            th = new LoginLangTH();
            tw = new LoginLangZHTW();
        }

        public static ILoginLang GetCurrentLang()
        {
            switch (TapLocalizeManager.GetCurrentLanguage())
            {
                case TapLanguage.ZH_HANS:
                    return Instance.zh;
                case TapLanguage.EN:
                    return Instance.en;
                case TapLanguage.ID:
                    return Instance.id;
                case TapLanguage.JA:
                    return Instance.ja;
                case TapLanguage.KO:
                    return Instance.ko;
                case TapLanguage.TH:
                    return Instance.th;
                case TapLanguage.ZH_HANT:
                    return Instance.tw;
                default:
                    return Instance.en;
            }
        }
    }

    public class LoginLangZH : ILoginLang {
        public string TitleUse() {
            return "使用";
        }

        public string TitleLogin() {
            return "账号登录";
        }

        public string QrTitleLogin() {
            return "安全扫码登录";
        }

        public string QrRefresh() {
            return "点击刷新";
        }

        public string QrNoticeUse() {
            return "请使用";
        }

        public string QrNoticeClient() {
            return "客户端";
        }

        public string QrNoticeScanToLogin() {
            return "扫描二维码登录";
        }

        public string WebLogin() {
            return "使用网页浏览器完成授权";
        }

        public string WebNotice() {
            return "点击下方按钮前往网页浏览器，\n授权 TapTap 账号，完成后将自动返回游戏。";
        }

        public string WebButtonJumpToWeb() {
            return "跳转至 TapTap";
        }

        public string QrNoticeCancel() {
            return "您已取消此次登录";
        }

        public string QrNoticeCancel2() {
            return "请重新扫码";
        }

        public string QrnNoticeSuccess() {
            return "扫码成功";
        }

        public string QrnNoticeSuccess2() {
            return "请在手机上确认";
        }

        public string WebNoticeLogin() {
            return "正在登录中，请稍后";
        }

        public string WebNoticeFail() {
            return "登录失败";
        }

        public string WebNoticeFail2() {
            return "请重新点击打开网页进行授权";
        }
    }

    public class LoginLangEN : ILoginLang {
        public string TitleUse() {
            return "Log In with";
        }

        public string TitleLogin() {
            return "";
        }

        public string QrTitleLogin() {
            return "Via QR Code";
        }

        public string QrRefresh() {
            return "Refresh";
        }

        public string QrNoticeUse() {
            return "Use";
        }

        public string QrNoticeClient() {
            return "App";
        }

        public string QrNoticeScanToLogin() {
            return "to scan the code";
        }

        public string WebLogin() {
            return "Via Web Browser";
        }

        public string WebNotice() {
            return "Allow permission to log in with TapTap,\nYou'll be redirected back after login.";
        }

        public string WebButtonJumpToWeb() {
            return "Go to TapTap";
        }

        public string QrNoticeCancel() {
            return "Failed to log in";
        }

        public string QrNoticeCancel2() {
            return "Please try again";
        }

        public string QrnNoticeSuccess() {
            return "Success";
        }

        public string QrnNoticeSuccess2() {
            return "Please confirm login on your phone";
        }

        public string WebNoticeLogin() {
            return "Logging in";
        }

        public string WebNoticeFail() {
            return "Failed to log in";
        }

        public string WebNoticeFail2() {
            return "Please try again";
        }
    }

    public class LoginLangID : ILoginLang {
        public string TitleUse() {
            return "Log In dengan ";
        }

        public string TitleLogin() {
            return "";
        }

        public string QrTitleLogin() {
            return "Melalui Kode QR";
        }

        public string QrRefresh() {
            return "Refresh";
        }

        public string QrNoticeUse() {
            return "";
        }

        public string QrNoticeClient() {
            return "";
        }

        public string QrNoticeScanToLogin() {
            return "Pindai kode QR \n dengan apliaksi <color=#14B9C8>TapTap</color>";
        }

        public string WebLogin() {
            return "Melalui Browser Web";
        }

        public string WebNotice() {
            return "Berikan izin untuk log in dengan TapTap. \nKamu akan diarahkan kembali setelah log in.";
        }

        public string WebButtonJumpToWeb() {
            return "Buka TapTap";
        }

        public string QrNoticeCancel() {
            return "Gagal log in";
        }

        public string QrNoticeCancel2() {
            return "Silakan coba lagi.";
        }

        public string QrnNoticeSuccess() {
            return "Berhasil";
        }

        public string QrnNoticeSuccess2() {
            return "Silakan konfirmasi log in di ponselmu.";
        }

        public string WebNoticeLogin() {
            return "Sedang log in...";
        }

        public string WebNoticeFail() {
            return "Gagal log in";
        }

        public string WebNoticeFail2() {
            return "Silakan coba lagi.";
        }
    }

    public class LoginLangJA : ILoginLang {
        public string TitleUse() {
            return "";
        }

        public string TitleLogin() {
            return "でログイン";
        }

        public string QrTitleLogin() {
            return "QRコードを使う";
        }

        public string QrRefresh() {
            return "更新";
        }

        public string QrNoticeUse() {
            return "";
        }

        public string QrNoticeClient() {
            return "アプリで";
        }

        public string QrNoticeScanToLogin() {
            return "QRコードをスキャン";
        }

        public string WebLogin() {
            return "ウェブブラウザを使う";
        }

        public string WebNotice() {
            return "TapTapへのログインを許可します。\nログイン後にリダイレクトされます。";
        }

        public string WebButtonJumpToWeb() {
            return "TapTapを開く";
        }

        public string QrNoticeCancel() {
            return "ログインに失敗しました";
        }

        public string QrNoticeCancel2() {
            return "もう一度お試しください。";
        }

        public string QrnNoticeSuccess() {
            return "成功";
        }

        public string QrnNoticeSuccess2() {
            return "お使いの携帯電話でログインを確認してください。";
        }

        public string WebNoticeLogin() {
            return "ログイン中…";
        }

        public string WebNoticeFail() {
            return "ログインに失敗しました";
        }

        public string WebNoticeFail2() {
            return "もう一度お試しください。";
        }
    }

    public class LoginLangKO : ILoginLang {
        public string TitleUse() {
            return "";
        }

        public string TitleLogin() {
            return "으로 로그인";
        }

        public string QrTitleLogin() {
            return "QR 코드 사용";
        }

        public string QrRefresh() {
            return "새로 고치기";
        }

        public string QrNoticeUse() {
            return "";
        }

        public string QrNoticeClient() {
            return "앱으로";
        }

        public string QrNoticeScanToLogin() {
            return "QR 코드를 스캔하세요";
        }

        public string WebLogin() {
            return "웹 브라우저 사용";
        }

        public string WebNotice() {
            return "Taptap으로 로그인하는 권한을 허락하세요.\n로그인 후에 원래 화면으로 돌아갑니다.";
        }

        public string WebButtonJumpToWeb() {
            return "Taptap으로 이동";
        }

        public string QrNoticeCancel() {
            return "로그인 실패";
        }

        public string QrNoticeCancel2() {
            return "다시 시도하세요.";
        }

        public string QrnNoticeSuccess() {
            return "성공";
        }

        public string QrnNoticeSuccess2() {
            return "스마트폰에서 로그인을 확인하세요.";
        }

        public string WebNoticeLogin() {
            return "로그인 중...";
        }

        public string WebNoticeFail() {
            return "로그인 실패";
        }

        public string WebNoticeFail2() {
            return "다시 시도하세요.";
        }
    }

    public class LoginLangTH : ILoginLang {
        public string TitleUse() {
            return "ล็อกอินด้วย ";
        }

        public string TitleLogin() {
            return "";
        }

        public string QrTitleLogin() {
            return "ผ่าน QR โค้ด";
        }

        public string QrRefresh() {
            return "รีเฟรช";
        }

        public string QrNoticeUse() {
            return "";
        }

        public string QrNoticeClient() {
            return "";
        }

        public string QrNoticeScanToLogin() {
            return "สแกน QR โค้ด \n ด้วยแอป <color=#14B9C8>TapTap</color>";
        }

        public string WebLogin() {
            return "ผ่านเว็บเบราว์เซอร์";
        }

        public string WebNotice() {
            return "อนุญาตให้ล็อกอินด้วย TapTap \nคุณจะถูกเปลี่ยนเส้นทางกลับหลังจากล็อกอิน";
        }

        public string WebButtonJumpToWeb() {
            return "ไปที่ TapTap";
        }

        public string QrNoticeCancel() {
            return "ไม่สามารถล็อกอินได้";
        }

        public string QrNoticeCancel2() {
            return "โปรดลองอีกครั้ง";
        }

        public string QrnNoticeSuccess() {
            return "สำเร็จ";
        }

        public string QrnNoticeSuccess2() {
            return "โปรดยืนยันการล็อกอินบนโทรศัพท์ของคุณ";
        }

        public string WebNoticeLogin() {
            return "กำลังล็อกอิน...";
        }

        public string WebNoticeFail() {
            return "ไม่สามารถล็อกอินได้";
        }

        public string WebNoticeFail2() {
            return "โปรดลองอีกครั้ง";
        }
    }

    public class LoginLangZHTW : ILoginLang {
        public string TitleUse() {
            return "使用";
        }

        public string TitleLogin() {
            return "登入";
        }

        public string QrTitleLogin() {
            return "透過 QR 碼";
        }

        public string QrRefresh() {
            return "重新整理";
        }

        public string QrNoticeUse() {
            return "使用";
        }

        public string QrNoticeClient() {
            return "應用程式";
        }

        public string QrNoticeScanToLogin() {
            return "掃描 QR 碼";
        }

        public string WebLogin() {
            return "透過網路瀏覽器";
        }

        public string WebNotice() {
            return "請允許使用 TapTap 登入。\n登入後系統會將你重新導回此頁面。";
        }

        public string WebButtonJumpToWeb() {
            return "前往 TapTap";
        }

        public string QrNoticeCancel() {
            return "登入失敗";
        }

        public string QrNoticeCancel2() {
            return "請再試一次。";
        }

        public string QrnNoticeSuccess() {
            return "成功";
        }

        public string QrnNoticeSuccess2() {
            return "請在您的手機上確認登入。";
        }

        public string WebNoticeLogin() {
            return "正在登入……";
        }

        public string WebNoticeFail() {
            return "登入失敗";
        }

        public string WebNoticeFail2() {
            return "請再試一次。";
        }
    }

    public interface ILoginLang
    {
        string TitleUse();

        string TitleLogin();

        string QrTitleLogin();

        string QrRefresh();

        string QrNoticeUse();

        string QrNoticeClient();

        string QrNoticeScanToLogin();

        string WebLogin();

        string WebNotice();

        string WebButtonJumpToWeb();

        string QrNoticeCancel();

        string QrNoticeCancel2();

        string QrnNoticeSuccess();
        string QrnNoticeSuccess2();

        string WebNoticeLogin();

        string WebNoticeFail();

        string WebNoticeFail2();
    }
}