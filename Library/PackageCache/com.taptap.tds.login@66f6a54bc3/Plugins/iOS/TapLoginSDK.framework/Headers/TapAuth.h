//
//  TapAuth.h
//  TapLoginSDK
//
//  Created by 黄驿峰 on 2023/9/14.
//

#import <UIKit/UIKit.h>
#import <TapLoginSDK/TapAuthResult.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^TapAuthManagerRequestHandler)(TapAuthResult *result);

@interface TapAuth : NSObject

+ (BOOL)isPreApproved;

+ (void)setPreApproved:(BOOL)preApproved;

/// 开始登录流程
/// @param permissions 权限列表
/// @param targetViewController 需要展现的页面
+ (void)requestPermissions:(NSArray *)permissions fromController:(UIViewController *_Nullable)targetViewController handler:(TapAuthManagerRequestHandler)handler;

+ (void)requestPermissions:(NSArray *)permissions handler:(TapAuthManagerRequestHandler)handler;

@end

NS_ASSUME_NONNULL_END
