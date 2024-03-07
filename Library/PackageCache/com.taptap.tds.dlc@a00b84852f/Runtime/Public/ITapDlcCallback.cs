using System.Collections.Generic;

namespace TapTap.License {
    public interface ITapDlcCallback {
        void OnQueryCallBack(TapLicenseQueryCode code, Dictionary<string, object> queryList);
        void OnOrderCallBack(string sku, TapLicensePurchasedCode status);
    }
}
