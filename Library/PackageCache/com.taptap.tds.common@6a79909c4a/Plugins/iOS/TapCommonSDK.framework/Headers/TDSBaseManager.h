//
//  TDSSDK.h
//  TDSCommon
//
//  Created by Bottle K on 2020/10/13.
//

#import <Foundation/Foundation.h>
#import <TapCommonSDK/TapConfig.h>

#define TapCommonSDK @"TapCommon"
#define TapCommonSDK_VERSION_NUMBER @"32000001"
#define TapCommonSDK_VERSION        @"3.20.0"

NS_ASSUME_NONNULL_BEGIN

@interface TDSBaseManager : NSObject

+ (TDSBaseManager *)shareInstance;
+ (void)setDurationStatisticsEnabled:(BOOL)enable;
+ (void)initWithSDKConfig:(TapConfig *)config;
+ (TapConfig *)getConfig;

@end

NS_ASSUME_NONNULL_END
