namespace TapTap.Login.Internal
{
    public abstract class Region
    {
        public abstract string WebHost();

        public abstract string ApiHost();

        public abstract string AccountHost();

        public string CodeUrl()
        {
            return WebHost() + "/oauth2/v1/device/code";
        }

        public string TokenUrl()
        {
            return WebHost() + "/oauth2/v1/token";
        }

        public string ProfileUrl()
        {
            return ApiHost() + "/account/profile/v1?client_id=";
        }

        public string AccountUrl()
        {
            return AccountHost() + "/authorize?";
        }
    }

    public class RegionCN : Region
    {
        public override string WebHost()
        {
            return "https://accounts.tapapis.cn";
        }

        public override string ApiHost()
        {
            return "https://open.tapapis.cn";
        }

        public override string AccountHost()
        {
            return "https://accounts.taptap.com";
        }
    }

    public class RegionIO : Region
    {
        public override string WebHost()
        {
            return "https://accounts.tapapis.com";
        }

        public override string ApiHost()
        {
            return "https://open.tapapis.com";
        }

        public override string AccountHost()
        {
            return "https://accounts.taptap.io";
        }
    }
}