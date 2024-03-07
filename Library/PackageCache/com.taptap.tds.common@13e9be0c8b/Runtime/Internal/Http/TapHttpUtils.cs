using System;
using System.Linq;
using System.Text;
using System.Collections.Specialized;
using System.Net.Http;

namespace TapTap.Common.Internal.Http {
    public class TapHttpUtils {
        public static void PrintRequest(HttpClient client, HttpRequestMessage request, string content = null) {
            if (TapLogger.LogDelegate == null) {
                return;
            }
            if (client == null) {
                return;
            }
            if (request == null) {
                return;
            }
            StringBuilder sb = new StringBuilder();
            sb.AppendLine("=== HTTP Request Start ===");
            sb.AppendLine($"URL: {request.RequestUri}");
            sb.AppendLine($"Method: {request.Method}");
            sb.AppendLine($"Headers: ");
            foreach (var header in client.DefaultRequestHeaders) {
                sb.AppendLine($"\t{header.Key}: {string.Join(",", header.Value.ToArray())}");
            }
            foreach (var header in request.Headers) {
                sb.AppendLine($"\t{header.Key}: {string.Join(",", header.Value.ToArray())}");
            }
            if (request.Content != null) {
                foreach (var header in request.Content.Headers) {
                    sb.AppendLine($"\t{header.Key}: {string.Join(",", header.Value.ToArray())}");
                }
            }
            if (!string.IsNullOrEmpty(content)) {
                sb.AppendLine($"Content: {content}");
            }
            sb.AppendLine("=== HTTP Request End ===");
            TapLogger.Debug(sb.ToString());
        }

        public static void PrintResponse(HttpResponseMessage response, string content = null) {
            if (TapLogger.LogDelegate == null) {
                return;
            }
            StringBuilder sb = new StringBuilder();
            sb.AppendLine("=== HTTP Response Start ===");
            sb.AppendLine($"URL: {response.RequestMessage.RequestUri}");
            sb.AppendLine($"Status Code: {response.StatusCode}");
            if (!string.IsNullOrEmpty(content)) {
                sb.AppendLine($"Content: {content}");
            }
            sb.AppendLine("=== HTTP Response End ===");
            TapLogger.Debug(sb.ToString());
        }

        public static NameValueCollection ParseQueryString(string queryString)
        {
            if (string.IsNullOrEmpty(queryString)) {
                return null;
            }

            if (queryString.Length > 0 && queryString[0] == '?') {
                queryString = queryString.Substring(1);
            }
            NameValueCollection queryParameters = new NameValueCollection();
            string[] querySegments = queryString.Split('&');
            foreach(string segment in querySegments)
            {
                string[] parts = segment.Split('=');
                if (parts.Length > 0)
                {
                    string key = parts[0].Trim(new char[] { '?', ' ' });
                    string val = parts[1].Trim();

                    queryParameters.Add(key, val);
                }
            }

            return queryParameters;
        }
    }
}
