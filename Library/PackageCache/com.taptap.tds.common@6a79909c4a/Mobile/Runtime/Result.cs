using System;
using UnityEngine;

namespace TapTap.Common
{
    [Serializable]
    public class Result
    {
        public static int RESULT_SUCCESS = 0;

        public static int RESULT_ERROR = -1;

        [SerializeField] public int code;

        [SerializeField] public string message;

        [SerializeField] public string content;

        [SerializeField] public string callbackId;

        [SerializeField] public bool onceTime;

        public Result()
        {
        }

        public Result(string json)
        {
            JsonUtility.FromJsonOverwrite(json, this);
        }

        public string ToJSON()
        {
            return JsonUtility.ToJson(this);
        }
    }
}