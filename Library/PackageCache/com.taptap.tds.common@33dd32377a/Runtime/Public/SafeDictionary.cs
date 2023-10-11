using System.Collections.Generic;

namespace TapTap.Common
{
    public static class SafeDictionary
    {
        public static T GetValue<T> (Dictionary<string, object> dic, string key, T defaultVal = default(T))
        {
            if (dic == null || dic.Keys.Count == 0) return default(T);
            if (!dic.TryGetValue(key, out var outputValue))
                return defaultVal;
            if(typeof(T) == typeof(int)){
                return (T)(object)int.Parse(outputValue.ToString());
            }
            if(typeof(T) == typeof(double)){
                return (T)(object)double.Parse(outputValue.ToString());
            }
            if(typeof(T) == typeof(long)){
                return (T)(object)long.Parse(outputValue.ToString());
            }
            if(typeof(T) == typeof(bool)){
                return  (T)outputValue;
            }
            return (T) outputValue;
        }
    }
}