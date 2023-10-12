using System;
using System.Collections.Generic;
using TapTap.Common;
using TapTap.Common.Internal.Utils;
using TapTap.Payment.Internal;

namespace TapTap.Payment {
    public class TapPayment {
        static readonly ITapPaymentBridge payment;

        static TapPayment() {
            payment = BridgeUtils.CreateBridgeImplementation(typeof(ITapPaymentBridge), "TapTap.Payment")
                as ITapPaymentBridge;
        }

        public static void Init(TapConfig config) {
            payment.Init(config);
        }

        public static bool IsReady() {
            return payment.IsReady();
        }

        public static void QueryProduct(string skuId, Action<SkuDetails, TapError> action) {
            payment.QueryProduct(skuId, action);
        }

        public static void QueryProducts(string[] skuIds, Action<List<SkuDetails>, TapError> action) {
            payment.QueryProducts(skuIds, action);
        }

        public static void LaunchBillingFlow(SkuDetails skuDetails, string roleId, string serverId, string extra, Action<int, TapError> action) {
            payment.LaunchBillingFlow(skuDetails, roleId, serverId, extra, action);
        }

        public static void SwitchLanguage(string languageId) {
            payment.SwitchLanguage(languageId);
        }
    }
}
