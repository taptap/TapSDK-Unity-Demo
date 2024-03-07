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

        private readonly LoginLangDE de;
        private readonly LoginLangES es;
        private readonly LoginLangFR fr;
        private readonly LoginLangPT pt;
        private readonly LoginLangRU ru;
        private readonly LoginLangTR tr;
        private readonly LoginLangVI vi;

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

            de = new LoginLangDE();
            es = new LoginLangES();
            fr = new LoginLangFR();
            pt = new LoginLangPT();
            ru = new LoginLangRU();
            tr = new LoginLangTR();
            vi = new LoginLangVI();
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
                case TapLanguage.DE:
                    return Instance.de;
                case TapLanguage.ES:
                    return Instance.es;
                case TapLanguage.FR:
                    return Instance.fr;
                case TapLanguage.PT:
                    return Instance.pt;
                case TapLanguage.RU:
                    return Instance.ru;
                case TapLanguage.TR:
                    return Instance.tr;
                case TapLanguage.VI:
                    return Instance.vi;
                default:
                    return Instance.en;
            }
        }
    }

    public class LoginLangZH : ILoginLang {

        public string TitleLogin() {
            return "使用 TapTap 账号登录";
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
            return "授权 TapTap 账号，完成后将自动返回游戏。";
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

        public string LoginNotice() {
            return "已登录账号：{0}";
        }
    }

    public class LoginLangEN : ILoginLang {

        public string TitleLogin() {
            return "Log In with TapTap";
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
            return "You'll be redirected back after login.";
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

        public string LoginNotice() {
            return "Logged-in account: {0}";
        }
    }

    public class LoginLangID : ILoginLang {

        public string TitleLogin() {
            return "Log In dengan TapTap";
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
            return "Kamu akan diarahkan kembali setelah log in.";
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

        public string LoginNotice() {
            return "Akun yang login: {0}";
        }
    }

    public class LoginLangJA : ILoginLang {
        public string TitleLogin() {
            return "TapTapでログイン";
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
            return "ログイン後にリダイレクトされます。";
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
        
        public string LoginNotice() {
            return "ログイン中のアカウント：{0}";
        }
    }

    public class LoginLangKO : ILoginLang {
        public string TitleLogin() {
            return "Taptap으로 로그인";
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
            return "로그인 후에 원래 화면으로 돌아갑니다.";
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

        public string LoginNotice() {
            return "로그인한 계정: {0}";
        }
    }

    public class LoginLangTH : ILoginLang {
        public string TitleLogin() {
            return "ล็อกอินด้วย TapTap";
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
            return "คุณจะถูกเปลี่ยนเส้นทางกลับหลังจากล็อกอิน";
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

        public string LoginNotice() {
            return "บ\u0e31ญช\u0e35ท\u0e35\u0e48ล\u0e47อกอ\u0e34น: {0}";
        }
    }

    public class LoginLangZHTW : ILoginLang {
        public string TitleLogin() {
            return "使用 TapTap 登入";
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
            return "登入後系統會將你重新導回此頁面。";
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

        public string LoginNotice() {
            return "已登入帳號：{0}";
        }
    }

    public class LoginLangDE : ILoginLang {
        public string TitleLogin() {
            return "Anmeldung mit TapTap";
        }

        public string QrTitleLogin() {
            return "Per QR-Code";
        }

        public string QrRefresh() {
            return "Aktualisierung";
        }

        public string QrNoticeUse() {
            return "";
        }

        public string QrNoticeClient() {
            return "";
        }

        public string QrNoticeScanToLogin() {
            return "Scanne den QR-Code\nmit der <color=#14B9C8>\"TapTap\"</color>-App";
        }

        public string WebLogin() {
            return "Per Webbrowser";
        }

        public string WebNotice() {
            return "Du wirst nach der Anmeldung zurückgeleitet.";
        }

        public string WebButtonJumpToWeb() {
            return "Gehe zu TapTap";
        }

        public string QrNoticeCancel() {
            return "Anmeldung fehlgeschlagen";
        }

        public string QrNoticeCancel2() {
            return "Versuche es bitte erneut.";
        }

        public string QrnNoticeSuccess() {
            return "Erfolgreich";
        }

        public string QrnNoticeSuccess2() {
            return "Bitte bestätige die Anmeldung mit deinem Handy.";
        }

        public string WebNoticeLogin() {
            return "Ameldung...";
        }

        public string WebNoticeFail() {
            return "Anmeldung fehlgeschlagen";
        }

        public string WebNoticeFail2() {
            return "Versuche es bitte erneut.";
        }

        public string LoginNotice() {
            return "Eingeloggt Konto: {0}";
        }
    }

    public class LoginLangES : ILoginLang {
        public string TitleLogin() {
            return "Iniciar sesión con TapTap";
        }

        public string QrTitleLogin() {
            return "Mediante código QR";
        }

        public string QrRefresh() {
            return "Actualizar";
        }

        public string QrNoticeUse() {
            return "";
        }

        public string QrNoticeClient() {
            return "";
        }

        public string QrNoticeScanToLogin() {
            return "Escanee el código QR\ncon la aplicación <color=#14B9C8>TapTap</color>";
        }

        public string WebLogin() {
            return "A través del navegador web";
        }

        public string WebNotice() {
            return "Será redirigido de vuelta después de iniciar sesión.";
        }

        public string WebButtonJumpToWeb() {
            return "Ir a TapTap";
        }

        public string QrNoticeCancel() {
            return "Error al iniciar sesión";
        }

        public string QrNoticeCancel2() {
            return "Por favor, inténtelo de nuevo.";
        }

        public string QrnNoticeSuccess() {
            return "Éxito";
        }

        public string QrnNoticeSuccess2() {
            return "Por favor, confirme el inicio de sesión en su teléfono.";
        }

        public string WebNoticeLogin() {
            return "Iniciando sesión...";
        }

        public string WebNoticeFail() {
            return "Error al iniciar sesión";
        }

        public string WebNoticeFail2() {
            return "Por favor, inténtalo de nuevo.";
        }

        public string LoginNotice() {
            return "Cuenta iniciada: {0}";
        }
    }

    public class LoginLangFR : ILoginLang {
        public string TitleLogin() {
            return "Se connecter avec TapTap";
        }

        public string QrTitleLogin() {
            return "Via le Code QR";
        }

        public string QrRefresh() {
            return "Actualisé";
        }

        public string QrNoticeUse() {
            return "";
        }

        public string QrNoticeClient() {
            return "";
        }

        public string QrNoticeScanToLogin() {
            return "Scanner le Code QR\navec l'application <color=#14B9C8>TapTap</color>";
        }

        public string WebLogin() {
            return "Via le Navigateur Web";
        }

        public string WebNotice() {
            return "Vous serez redirigé après la connexion.";
        }

        public string WebButtonJumpToWeb() {
            return "Aller à TapTap";
        }

        public string QrNoticeCancel() {
            return "Échec de connexion";
        }

        public string QrNoticeCancel2() {
            return "Veuillez réessayer.";
        }

        public string QrnNoticeSuccess() {
            return "Réussi";
        }

        public string QrnNoticeSuccess2() {
            return "Veuillez confirmer votre connexion sur votre téléphone.";
        }

        public string WebNoticeLogin() {
            return "Connexion...";
        }

        public string WebNoticeFail() {
            return "Échec de connexion";
        }

        public string WebNoticeFail2() {
            return "Veuillez réessayer.";
        }

        public string LoginNotice() {
            return "Cuenta iniciada: {0}";
        }
    }

    public class LoginLangPT : ILoginLang {
        public string TitleLogin() {
            return "Entrar com TapTap";
        }

        public string QrTitleLogin() {
            return "Via QR Code";
        }

        public string QrRefresh() {
            return "Atualizar";
        }

        public string QrNoticeUse() {
            return "";
        }

        public string QrNoticeClient() {
            return "";
        }

        public string QrNoticeScanToLogin() {
            return "Escaneie o QR code\ncom o aplicativo <color=#14B9C8>TapTap</color>";
        }

        public string WebLogin() {
            return "Através do Navegador da Web";
        }

        public string WebNotice() {
            return "Você será redirecionado de volta após o login.";
        }

        public string WebButtonJumpToWeb() {
            return "Ir para TapTap";
        }

        public string QrNoticeCancel() {
            return "Falha ao fazer login";
        }

        public string QrNoticeCancel2() {
            return "Por favor, tente novamente.";
        }

        public string QrnNoticeSuccess() {
            return "Sucesso";
        }

        public string QrnNoticeSuccess2() {
            return "Por favor, confirme o login no seu telefone.";
        }

        public string WebNoticeLogin() {
            return "Fazendo login...";
        }

        public string WebNoticeFail() {
            return "Falha ao fazer login";
        }

        public string WebNoticeFail2() {
            return "Por favor, tente novamente.";
        }

        public string LoginNotice() {
            return "Conta conectada: {0}";
        }
    }

    public class LoginLangRU : ILoginLang {
        public string TitleLogin() {
            return "Войти с TapTap";
        }

        public string QrTitleLogin() {
            return "Через QR-код";
        }

        public string QrRefresh() {
            return "Обновить";
        }

        public string QrNoticeUse() {
            return "";
        }

        public string QrNoticeClient() {
            return "";
        }

        public string QrNoticeScanToLogin() {
            return "Просканируйте QR-код\nприложением <color=#14B9C8>TapTap</color>";
        }

        public string WebLogin() {
            return "Через браузер";
        }

        public string WebNotice() {
            return "Вы будете перенаправлены после входа.";
        }

        public string WebButtonJumpToWeb() {
            return "Перейти в TapTap";
        }

        public string QrNoticeCancel() {
            return "Не удалось войти";
        }

        public string QrNoticeCancel2() {
            return "Попробуйте снова.";
        }

        public string QrnNoticeSuccess() {
            return "Успешно";
        }

        public string QrnNoticeSuccess2() {
            return "Подтвердите вход на своем телефоне.";
        }

        public string WebNoticeLogin() {
            return "Входите...";
        }

        public string WebNoticeFail() {
            return "Не удалось войти";
        }

        public string WebNoticeFail2() {
            return "Попробуйте снова.";
        }

        public string LoginNotice() {
            return "Залогиненный аккаунт: {0}";
        }
    }

    public class LoginLangTR : ILoginLang {
        public string TitleLogin() {
            return "TapTap ile Giriş Yap";
        }

        public string QrTitleLogin() {
            return "QR Kodu";
        }

        public string QrRefresh() {
            return "Yenile";
        }

        public string QrNoticeUse() {
            return "";
        }

        public string QrNoticeClient() {
            return "uygulamasını kullanarak";
        }

        public string QrNoticeScanToLogin() {
            return "QR kodunu tara";
        }

        public string WebLogin() {
            return "İnternet Tarayıcısı";
        }

        public string WebNotice() {
            return "Girişten sonra yeniden yönlendirileceksiniz.";
        }

        public string WebButtonJumpToWeb() {
            return "TapTap";
        }

        public string QrNoticeCancel() {
            return "Giriş yapılamadı";
        }

        public string QrNoticeCancel2() {
            return "Lütfen tekrar deneyin.";
        }

        public string QrnNoticeSuccess() {
            return "Başarılı";
        }

        public string QrnNoticeSuccess2() {
            return "Lütfen girişi telefonunuzdan onaylayın.";
        }

        public string WebNoticeLogin() {
            return "Giriş yapılıyor…";
        }

        public string WebNoticeFail() {
            return "Giriş yapılamadı";
        }

        public string WebNoticeFail2() {
            return "Lütfen tekrar deneyin.";
        }

        public string LoginNotice() {
            return "Giriş yapılan hesap: {0}";
        }
    }

    public class LoginLangVI : ILoginLang {
        public string TitleLogin() {
            return "Đăng nhập bằn TapTap";
        }

        public string QrTitleLogin() {
            return "Dùng mã QR";
        }

        public string QrRefresh() {
            return "Làm mới";
        }

        public string QrNoticeUse() {
            return "";
        }

        public string QrNoticeClient() {
            return "";
        }

        public string QrNoticeScanToLogin() {
            return "Quét mã QR\nbằng app <color=#14B9C8>TapTap</color>";
        }

        public string WebLogin() {
            return "Dùng Trình duyệt Web";
        }

        public string WebNotice() {
            return "Bạn sẽ tự động quay lại sau khi đăng nhập.";
        }

        public string WebButtonJumpToWeb() {
            return "Đến TapTap";
        }

        public string QrNoticeCancel() {
            return "Đăng nhập thất bại";
        }

        public string QrNoticeCancel2() {
            return "Vui lòng thử lại.";
        }

        public string QrnNoticeSuccess() {
            return "Thành công";
        }

        public string QrnNoticeSuccess2() {
            return "Vui lòng xác nhận đăng nhập trên điện thoại của bạn.";
        }

        public string WebNoticeLogin() {
            return "Đang đăng nhập…";
        }

        public string WebNoticeFail() {
            return "Đăng nhập thất bại";
        }

        public string WebNoticeFail2() {
            return "Vui lòng thử lại.";
        }

        public string LoginNotice() {
            return "Đã đăng nhập tài khoản: {0}";
        }
    }

    public interface ILoginLang
    {
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

        string LoginNotice();
    }
}