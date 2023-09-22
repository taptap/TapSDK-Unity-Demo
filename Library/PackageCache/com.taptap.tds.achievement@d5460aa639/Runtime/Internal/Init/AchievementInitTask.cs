using TapTap.Common;
using TapTap.Common.Internal.Init;

namespace TapTap.Achievement.Internal.Init {
    public class AchievementInitTask : IInitTask {
        public int Order => 101;

        public void Init(TapConfig config) {
            TapAchievement.Init(config);
        }
    }
}
