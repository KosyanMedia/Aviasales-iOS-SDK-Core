//
//  JRSDKFlightInfo.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <AviasalesSDK/JRSDKModelObject.h>

@interface JRSDKFlightInfo : JRSDKModelObject

/**
 *  This flight has Wi-Fi
 */
@property (nonatomic, assign) BOOL wifiExists;

/**
 *  This flight has USB
 */
@property (nonatomic, assign) BOOL usbExists;

/**
 *  This flight has Entertainment
 */
@property (nonatomic, assign) BOOL entertainmentExists;

@end
