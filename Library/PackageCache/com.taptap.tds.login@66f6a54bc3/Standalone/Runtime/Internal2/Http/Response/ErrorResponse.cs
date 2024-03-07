using LC.Newtonsoft.Json;

namespace TapTap.Login.Internal.Http {
    public class ErrorData {
        [JsonProperty("code")]
        public int Code { get; set; }

        [JsonProperty("error")]
        public string Error { get; set; }
    }

    public class ErrorResponse {
        [JsonProperty("data")]
        public ErrorData Data { get; set; }
    }
}
