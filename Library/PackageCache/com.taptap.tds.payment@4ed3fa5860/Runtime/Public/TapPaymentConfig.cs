using System.Collections.Generic;

namespace TapTap.Common {
    public class TapPaymentConfig {
        public static TapPaymentConfig Config { get; set; }

        public readonly string RegionId;

        public readonly string Language;

        public readonly string WXAuthorizedDomainName;

        public TapPaymentConfig(string regionId, string language, string wxAuthorizedDomainName) {
            RegionId = regionId;
            Language = language;
            WXAuthorizedDomainName = wxAuthorizedDomainName;
        }

        public Dictionary<string, object> ToDict() {
            return new Dictionary<string, object> {
                ["regionId"] = RegionId,
                ["language"] = Language,
                ["wxAuthorizedDomainName"] = WXAuthorizedDomainName
            };
        }
    }

    public static class TapConfigBuilderForPayment {
        public static TapConfig.Builder TapPaymentConfig(this TapConfig.Builder builder,
            string regionId, string language, string wxAuthorizedDomainName) {

            Common.TapPaymentConfig.Config = new TapPaymentConfig(regionId, language, wxAuthorizedDomainName);
            return builder;
        }
    }
}
