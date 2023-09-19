//
//  TDSButton.h
//  TapCommonSDK
//
//  Created by Bottle K on 2021/4/27.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TDSButton : UIButton

/**
扩展的点击区域，往外扩展是负数
 */
@property (nonatomic, assign) UIEdgeInsets extensionTouchInsets;

@end

NS_ASSUME_NONNULL_END
