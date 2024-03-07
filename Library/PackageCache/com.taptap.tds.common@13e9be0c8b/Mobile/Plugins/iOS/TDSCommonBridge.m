//
//  TDSCommonBridge.m
//  Unity-iPhone
//
//  Created by oneRain on 2023/11/17.
//

#import <Foundation/Foundation.h>
#import "TapCommonSDK/TDSHttpUtil.h"

const char* TDSCommonBridgeGetDeviceId() {
    return [[TDSHttpUtil getDeviceId] UTF8String];
}

const int TDSCommonBridgeGetDeviceType() {
    return 0;
}
