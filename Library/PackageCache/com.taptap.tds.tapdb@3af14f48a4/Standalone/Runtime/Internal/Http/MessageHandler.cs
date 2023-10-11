using System.Net;
using System.Net.Http;
using System.Threading;
using System.Threading.Tasks;

namespace TapTap.TapDB.Standalone.Internal {
    public class MessageHandler : HttpClientHandler {
        /// <summary>
        /// 最大重试次数
        /// </summary>
        private const int MAX_RETRY_TIMES = 3;

        public MessageHandler() {
            AllowAutoRedirect = false;
        }

        protected override async Task<HttpResponseMessage> SendAsync(HttpRequestMessage request, CancellationToken cancellationToken) {
            HttpResponseMessage response = null;
            for (int i = 0; i < MAX_RETRY_TIMES; i++) {
                response = await base.SendAsync(request, cancellationToken);
                if (response.IsSuccessStatusCode) {
                    break;
                } else if ((int)response.StatusCode >= 300 && (int)response.StatusCode <= 399) {
                    request.RequestUri = response.Headers.Location;
                }
            }

            return response;
        }
    }
}