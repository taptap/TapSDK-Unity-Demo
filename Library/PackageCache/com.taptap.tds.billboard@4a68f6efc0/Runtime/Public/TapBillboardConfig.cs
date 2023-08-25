using System.Linq;
using System.Collections.Generic;

namespace TapTap.Common {
    public class TapBillboardConfig {
        public static TapBillboardConfig Config { get; set; }

        public readonly HashSet<KeyValuePair<string, string>> DimensionSet;

        public readonly string Template;

        public string ServerUrl;

        public TapBillboardConfig(HashSet<KeyValuePair<string, string>> dimensionSet, string template, string serverUrl) {
            DimensionSet = dimensionSet;
            Template = template;
            ServerUrl = serverUrl;
        }

        public Dictionary<string, object> ToDict() {
            List<List<string>> result = new List<List<string>>();
            if (DimensionSet != null) {
                List<KeyValuePair<string, string>> dimensionList = DimensionSet.ToList();
                dimensionList.ForEach(pair => {
                    if (pair.Key != null && pair.Key.Length > 0
                    && pair.Value != null && pair.Value.Length > 0) {
                        List<string> item = new List<string>();
                        item.Add(pair.Key);
                        item.Add(pair.Value);
                        result.Add(item);
                    }
                });
            }

            return new Dictionary<string, object> {
                ["dimensionSet"] = result,
                ["template"] = Template,
                ["serverUrl"] = ServerUrl
            };
        }
    }

    public static class TapConfigBuilderForBillboard {
        public static TapConfig.Builder TapBillboardConfig(this TapConfig.Builder _,
            HashSet<KeyValuePair<string, string>> dimensionSet, string template, string billboardServerUrl) {

            Common.TapBillboardConfig.Config = new TapBillboardConfig(dimensionSet, template, billboardServerUrl);
            return _;
        }
    }
}
