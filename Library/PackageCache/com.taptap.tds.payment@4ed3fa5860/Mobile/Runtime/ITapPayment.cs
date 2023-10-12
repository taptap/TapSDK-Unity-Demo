using System;
using System.Collections.Generic;
using TapTap.Common;

namespace TapTap.Payment.Mobile
{
    public interface ITapPayment
    {
        void Init(TapConfig tapConfig);

        Boolean IsReady();

        void QueryProduct(string skuId, Action<SkuDetails, TapError> action);

        void QueryProducts(string[] skuIds, Action<List<SkuDetails>, TapError> action);

        void LaunchBillingFlow(SkuDetails skuDetails, String roleId, String serverId, String extra, Action<int, TapError> action);

        void SwitchLanguage(String languageID);
    }

    public static class TapPaymentConstants
    {
        public static readonly string TapPaymentService = "TDSPaymentService";

        public static readonly string TapPaymentClz = "com.tapsdk.payment.wrapper.TDSPaymentService";

        public static readonly string TapPaymentImpl = "com.tapsdk.payment.wrapper.TDSPaymentServiceImpl";
    }
}