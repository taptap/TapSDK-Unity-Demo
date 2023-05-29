//
//  TapAchievement.h
//  TDSAchievement
//
//  Created by TapTap-David on 2020/9/21.
//  Copyright © 2020 taptap. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TapAchievementSDK/TapAchievementDelegate.h>
#import <TapCommonSDK/TapCommonSDK.h>

#define TapAchievementSDK                @"TapAchievement"
#define TapAchievementSDK_VERSION_NUMBER @"31807001"
#define TapAchievementSDK_VERSION        @"3.18.7"

NS_ASSUME_NONNULL_BEGIN
typedef void (^TTAchievementRequestHandler)(NSArray<TapAchievementModel *> *_Nullable result, NSError *_Nullable error);

@interface TapAchievement : NSObject

+ (instancetype)shareInstance;

/// 初始化
/// @param config config
/// @param provider provider
+ (void)initWithConfig:(TapConfig *)config accountProvider:(id<TDSAccountProvider>)provider;

/**
 设置回调协议
 *
 @param delegate <TapAchievementDelegate>
 */
+ (void)registerCallBack:(nonnull id<TapAchievementDelegate>)delegate;


/**
 加载数据
 */
+ (void)initData;

/**
*  @brief 获取所有成就数据
*
*/
+ (void)fetchAllAchievementList:(TTAchievementRequestHandler)callBack;

/**
*  @brief  获取当前用户成就列表
*
*/
+ (void)fetchUserAchievementList:(TTAchievementRequestHandler)callBack;

/**
*  @brief  达成成就
*
*  @param displayId 成就ID
*/
+ (void)reach:(NSString *)displayId;

/**
*  @brief  记录步长成就 （增加的步长）
*
*  @param displayId 成就ID
*  @param numSteps 增加的步长
*/
+ (void)growSteps:(NSString *)displayId numSteps:(NSInteger)numSteps;

/**
*  @brief  记录步长成就（总的步长）
*
*  @param displayId 成就ID
*  @param numSteps 总的步长
*/
+ (void)makeSteps:(NSString *)displayId numSteps:(NSInteger)numSteps;

/**
*  @brief  成就完成时是否显示Toast
*
*  @param showToast 成就完成是否toast
*  默认是（YES）展示toast
*/
+ (void)setShowToast:(BOOL)showToast;

/**
* @brief 获取本地所有成就列表
 */
+ (NSArray<TapAchievementModel *> *)getLocalAllAchievementList;

/**
* @brief 获取本地用户成就列表
 */
+ (NSArray<TapAchievementModel *> *)getLocalUserAchievementList;

/**
* @brief 获取成就UI
 */
+ (void)showAchievementPage;

@end

NS_ASSUME_NONNULL_END
