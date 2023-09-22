//
//  TDSSDK.h
//  TDSCommon
//
//  Created by Bottle K on 2020/10/13.
//

#import <Foundation/Foundation.h>
#import <TapCommonSDK/TapConfig.h>

#define TapCommonSDK @"TapCommon"
#define TapCommonSDK_VERSION_NUMBER @"32101001"
#define TapCommonSDK_VERSION        @"3.21.1"

NS_ASSUME_NONNULL_BEGIN

@interface TDSBaseManager : NSObject

+ (TDSBaseManager *)shareInstance;
+ (void)setDurationStatisticsEnabled:(BOOL)enable;
+ (void)initWithSDKConfig:(TapConfig *)config;
+ (TapConfig *)getConfig;

@end

NS_ASSUME_NONNULL_END
