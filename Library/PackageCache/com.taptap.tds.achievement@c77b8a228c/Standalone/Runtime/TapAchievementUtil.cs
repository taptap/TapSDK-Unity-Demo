using System;
using System.Collections.Generic;
using System.Net;
using System.Reflection;
using System.Threading.Tasks;
using UnityEngine;
using TapTap.Achievement.Localization;
using TapTap.Common;
using TapTap.UI;

namespace TapTap.Achievement.Standalone
{
    internal static class TapAchievementUtil
    {
        private const int DEFAULT_ACHIEVEMENT_ICON_SIZE = 512;
        private const string DEFAULT_ACHIEVEMENT_ICON_PATH = "Textures/default_achievement_icon";
        private const string HIDE_ACHIEVEMENT_ICON_PATH = "Textures/ic_achievement_icon_invisible";

        private static Texture defaultAchievementIcon;
        internal static Texture2D gameIcon;
        internal static string applicationName;
        private static Texture2D hideIcon;
        internal static Dictionary<string, Texture> iconCache = new Dictionary<string, Texture>();

        internal static void ClearIconCache()
        {
            iconCache.Clear();
        }
        
        public static AchievementLocalizationItems LocalizationItems
        {
            get
            {
                if (_achievementLocalizationItems == null)
                {
                    var textAsset = Resources.Load<TextAsset>(AchievementLocalizationItems.PATH);
                    var type = typeof(AchievementLocalizationItems);
                    Debug.LogFormat($"AchievementLocalizationItems GetConstructor IsPublic: {type.GetConstructor(new Type[0]).Name}");
                    _achievementLocalizationItems = AchievementLocalizationItems.FromJson(textAsset.text);
                }
                return _achievementLocalizationItems;
            }
        }
        private static AchievementLocalizationItems _achievementLocalizationItems;

        internal static Item GetLocalizationItem()
        {
            return LocalizationItems.Current;
        }

        internal static string GetApplicationName()
        {
            if (applicationName == null)
            {
                applicationName = Application.productName;
            }

            return applicationName;
        }

        internal static Texture2D GetGameIcon()
        {
            if (gameIcon != null) return gameIcon;
#if UNITY_EDITOR
            gameIcon = GetApplicationIconInEditor();
#else
            gameIcon = Resources.Load<Texture2D>(TapAchievement.IconName);
#endif
            return gameIcon;
        }
        
        internal static Texture2D GetHideAchievementIcon()
        {
            if (hideIcon != null) return hideIcon;
            hideIcon = Resources.Load<Texture2D>(HIDE_ACHIEVEMENT_ICON_PATH);
            return hideIcon;
        }
        
        internal static string GetRarityTitle(string level)
        {
            switch (level)
            {
                case "1":
                    return GetLocalizationItem().Common;
                case "2":
                    return GetLocalizationItem().Uncommom;
                case "3":
                    return GetLocalizationItem().Rare;
                case "4":
                    return GetLocalizationItem().UltraRare;
            }

            return "";
        }
        
        internal static async Task<Texture> GetTextureFromUrl(string id, string url)
        {
            EnsureDefaultAchievementIcon();
            Texture texture = null;
            try
            {
                if (iconCache.TryGetValue(id, out texture)) return texture;
                texture = await SaveImage(id, url);
                iconCache[id] = texture;
                return texture;
            }
            catch(Exception e)
            {
                TapLogger.Error(string.Format($"{e.Message}\n{e.StackTrace}"));
            }

            return null;
        }

        private static void EnsureDefaultAchievementIcon()
        {
            if (defaultAchievementIcon == null)
            {
                defaultAchievementIcon = Resources.Load<Texture>(DEFAULT_ACHIEVEMENT_ICON_PATH);
            }
        }
        
        #if UNITY_EDITOR
        private static Texture2D GetApplicationIconInEditor()
        {
            var psType = typeof(UnityEditor.PlayerSettings);
            var getAllIconsMI =
                psType.GetMethod("GetAllIconsForPlatform", BindingFlags.NonPublic | BindingFlags.Static);
            var textures = getAllIconsMI.Invoke(null, new object[]{""}) as Texture2D[];
            
            if (textures != null && textures.Length > 0)
            {
                var r = textures[0];
                var p = UnityEditor.AssetDatabase.GetAssetPath(r);
                return UnityEditor.AssetDatabase.LoadAssetAtPath<Texture2D>(p);
            }

            return null;
        }
        #endif
        
        private static async Task<Texture> SaveImage(string id, string imageUrl)
        {
            using (WebClient client = new WebClient())
            {
                try
                {
                    var bytes = await client.DownloadDataTaskAsync(imageUrl);
                    Texture texture = new Texture2D(2, 2);
                    if (false == (texture as Texture2D).LoadImage(bytes, false) || !IsValidIcon(texture))
                    {
                        texture = defaultAchievementIcon;
                    }
                    return texture;
                }
                catch (Exception e)
                {
                    TapLogger.Error(string.Format($"{e.Message}\n{e.StackTrace}"));
                    return null;
                }
            }
        }

        private static bool IsValidIcon(Texture texture)
        {
            return texture.width >= DEFAULT_ACHIEVEMENT_ICON_SIZE && texture.height >= DEFAULT_ACHIEVEMENT_ICON_SIZE;
        }
    }
}
