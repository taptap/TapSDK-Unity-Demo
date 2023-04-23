//
//  PostMomentData.h
//  TapMoment
//
//  Created by ritchie on 2020/7/21.
//  Copyright © 2020 TapTap. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
@brief 发布动态数据基类
@warning 使用子类进行初始化！！！！！！！
*/
@interface TapMomentPostData : NSObject
@end


/**
视频 Moment 结构
*/
@interface TapMomentVideoData : TapMomentPostData

/**
 @brief 图片本地路径（可选）
 @warning 数组最多可存一个，超出部分截选第一个
 */
@property (nonatomic, copy, nullable) NSArray<NSString *> *images;

/**
@brief 视频本地路径（可选）
@warning 数组最多可存一个，超出部分截选第一个
*/
@property (nonatomic, copy, nullable) NSArray<NSString *> *videos;

/**
@brief 标题（可选）
@warning 文字长度限制为40，超过40取前40
*/
@property (nonatomic, copy, nullable) NSString *title;

/**
@brief 文字内容（可选）
@warning 文字长度限制为40，超过40取前40
*/
@property (nonatomic, copy, nullable) NSString *content;
@end



/**
 普通 Moment 结构
 */
@interface TapMomentImageData : TapMomentPostData

/**
@brief 图片本地路径（可选）
@warning 数组最多可存一个，超出部分截选第一个
*/
@property (nonatomic, copy, nullable) NSArray<NSString *> *images;

/**
@brief 文字内容（可选）
@warning 文字长度限制为1200，超过1200取前1200
*/
@property (nonatomic, copy, nullable) NSString *content;
@end

NS_ASSUME_NONNULL_END
