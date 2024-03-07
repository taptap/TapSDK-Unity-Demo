using System.Collections.Generic;

namespace TapTap.TapDB.Standalone.Internal {
    public class Device {
        public void InitProps(Dictionary<string, object> properties) {
            TapDBStandalone.Tracker.TrackDeviceProperties(Constants.PROPERTY_INITIALIZE_TYPE, properties);
        }

        public void UpdateProps(Dictionary<string, object> properties) {
            TapDBStandalone.Tracker.TrackDeviceProperties(Constants.PROPERTY_UPDATE_TYPE, properties);
        }

        public void AddProps(Dictionary<string, object> properties) {
            TapDBStandalone.Tracker.TrackDeviceProperties(Constants.PROPERTY_ADD_TYPE, properties);
        }
    }
}