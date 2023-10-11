//
//  TapConnect.h
//  TapConnectSDK
//
//  Created by 黄驿峰 on 2023/8/14.
//

#import <Foundation/Foundation.h>

#define TapConnectSDK               @"TapConnect"
#define TapConnectSDK_VERSION_NUMBER @"32101001"
#define TapConnectSDK_VERSION        @"3.21.1"

NS_ASSUME_NONNULL_BEGIN

@interface TapConnect : NSObject

+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)init NS_UNAVAILABLE;

/// 初始化
/// @param clientId clienId
/// @param clientToken clientToken
/// 默认国内
+ (void)initWithClientId:(NSString *)clientId clientToken:(NSString *)clientToken;

/// 初始化
/// @param clientId clientId
/// @param clientToken clientToken
/// @param isCN 是否国内
+ (void)initWithClientId:(NSString *)clientId clientToken:(NSString *)clientToken isCN:(BOOL)isCN;


+ (void)setEntryVisible:(BOOL)visible;



@end

NS_ASSUME_NONNULL_END
