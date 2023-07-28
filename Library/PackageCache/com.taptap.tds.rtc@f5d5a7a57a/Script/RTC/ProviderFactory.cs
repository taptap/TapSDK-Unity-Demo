using TapTap.RTC.GMEImpl;

namespace TapTap.RTC
{
    public static class ProviderFactory
    {
        public static ITapRTC Create(TapRTCConfig config)
        {
            switch (config.Provider)
            {
                case Provider.GME:
                    return new GMERTCDelegateImpl();
            }
            throw new TapRTCException(-1, "Not Support Current Provider");
        }

    }
}