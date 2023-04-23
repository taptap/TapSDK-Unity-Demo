//
//  MarqueeScreenConfig.h
//  TapBillboardSDK
//
//  Created by SeraphLi on 2022/12/15.
//


#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MarqueeScreenConfig : NSObject

@property (nonatomic, retain, readonly)  NSString *screenWidthType;
@property (nonatomic, assign, readonly) int scrollWidth ;
@property (nonatomic, retain, readonly) NSString *position;
  //内容水平方向间距
@property (nonatomic, assign, readonly) int horizontalMargin;
  //内容垂直方向间距
@property (nonatomic, assign, readonly) int verticalMargin;
  //窗口距离左 / 右 边缘距离
@property (nonatomic, assign, readonly) int positionMarginX;
  //窗口距离上 / 下 边缘距离
@property (nonatomic, assign, readonly) int positionMarginY;

- (instancetype)initWithDictionary:(NSDictionary *) dictionary;

@end

NS_ASSUME_NONNULL_END
