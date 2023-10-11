
namespace TapTap.Common {
    public class TapMomentConfig {
        public static string AppId { get; set; }
    }

    public static class TapConfigForMoment {
        public static TapConfig.Builder AppId(this TapConfig.Builder builder, string appId) {

            TapMomentConfig.AppId = appId;
            return builder;
        }
    }
}
