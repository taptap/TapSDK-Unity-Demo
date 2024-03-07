using System;
using System.Linq;
using System.Collections.Specialized;

namespace TapTap.Common.Internal.Utils {
    public class UrlUtils {
        public static NameValueCollection ParseQueryString(string query) { 
            NameValueCollection nvc = new NameValueCollection();

            if (query.StartsWith("?")) {
                query = query.Substring(1);
            }

            foreach (var param in query.Split('&')) {
                string[] pair = param.Split('=');
                if (pair.Length == 2) {
                    string key = Uri.UnescapeDataString(pair[0]);
                    string value = Uri.UnescapeDataString(pair[1]);
                    nvc[key] = value;
                }
            }

            return nvc;
        }

        public static string ToQueryString(NameValueCollection nvc) {
            var array = (from key in nvc.AllKeys
                        from value in nvc.GetValues(key)
                        select $"{Uri.EscapeDataString(key)}={Uri.EscapeDataString(value)}"
                        ).ToArray();
            return string.Join("&", array);
        }
    }
}