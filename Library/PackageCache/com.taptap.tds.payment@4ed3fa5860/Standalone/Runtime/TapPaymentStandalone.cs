using System;
using System.Collections.Generic;
using TapTap.Common;
using TapTap.Payment.Internal;

namespace TapTap.Payment.Standalone {
    public class TapPaymentStandalone : ITapPaymentBridge {
        public void Init(TapConfig config) {
        }

        public bool IsReady() {
            TapLogger.Warn($"{nameof(IsReady)} NOT implemented.");
            return false;
        }

        public void LaunchBillingFlow(SkuDetails skuDetails, string roleId, string serverId, string extra, Action<int, TapError> action) {
            TapLogger.Warn($"{nameof(LaunchBillingFlow)} NOT implemented.");
        }

        public void QueryProduct(string skuId, Action<SkuDetails, TapError> action) {
            TapLogger.Warn($"{nameof(QueryProduct)} NOT implemented.");
        }

        public void QueryProducts(string[] skuIds, Action<List<SkuDetails>, TapError> action) {
            TapLogger.Warn($"{nameof(QueryProducts)} NOT implemented.");
        }

        public void SwitchLanguage(string languageId) {
            TapLogger.Warn($"{nameof(SwitchLanguage)} NOT implemented.");
        }
    }
}
