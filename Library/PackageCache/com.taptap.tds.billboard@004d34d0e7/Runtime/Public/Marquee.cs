using LC.Newtonsoft.Json;

namespace TapTap.Billboard {
    public class Marquee {
        public int Id { get; set; }
        
        public string Type { get; set; }

        public string Content { get; set; }

        public string Template { get; set; }

        public string ShortTitle { get; set; }

        public string LongTitle { get; set; }

        public string JumpLocation { get; set; }

        public string JumpLink { get; set; }

        public long PublishTime { get; set; }

        public long ExpireTime { get; set; }

        public override string ToString() {
            return JsonConvert.SerializeObject(this);
        }
    }
}
