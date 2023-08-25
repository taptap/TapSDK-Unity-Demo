using LeanCloud;
using LeanCloud.Storage;
using TapTap.Common;
using TapTap.Common.Internal.Init;

namespace TapTap.Bootstrap.Internal.Init {
    public class BootstrapInitTask : IInitTask {
        public int Order => 12;

        public void Init(TapConfig config) {
            LCApplication.Initialize(config.ClientID, config.ClientToken, config.ServerURL);
            LCObject.RegisterSubclass("_User", () => new TDSUser());
            LCObject.RegisterSubclass(TapGameSave.CLASS_NAME, () => new TapGameSave());
        }
    }
}
