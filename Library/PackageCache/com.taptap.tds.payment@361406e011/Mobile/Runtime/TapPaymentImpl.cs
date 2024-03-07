using System;
using System.Collections.Generic;
using TapTap.Common;
using UnityEngine;
using LC.Newtonsoft.Json;

namespace TapTap.Payment.Mobile
{
    public class TapPaymentImpl : ITapPayment
    {

        private static AndroidJavaObject androidJavaNativePayment;

        private TapPaymentImpl()
        {
            EngineBridge.GetInstance()
                .Register(TapPaymentConstants.TapPaymentClz, TapPaymentConstants.TapPaymentImpl);
        }

        private class PlatformNotSupportedException : Exception
        {
            public PlatformNotSupportedException() : base()
            {

            }
        }

        private static volatile TapPaymentImpl _sInstance;

        private static readonly object Locker = new object();

        public static TapPaymentImpl GetInstance()
        {
            lock (Locker)
            {
                if (_sInstance == null)
                {
                    _sInstance = new TapPaymentImpl();
                    androidJavaNativePayment = new AndroidJavaObject(TapPaymentConstants.TapPaymentImpl); 
                }
            }

            return _sInstance;
        }

        public void Init(TapConfig tapConfig)
        {
            if (Platform.IsAndroid()) {
                Dictionary<string, object> config = tapConfig.ToDict();
                if (TapPaymentConfig.Config != null) {
                    config["paymentConfig"] = TapPaymentConfig.Config.ToDict();
                }
                EngineBridge.GetInstance().CallHandler(
                    new Command.Builder()
                        .Service(TapPaymentConstants.TapPaymentService)
                        .Method("init")
                        .Args("initWithConfig", JsonConvert.SerializeObject(config))
                        .CommandBuilder());
            } else {
                TapLogger.Warn($"{Application.platform} does NOT support.");
            }
        }

        public Boolean IsReady() {
            if (Platform.IsAndroid()) {
                // to implement
                if (androidJavaNativePayment == null) {
                    return (androidJavaNativePayment.Call<int>("isReady") == 1);
                } else {
                    return false;
                }
            } else {
                throw new PlatformNotSupportedException();
            }
        }

        public void QueryProduct(string skuId, Action<SkuDetails, TapError> action)
        {
            if (Platform.IsAndroid()) {
                string[] skuIds = new string[1];
                skuIds[0] = skuId;
                EngineBridge.GetInstance().CallHandler(
                    new Command.Builder()
                    .Service(TapPaymentConstants.TapPaymentService)
                    .Method("queryProducts")
                    .Args("skuIds", skuIds)
                    .Callback(true)
                    .OnceTime(true)
                    .CommandBuilder(), result => { HandlerQueryProductResult(action, result); });
            } else {
                throw new PlatformNotSupportedException();
            }
        }

        public void QueryProducts(string[] skuIds, Action<List<SkuDetails>, TapError> action)
        {
            if (Platform.IsAndroid()) {
                EngineBridge.GetInstance().CallHandler(
                    new Command.Builder()
                    .Service(TapPaymentConstants.TapPaymentService)
                    .Method("queryProducts")
                    .Args("skuIds", skuIds)
                    .Callback(true)
                    .OnceTime(true)
                    .CommandBuilder(), result => { HandlerQueryProductsResult(action, result); });
            } else {
                throw new PlatformNotSupportedException();
            }
        }

        public void LaunchBillingFlow(SkuDetails skuDetails, String roleId, String serverId, String extra, Action<int, TapError> action) {
            if (Platform.IsAndroid()) {
                EngineBridge.GetInstance().CallHandler(
                    new Command.Builder()
                    .Service(TapPaymentConstants.TapPaymentService)
                    .Method("launchBillingFlow")
                    .Args("skuDetails", skuDetails.ToJson())
                    .Args("roleId", roleId)
                    .Args("serverId", serverId)
                    .Args("extra", extra)
                    .Callback(true)
                    .OnceTime(true)
                    .CommandBuilder(), result => { HandlerPurchaseResult(action, result); });
            } else {
                throw new PlatformNotSupportedException();
            }
        }

        public void SwitchLanguage(String languageID) {
            if (Platform.IsAndroid())
            {
                EngineBridge.GetInstance().CallHandler(
                    new Command.Builder()
                    .Service(TapPaymentConstants.TapPaymentService)
                    .Method("switchLanguage")
                    .Args("languageId", languageID)
                    .Callback(true)
                    .OnceTime(true)
                    .CommandBuilder());
            }
            else
            {
                throw new PlatformNotSupportedException();
            }
        }

        private static bool CheckResult(Result result)
        {
            if (result.code != Result.RESULT_SUCCESS)
            {
                return false;
            }

            return !string.IsNullOrEmpty(result.content);
        }

        private static void HandlerPurchaseResult(Action<int, TapError> action, Result result)
        {
            if (!CheckResult(result))
            {
                action(1, new TapError(19999, "Bridge execute Payment Error"));
                return;
            }
            var dic = Json.Deserialize(result.content) as Dictionary<string, object>;
            var errorJson = SafeDictionary.GetValue<string>(dic, "error");
            TapError error = null;
            if (!string.IsNullOrEmpty(errorJson))
            {
                error = new TapError(errorJson);
            }
            var responseCode = 1;
            if (dic != null && dic.ContainsKey("responseCode"))
            {
                responseCode = SafeDictionary.GetValue<int>(dic, "responseCode");
            }
            action(responseCode, error);
        }

        private static void HandlerQueryProductResult(Action<SkuDetails, TapError> action, Result result)
        {
            if (!CheckResult(result))
            {
                action(null, new TapError(19999, "Bridge execute Payment Error"));
                return;
            }
            var listWrapper = new SkuDetailsListWrapper(result.content);
            if (listWrapper.error != null) {
                action(null, listWrapper.error);
            } else {
                if (listWrapper.list != null && listWrapper.list.Count > 0) {
                    action(listWrapper.list[0], null);
                } else {
                    action(null, null);
                }
            }
        }

        private static void HandlerQueryProductsResult(Action<List<SkuDetails>, TapError> action, Result result)
        {
            if (!CheckResult(result))
            {
                action(null, new TapError(19999, "Bridge execute Payment Error"));
                return;
            }
            var listWrapper = new SkuDetailsListWrapper(result.content);
            if (listWrapper.error != null) {
                action(null, listWrapper.error);
            } else {
                action(listWrapper.list, null);
            }
        }
    }
}