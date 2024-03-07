using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using LC.Newtonsoft.Json;
using TapTap.AntiAddiction.Model;
using UnityEngine;
using TapTap.Common;

namespace Plugins.AntiAddictionUIKit
{
    public static class AntiAddictionUIKit
    {
        private const string ANTI_ADDICTION_SERVICE = "TapAntiAddictionService";
        private const string ANTI_ADDICTION_SERVICE_CLZ = "com.tapsdk.antiaddictionui.wrapper.TapAntiAddictionService";
        private const string ANTI_ADDICTION_SERVICE_IMPL = "com.tapsdk.antiaddictionui.wrapper.TapAntiAddictionServiceImpl";
        
        private const string JAVA_ANTI_ADDICTION_KIT_CLASS_NAME = "com.tapsdk.antiaddiction.AntiAddictionKit";
        private static AndroidJavaClass JAVA_ANTI_ADDICTION_KIT_CLASS;
        
        static AntiAddictionUIKit()
        {
            EngineBridge.GetInstance()
                .Register(ANTI_ADDICTION_SERVICE_CLZ, ANTI_ADDICTION_SERVICE_IMPL);
            
            #if UNITY_ANDROID
            JAVA_ANTI_ADDICTION_KIT_CLASS = new AndroidJavaClass(JAVA_ANTI_ADDICTION_KIT_CLASS_NAME);
            #endif
        }
        
        public static void Init(string gameIdentifier
            , bool showSwitchAccount)
        {
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(ANTI_ADDICTION_SERVICE)
                // 这里 iOS 可能叫 gameIdentifier
                .Method("init")
                .Args("gameIdentifier", gameIdentifier)
                // ReSharper disable once HeapView.BoxingAllocation
                .Args("showSwitchAccount", showSwitchAccount)
                .CommandBuilder());

            SetUnityVersion(TapCommon.SDKVersion);
        }
        
