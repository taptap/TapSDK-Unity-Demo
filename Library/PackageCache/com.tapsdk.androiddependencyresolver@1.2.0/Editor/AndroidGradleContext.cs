#if UNITY_EDITOR && UNITY_ANDROID
using System.Collections.Generic;
using LC.Newtonsoft.Json;

namespace TapTap.AndroidDependencyResolver.Editor
{
    [JsonObject]
    public class AndroidGradleContext
    {
        /// <summary>
        /// 替换位置
        /// </summary>
        [JsonProperty]
        public AndroidGradleLocationType locationType;
        
        /// <summary>
        /// 适配 Unity 的版本
        /// </summary>
        [JsonProperty]
        public UnityVersionCompatibleType unityVersionCompatibleType = UnityVersionCompatibleType.EveryVersion;
        
        /// <summary>
        /// Gradle 模板类型
        /// </summary>
        [JsonProperty]
        public CustomTemplateType templateType;
        
        /// <summary>
        /// 替换类型
        /// </summary>
        [JsonProperty]
        public AndroidGradleProcessType processType = AndroidGradleProcessType.Insert;
        
        /// <summary>
        /// 替换位置参数,
        /// </summary>
        [JsonProperty]
        public string locationParam;
        
        /// <summary>
        /// 替换内容
        /// </summary>
        [JsonProperty]
        public List<string> processContent;
    }
}
#endif