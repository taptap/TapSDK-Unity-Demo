using System.Collections.Generic;
using TapTap.AntiAddiction.Model;

namespace TapTap.AntiAddiction.Model
{
    public class AntiAddictionConfig
    {
        public static AntiAddictionConfig Config { get; set; }
        
        public string gameId;

        public bool useTapLogin;
        
        public bool showSwitchAccount = true;

        public Region region = Region.China;
        
        //"g" means Displays the enumeration entry as a string value, if possible, and otherwise displays the integer value of the current instance.
        public string regionStr => region.ToString("g").ToLower();
        
        public Dictionary<string, object> ToDict() {
            return new Dictionary<string, object> {
                ["gameId"] = gameId,
                ["useTapLogin"] = useTapLogin,
                ["showSwitchAccount"] = showSwitchAccount,
                ["region"] = region,
            };
        }
    }
}

namespace TapTap.Common {
    public static class TapConfigBuilderForAntiAddiction {
        public static TapConfig.Builder AntiAddictionConfig(this TapConfig.Builder builder,
            bool showSwitchAccount,
            bool useTapLogin = true) {

            AntiAddiction.Model.AntiAddictionConfig.Config = new AntiAddictionConfig(){
                showSwitchAccount = showSwitchAccount,
                useTapLogin = useTapLogin
            };
            
            return builder;
        }
    }
}
