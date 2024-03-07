using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace TapTap.Common
{
    public class TapConfig
    {
        public readonly string ClientID;

        public readonly string ClientToken;

        public readonly RegionType RegionType;

        public readonly string ServerURL;
        
        private TapConfig(string clientID, string clientToken, RegionType regionType, string serverUrl)
        {
            ClientID = clientID;
            ClientToken = clientToken;
            ServerURL = serverUrl;
            RegionType = regionType;
        }
        


        public Dictionary<string, object> ToDict() {
            return new Dictionary<string, object> {
                ["clientID"] = ClientID,
                ["clientToken"] = ClientToken,
                ["isCN"] = RegionType == RegionType.CN,
            };
        }
 
        public class Builder
        {
            private string _clientID;

            private string _clientToken;

            private string _serverURL;

            private RegionType _regionType;


            public Builder()
            {
            }

            public Builder ClientID(string clientId)
            {
                _clientID = clientId;
                return this;
            }

            public Builder ClientToken(string secret)
            {
                _clientToken = secret;
                return this;
            }

            public Builder ServerURL(string serverURL)
            {
                _serverURL = serverURL;
                return this;
            }

            public Builder RegionType(RegionType type)
            {
                _regionType = type;
                return this;
            }

            public TapConfig ConfigBuilder()
            {
                return new TapConfig(_clientID, _clientToken, _regionType, _serverURL);
            }
        }
    }
}
