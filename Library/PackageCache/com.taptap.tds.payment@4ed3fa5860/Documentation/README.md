# TapPayment-Unity

## 1.概览

### 1.1 TapPayment-Unity 说明
TapPayment 是一项可让您在游戏中销售虚拟产品的服务。<br></br>
您可以在TapPayment中销售以下类型的商品。
- 消耗性商品
- 非消耗性商品

借助 TapTap 开发者中心, 您可以方便的创建游戏内商品。<br></br>
并且在游戏中便捷的接入 TapPayment 的服务，来进行游戏商品的销售。<br></br>
**TapPayment 支付只支持国内支付。支付渠道暂时只支持微信支付 & 支付宝支付**
## 使用前提

### 1.2 接入前准备
#### 1.2.1 开发环境
Unity 2019.4 或更高版本

#### 1.2.2 集成库
使用 TapTap.Payment 前提是必须依赖以下库:
* [TapTap.Bootstrap](https://github.com/TapTap/TapBootstrap-Unity.git)
* [TapTap.Common](https://github.com/TapTap/TapCommon-Unity.git)
* [LeanCloud](https://github.com/leancloud/csharp-sdk-upm.git#storage-1.0.2)

#### 1.2.3 （可选）微信、支付宝 App 支付配置
1. 加入 Android 依赖解析 SDK：https://github.com/taptap/android_dependency_resolver
2. 在 Assets 文件夹中添加如下文件（TapAndroidProvider.txt） ，其中 processContent 的内容即为预期加入的微信和支付宝SDK。文件内容不需要改动，直接复制使用即可。
```
{
  "Version": 1, // 当前配置版本，需要配置为 1，用来表示整体数据结构的版本，目前 Unity Android Dependency Resolver 仅能解析版本为 1 的数据
  "Use": true,  // 当前配置是否会被使用
  "Priority": 2,  // 在打包时，修改 Gradle 模板的顺序，目前只有 XDSDK 使用了 10 以内的数字
  "ModuleName": "XD.Common", // 修改 Gradle 模板模块的名字
  // 下面数组是用来表示所有需要修改 Gradle 模板的地方
  // 数组中的每个元素，会标明修改哪个具体的 Gradle 模板，这个 Gradle 模板中的具体位置，以及修改内容
  "AndroidGradleContext": [
    {
      // 修改位置（需要配合locationParam使用）
      // 1 - 根据 Unity Gradle 模板 Placeholder 进行修改，需要在 locationParam 字段中写清 Placeholder
      // 2 - Custom 自定义的匹配内容，有时候 Unity Gradle 模板中的 Placeholder 无法定位我们需要的修改内容，可以用 Custom 匹配模式
      // Custom 匹配支持正则匹配，同时如果匹配内容后，会把 locationParam 中的内容修改到定位的地方
      // 3 - 在末尾添加新的内容，适合修改 gradleTemplate.properties 这种内容，可以直接在模块插入新的属性
      "locationType": 1,
      "unityVersionCompatibleType": 0,  // 本次修针对 Unity 哪个版本：0 - 任意版本；1 - Unity 2019 以上；2 - Unity 2019 以下
      // 修改哪个 Gradle 模板
      // 1- AndroidManifest.xml;2 - LauncherManifest.xml(Unity 2019版本之上才有，之前版本等于 AndroidManifest.xml);
      // 3 - mainTemplate.gradle;4 - launcherTemplate.gradle(Unity 2019版本之上才有，之前版本等于 mainTemplate.gradle)
      // 5 - baseProjectTemplate.gradle (Unity 2019版本之上才有，之前版本等于 mainTemplate.gradle)
      // 6 - gradleTemplate.properties
      "templateType": 3,
      // 修改方式，在根据 locationType 和 locationParam 定位到具体的修改位置后，需要如何修改：1 - 在定位的位置后面插入locationParam的内容；2 - 把locationParam的内容替换进来
      "processType": 1,
      // 辅助定位的具体参数
      "locationParam": "DEPS",
      // 修改的具体内容，数组形式，比如这里会在 mainTemplate.gradle 的 DEPS 关键字后面添加这些内容，来达到添加一些 Android 依赖库的目的
      // 这里添加依赖库，Unity Android Dependency Resolver 会自动与已经存在的 mainTemplate.gradle 合并，并优先使用更高版本的 Android 依赖库
      "processContent": [
        "    implementation 'com.alipay.sdk:alipaysdk-android:15.8.11@aar'",
        "    implementation 'com.tencent.mm.opensdk:wechat-sdk-android:6.8.0'"
      ]
    },
    {
      "locationType": 1,
      "unityVersionCompatibleType": 1,
      "templateType": 6,
      "processType": 1,
      "locationParam": "ADDITIONAL_PROPERTIES",
      "processContent": [
        "android.useAndroidX=true",
        "android.enableJetifier=true"
      ]
    },
    // 这里会替换到之前的 Unity 内置 Gradle 版本，更新到 4.0.1 版本
    {
      "locationType": 2,
      "unityVersionCompatibleType": 0,
      "templateType": 5,
      "processType": 2,
      "locationParam": "classpath 'com.android.tools.build:gradle:3.\\d{1}.\\d{1}'",
      "processContent": [
        "classpath 'com.android.tools.build:gradle:4.0.1'"
      ]
    },
    {
      "locationType": 2,
      "unityVersionCompatibleType": 0,
      "templateType": 5,
      "processType": 2,
      "locationParam": "classpath 'com.android.tools.build:gradle:4.0.0'",
      "processContent": [
        "classpath 'com.android.tools.build:gradle:4.0.1'"
      ]
    }
  ]
}
```

## 2. TapPayment-Unity 使用说明

Tips: 商品查询和支付接口需要先完成内建账户的登录才能使用，[参考](https://developer.taptap.cn/docs/sdk/taptap-login/guide/start/)
### 2.1 命名空间
```c#
using TapTap.Payment;
```

### 2.2 初始化
定义:
```c#
/**
 * 支付初始化 (会在TapBootstrap的初始化中调用)
 * @param tapConfig TapSDK 初始化参数
 */
void Init(TapConfig tapConfig);
```

示例如下：
```c#
var config = new TapConfig.Builder()
    .ClientID(clientId) // 必须，开发者中心对应 Client ID
    .ClientToken(clientToken) // 必须，开发者中心对应 Client Token
    .ServerURL(serverUrl) // 必须，开发者中心 > 你的游戏 > 游戏服务 > 基本信息 > 域名配置 > API
    .RegionType(RegionType.CN) // 非必须，CN 表示中国大陆，IO 表示其他国家或地区
    .TapPaymentConfig(
        "CN"                   // 地区暂时只支持「中国地区」 
        , "zh_CN"              // 语言暂时只支持中文
        , "https://${domain}" // 微信商户申请H5时提交的授权域名，详见 https://pay.weixin.qq.com/wiki/doc/api/H5.php?chapter=15_4 里 Referer 设置相关部分 
    )
    .ConfigBuilder();
TapBootstrap.Init(config);
```

### 2.3 查询单个商品
商品信息定义:
<a name="商品信息"></a>

Parameters | `type` | Description
--- | --- | ---
goodsOpenId | string |DC后台配置的商品id
goodsType | int | 1:消耗型 2:非消耗型
goodsConfig | object | 详见 **商品配置**
goodsPrice | object | 详见 **价格配置**

商品配置定义:
<a name="商品配置"></a>

Parameters | `type` | Description
--- | --- | ---
languageId | string | DC后台 创建商品时配置的 语言ID eg."zh_CN"
goodsName | string |  DC后台 创建商品时配置的 商品名称
goodsDescription | string | DC后台 创建商品时配置的 商品描述

价格配置定义:
<a name="价格配置"></a>

Parameters | 'type' | Description
--- | --- | ---
regionId | string | 国内DC后台的地区ID默认是 "CN"
goodsPriceAmount | string | DC后台创建商品时配置的 商品价格
goodsPriceCurrency | string | 国内DC后台的默认货币 "元"

 `code` | 场景
 --- | ---
 19999 | 服务端返回的数据格式非预期
 50x 的服务器错误 | 服务端内部错误
 401 | 未授权（可以检查初始化配置的参数是否正确配置）
 403 | 用户无权限访问该服务（检查开发者中心是否开通了TapPayment服务）

接口定义
```c#
/**
 * 查询单个商品
 * @param skuId 在DC后台定义的商品id
 * @param action 获取商品回调结果
  */
void QueryProduct(string skuId, Action<SkuDetails, TapError> action);
```

示例如下：
```c#
TapPayment.QueryProduct(skuId, (skuDetail, error) =>
{
    if (error != null)
    {
        // get product fail & do something
    }
    else
    {
        if (skuDetail == null) {
            // not found any product with given skuId
        } else {
            // do something
        }
    }
});
```

### 2.4 查询多个商品
接口定义
```c#
/**
 * 查询多个商品
 * @param skuIds 商品id列表 eg "test01,test02"
 * @param callback 获取商品返回结果
  */
void QueryProducts(string skuIds, Action<SkuDetails, TapError> action);
```

示例如下:
```c#
TapPayment.QueryProducts(skuIds, (list, error) =>
{
    if (error != null)
    {
        // get product fail & do something
    }
    else
    {
        if (list == null || list.Count == 0) {
            // not found any product with given skuIds
        } else {
            // do something
        }
    }
});
```

### 2.5 启动应用内购买

responseCode的定义:
<a name="支付结果"></a>

 `code` | 场景
 --- | ---
 COMPLETE(0) | 购买完成、或者购买被动取消（前端超时）、或者用户点击关闭按钮均会返回该结果
 ERROR(1) |  购买异常，前端返回hash值是fail的情况
 
定义:
```c#
/**
 * 启动购买流程
 * @param skuDetails 购买的商品信息
 * @param roleId 游戏内角色id
 * @param serverId 游戏的服务器id
 * @param extra 游戏的额外信息 json格式的字符串 eg."{\"test\":\"test\"}"
 * @param action
*/
void LaunchBillingFlow(SkuDetails skuDetails, string roleId, String serverId, String extra, Action<int, TapError> action);
```

示例如下:
```c#
TapPayment.LaunchBillingFlow(skuDetailsList[buyPosition], "roleId001", "1e59c66f-51d8-4e9e-afd2-f91965628e9b", "{\"test\":\"test\"}", (responseCode, error) =>
{
    if (error != null)
    {
        // native bridge exception
    }
    else
    {
        if (responseCode == 0)
        {
            // complete
        }
        else if (responseCode == 1)
        {
            // error
        }
    }
});
```

## 3 Server端 Webhook设置
### 3.1 Webhook说明
Webhook用于支付到账后TapPayment通知游戏方发放商品,游戏方需要在游戏服务器上设置Webhook，并在DC后台上配置好Webhook的URL。游戏收到Webhook通知后，即可认为支付成功到账，可以发放商品，同时返回200状态码，如果返回其它的状态的话，则认为支付失败，TapPayment将会重复调用Webhook最多10次。

### 3.2 Webhook内容
Webhook的内容格式为json，具体格式如下：
```json
{
    "clientId": "", // 游戏方的clientId
    "orderId": "", // create order时返回的orderId
    "serverId": "", // create order时传入的serverId
    "roleId": "", // create order时传入的roleId
    "userId": "", // create order时传入的userId
    "goodOpenId": "", // create order时传入的商品openId
    "extra": "", // create order时传入的额外信息
    "timestamp":"", // 时间戳
    "paymentChannelName", "" // 支付渠道名称
    "signature": "signature" // 签名
}
```
游戏方成功处理Webhook调用后，需要给TapPayment返回200状态码，并且返回结果为"success"字符串，否则TapPayment将认为调用失败而重试。

### 3.3 Webhook验签
Webhook使用HmacSHA256算法验签，使用的secret需要使用前在DC后台设置token，如果没有设置，Webhook不会被调用。Webhook的签名验证过程中，需要先将json中所有field按照字母顺序排序，然后将排序后的field按照key=value的格式组合成字符串，类似a=v1&b=v2的形式，最后将组合后的字符串后使用DC设置好的token用HmacSHA256算法进行签名，最后将签名结果作为Webhook的signature字段返回，最后的16进制结果全部小写。

```java
Mac sha256HMAC = Mac.getInstance("HmacSHA256");
SecretKeySpec secretKey = new SecretKeySpec(token.getBytes(), "HmacSHA256");
sha256HMAC.init(secretKey);
byte[] bytes = sha256HMAC.doFinal(str.getBytes());
hash = byteArrayToHexString(bytes);
```