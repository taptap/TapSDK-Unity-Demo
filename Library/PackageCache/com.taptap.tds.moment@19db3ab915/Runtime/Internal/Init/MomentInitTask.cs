using TapTap.Common;
using TapTap.Common.Internal.Init;

namespace TapTap.Moment.Internal.Init {
    public class MomentInitTask : IInitTask {
        public int Order => 103;

        public void Init(TapConfig config) {
            TapMoment.Init(config.ClientID, config.RegionType == RegionType.CN);
        }
    }
}