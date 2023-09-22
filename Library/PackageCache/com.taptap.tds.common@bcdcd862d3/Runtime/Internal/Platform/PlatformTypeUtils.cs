using System;
using System.Linq;

namespace TapTap.Common.Internal {
    public static class PlatformTypeUtils {
        /// <summary>
        /// 创建平台接口实现类对象
        /// </summary>
        /// <param name="interfaceType"></param>
        /// <param name="startWith"></param>
        /// <returns></returns>
        public static object CreatePlatformImplementationObject(Type interfaceType, string startWith) {
            Type platformSupportType = AppDomain.CurrentDomain.GetAssemblies()
                .Where(asssembly => asssembly.GetName().FullName.StartsWith(startWith))
                .SelectMany(assembly => assembly.GetTypes())
                .SingleOrDefault(clazz => interfaceType.IsAssignableFrom(clazz) && clazz.IsClass);
            if (platformSupportType != null) {
                return Activator.CreateInstance(platformSupportType);
            }
            return null;
        }
    }
}