using TapTap.Common;
using TapTap.Common.Internal.Init;

namespace TapTap.Connect.Internal.Init {
    public sealed class TapConnectInitTask : IInitTask {
        public int Order => 13;

        public void Init(TapConfig config) {
            TapConnect.Init(config);
        }
    }
}