        public static void StartupWithTapTap(string userIdentifier) {

            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(ANTI_ADDICTION_SERVICE)
                .Method("startupWithTapTap")
                .Args("startupWithTapTap", userIdentifier)
                .CommandBuilder());

        }
        
        public static void SetAntiAddictionCallback(Action<int, string> callback)
        {
            var command = new Command.Builder()
                .Service(ANTI_ADDICTION_SERVICE)
                .Method("setAntiAddictionCallback")
                .Callback(true)
                .OnceTime(false)
                .CommandBuilder();

            EngineBridge.GetInstance().CallHandler(command, result =>
            {
                try{
                    TapLogger.Debug($"[Unity:AntiAddiction] callback result: {result.ToJSON().ToString()}");
                    if (result.code != Result.RESULT_SUCCESS)
                    {
                        callback?.Invoke(-1, "[Unity:AntiAddiction] callback fail");
                        return;
                    }

                    if (string.IsNullOrEmpty(result.content))
                    {
                        callback?.Invoke(-1, "[Unity:AntiAddiction] callback content is empty");
                        return;
                    }

                    
                    AntiAddictionCallbackData callbackData = new AntiAddictionCallbackData();
                    #if UNITY_IOS
                    result.content = RemoveFontColor(result.content);
                    var callbackOriginData = JsonConvert.DeserializeObject<AntiAddictionCallbackOriginData>(result.content);
                    callbackData.code = callbackOriginData.code;
                    callbackData.extras = JsonConvert.DeserializeObject<MsgExtraParams>(callbackOriginData.extras);
                    #else
                    callbackData = JsonConvert.DeserializeObject<AntiAddictionCallbackData>(result.content);
                    #endif
                    if (StartUpResult.Contains(callbackData.code)) {
                        callback?.Invoke(callbackData.code, null);
                    }
                    else {
                        TapLogger.Debug("[Unity:AntiAddiction] result.extras title:" + callbackData.extras.title);
                        TapLogger.Debug("[Unity:AntiAddiction] result.extras description:" + callbackData.extras.description);
                        callback?.Invoke(-1, callbackData.extras.description);
                    }
                }
                catch(Exception e){
                    TapLogger.Error("[Unity:AntiAddiction] callback error:" + e.Message + "\n" + e.StackTrace);
                }
                
            });
        }
        
        private static string RemoveFontColor(string originStr) {
            if (string.IsNullOrEmpty(originStr)) return originStr;
            var colorBeginPattern = "<fontcolor=";
            int index = originStr.IndexOf(colorBeginPattern, StringComparison.Ordinal);
            while (index >= 0) {
                int eIndex = originStr.IndexOf('>', index);
                originStr = originStr.Remove(index, eIndex - index + 1);
                index = originStr.IndexOf(colorBeginPattern, StringComparison.Ordinal);
            }
            var colorEndPattern = "font>";
            index = originStr.IndexOf(colorEndPattern, StringComparison.Ordinal);
            while (index >= 0) {
                int eIndex = originStr.LastIndexOf('<', index + colorEndPattern.Length, index);
                originStr = originStr.Remove(eIndex, index + colorEndPattern.Length - eIndex);
                index = originStr.IndexOf(colorEndPattern, StringComparison.Ordinal);
            }
            return originStr;
        }
        
        public static void SetTestEnvironment(bool isTest)
        {
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(ANTI_ADDICTION_SERVICE)
                .Method("setTestEnvironment")
                // ReSharper disable once HeapView.BoxingAllocation
                .Args("setTestEnvironment", isTest)
                .CommandBuilder());
        }
        
        public static bool IsStandalone() {
            switch (Application.platform)
            {
                case RuntimePlatform.Android:
                    return PerformAndroidIsStandalone();
                case RuntimePlatform.IPhonePlayer:
                    return PerformiOSIsStandalone();
                default:
                    throw new PlatformNotSupportedException();
            }
        }
        
        public static string CurrentToken()
        {
            switch (Application.platform)
            {
                case RuntimePlatform.Android:
                    return PerformAndroidGetCurrentToken();
                case RuntimePlatform.IPhonePlayer:
                    return PerformiOSGetCurrentToken();
                default:
                    throw new PlatformNotSupportedException();
            }
        }
        
        public static void SetUnityVersion(string version)
        {
            var command = new Command.Builder()
                .Service(ANTI_ADDICTION_SERVICE)
                .Method("setUnityVersion")
                .Args("setUnityVersion", version)
                .Callback(false)
                .OnceTime(true)
                .CommandBuilder();
            EngineBridge.GetInstance().CallHandler(command);
        }
        
        public static void LeaveGame()
        {
            var command = new Command.Builder()
                .Service(ANTI_ADDICTION_SERVICE)
                .Method("leaveGame")
                .Callback(true)
                .OnceTime(false)
                .CommandBuilder();
            EngineBridge.GetInstance().CallHandler(command);
        }
        
        public static void EnterGame()
        {
            var command = new Command.Builder()
                .Service(ANTI_ADDICTION_SERVICE)
                .Method("enterGame")
                .Callback(true)
                .OnceTime(false)
                .CommandBuilder();
            EngineBridge.GetInstance().CallHandler(command);
        }
        
        public static int CurrentUserRemainTime()
        {
            switch (Application.platform)
            {
                case RuntimePlatform.Android:
                    return PerformAndroidGetCurrentUserRemainTime();
                case RuntimePlatform.IPhonePlayer:
                    return PerformiOSGetCurrentUserRemainTime();
                default:
                    throw new PlatformNotSupportedException();
            }
        }
        
        public static int CurrentUserAgeLimit() {
            switch (Application.platform)
            {
                case RuntimePlatform.Android:
                    return PerformAndroidGetCurrentUserAgeLimit();
                case RuntimePlatform.IPhonePlayer:
                    return PerformiOSGetCurrentUserAgeLimit();
                default:
                    throw new PlatformNotSupportedException();
            }
        }
        
        public static void Logout()
        {
            var command = new Command.Builder()
                .Service(ANTI_ADDICTION_SERVICE)
                .Method("logout")
                .Callback(true)
                .OnceTime(false)
                .CommandBuilder();
            EngineBridge.GetInstance().CallHandler(command);
        }
        
        public static void SubmitPayResult(long amount
            , Action handleSubmitPayResult
            , Action<string> handleSubmitPayResultException)
        {
            var command = new Command.Builder()
                .Service(ANTI_ADDICTION_SERVICE)
                .Method("submitPayResult")
                .Args("submitAmount", amount)
                .Callback(true)
                .OnceTime(false)
                .CommandBuilder();
            
            EngineBridge.GetInstance().CallHandler(command, result =>
            {
                TapLogger.Debug($"[Unity:AntiAddiction] submitPayResult result: {result.ToJSON().ToString()}");
                if (result.code != Result.RESULT_SUCCESS)
                {
                    handleSubmitPayResultException?.Invoke("[Unity:AntiAddiction] submitPayResult fail");
                    return;
                }
                
                if (string.IsNullOrEmpty(result.content))
                {
                    handleSubmitPayResultException?.Invoke("[Unity:AntiAddiction] submitPayResult content is empty");
                    return;
                }
            
                TapLogger.Debug("[Unity:AntiAddiction] submitPayResult content: " + result.content);
                var dic = Json.Deserialize(result.content) as Dictionary<string, object>;
                bool success = SafeDictionary.GetValue<int>(dic, "success") == 0;
                string errorMsg = SafeDictionary.GetValue<string>(dic, "description");
                if (success) {
                    handleSubmitPayResult?.Invoke();
                }
                else {
                    handleSubmitPayResultException?.Invoke(errorMsg);
                }
            });
        }
        
        public static void CheckPayLimit(long amount
            , Action<CheckPayResult> handleCheckPayLimit
            , Action<string> handleCheckPayLimitException)
        {
            var command = new Command.Builder()
                .Service(ANTI_ADDICTION_SERVICE)
                .Method("checkPayLimit")
                .Args("amount", amount)
                .Callback(true)
                .OnceTime(false)
                .CommandBuilder();
            
            EngineBridge.GetInstance().CallHandler(command, result =>
            {
                TapLogger.Debug($"[Unity:AntiAddiction] checkPayLimit result: {result.ToJSON().ToString()}");
                if (result.code != Result.RESULT_SUCCESS)
                {
                    handleCheckPayLimitException?.Invoke("[Unity:AntiAddiction] checkPayLimit fail");
                    return;
                }
                
                if (string.IsNullOrEmpty(result.content))
                {
                    handleCheckPayLimitException?.Invoke("[Unity:AntiAddiction] checkPayLimit content is empty");
                    return;
                }
            
                TapLogger.Debug("[Unity:AntiAddiction] checkPayLimit content: " + result.content);
                
                var checkPayResultParams = JsonConvert.DeserializeObject<CheckPayResultParams>(result.content);
                if (checkPayResultParams.Success) {
                    handleCheckPayLimit?.Invoke(new CheckPayResult() {
                        status = checkPayResultParams.status,
                        title = checkPayResultParams.title,
                        description = checkPayResultParams.description,
                    });
                }
                else {
                    handleCheckPayLimitException?.Invoke(checkPayResultParams.description);
                }
            });
        }
        
        // iOS only variables
        #if UNITY_IOS
        [DllImport("__Internal")]
        #endif
        private static extern int TapSDKAntiAddictionGetCurrentUserRemainTime();
        
        #if UNITY_IOS
        [DllImport("__Internal")]
        #endif
        private static extern int TapSDKAntiAddictionGetCurrentUserAgeLimit();

        #if UNITY_IOS
        [DllImport("__Internal")]
        #endif
        private static extern string TapSDKAntiAddictionGetCurrentAntiToken();

        #if UNITY_IOS
        [DllImport("__Internal")]
        #endif
        private static extern bool TapSDKAntiAddictionStandalone();
        
        /*
         * ------------------
         * Internal Method(Android)
         * ------------------
         */
        private static string PerformAndroidGetCurrentToken()
        {
            Debug.Log("Android getCurrrentToken calling");
            return JAVA_ANTI_ADDICTION_KIT_CLASS.CallStatic<string>("currentToken");
        }

        private static int PerformAndroidGetCurrentUserRemainTime()
        {
            Debug.Log("Android getCurrrentRemainTime calling");
            return JAVA_ANTI_ADDICTION_KIT_CLASS.CallStatic<int>("currentUserRemainingTime");
        }
        
        private static int PerformAndroidGetCurrentUserAgeLimit()
        {
            Debug.Log("Android getCurrentUserAgeLimit calling");
            return JAVA_ANTI_ADDICTION_KIT_CLASS.CallStatic<int>("currentUserAgeLimit");
        }

        private static bool PerformAndroidIsStandalone()
        {
            bool result = JAVA_ANTI_ADDICTION_KIT_CLASS.CallStatic<bool>("isStandalone");
            Debug.Log("Android PerformAndroidIsStandalone calling" + result.ToString());
            return result;
        }

        /*
         * ------------------
         * Internal Method(iOS)
         * ------------------
         */
        private static string PerformiOSGetCurrentToken()
        {
            return TapSDKAntiAddictionGetCurrentAntiToken();
        }

        private static int PerformiOSGetCurrentUserRemainTime()
        {
            // to implement
            return TapSDKAntiAddictionGetCurrentUserRemainTime();
        }        
        private static int PerformiOSGetCurrentUserAgeLimit()
        {
            // to implement
            return TapSDKAntiAddictionGetCurrentUserAgeLimit();
        }

        private static Boolean PerformiOSIsStandalone() {
            return TapSDKAntiAddictionStandalone();
        }
    }
}