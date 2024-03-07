using System.Collections.Generic;
using TapTap.Common;

namespace TapTap.Payment
{
    public class SkuDetails
    {
        public string goodsOpenId;

        public int goodsType;

        public GoodsConfig goodsConfig;

        public GoodsPrice goodsPrice;

        public SkuDetails(string json)
        {
            var dic = Json.Deserialize(json) as Dictionary<string, object>;
            goodsOpenId = SafeDictionary.GetValue<string>(dic, "goodsOpenId");
            goodsType = SafeDictionary.GetValue<int>(dic, "goodsType");

            if (SafeDictionary.GetValue<Dictionary<string, object>>(dic, "goodsConfig") is Dictionary<string, object>
                goodsConfigDic)
            {
                goodsConfig = new GoodsConfig(goodsConfigDic);
            }

            if (SafeDictionary.GetValue<Dictionary<string, object>>(dic, "goodsPrice") is Dictionary<string, object>
                goodsPriceDic)
            {
                goodsPrice = new GoodsPrice(goodsPriceDic);
            }
        }

        public SkuDetails(Dictionary<string, object> dic)
        {
            goodsOpenId = SafeDictionary.GetValue<string>(dic, "goodsOpenId");
            goodsType = SafeDictionary.GetValue<int>(dic, "goodsType");

            if (SafeDictionary.GetValue<Dictionary<string, object>>(dic, "goodsConfig") is Dictionary<string, object>
                goodsConfigDic)
            {
                goodsConfig = new GoodsConfig(goodsConfigDic);
            }

            if (SafeDictionary.GetValue<Dictionary<string, object>>(dic, "goodsPrice") is Dictionary<string, object>
                goodsPriceDic)
            {
                goodsPrice = new GoodsPrice(goodsPriceDic);
            }
        }

        public string ToJson()
        {
            var dic = new Dictionary<string, object>
            {
                ["goodsOpenId"] = goodsOpenId,
                ["goodsType"] = goodsType,
                ["goodsConfig"] = goodsConfig?.ToDic(),
                ["goodsPrice"] = goodsPrice?.ToDic()
            };
            return Json.Serialize(dic);
        }

    }

    public class GoodsConfig
    {
        public string languageId;

        public string goodsName;

        public string goodsDescription;

        public GoodsConfig(Dictionary<string, object> dic)
        {
            languageId = SafeDictionary.GetValue<string>(dic, "languageId");
            goodsName = SafeDictionary.GetValue<string>(dic, "goodsName");
            goodsDescription = SafeDictionary.GetValue<string>(dic, "goodsDescription");
        }

        public GoodsConfig(string json)
        {
            var dic = Json.Deserialize(json) as Dictionary<string, object>;
            languageId = SafeDictionary.GetValue<string>(dic, "languageId");
            goodsName = SafeDictionary.GetValue<string>(dic, "goodsName");
            goodsDescription = SafeDictionary.GetValue<string>(dic, "goodsDescription");
        }

        public Dictionary<string, object> ToDic()
        {
            return new Dictionary<string, object>
            {
                ["languageId"] = languageId,
                ["goodsName"] = goodsName,
                ["goodsDescription"] = goodsDescription
            };
        }
    } 

    public class GoodsPrice
    {
        public string regionId;

        public string goodsPriceAmount;

        public string goodsPriceCurrency;

        public GoodsPrice(Dictionary<string, object> dic)
        {
            regionId = SafeDictionary.GetValue<string>(dic, "regionId");
            goodsPriceAmount = SafeDictionary.GetValue<string>(dic, "goodsPriceAmount");
            goodsPriceCurrency = SafeDictionary.GetValue<string>(dic, "goodsPriceCurrency");
        }

        public GoodsPrice(string json)
        {
            var dic = Json.Deserialize(json) as Dictionary<string, object>;
            regionId = SafeDictionary.GetValue<string>(dic, "regionId");
            goodsPriceAmount = SafeDictionary.GetValue<string>(dic, "goodsPriceAmount");
            goodsPriceCurrency = SafeDictionary.GetValue<string>(dic, "goodsPriceCurrency");
        }

        public Dictionary<string, object> ToDic()
        {
            return new Dictionary<string, object>
            {
                ["regionId"] = regionId,
                ["goodsPriceAmount"] = goodsPriceAmount,
                ["goodsPriceCurrency"] = goodsPriceCurrency
            };
        }
    }
}