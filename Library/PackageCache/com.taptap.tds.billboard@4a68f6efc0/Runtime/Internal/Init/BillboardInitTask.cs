using TapTap.Common;
using TapTap.Common.Internal.Init;

namespace TapTap.Billboard.Internal.Init {
    public class BillboardInitTask : IInitTask {
        public int Order => 102;

        public void Init(TapConfig config) {
            if (TapBillboardConfig.Config == null) {
                return;
            }

            TapBillboard.Init(config);
        }
    }
}