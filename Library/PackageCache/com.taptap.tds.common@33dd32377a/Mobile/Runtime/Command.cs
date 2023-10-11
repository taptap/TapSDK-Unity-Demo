using System.Collections.Generic;
using UnityEngine;

namespace TapTap.Common
{
    public class Command
    {
        [SerializeField] public string service;
        [SerializeField] public string method;
        [SerializeField] public string args;
        [SerializeField] public bool callback;
        [SerializeField] public string callbackId;
        [SerializeField] public bool onceTime;
        
        public Command()
        {

        }

        public Command(string json)
        {
            JsonUtility.FromJsonOverwrite(json, this);
        }

        public string ToJSON()
        {
            return JsonUtility.ToJson(this);
        }

        public Command(string service, string method, bool callback, Dictionary<string, object> dic)
        {
            this.args = dic == null ? null : Json.Serialize(dic);
            this.service = service;
            this.method = method;
            this.callback = callback;
            this.callbackId = this.callback ? TapUUID.UUID() : null;
        }

        public Command(string service, string method, bool callback, bool onceTime, Dictionary<string, object> dic)
        {
            this.args = dic == null ? null : Json.Serialize(dic);
            this.service = service;
            this.method = method;
            this.callback = callback;
            this.callbackId = this.callback ? TapUUID.UUID() : null;
            this.onceTime = onceTime;
        }

        public class Builder
        {
            private string service;

            private string method;

            private bool callback;

            private string callbackId;

            private bool onceTime;

            private Dictionary<string, object> args;

            public Builder()
            {

            }

            public Builder Service(string service)
            {
                this.service = service;
                return this;
            }

            public Builder Method(string method)
            {
                this.method = method;
                return this;
            }

            public Builder OnceTime(bool onceTime)
            {
                this.onceTime = onceTime;
                return this;
            }

            public Builder Args(Dictionary<string, object> dic)
            {
                this.args = dic;
                return this;
            }

            public Builder Args(string key, object value)
            {
                if (this.args == null)
                {
                    this.args = new Dictionary<string, object>();
                }
                if(value is Dictionary<string,object>)
                {
                    value = Json.Serialize(value);
                }
                this.args.Add(key, value);
                return this;
            }

            public Builder Callback(bool callback)
            {
                this.callback = callback;
                this.callbackId = this.callback ? TapUUID.UUID() : null;
                return this;
            }

            public Command CommandBuilder()
            {
                return new Command(this.service, this.method, this.callback, this.onceTime, this.args);
            }
        }
    }
}