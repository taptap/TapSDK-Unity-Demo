using TapTap.Common;
using TapTap.Common.Internal.Init;

namespace TapTap.Billboard.Internal.Init {
    public class BillboardInitTask : IInitTask {
        public int Order => 102;

        public void Init(TapConfig config) {
            if (TapBillboardConfig.Config == null || TapBillboardConfig.Config.ServerUrl == null)
                return;

            TapBillboardConfig billboardConfig = TapBillboardConfig.Config;
            if (billboardConfig != null &&
                !string.IsNullOrEmpty(billboardConfig.ServerUrl)) {
                // 允许为空，即不安装此模块
                TapBillboard.Init(config);
            }
        }
    }
}