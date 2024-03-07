using System.Collections.Generic;

namespace TapTap.TapDB.Standalone.Internal {
    public class Charge {
        public void Track(string orderId, string product, long amount, string currencyType, string payment,
            Dictionary<string, object> properties) {
            Dictionary<string, object> data = new Dictionary<string, object> {
                { "order_id", orderId },
                { "product", product },
                { "amount", amount },
                { "currency_type", currencyType },
                { "payment", payment }
            };
            if (properties != null) {
                foreach (KeyValuePair<string, object> kv in properties) {
                    data[kv.Key] = kv.Value;
                }
            }
            TapDBStandalone.Tracker.TrackEvent(Constants.EVENT, "charge", data);
        }
    }
}
