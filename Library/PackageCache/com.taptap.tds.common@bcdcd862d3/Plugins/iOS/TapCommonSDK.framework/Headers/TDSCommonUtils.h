//
//  TDSCommonUtils.h
//  TDSCommon
//
//  Created by TapTap-David on 2021/1/18.
//

#import <Foundation/Foundation.h>
#import "TDSTrackerConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface TDSCommonUtils : NSObject
+ (NSData *)lz4Compress:(NSData *)rawData;

+ (uint32_t)transformTime;

+ (NSString *)md5HexDigest:(NSData *)data;

+ (NSString *)getDeviceIdentifier;

+ (NSString *)getAppVersion;

+ (NSString *)getAppBuildNumber;

+ (NSString *)getHardParam;

+ (NSString *)getNetworkType;

+ (NSString *)getNetWorkStatus:(NSString *)hostName;

+ (NSString *)getTotalMemorySize:(unsigned long long)fileSize;

+ (long long)getTotalDiskSize;

+ (NSString *)localeIdentifier;

+ (NSString *)getCpuArchitecture;

+ (NSString *)topic:(TDSTrackerType)type;

+ (NSString *)getProcessId;


@end

NS_ASSUME_NONNULL_END
