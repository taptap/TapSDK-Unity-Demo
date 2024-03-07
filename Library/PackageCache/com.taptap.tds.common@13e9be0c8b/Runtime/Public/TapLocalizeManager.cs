using UnityEngine;

namespace TapTap.Common
{
    public class TapLocalizeManager
    {
        private static volatile TapLocalizeManager _instance;
        private static readonly object ObjLock = new object();

        public static TapLocalizeManager Instance
        {
            get
            {
                if (_instance != null) return _instance;
                lock (ObjLock)
                {
                    if (_instance == null)
                    {
                        _instance = new TapLocalizeManager();
                    }
                }

                return _instance;
            }
        }

        private TapLanguage _language = TapLanguage.AUTO;
        private bool _regionIsCn;

        public static void SetCurrentRegion(bool isCn)
        {
            Instance._regionIsCn = isCn;
        }

        public static void SetCurrentLanguage(TapLanguage language)
        {
            Instance._language = language;
        }

        public static TapLanguage GetCurrentLanguage()
        {
            if (Instance._language != TapLanguage.AUTO) return Instance._language;
            Instance._language = GetSystemLanguage();
            if (Instance._language == TapLanguage.AUTO)
            {
                Instance._language = Instance._regionIsCn ? TapLanguage.ZH_HANS : TapLanguage.EN;
            }

            return Instance._language;
        }

        public static string GetCurrentLanguageString() {
            TapLanguage lang = GetCurrentLanguage();
            switch (lang) {
                case TapLanguage.ZH_HANS:
                    return "zh_CN";
                case TapLanguage.EN:
                    return "en_US";
                case TapLanguage.ZH_HANT:
                    return "zh_TW";
                case TapLanguage.JA:
                    return "ja_JP";
                case TapLanguage.KO:
                    return "ko_KR";
                case TapLanguage.TH:
                    return "th_TH";
                case TapLanguage.ID:
                    return "id_ID";
                default:
                    return null;
            }
        }

        public static string GetCurrentLanguageString2() {
            TapLanguage lang = GetCurrentLanguage();
            switch (lang) {
                case TapLanguage.ZH_HANS:
                    return "zh-CN";
                case TapLanguage.EN:
                    return "en-US";
                case TapLanguage.ZH_HANT:
                    return "zh-TW";
                case TapLanguage.JA:
                    return "ja-JP";
                case TapLanguage.KO:
                    return "ko-KR";
                case TapLanguage.TH:
                    return "th-TH";
                case TapLanguage.ID:
                    return "id-ID";
                default:
                    return null;
            }
        }

        private static TapLanguage GetSystemLanguage()
        {
            var lang = TapLanguage.AUTO;
            var sysLanguage = Application.systemLanguage;
            switch (sysLanguage)
            {
                case SystemLanguage.ChineseSimplified:
                    lang = TapLanguage.ZH_HANS;
                    break;
                case SystemLanguage.English:
                    lang = TapLanguage.EN;
                    break;
                case SystemLanguage.ChineseTraditional:
                    lang = TapLanguage.ZH_HANT;
                    break;
                case SystemLanguage.Japanese:
                    lang = TapLanguage.JA;
                    break;
                case SystemLanguage.Korean:
                    lang = TapLanguage.KO;
                    break;
                case SystemLanguage.Thai:
                    lang = TapLanguage.TH;
                    break;
                case SystemLanguage.Indonesian:
                    lang = TapLanguage.ID;
                    break;
            }

            return lang;
        }
    }
}