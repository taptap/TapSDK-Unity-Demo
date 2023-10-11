using TapTap.Common;
using TapTap.Common.Internal.Utils;
using TapTap.Connect.Internal;

namespace TapTap.Connect {
    public sealed class TapConnect {
        static readonly ITapConnectBridge connect;

        static TapConnect() {
            connect = BridgeUtils.CreateBridgeImplementation(typeof(ITapConnectBridge), "TapTap.Connect")
                as ITapConnectBridge;
        }

        // public static void SetCallback(Action<int, string> callback) {
        //     connect.SetCallback(callback);
        // }
        
        public static void Init(TapConfig config) {
            connect?.Init(config.ClientID, config.ClientToken, config.RegionType == RegionType.CN);
        }

        public static void Init(string clientId, string clientToken, bool isChina) {
            connect?.Init(clientId, clientToken, isChina);
        }
        
        public static void SetEntryVisible(bool visible) {
            connect?.SetEntryVisible(visible);
        }
    }
}
