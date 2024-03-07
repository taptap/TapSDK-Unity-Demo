#if UNITY_EDITOR && UNITY_ANDROID
using System.Collections.Generic;
using LC.Newtonsoft.Json;

namespace TapTap.AndroidDependencyResolver.Editor
{
    [JsonObject]
    public class AndroidGradleContextProvider
    {
        [JsonProperty]
        public List<AndroidGradleContext> AndroidGradleContext
        {
            get;
            set;
        }

        [JsonProperty]
        public int Priority
        {
            get; 
            set;
        }

        [JsonProperty]
        public string ModuleName
        {
            get; 
            set;
        }
        
        /// <summary>
        /// 版本号
        /// </summary>
        [JsonProperty]
        public int Version = 1;
        
        /// <summary>
        /// 是否使用
        /// </summary>
        [JsonProperty]
        public bool Use = true;
    }
}
#endif