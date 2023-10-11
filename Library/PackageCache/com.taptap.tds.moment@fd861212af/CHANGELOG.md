# ChangeLog

## 3.14.0

### Dependencies

- TapTap.Common v3.14.0


## 3.11.1

### Dependencies

- TapTap.Common v3.11.1

## 3.11.0

### Dependencies

- TapTap.Common v3.11.0

## 3.10.0

### Dependencies

- TapTap.Common v3.10.0

## 3.9.0

### Optimization and fixed bugs
- 增加了动态SDK本地多语言资源适配

### Dependencies

- TapTap.Common v3.9.0

## 3.8.0

### Optimization and fixed bugs
- 隐私权限授权流程优化

### Dependencies

- TapTap.Common v3.8.0

## 3.7.1

### Optimization and fixed bugs
- 动态旋转问题的修复
- 支持识别 Unity 中配置的 iOS 特性

### Dependencies

- TapTap.Common v3.7.1

## 3.7.0

### Dependencies

- TapTap.Common v3.7.0


## 3.6.3

### Optimization and fixed bugs
- Android 修复某些机型上会触发 getDialog 相关的 NPE 问题
- iOS 提供可供切换到 Controller 模式展示UI的 api

### Dependencies

- TapTap.Common v3.6.3

## 3.6.1

### New Feature

- 新增多语言上报

### Dependencies

- TapTap.Common v3.6.1

## 3.6.0

### Dependencies

- TapTap.Common v3.6.0

## 3.5.0

### Dependencies

- TapTap.Common v3.5.0

## 3.4.0

### Dependencies

- TapTap.Common v3.4.0

## 3.3.0

### Optimization and fixed bugs

- iOS 统一关闭逻辑，避免出现内存泄漏和音视频频不关闭的 bug 
- iOS 在调用 TapDB 相关接口前确认可用性，避免因版本不一致导致无响应崩溃

### Dependencies

- TapTap.Common v3.3.0

## 3.2.0

### Optimization and fixed bugs
- 修复动态内登录后没有回调的问题
- iOS 优化动态多次打开后的内存占用

### Dependencies

- TapTap.Common v3.2.0

## 3.1.0

### Optimization and fixed bugs
- 修复在 Android 11 的设备上没有特定权限时打开动态会崩溃的问题

### Dependencies

- TapTap.Common v3.1.0

## 3.0.0

### Dependencies

- TapTap.Common v3.0.0

## 2.1.7

### Dependencies

- TapTap.Common v2.1.7

## 2.1.6

### Optimization and fixed bugs

- 修复调用 [TapMoment close] 不生效的 bug

### Dependencies

- TapTap.Common v2.1.6

## 2.1.5

### New Feature

- 新增场景化回调接口

  ```
  //场景化回调是在动态回调的统一接口中返回，Code = 70000，内容为 JSON 格式的字符串
  {
    sceneId: "taprl0071417002",
    eventType: "READY",
    eventPayload: "{}",
    timestamp: 1622791814130, // ms
  }
  ```

## 2.1.4

### Dependencies

- TapTap.Common v2.1.4

## 2.1.3

### BugFixs

- Android 在部分刘海屏设备上判断失败导致UI可能被遮挡的问题

### Dependencies

- TapTap.Common v2.1.3

## 2.1.2

### Dependencies

- TapTap.Common v2.1.2

## 2.1.1

### Feature

* 新增 DirectlyOpen 接口
    * 场景化入口
  ```c#
  var sceneDic = new Dictionary<string,object>(){{TapMomentConstants.TapMomentPageShortCutKey,sceneId}};

  TapMoment.DirectlyOpen(orientation,TapMomentConstants.TapMomentPageShortCut,sceneDic);
  ```

### Dependencies

* TapTap.Bootstrap v2.1.1
* TapTap.Common v2.1.1

## 2.0.0

### Dependencies

* TapTap.Bootstrap v2.0.0
* TapTap.Common v2.0.0
