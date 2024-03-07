#if UNITY_EDITOR && UNITY_ANDROID
namespace TapTap.AndroidDependencyResolver.Editor
{
    public enum CustomTemplateType
    {
        None = 0,
        AndroidManifest = 1,
        LauncherManifest = 2,
        UnityMainGradle = 3,
        LauncherGradle = 4,
        BaseGradle = 5,
        GradleProperties = 6,
    }

    public enum AndroidGradleLocationType
    {
        Builtin = 1,
        Custom = 2,
        End = 3,
        Start = 4,
    }

    public enum AndroidGradleProcessType
    {
        Insert = 1,
        Replace = 2,
        InsertBefore = 3,
    }
    
    public enum UnityVersionCompatibleType
    {
        // 任何版本的 Unity
        EveryVersion = 0,
        // Unity 2019.3 以及以上
        Unity_2019_3_Above = 1,
        // Unity 2019.3 以及以下
        Unity_2019_3_Beblow = 2,
    }
}
#endif