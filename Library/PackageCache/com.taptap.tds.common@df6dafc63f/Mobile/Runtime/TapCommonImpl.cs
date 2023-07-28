using System;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Reflection;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using UnityEngine;
using LC.Newtonsoft.Json;
using TapTap.Common.Internal.Http;

namespace TapTap.Common
{
    public class TapCommonImpl : ITapCommon
    {
        private static readonly string TAP_COMMON_SERVICE = "TDSCommonService";

        private readonly AndroidJavaObject _proxyServiceImpl;

        private readonly ConcurrentDictionary<string, ITapPropertiesProxy> _propertiesProxies;

        public TapHttpClient HttpClient {
            get; private set;
        }

        private TapCommonImpl()
        {
            EngineBridge.GetInstance().Register("com.tds.common.wrapper.TDSCommonService",
                "com.tds.common.wrapper.TDSCommonServiceImpl");

            _proxyServiceImpl = new AndroidJavaObject("com.tds.common.wrapper.TDSCommonServiceImpl");

            _propertiesProxies = new ConcurrentDictionary<string, ITapPropertiesProxy>();
        }

        private static volatile TapCommonImpl _sInstance;

        private static readonly object Locker = new object();

        public static TapCommonImpl GetInstance()
        {
            lock (Locker)
            {
                if (_sInstance == null)
                {
                    _sInstance = new TapCommonImpl();
                }
            }

            return _sInstance;
        }

        public void Init(TapConfig config)
        {
            var command = new Command.Builder()
                .Service(TAP_COMMON_SERVICE)
                .Method("initWithConfig")
                .Args("initWithConfig", JsonConvert.SerializeObject(config.ToDict()))
                .Args("versionName", Assembly.GetExecutingAssembly().GetName().Version.ToString()).CommandBuilder();

            EngineBridge.GetInstance().CallHandler(command);

            HttpClient = new TapHttpClient(config.ClientID, config.ClientToken, config.ServerURL);
        }

        public void SetXua()
        {
            try
            {
                var xua = new Dictionary<string, string>
                {
                    {Constants.VersionKey, Assembly.GetExecutingAssembly().GetName().Version.ToString()},
                    {Constants.PlatformKey, "Unity"}
                };

                var command = new Command.Builder()
                    .Service(TAP_COMMON_SERVICE)
                    .Method("setXUA")
                    .Args("setXUA", Json.Serialize(xua)).CommandBuilder();

                EngineBridge.GetInstance().CallHandler(command);
            }
            catch (Exception e)
            {
                Debug.Log($"exception:{e}");
            }
        }

        public void GetRegionCode(Action<bool> callback)
        {
            var command = new Command.Builder()
                .Service(TAP_COMMON_SERVICE)
                .Method("getRegionCode").Callback(true)
                .OnceTime(true)
                .CommandBuilder();
            EngineBridge.GetInstance().CallHandler(command, (result) =>
            {
                if (result.code != Result.RESULT_SUCCESS)
                {
                    return;
                }

                if (string.IsNullOrEmpty(result.content))
                {
                    return;
                }

                var wrapper = new CommonRegionWrapper(result.content);
                callback(wrapper.isMainland);
            });
        }

        public void IsTapTapInstalled(Action<bool> callback)
        {
            var command = new Command.Builder()
                .Service(TAP_COMMON_SERVICE)
                .Method("isTapTapInstalled")
                .Callback(true)
                .OnceTime(true)
                .CommandBuilder();

            EngineBridge.GetInstance().CallHandler(command, (result) =>
            {
                if (result.code != Result.RESULT_SUCCESS)
                {
                    callback(false);
                    return;
                }

                if (string.IsNullOrEmpty(result.content))
                {
                    callback(false);
                    return;
                }

                var dlc = Json.Deserialize(result.content) as Dictionary<string, object>;
                callback(SafeDictionary.GetValue<bool>(dlc, "isTapTapInstalled"));
            });
        }

        public void IsTapTapGlobalInstalled(Action<bool> callback)
        {
            var command = new Command.Builder()
                .Service(TAP_COMMON_SERVICE)
                .Method("isTapGlobalInstalled")
                .Callback(true)
                .OnceTime(true)
                .CommandBuilder();

            EngineBridge.GetInstance().CallHandler(command, (result) =>
            {
                if (result.code != Result.RESULT_SUCCESS)
                {
                    callback(false);
                    return;
                }

                if (string.IsNullOrEmpty(result.content))
                {
                    callback(false);
                    return;
                }

                var dlc = Json.Deserialize(result.content) as Dictionary<string, object>;
                callback(SafeDictionary.GetValue<bool>(dlc, "isTapGlobalInstalled"));
            });
        }

