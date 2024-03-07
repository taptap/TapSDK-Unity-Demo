using TapTap.Common;

namespace TapTap.Bootstrap
{
    public class TapBootstrap
    {
        public static void Init(TapConfig tapConfig)
        {
            TapBootstrapImpl.GetInstance().Init(tapConfig);
        }

        public static void SetPreferredLanguage(TapLanguage language)
        {
            TapCommon.SetLanguage(language);
        }
    }
}