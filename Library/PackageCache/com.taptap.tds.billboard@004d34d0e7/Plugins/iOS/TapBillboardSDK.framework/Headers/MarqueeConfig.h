//
//  MarqueeConfig.h
//  TapBillboardSDK
//
//  Created by SeraphLi on 2022/12/15.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, TapBillboardMarqueeOrientationScrollWidthType) {
    TapBillboardMarqueeOrientationScrollWidthTypeFill,
    TapBillboardMarqueeOrientationScrollWidthTypeFixed,
};

typedef NS_ENUM(NSUInteger, TapBillboardMarqueeOrientationPosition) {
    TapBillboardMarqueeOrientationPositionTop,
    TapBillboardMarqueeOrientationPositionTopLeft,
    TapBillboardMarqueeOrientationPositionTopRight,
    TapBillboardMarqueeOrientationPositionBottom,
    TapBillboardMarqueeOrientationPositionBottomLeft,
    TapBillboardMarqueeOrientationPositionBottomRight,
};

@interface TapBillboardMarqueeOrientationConfig : NSObject

@property (nonatomic, assign) TapBillboardMarqueeOrientationScrollWidthType scrollWidthType;
@property (nonatomic, assign) NSInteger scrollWidth;
@property (nonatomic, assign) TapBillboardMarqueeOrientationPosition position;
@property (nonatomic, assign) NSInteger horizontalOffset;
@property (nonatomic, assign) NSInteger verticalOffset;
@property (nonatomic, assign) NSInteger horizontalScrollMargin;
@property (nonatomic, assign) NSInteger verticalScrollMargin;

- (instancetype)init:(NSDictionary *)withJSON;
- (NSDictionary*)toDictionary;

@end

@interface TapBillboardMarqueeIconConfig : NSObject

@property (nonatomic, strong) NSString *url;

- (instancetype)init:(NSDictionary *)withJSON;
- (NSDictionary*)toDictionary;

@end

@interface TapBillboardMarqueeConfig : NSObject

@property (nonatomic, strong) UIColor* defaultTextColor;
@property (nonatomic, strong) UIColor* contentBackgroundColor;
@property (nonatomic, assign) BOOL useSystemFont;
@property (nonatomic, strong, nullable) NSString *customFont;
@property (nonatomic, assign) NSInteger repeatCount;
@property (nonatomic, strong, nullable) TapBillboardMarqueeIconConfig *icon;
@property (nonatomic, strong, nullable) TapBillboardMarqueeOrientationConfig *horizontal;
@property (nonatomic, strong, nullable) TapBillboardMarqueeOrientationConfig *vertical;

- (instancetype)init:(NSDictionary *)withJSON;
- (NSDictionary*)toDictionary;

@end

NS_ASSUME_NONNULL_END
