using LC.Newtonsoft.Json;

namespace TapTap.AntiAddiction.Model
{
    public class AntiAddictionConfig
    {
        [JsonProperty("gameId")]
        public string gameId;

        [JsonProperty("useTapLogin")]
        public bool useTapLogin;
        
        [JsonProperty("showSwitchAccount")]
        public bool showSwitchAccount = true;

        [JsonProperty("region")] public Region region = Region.China;
        
        //"g" means Displays the enumeration entry as a string value, if possible, and otherwise displays the integer value of the current instance.
        public string regionStr => region.ToString("g").ToLower();
    }
}
