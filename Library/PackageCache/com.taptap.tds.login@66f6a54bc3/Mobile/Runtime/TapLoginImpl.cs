using System.Collections.Generic;
using System.Threading.Tasks;
using TapTap.Common;

namespace TapTap.Login.Mobile
{
    public class TapLoginImpl : ITapLogin
    {
        private TapLoginImpl()
        {
            EngineBridge.GetInstance()
                .Register(TapLoginConstants.TAP_LOGIN_SERVICE_CLZ, TapLoginConstants.TAP_LOGIN_SERVICE_IMPL);
        }

        private static volatile TapLoginImpl _sInstance;

        private static readonly object Locker = new object();

        public static TapLoginImpl GetInstance()
        {
            lock (Locker)
            {
                if (_sInstance == null)
                {
                    _sInstance = new TapLoginImpl();
                }
            }

            return _sInstance;
        }

        public void Init(string clientID)
        {
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(TapLoginConstants.TAP_LOGIN_SERVICE)
                .Method("init")
                .Args("clientID", clientID)
                .CommandBuilder());
        }

        public void Init(string clientID, bool isCn, bool roundCorner)
        {
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(TapLoginConstants.TAP_LOGIN_SERVICE)
                .Method("initWithClientID")
                .Args("clientID", clientID)
                .Args("regionType", isCn)
                .Args("roundCorner", roundCorner)
                .CommandBuilder());
        }

        public void ChangeConfig(bool roundCorner, bool isPortrait)
        {
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(TapLoginConstants.TAP_LOGIN_SERVICE)
                .Method("changeConfig")
                .Args("roundCorner", roundCorner)
                .Args("isPortrait", isPortrait)
                .CommandBuilder());
        }


        public async Task<Profile> FetchProfile()
        {
            var command = new Command.Builder()
                .Service(TapLoginConstants.TAP_LOGIN_SERVICE)
                .Method("fetchProfileForCurrentAccessToken")
                .Callback(true)
                .OnceTime(true)
                .CommandBuilder();
            var result = await EngineBridge.GetInstance().Emit(command);
            if (!EngineBridge.CheckResult(result))
            {
                throw new TapException((int)TapErrorCode.ERROR_CODE_BRIDGE_EXECUTE, "TapSDK fetchProfile Failed!");
            }

            var loginWrapper = new TapLoginWrapper(result.content);
            if (loginWrapper.LoginCallbackCode == 0)
            {
                return new Profile(loginWrapper.Wrapper);
            }

            throw new TapException((int)TapErrorCode.ERROR_CODE_BRIDGE_EXECUTE, loginWrapper.Wrapper);
        }

        public async Task<Profile> GetProfile()
        {
            var command = new Command.Builder()
                .Service(TapLoginConstants.TAP_LOGIN_SERVICE)
                .Method("currentProfile")
                .Callback(true)
                .OnceTime(true)
                .CommandBuilder();
            var result = await EngineBridge.GetInstance().Emit(command);
            if (!EngineBridge.CheckResult(result))
            {
                throw new TapException((int)TapErrorCode.ERROR_CODE_BRIDGE_EXECUTE, "TapSDK GetProfile Failed!");
            }

            return new Profile(result.content);
        }

        public async Task<AccessToken> GetAccessToken()
        {
            var command = new Command.Builder()
                .Service(TapLoginConstants.TAP_LOGIN_SERVICE)
                .Method("currentAccessToken")
                .Callback(true)
                .OnceTime(true)
                .CommandBuilder();

            var result = await EngineBridge.GetInstance().Emit(command);

            if (!EngineBridge.CheckResult(result))
            {
                throw new TapException((int)TapErrorCode.ERROR_CODE_BRIDGE_EXECUTE, "TapSDK GetAccessToken Failed!");
            }

            return new AccessToken(result.content);
        }

        public void AppendPermission(string permission) {
            // TODO@luran
            // var command = new Command.Builder()
            //     .Service(TapLoginConstants.TAP_LOGIN_SERVICE)
            //     .Method("appendPermission")
            //     .Args("permission", permission)
            //     .CommandBuilder();

            // EngineBridge.GetInstance().CallHandler(command);
        }

        public async Task<AccessToken> Login()
        {
            var tcs = new TaskCompletionSource<AccessToken>();
            RegisterLoginCallback(tcs);
            StartLogin(new[] { TapLogin.TAP_LOGIN_SCOPE_PUBLIC_PROFILE });
            return await tcs.Task;
        }

        public async Task<AccessToken> Login(string[] permissions)
        {
            var tcs = new TaskCompletionSource<AccessToken>();
            RegisterLoginCallback(tcs);
            StartLogin(permissions);
            return await tcs.Task;
        }

        public void Logout()
        {
            var command = new Command.Builder()
                .Service(TapLoginConstants.TAP_LOGIN_SERVICE)
                .Method("logout")
                .CommandBuilder();

            EngineBridge.GetInstance().CallHandler(command);
        }

        public async Task<bool> GetTestQualification()
        {
            var command = new Command.Builder()
                .Service(TapLoginConstants.TAP_LOGIN_SERVICE)
                .Method("getTestQualification")
                .Callback(true)
                .OnceTime(true)
                .CommandBuilder();

            var result = await EngineBridge.GetInstance().Emit(command);

            if (!EngineBridge.CheckResult(result))
            {
                throw new TapException((int)TapErrorCode.ERROR_CODE_BRIDGE_EXECUTE,
                    "TapSDK GetTestQualification Failed!");
            }

            var dic = Json.Deserialize(result.content) as Dictionary<string, object>;
            var testQualification = SafeDictionary.GetValue<int>(dic, "userTestQualification");
            return testQualification == 1;
        }

        private static void StartLogin(string[] permissions)
        {
            var command = new Command.Builder()
                .Service(TapLoginConstants.TAP_LOGIN_SERVICE)
                .Method("startTapLogin")
                .Args("permissions", permissions)
                .CommandBuilder();
            EngineBridge.GetInstance().CallHandler(command);
        }


        private static void RegisterLoginCallback(TaskCompletionSource<AccessToken> tcs)
        {
            var command = new Command.Builder()
                .Service(TapLoginConstants.TAP_LOGIN_SERVICE)
                .Method("registerLoginCallback")
                .Callback(true)
                .OnceTime(false)
                .CommandBuilder();

            EngineBridge.GetInstance().CallHandler(command, result =>
            {
                if (!EngineBridge.CheckResult(result))
                {
                    tcs.TrySetException(new TapException((int)TapErrorCode.ERROR_CODE_BRIDGE_EXECUTE,
                        "TapSDK Login Failed!"));
                    return;
                }

                var wrapper = new TapLoginWrapper(result.content);

                switch (wrapper.LoginCallbackCode)
                {
                    case 0:
                        var accessToken = new AccessToken(wrapper.Wrapper);
                        tcs.TrySetResult(accessToken);
                        break;
                    case 1:
                        tcs.TrySetException(new TapException((int)TapErrorCode.ERROR_CODE_BIND_CANCEL,
                            "Login Cancel"));
                        break;
                    default:
                        var tapError = TapError.SafeConstructorTapError(wrapper.Wrapper);
                        tcs.TrySetException(new TapException(tapError.code,
                            tapError.errorDescription));
                        break;
                }

                UnRegisterLoginCallback();
            });
        }

        private static void UnRegisterLoginCallback()
        {
            var command = new Command.Builder()
                .Service(TapLoginConstants.TAP_LOGIN_SERVICE)
                .Method("unregisterLoginCallback")
                .CommandBuilder();
            EngineBridge.GetInstance().CallHandler(command);
        }
    }
}