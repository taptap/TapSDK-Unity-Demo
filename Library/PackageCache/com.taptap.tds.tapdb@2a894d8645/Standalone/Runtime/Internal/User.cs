using System.Collections.Generic;

namespace TapTap.TapDB.Standalone.Internal {
    public class User {
        internal static readonly string USER_ID_KEY = "tapdb_played_duration_user_id";

        internal string Id {
            get => id;
            set {
                id = value;
                TapDBStandalone.Prefs.Set(USER_ID_KEY, id);
            }
        }

        private string id;

        private readonly PlayRecorder playRecorder;

        public User() {
            playRecorder = new PlayRecorder();
        }

        public void Login(string userId, string loginType = null, Dictionary<string, object> props = null) {
            // 先执行旧用户登出逻辑
            Id = TapDBStandalone.Prefs.Get<string>(USER_ID_KEY);
            if (!string.IsNullOrWhiteSpace(Id)) {
                Logout();
            }

            // 再执行新用户登录逻辑
            Id = userId;

            TapDBStandalone.Tracker.TrackEvent(Constants.EVENT, "user_login", props);

            Dictionary<string, object> initProps = new Dictionary<string, object>();
            if (!string.IsNullOrWhiteSpace(loginType)) {
                initProps["first_login_type"] = loginType;
            }
            TapDBStandalone.Tracker.TrackDeviceProperties(Constants.PROPERTY_INITIALIZE_TYPE, initProps);

            Dictionary<string, object> updateProps = new Dictionary<string, object> {
                { "has_user", true },
            };
            if (!string.IsNullOrWhiteSpace(loginType)) {
                updateProps["current_login_type"] = loginType;
            }
            TapDBStandalone.Tracker.TrackDeviceProperties(Constants.PROPERTY_UPDATE_TYPE, updateProps);

            playRecorder.Start();
        }

        public void Logout() {
            playRecorder.Stop();

            Id = null;
        }

        public void SetName(string name) {
            Dictionary<string, object> props = new Dictionary<string, object> {
                { "user_name", name }
            };
            TapDBStandalone.Tracker.TrackUserProperties(Constants.PROPERTY_UPDATE_TYPE, props);
        }

        public void SetLevel(int level) {
            Dictionary<string, object> props = new Dictionary<string, object> {
                { "level", level }
            };
            TapDBStandalone.Tracker.TrackUserProperties(Constants.PROPERTY_UPDATE_TYPE, props);
        }

        public void SetServer(string server) {
            Dictionary<string, object> props = new Dictionary<string, object> {
                { "first_server", server }
            };
            TapDBStandalone.Tracker.TrackUserProperties(Constants.PROPERTY_INITIALIZE_TYPE, props);

            props = new Dictionary<string, object> {
                { "current_server", server }
            };
            TapDBStandalone.Tracker.TrackUserProperties(Constants.PROPERTY_UPDATE_TYPE, props);
        }

        public void InitProps(Dictionary<string, object> properties) {
            TapDBStandalone.Tracker.TrackUserProperties(Constants.PROPERTY_INITIALIZE_TYPE, properties);
        }

        public void UpdateProps(Dictionary<string, object> properties) {
            TapDBStandalone.Tracker.TrackUserProperties(Constants.PROPERTY_UPDATE_TYPE, properties);
        }

        public void AddProps(Dictionary<string, object> properties) {
            TapDBStandalone.Tracker.TrackUserProperties(Constants.PROPERTY_ADD_TYPE, properties);
        }
    }
}