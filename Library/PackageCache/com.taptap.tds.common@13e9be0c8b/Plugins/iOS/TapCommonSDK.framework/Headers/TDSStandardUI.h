//
//  TDSStandardUI.h
//  TapCommonSDK
//
//  Created by 黄驿峰 on 2023/8/7.
//

/*
 TDS UI 产品会有一套自己的标准的UI规范，所以代码中也需要整合到一起。
 */
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

// 默认的放大缩小比例
CGFloat TDSUIScale(CGFloat value);

// 目前只记录了 Primary 中的颜色
@interface TDSColor : NSObject

// TapTap 主色 #15C5CE
+ (UIColor *)SDKBlue;

// TapTap 主色 厚度 #09A5AD
+ (UIColor *)SDKBlueThickness;

// #FFFFFF
+ (UIColor *)white;

// #F64C4C
+ (UIColor *)red;

@end

// 字体 iOS 端默认用苹方，所以用系统的就行
//@interface TDSFont : NSObject
//
//@end

NS_ASSUME_NONNULL_END
