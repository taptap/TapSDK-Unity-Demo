using System;
using System.Threading.Tasks;

namespace TapTap.Common.Internal {
    public interface ITapCommonPlatform {
        void Init(TapConfig config);

        void GetRegionCode(Action<bool> callback);

        void IsTapTapInstalled(Action<bool> callback);

        void IsTapTapGlobalInstalled(Action<bool> callback);

        void UpdateGameInTapTap(string appId, Action<bool> callback);

        void UpdateGameInTapGlobal(string appId, Action<bool> callback);

        void OpenReviewInTapTap(string appId, Action<bool> callback);

        void OpenReviewInTapGlobal(string appId, Action<bool> callback);

        void SetXua();

        void SetLanguage(TapLanguage language);

        void RegisterProperties(string key, ITapPropertiesProxy proxy);
        
        void UseNativeDataInCore(bool enable);

        void AddHost(string host, string replaceHost);

        Task<bool> UpdateGameAndFailToWebInTapTap(string appId);

        Task<bool> UpdateGameAndFailToWebInTapGlobal(string appId);

        Task<bool> UpdateGameAndFailToWebInTapTap(string appId, string webUrl);

        Task<bool> UpdateGameAndFailToWebInTapGlobal(string appId, string webUrl);

        Task<bool> OpenWebDownloadUrlOfTapTap(string appId);

        Task<bool> OpenWebDownloadUrlOfTapGlobal(string appId);

        Task<bool> OpenWebDownloadUrl(string url);
        
        void SetDurationStatisticsEnabled(bool enable);

        string DeviceId { get; }

        int DeviceType { get; }

        void SetCurrentTdsId(string tdsId);

    }
}
