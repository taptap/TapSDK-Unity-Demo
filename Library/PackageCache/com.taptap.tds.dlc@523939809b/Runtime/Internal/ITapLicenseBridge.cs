
namespace TapTap.License.Internal {
    public interface ITapLicenseBridge {
        void SetLicencesCallback(ITapLicenseCallback callback);

        void SetDLCCallback(ITapDlcCallback callback);

        void SetDLCCallback(ITapDlcCallback callback, bool checkOnce, string publicKey);

        void Check(bool force = false);

        void QueryDLC(string[] skus);

        void PurchaseDLC(string sku);
    }
}