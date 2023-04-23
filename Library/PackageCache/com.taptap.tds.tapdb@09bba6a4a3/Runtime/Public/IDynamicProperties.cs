using System.Collections.Generic;

namespace TapTap.TapDB { 
    public interface IDynamicProperties {
        Dictionary<string, object> GetDynamicProperties();
    }
}
