# [使用 TapTap.Billboard ](./Documentation/README.md)

## 使用前提
使用 TapTap.Billboard 前提是必须依赖以下库:
* [TapTap.Bootstrap](https://github.com/TapTap/TapBootstrap-Unity.git)
* [TapTap.Common](https://github.com/TapTap/TapCommon-Unity.git)
* [TapTap.Login](https://github.com/TapTap/TapLogin-Unity.git)

## 命名空间

```c#
using TapTap.Billboard;
```

## 接口描述
### 1.初始化
```cs
var dimensionSet = new HashSet<Pair<string, string>>();
Pair<string, string> pair = new Pair<string, string>("platform", "ios");
Pair<string, string> location = new Pair<string, string>("location", "CN");
dimensionSet.Add(pair);
dimensionSet.Add(location);
var templateType = "navigate"; // 可选
var billboardServerUrl = "https://your-billboard-server-url"; // 开发者中心 > 你的游戏 > 游戏服务 > 应用配置 > 域名配置 > 公告
var config = new TapConfig.Builder()
    .ClientID("your_client_id") // 必须，开发者中心对应 Client ID
    .ClientToken("your_client_token") // 必须，开发者中心对应 Client Token
    .ServerURL("https://your_server_url") // 必须，开发者中心 > 你的游戏 > 游戏服务 > 基本信息 > 域名配置 > API
    .RegionType(RegionType.CN) // 可选项，CN 表示中国大陆，IO 表示其他国家或地区
    .TapBillboardConfig(dimensionSet, templateType, billboardServerUrl)
    .ConfigBuilder();
TapBootstrap.Init(config);
```

### 2.打开公告
```cs
TapBillboard.OpenPanel((any, error) =>
{
    if (error != null)
    {
        // 打开公告失败  可以根据 error.code 和 error.errorDescription 来判断错误原因
    } else
    {
        // 打开公告成功
    }
});
```

### 3.获取小红点
```cs
TapBillboard.QueryBadgeDetails((badgeDetails, error) =>
{
    if (error != null)
    {
        // 获取小红点信息失败 可以根据 error.code 和 error.errorDescription 来判断错误原因
    }
    else
    {
        // 获取小红点信息成功
        if (badgeDetails.showRedDot == 1) {
            // 有新的公告信息
        } else {
            // 没有新的公告信息
        }
    }
});
```

### 4.注册自定义事件监听
```cs
TapBillboard.RegisterCustomLinkListener(url =>
{
    // 这里返回的 url 地址和游戏在公告系统内配置的地址是一致的
});
```

### 5.解除已注册的自定义事件监听
```cs
// 已注册的回调对象需要游戏保存，取消注册的时候要把对象传给 SDK
TapBillboard.UnRegisterCustomLinkListener(registerdListener);
```