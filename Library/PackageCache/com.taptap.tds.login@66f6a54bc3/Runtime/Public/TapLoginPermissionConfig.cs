
namespace TapTap.Login {
    public class TapLoginPermission {
        public string Permission { get; set; }
        public string Description { get; set; }
    }

    public class TapLoginPermissionConfig {
        public string Name { get; set; }
        public TapLoginPermission[] Permissions { get; set; }
    }
}