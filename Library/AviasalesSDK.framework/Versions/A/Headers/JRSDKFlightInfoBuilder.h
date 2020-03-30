//
//  JRSDKFlightInfoBuilder.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>

@class JRSDKFlightInfo;

@interface JRSDKFlightInfoBuilder : NSObject

@property (nonatomic, assign) BOOL wifiExists;

@property (nonatomic, assign) BOOL usbExists;

@property (nonatomic, assign) BOOL entertainmentExists;

- (nonnull instancetype)initWithFlightInfoToCopy:(nonnull JRSDKFlightInfo *)flightInfo;

- (nullable JRSDKFlightInfo *)build;

@end
