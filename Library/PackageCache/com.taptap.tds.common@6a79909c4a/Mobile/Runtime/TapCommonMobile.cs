using System;
using System.Threading.Tasks;
using TapTap.Common.Internal;

namespace TapTap.Common.Mobile
{
    public class TapCommonMobile : ITapCommonPlatform
    {
        public void Init(TapConfig config)
        {
            TapCommon.UseNativeDataInCore(false);
            TapCommonImpl.GetInstance().Init(config);
        }

        public void GetRegionCode(Action<bool> callback)
        {
            TapCommonImpl.GetInstance().GetRegionCode(callback);
        }

        public void IsTapTapInstalled(Action<bool> callback)
        {
            TapCommonImpl.GetInstance().IsTapTapInstalled(callback);
        }

        public void IsTapTapGlobalInstalled(Action<bool> callback)
        {
            TapCommonImpl.GetInstance().IsTapTapGlobalInstalled(callback);
        }

        public void UpdateGameInTapTap(string appId, Action<bool> callback)
        {
            TapCommonImpl.GetInstance().UpdateGameInTapTap(appId, callback);
        }

        public void UpdateGameInTapGlobal(string appId, Action<bool> callback)
        {
            TapCommonImpl.GetInstance().UpdateGameInTapGlobal(appId, callback);
        }

        public void OpenReviewInTapTap(string appId, Action<bool> callback)
        {
            TapCommonImpl.GetInstance().OpenReviewInTapTap(appId, callback);
        }

        public void OpenReviewInTapGlobal(string appId, Action<bool> callback)
        {
            TapCommonImpl.GetInstance().OpenReviewInTapGlobal(appId, callback);
        }

        public void SetXua()
        {
            TapCommonImpl.GetInstance().SetXua();
        }

        public void SetLanguage(TapLanguage language)
        {
            TapCommonImpl.GetInstance().SetLanguage(language);
            TapLocalizeManager.SetCurrentLanguage(language);
        }

        public void RegisterProperties(string key, ITapPropertiesProxy proxy)
        {
            TapCommonImpl.GetInstance().RegisterProperties(key, proxy);
        }

        public void UseNativeDataInCore(bool enable)
        {
            TapCommonImpl.GetInstance().UseNativeDataInCore(enable);
        }

        public void SetDurationStatisticsEnabled(bool enable)
        {
            TapCommonImpl.GetInstance().SetDurationStatisticsEnabled(enable);
        }

        public void AddHost(string host, string replaceHost)
        {
            TapCommonImpl.GetInstance().AddHost(host, replaceHost);
        }

        public Task<bool> UpdateGameAndFailToWebInTapTap(string appId)
        {
            return TapCommonImpl.GetInstance().UpdateGameAndFailToWebInTapTap(appId);
        }

        public Task<bool> UpdateGameAndFailToWebInTapGlobal(string appId)
        {
            return TapCommonImpl.GetInstance().UpdateGameAndFailToWebInTapGlobal(appId);
        }

        public Task<bool> UpdateGameAndFailToWebInTapTap(string appId, string webUrl)
        {
            return TapCommonImpl.GetInstance().UpdateGameAndFailToWebInTapTap(appId, webUrl);
        }

        public Task<bool> UpdateGameAndFailToWebInTapGlobal(string appId, string webUrl)
        {
            return TapCommonImpl.GetInstance().UpdateGameAndFailToWebInTapGlobal(appId, webUrl);
        }

        public Task<bool> OpenWebDownloadUrlOfTapTap(string appId)
        {
            return TapCommonImpl.GetInstance().OpenWebDownloadUrlOfTapTap(appId);
        }

        public Task<bool> OpenWebDownloadUrlOfTapGlobal(string appId)
        {
            return TapCommonImpl.GetInstance().OpenWebDownloadUrlOfTapGlobal(appId);
        }

        public Task<bool> OpenWebDownloadUrl(string url)
        {
            return TapCommonImpl.GetInstance().OpenWebDownloadUrl(url);
        }
    }
}