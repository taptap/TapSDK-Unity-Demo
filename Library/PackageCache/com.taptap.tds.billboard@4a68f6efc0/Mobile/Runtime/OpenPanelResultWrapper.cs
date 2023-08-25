using System;
using System.Collections.Generic;
using TapTap.Common;
using UnityEngine;



namespace TapTap.Billboard.Mobile
{
    public class OpenPanelResultWrapper
    {
        public bool openResult;

        public TapError error;

        public int userInteractionType;

        public OpenPanelResultWrapper(string json)
        {
            var dic = Json.Deserialize(json) as Dictionary<string, object>;
            var errorJson = SafeDictionary.GetValue<string>(dic, "error");
            if (!string.IsNullOrEmpty(errorJson))
            {
                error = new TapError(errorJson);
            }

            userInteractionType = -1;
            if (dic != null && dic.ContainsKey("user_interaction")) {
                int userInteractionResult = SafeDictionary.GetValue<int>(dic, "user_interaction");
                if (userInteractionResult == 1 && dic.ContainsKey("action_name")) {
                    string userInteractionName = SafeDictionary.GetValue<string>(dic, "action_name");
                    if (userInteractionName.Equals("close")) {
                        userInteractionType = 1;
                    }
                }
            }

            if (dic != null && dic.ContainsKey("openResult"))
            {
                openResult =  SafeDictionary.GetValue<bool>(dic, "openResult");
            }else{
                openResult = true;
            }
        }
    }
}