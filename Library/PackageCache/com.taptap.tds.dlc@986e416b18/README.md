# [TapTap.License](./Documentation/README.md)

## 使用前提

使用TapTap.License的前提是必须添加以下依赖库:

* [TapTap.Common](https://github.com/TapTap/TapCommon-Unity.git)

## 接口描述

### 命名空间

```c#
using TapTap.License;
```

### 付费认证

#### 1.设置授权回调

```c#
//默认情况下 SDK 会弹出不可由玩家手动取消的弹窗来避免未授权玩家进入游戏，如果需要回调来触发流程，请添加如下代码
TapLicense.SetLicencesCallback(ITapLicenseCallback callback);

public interface ITapLicenseCallback
{
    // 授权成功回调
    void OnLicenseSuccess();
}
```

#### 2. 检查付费授权

```c#
TapLicense.Check();
```

### TapLicense DLC 查询和购买

#### 1.DLC 回调设置

```c#
public interface ITapDLCCallback
{
     void OnQueryCallBack(int code, Dictionary<string, object> queryList);
    
     void OnOrderCallBack(string sku, int status);
}

TapLicense.SetDLCCallback(ITapDLCCallback callback);
```

#### 2. DLC 查询

购买前必须先查询 DLC 当前状态(支持单个查询和多个查询)

```c#
TapLicense.QueryDLC(string[] appId);
```

#### 3.DLC 购买

当 DLC 查询过且未购买时

```c#
TapLicense.PurchaseDLC(string appId);
```


