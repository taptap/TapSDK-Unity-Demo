using System;
using System.Text;

namespace TapTap.Common {
    public class TapLogger {
        /// <summary>
        /// Configures the logger.
        /// </summary>
        /// <value>The log delegate.</value>
        public static Action<TapLogLevel, string> LogDelegate {
            get; set;
        }

        public static void Debug(string log) {
            LogDelegate?.Invoke(TapLogLevel.Debug, log);
        }

        public static void Debug(string format, params object[] args) {
            LogDelegate?.Invoke(TapLogLevel.Debug, string.Format(format, args));
        }

        public static void Warn(string log) {
            LogDelegate?.Invoke(TapLogLevel.Warn, log);
        }

        public static void Warn(string format, params object[] args) {
            LogDelegate?.Invoke(TapLogLevel.Warn, string.Format(format, args));
        }

        public static void Error(string log) {
            LogDelegate?.Invoke(TapLogLevel.Error, log);
        }

        public static void Error(string format, params object[] args) {
            LogDelegate?.Invoke(TapLogLevel.Error, string.Format(format, args));
        }

        public static void Error(Exception e) {
            StringBuilder sb = new StringBuilder();
            sb.Append(e.GetType());
            sb.Append("\n");
            sb.Append(e.Message);
            sb.Append("\n");
            sb.Append(e.StackTrace);
            Error(sb.ToString());
        }
    }
}
