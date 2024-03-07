using System;
using System.Collections.Generic;
using System.Threading.Tasks;

namespace TapTap.Common
{
    public interface ITapCommon
    {
        void Init(TapConfig config);

        void GetRegionCode(Action<bool> callback);
        void GetDeviceId(Action<string> callback);
        void GetDeviceType(Action<int> callback);

        void IsTapTapInstalled(Action<bool> callback);

        void IsTapTapGlobalInstalled(Action<bool> callback);

        void UpdateGameInTapTap(string appId, Action<bool> callback);

        void UpdateGameInTapGlobal(string appId, Action<bool> callback);

        void OpenReviewInTapTap(string appId, Action<bool> callback);

        void OpenReviewInTapGlobal(string appId, Action<bool> callback);

        void SetLanguage(TapLanguage language);

        void SetXua();

        void RegisterProperties(string key, ITapPropertiesProxy proxy);
        
        void UseNativeDataInCore(bool enable);
        void SetDurationStatisticsEnabled(bool enable);

        void AddHost(string host, string replaceHost);

        Task<bool> UpdateGameAndFailToWebInTapTap(string appId);

        Task<bool> UpdateGameAndFailToWebInTapGlobal(string appId);

        Task<bool> UpdateGameAndFailToWebInTapTap(string appId, string webUrl);

        Task<bool> UpdateGameAndFailToWebInTapGlobal(string appId, string webUrl);

        Task<bool> OpenWebDownloadUrlOfTapTap(string appId);

        Task<bool> OpenWebDownloadUrlOfTapGlobal(string appId);

        Task<bool> OpenWebDownloadUrl(string url);
    }

    [Serializable]
    public class CommonRegionWrapper
    {
        public bool isMainland;

        public CommonRegionWrapper(string json)
        {
            Dictionary<string, object> dic = Json.Deserialize(json) as Dictionary<string, object>;
            isMainland = SafeDictionary.GetValue<bool>(dic, "isMainland");
        }
    }
}