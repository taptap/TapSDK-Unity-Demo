//
//  TapAchievementModel.h
//  TDSAchievement
//
//  Created by TapTap-David on 2020/9/14.
//  Copyright © 2020 taptap. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class TDSAchievementStatus;

@interface TapAchievementModel : NSObject<NSCoding>
/**
 成就ID
 */
@property (nonatomic, copy, readonly) NSString *achievementId;
/**
 展示ID
 */
@property (nonatomic, copy, readonly) NSString *displayId;

/**
 成就图片
 */
@property (nonatomic, copy, readonly) NSString *achieveIcon;
/**
 成就名称
 */
@property (nonatomic, copy) NSString *title;
/**
 成就描述
 */
@property (nonatomic, copy, readonly) NSString *subTitle;

/**
 完成成就总的步数
 */
@property (nonatomic, assign, readonly) NSNumber *step;

//用户数据
/**
 是否到达成就 
*/
@property (nonatomic, assign) BOOL fullReached;
/**
 成就达到时间
 */
@property (nonatomic, assign) long reachedTime;
/**
 当前完成步数
*/
@property (nonatomic, assign) NSInteger reachedStep;
/**
 等级状态
*/
@property (nonatomic, strong) TDSAchievementStatus *stats;
/**
 是否全成就
*/
@property (nonatomic, assign) NSInteger type;  

/**
 隐藏成就
 */
- (BOOL)isVisible;
/**
 成就达成
 */
- (BOOL)isFullReached;
/**
 全成就
 */
- (BOOL)isFullAchievement;

- (instancetype)initWithDisplayId:(NSString *)displayId;

@end

@interface TDSAchievementStatus : NSObject<NSCoding>
/**
 等级
*/
@property (nonatomic, assign) NSInteger level;
/**
 百分比
*/
@property (nonatomic, assign) CGFloat rarity;
@end

NS_ASSUME_NONNULL_END
