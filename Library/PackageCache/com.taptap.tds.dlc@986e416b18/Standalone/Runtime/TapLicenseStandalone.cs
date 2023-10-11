using TapTap.License;
using TapTap.License.Internal;
using TapTap.Common;

namespace TapTap.Moment.Standalone {
    public class TapLicenseStandalone : ITapLicenseBridge {
        public void Check(bool force = false) {
            TapLogger.Warn($"{nameof(Check)} NOT implemented.");
        }

        public void PurchaseDLC(string sku) {
            TapLogger.Warn($"{nameof(PurchaseDLC)} NOT implemented.");
        }

        public void QueryDLC(string[] skus) {
            TapLogger.Warn($"{nameof(QueryDLC)} NOT implemented.");
        }

        public void SetDLCCallback(ITapDlcCallback callback) {
            TapLogger.Warn($"{nameof(SetDLCCallback)} NOT implemented.");
        }

        public void SetDLCCallback(ITapDlcCallback callback, bool checkOnce, string publicKey) {
            TapLogger.Warn($"{nameof(SetDLCCallback)} NOT implemented.");
        }

        public void SetLicencesCallback(ITapLicenseCallback callback) {
            TapLogger.Warn($"{nameof(SetLicencesCallback)} NOT implemented.");
        }
    }
}
