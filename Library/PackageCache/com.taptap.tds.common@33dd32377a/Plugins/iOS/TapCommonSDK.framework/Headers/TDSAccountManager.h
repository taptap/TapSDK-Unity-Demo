//
//  TDSAccountManager.h
//  TapCommonSDK
//
//  Created by 黄驿峰 on 2023/7/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXTERN NSNotificationName const TapUserLoginNotification;
FOUNDATION_EXTERN NSNotificationName const TapUserLogoutNotification;
FOUNDATION_EXTERN NSNotificationName const TDSUserLoginNotification;
FOUNDATION_EXTERN NSNotificationName const TDSUserInfoUpdateNotification;
FOUNDATION_EXTERN NSNotificationName const TDSUserLogoutNotification;
FOUNDATION_EXTERN NSNotificationName const TDSCombineUserIDChangedNotification;

@interface TDSAccountManager : NSObject

+ (TDSAccountManager *)shareInstance;

@property (nonatomic, strong, nullable) NSDictionary *tapUserDic;
@property (nonatomic, strong, nullable) NSDictionary *tdsUserDic;
// 获得聚合的UserID（目前是TapUser和TDSUser), 是一个Json字符串
@property (nonatomic, strong, readonly) NSString *combineUserID;


@end

NS_ASSUME_NONNULL_END