        public void UpdateGameInTapTap(string appId, Action<bool> callback)
        {
            var command = new Command.Builder()
                .Service(TAP_COMMON_SERVICE)
                .Method("updateGameInTapTap")
                .Args("appId", appId)
                .Callback(true)
                .OnceTime(true)
                .CommandBuilder();

            EngineBridge.GetInstance().CallHandler(command, (result) =>
            {
                if (result.code != Result.RESULT_SUCCESS)
                {
                    callback(false);
                    return;
                }

                if (string.IsNullOrEmpty(result.content))
                {
                    callback(false);
                    return;
                }

                var dlc = Json.Deserialize(result.content) as Dictionary<string, object>;
                callback(SafeDictionary.GetValue<bool>(dlc, "updateGameInTapTap"));
            });
        }

        public void UpdateGameInTapGlobal(string appId, Action<bool> callback)
        {
            var command = new Command.Builder()
                .Service(TAP_COMMON_SERVICE)
                .Method("updateGameInTapGlobal")
                .Args("appId", appId)
                .Callback(true)
                .OnceTime(true)
                .CommandBuilder();

            EngineBridge.GetInstance().CallHandler(command, result =>
            {
                if (result.code != Result.RESULT_SUCCESS)
                {
                    callback(false);
                    return;
                }

                if (string.IsNullOrEmpty(result.content))
                {
                    callback(false);
                    return;
                }

                var dlc = Json.Deserialize(result.content) as Dictionary<string, object>;
                callback(SafeDictionary.GetValue<bool>(dlc, "updateGameInTapGlobal"));
            });
        }

        public void OpenReviewInTapTap(string appId, Action<bool> callback)
        {
            var command = new Command.Builder()
                .Service(TAP_COMMON_SERVICE)
                .Method("openReviewInTapTap")
                .Args("appId", appId)
                .Callback(true)
                .OnceTime(true)
                .CommandBuilder();

            EngineBridge.GetInstance().CallHandler(command, result =>
            {
                if (result.code != Result.RESULT_SUCCESS)
                {
                    callback(false);
                    return;
                }

                if (string.IsNullOrEmpty(result.content))
                {
                    callback(false);
                    return;
                }

                var dlc = Json.Deserialize(result.content) as Dictionary<string, object>;
                callback(SafeDictionary.GetValue<bool>(dlc, "openReviewInTapTap"));
            });
        }

        public void OpenReviewInTapGlobal(string appId, Action<bool> callback)
        {
            var command = new Command.Builder()
                .Service(TAP_COMMON_SERVICE)
                .Method("openReviewInTapGlobal")
                .Args("appId", appId)
                .Callback(true)
                .OnceTime(true)
                .CommandBuilder();

            EngineBridge.GetInstance().CallHandler(command, result =>
            {
                if (result.code != Result.RESULT_SUCCESS)
                {
                    callback(false);
                    return;
                }

                if (string.IsNullOrEmpty(result.content))
                {
                    callback(false);
                    return;
                }

                var dlc = Json.Deserialize(result.content) as Dictionary<string, object>;
                callback(SafeDictionary.GetValue<bool>(dlc, "openReviewInTapGlobal"));
            });
        }

        public void SetLanguage(TapLanguage language)
        {
            var command = new Command.Builder()
                .Service(TAP_COMMON_SERVICE)
                .Method("setPreferredLanguage")
                .Args("preferredLanguage", (int) language)
                .CommandBuilder();

            EngineBridge.GetInstance().CallHandler(command);
        }


        public void RegisterProperties(string key, ITapPropertiesProxy proxy)
        {
            if (Platform.IsAndroid())
            {
                _proxyServiceImpl?.Call("registerProperties", key, new TapPropertiesProxy(proxy));
            }
            else if (Platform.IsIOS())
            {
#if UNITY_IOS
                if (_propertiesProxies.TryAdd(key, proxy))
                {
                    Debug.Log($"register Properties:{Json.Serialize(_propertiesProxies)}");
                    registerProperties(key, TapPropertiesDelegateProxy);
                }
#endif
            }

            Debug.Log($"registerProperty:{key == null} value:{proxy == null}");
        }

#if UNITY_IOS
        private delegate string TapPropertiesDelegate(string key);

        [AOT.MonoPInvokeCallbackAttribute(typeof(TapPropertiesDelegate))]
        private static string TapPropertiesDelegateProxy(string key)
        {
            Debug.Log($"key:{key}  register Properties:{Json.Serialize(_sInstance._propertiesProxies)}");
            var proxy = _sInstance._propertiesProxies[key];
            return proxy?.GetProperties();
        }

        [DllImport("__Internal")]
        private static extern void registerProperties(string key, TapPropertiesDelegate propertiesDelegate);
#endif


        public void AddHost(string host, string replaceHost)
        {
            var command = new Command.Builder()
                .Service(TAP_COMMON_SERVICE)
                .Method("addReplacedHostPair")
                .Args("hostToBeReplaced", host)
                .Args("replacedHost", replaceHost)
                .CommandBuilder();

            EngineBridge.GetInstance().CallHandler(command);
        }

        private static void CheckPlatformSupport()
        {
            if (Platform.IsIOS())
            {
                throw new TapException(-1, "iOS Platform dont support current func");
            }
        }

        private static void CheckResult(Result result)
        {
            if (!EngineBridge.CheckResult(result))
            {
                throw new TapException(-1, $"TapBridge dont support this Command:{result.message}");
            }
        }

