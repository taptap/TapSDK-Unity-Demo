using TapTap.License.Internal;
using TapTap.Common.Internal.Utils;

namespace TapTap.License {
    public class TapLicense {
        static readonly ITapLicenseBridge license;

        static TapLicense() {
            license = BridgeUtils.CreateBridgeImplementation(typeof(ITapLicenseBridge), "TapTap.License")
                as ITapLicenseBridge;
        }

        public static void SetLicenseCallBack(ITapLicenseCallback callback) {
            license.SetLicencesCallback(callback);
        }

        public static void SetDLCCallback(ITapDlcCallback callback) {
            license.SetDLCCallback(callback);
        }

        public static void SetDLCCallback(ITapDlcCallback callback, bool checkOnce, string publicKey) {
            license.SetDLCCallback(callback, checkOnce, publicKey);
        }

        public static void Check(bool force = false) {
            license.Check(force);
        }

        public static void QueryDLC(string[] dlcList) {
            license.QueryDLC(dlcList);
        }

        public static void PurchaseDLC(string dlc) {
            license.PurchaseDLC(dlc);
        }
    }
}
