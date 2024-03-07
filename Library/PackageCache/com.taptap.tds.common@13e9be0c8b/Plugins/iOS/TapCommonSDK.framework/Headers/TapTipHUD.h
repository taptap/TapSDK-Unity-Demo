//
//  TapTipHUD.h
//  TapCommonSDK
//
//  Created by 黄驿峰 on 2023/9/6.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TapTipHUD : UIView

+ (void)showTip:(NSString *)tip;

+ (void)showTip:(NSString *)tip imageUrl:(NSString *)imageUrl;

+ (void)showTip:(NSString *)tip imageUrl:(NSString *)imageUrl timeInterval:(NSTimeInterval)timeInterval;

@end

NS_ASSUME_NONNULL_END
