using UnityEditor;

namespace TapTap.Common.Editor {
    public static class BuildTargetUtils {
        public static bool IsSupportMobile(BuildTarget platform) {
            return platform == BuildTarget.iOS || platform == BuildTarget.Android;
        }

        public static bool IsSupportStandalone(BuildTarget platform) {
            return platform == BuildTarget.StandaloneOSX ||
                platform == BuildTarget.StandaloneWindows || platform == BuildTarget.StandaloneWindows64;
        }
    }
}
