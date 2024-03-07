using UnityEngine;

namespace TapTap.Login.Internal
{
    internal static class UIOperation
    {
        // ReSharper disable Unity.PerformanceAnalysis
        public static T GetComponent<T>(GameObject obj) where T : Component
        {
            T component = obj.GetComponent<T>();

            if (component == null)
            {
                component = obj.AddComponent<T>();
            }

            return component;
        }

    }
}

