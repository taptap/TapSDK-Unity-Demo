//
//  TapMomentResultCode.h
//  TapMoment
//
//  Created by ritchie on 2020/7/27.
//  Copyright © 2020 JiangJiahao. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


/// 动态发布成功
FOUNDATION_EXTERN int const TM_RESULT_CODE_POST_SUCCEED;
/// 动态发布失败
FOUNDATION_EXTERN int const TM_RESULT_CODE_POST_FAILED;
/// 关闭动态发布页面
FOUNDATION_EXTERN int const TM_RESULT_CODE_POST_CLOSED;


/// 获取新消息成功
FOUNDATION_EXTERN int const TM_RESULT_CODE_NEW_MSG_SUCCEED;
/// 获取新消息失败
FOUNDATION_EXTERN int const TM_RESULT_CODE_NEW_MSG_FAILED;

/// 好友动态页面打开
FOUNDATION_EXTERN int const TM_RESULT_CODE_MOMENT_PAGE_OPEBED;
/// 好友动态页面关闭
FOUNDATION_EXTERN int const TM_RESULT_CODE_MOMENT_PAGE_CLOSED;

/// 取消关闭所有动态界面（弹框点击取消按钮）
FOUNDATION_EXTERN int const TM_RESULT_CODE_MOMENT_CLOSE_CANCELLED;
/// 确认关闭所有动态界面（弹框点击确认按钮）
FOUNDATION_EXTERN int const TM_RESULT_CODE_MOMENT_CLOSE_CONFIRMED;

/// 内嵌登录成功
FOUNDATION_EXTERN int const TM_RESULT_CODE_MOMENT_LOGIN_SUCCEED;

/// 内嵌动态场景化事件
FOUNDATION_EXTERN int const TM_RESULT_CODE_MOMENT_SCENE_EVENT;


NS_ASSUME_NONNULL_END
