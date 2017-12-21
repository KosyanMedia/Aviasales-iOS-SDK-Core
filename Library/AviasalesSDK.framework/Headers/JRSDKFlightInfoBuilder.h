//
//  JRSDKFlightInfoBuilder.h
//  AviasalesSDK
//
//  Created by Anastasiia Kuzenkova on 12/09/2017.
//  Copyright © 2017 aviasales. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JRSDKFlightInfoBuilder : NSObject

@property (nonatomic, assign) BOOL wifiExists;

@property (nonatomic, assign) BOOL usbExists;

@property (nonatomic, assign) BOOL entertainmentExists;

- (nonnull instancetype)initWithFlightInfoToCopy:(nonnull JRSDKFlightInfo *)flightInfo;

- (nullable JRSDKFlightInfo *)build;

@end
