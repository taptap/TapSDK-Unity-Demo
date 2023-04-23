namespace TapTap.RTC
{
    public enum Provider
    {
        GME
    }

    public static class ProviderExtensions
    {
        public static Provider Provider = Provider.GME;

        public static string TransformToString(this Provider provider)
        {
            if (provider == Provider.GME)
            {
                return "GME";
            }

            throw new TapRTCException(-1, "TapRTC not support current Provider");
        }
    }
}