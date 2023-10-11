
namespace TapTap.TapDB.Standalone.Internal {
    public class Logger {
        public bool Enable {
            get; set;
        } = true;

        public void Debug(string log) {
            if (!Enable) {
                return;
            }

            UnityEngine.Debug.Log($"TapDB SDK Debug: {log}");
        }

        public void Error(string log) {
            if (!Enable) {
                return;
            }

            UnityEngine.Debug.LogError($"TapDB SDK Error: {log}");
        }
    }
}