        public async Task<bool> UpdateGameAndFailToWebInTapTap(string appId)
        {
            CheckPlatformSupport();
            var command = new Command.Builder()
                .Service(TAP_COMMON_SERVICE)
                .Method("updateGameAndFailToWebInTapTap")
                .Args("appId", appId)
                .Callback(true)
                .OnceTime(true)
                .CommandBuilder();

            var result = await EngineBridge.GetInstance().Emit(command);
            CheckResult(result);
            var dic = Json.Deserialize(result.content) as Dictionary<string, object>;
            return SafeDictionary.GetValue<bool>(dic, "result");
        }

        public async Task<bool> UpdateGameAndFailToWebInTapGlobal(string appId)
        {
            CheckPlatformSupport();
            var command = new Command.Builder()
                .Service(TAP_COMMON_SERVICE)
                .Method("updateGameAndFailToWebInTapGlobal")
                .Args("appId", appId)
                .Callback(true)
                .OnceTime(true)
                .CommandBuilder();

            var result = await EngineBridge.GetInstance().Emit(command);
            CheckResult(result);
            var dic = Json.Deserialize(result.content) as Dictionary<string, object>;
            return SafeDictionary.GetValue<bool>(dic, "result");
        }

        public async Task<bool> UpdateGameAndFailToWebInTapTap(string appId, string webUrl)
        {
            CheckPlatformSupport();
            var command = new Command.Builder()
                .Service(TAP_COMMON_SERVICE)
                .Method("updateGameAndFailToWebInTapTapWithWebUrl")
                .Args("appId", appId)
                .Args("webUrl", webUrl)
                .Callback(true)
                .OnceTime(true)
                .CommandBuilder();

            var result = await EngineBridge.GetInstance().Emit(command);
            CheckResult(result);
            var dic = Json.Deserialize(result.content) as Dictionary<string, object>;
            return SafeDictionary.GetValue<bool>(dic, "result");
        }

        public async Task<bool> UpdateGameAndFailToWebInTapGlobal(string appId, string webUrl)
        {
            CheckPlatformSupport();
            var command = new Command.Builder()
                .Service(TAP_COMMON_SERVICE)
                .Method("updateGameAndFailToWebInTapGlobalWithWebUrl")
                .Args("appId", appId)
                .Args("webUrl", webUrl)
                .Callback(true)
                .OnceTime(true)
                .CommandBuilder();

            var result = await EngineBridge.GetInstance().Emit(command);
            CheckResult(result);
            var dic = Json.Deserialize(result.content) as Dictionary<string, object>;
            return SafeDictionary.GetValue<bool>(dic, "result");
        }

        public async Task<bool> OpenWebDownloadUrlOfTapTap(string appId)
        {
            CheckPlatformSupport();
            var command = new Command.Builder()
                .Service(TAP_COMMON_SERVICE)
                .Method("openWebDownloadUrlOfTapTap")
                .Args("appId", appId)
                .Callback(true)
                .OnceTime(true)
                .CommandBuilder();

            var result = await EngineBridge.GetInstance().Emit(command);
            CheckResult(result);
            var dic = Json.Deserialize(result.content) as Dictionary<string, object>;
            return SafeDictionary.GetValue<bool>(dic, "result");
        }

        public async Task<bool> OpenWebDownloadUrlOfTapGlobal(string appId)
        {
            CheckPlatformSupport();
            var command = new Command.Builder()
                .Service(TAP_COMMON_SERVICE)
                .Method("openWebDownloadUrlOfTapGlobal")
                .Args("appId", appId)
                .Callback(true)
                .OnceTime(true)
                .CommandBuilder();

            var result = await EngineBridge.GetInstance().Emit(command);
            CheckResult(result);
            var dic = Json.Deserialize(result.content) as Dictionary<string, object>;
            return SafeDictionary.GetValue<bool>(dic, "result");
        }

        public async Task<bool> OpenWebDownloadUrl(string url)
        {
            CheckPlatformSupport();
            var command = new Command.Builder()
                .Service(TAP_COMMON_SERVICE)
                .Method("openWebDownloadUrl")
                .Args("appId", url)
                .Callback(true)
                .OnceTime(true)
                .CommandBuilder();

            var result = await EngineBridge.GetInstance().Emit(command);
            CheckResult(result);
            var dic = Json.Deserialize(result.content) as Dictionary<string, object>;
            return SafeDictionary.GetValue<bool>(dic, "result");
        }

        private class TapPropertiesProxy : AndroidJavaProxy
        {
            private readonly ITapPropertiesProxy _properties;

            public TapPropertiesProxy(ITapPropertiesProxy properties) :
                base(new AndroidJavaClass("com.tds.common.wrapper.TapPropertiesProxy"))
            {
                _properties = properties;
            }

            public override AndroidJavaObject Invoke(string methodName, object[] args)
            {
                return _properties != null
                    ? new AndroidJavaObject("java.lang.String", _properties.GetProperties())
                    : base.Invoke(methodName, args);
            }
        }
    }
}