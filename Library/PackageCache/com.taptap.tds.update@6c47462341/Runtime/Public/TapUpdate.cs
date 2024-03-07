using TapTap.Update.Internal;
using TapTap.Common.Internal.Utils;
using TapTap.Common;
using System;

namespace TapTap.Update {
    public class TapUpdate {
        static readonly ITapUpdateBridge update;

        static TapUpdate() {
            update = BridgeUtils.CreateBridgeImplementation(typeof(ITapUpdateBridge), "TapTap.Update")
                as ITapUpdateBridge;
        }

        public static void Init(string clientId, string clientToken)
        {
            update.Init(clientId, clientToken);
        }

        public static void UpdateGame(Action onCancel) {
            update.UpdateGame(onCancel);
        }
    }
}
