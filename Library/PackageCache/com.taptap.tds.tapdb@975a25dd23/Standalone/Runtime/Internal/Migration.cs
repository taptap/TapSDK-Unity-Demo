using System.Collections.Generic;
using System.IO;
using UnityEngine;
using LC.Newtonsoft.Json;

namespace TapTap.TapDB.Standalone.Internal {
    /// <summary>
    /// 迁移旧版数据
    /// </summary>
    public class Migration {
        private static readonly string PERSISTENT_FILE_NAME = "tapdb_storage";

        public void TryMigrate() {
            string persistentFilePath = Path.Combine(Application.persistentDataPath, PERSISTENT_FILE_NAME);
            if (!File.Exists(persistentFilePath)) {
                return;
            }

            string json = File.ReadAllText(persistentFilePath);

            // 数据类型转化
            Dictionary<string, object> jsonData = JsonConvert.DeserializeObject<Dictionary<string, object>>(json);
            Dictionary<string, object> newJsonData = new Dictionary<string, object>();
            foreach (KeyValuePair<string, object> kv in jsonData) {
                string value = Codec.Decode(kv.Value.ToString());
                if (kv.Key == PlayRecorder.PLAYED_DURATION_KEY && long.TryParse(value, out long duration)) {
                    newJsonData[kv.Key] = duration;
                } else {
                    newJsonData[kv.Key] = value;
                }
            }

            // 写回新版数据文件
            json = JsonConvert.SerializeObject(newJsonData);
            string persistentFilePath2 = Path.Combine(Application.persistentDataPath, Prefs.PERSISTENT_FILE_NAME);
            File.WriteAllText(persistentFilePath2, Codec.Encode(json));

            File.Delete(persistentFilePath);
        }
    }
}
