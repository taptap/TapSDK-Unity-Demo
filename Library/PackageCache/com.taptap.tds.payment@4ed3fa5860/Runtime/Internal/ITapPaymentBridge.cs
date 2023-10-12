using System;
using System.Collections.Generic;
using TapTap.Common;

namespace TapTap.Payment.Internal {
    public interface ITapPaymentBridge {
        void Init(TapConfig config);

        bool IsReady();

        void QueryProduct(string skuId, Action<SkuDetails, TapError> action);

        void QueryProducts(string[] skuIds, Action<List<SkuDetails>, TapError> action);

        void LaunchBillingFlow(SkuDetails skuDetails, string roleId, string serverId, string extra, Action<int, TapError> action);

        void SwitchLanguage(string languageId);
    }
}