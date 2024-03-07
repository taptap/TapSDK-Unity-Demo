## [TapTap.Moment](./Documentation/README.md)

## 使用前提

使用 TapTap.Moment 前提是必须依赖以下库:
* [TapTap.Bootstrap](https://github.com/TapTap/TapBootstrap-Unity.git)
* [TapTap.Common](https://github.com/TapTap/TapCommon-Unity.git)

## 命名空间

```c#
using TapTap.Moment;
```

## 接口描述

### 设置回调

```c#
TapMoment.SetCallback(Action<int,string> action);
```

### 打开动态

```c#
TapMoment.Open(Orientation orientation);
```

### 发布动态

```c#
TapMoment.Publish(Orientation orientation, string[] imagePaths, string content);
```

### 关闭动态

```c#
TapMoment.Close();
```

### 获取更新消息
```c#
TapMoment.FetchNotification();
```

### 打开特定页面

#### 场景化入口
```c#
var sceneDic = new Dictionary<string,object>(){{TapMomentConstants.TapMomentPageShortCutKey,sceneId}};

TapMoment.DirectlyOpen(orientation,TapMomentConstants.TapMomentPageShortCut,sceneDic);
```