using System.Collections.Generic;

namespace TapTap.Friends {
    public class TDSFriendLinkInfo : Dictionary<string, object> {
        public string RoleName => TryGetValue("role_name", out object roleNameObj) &&
            (roleNameObj is string roleName) ? roleName : null; 

        public string Identity => TryGetValue("identity", out object identityObj) &&
            (identityObj is string identity) ? identity : null; 

        public Dictionary<string, string> Queries => TryGetValue("query", out object queryObj) &&
            (queryObj is Dictionary<string, string> query) ? query : null;

        internal TDSFriendLinkInfo(IDictionary<string, object> data) : base(data) {
        }
    }
}
