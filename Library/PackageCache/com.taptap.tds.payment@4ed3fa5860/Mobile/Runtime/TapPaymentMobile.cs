using System;
using System.Collections.Generic;
using TapTap.Common;
using TapTap.Payment.Internal;

namespace TapTap.Payment.Mobile {
    public class TapPaymentMobile : ITapPaymentBridge {
        public void Init(TapConfig config) {
            TapPaymentImpl.GetInstance().Init(config);
        }

        public bool IsReady() {
            return TapPaymentImpl.GetInstance().IsReady();
        }

        public void LaunchBillingFlow(SkuDetails skuDetails, string roleId, string serverId, string extra, Action<int, TapError> action) {
            TapPaymentImpl.GetInstance().LaunchBillingFlow(skuDetails, roleId, serverId, extra, action);
        }

        public void QueryProduct(string skuId, Action<SkuDetails, TapError> action) {
            TapPaymentImpl.GetInstance().QueryProduct(skuId, action);
        }

        public void QueryProducts(string[] skuIds, Action<List<SkuDetails>, TapError> action) {
            TapPaymentImpl.GetInstance().QueryProducts(skuIds, action);
        }

        public void SwitchLanguage(string languageId) {
            TapPaymentImpl.GetInstance().SwitchLanguage(languageId);
        }
    }
}