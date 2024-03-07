using TapTap.Common;
using TapTap.Common.Internal.Init;

namespace TapTap.Update.Internal.Init {
    public sealed class TapUpdateInitTask : IInitTask {
        public int Order => 14;

        public void Init(TapConfig config) {
            TapUpdate.Init(config.ClientID, config.ClientToken);
        }
    }
}