//
//  JRSDKFlightInfo.h
//  AviasalesSDK
//
//  Created by Anastasiia Kuzenkova on 12/09/2017.
//  Copyright © 2017 aviasales. All rights reserved.
//

#if !TARGET_OS_WATCH
#import <AviasalesSDK/JRSDKModelObject.h>
#else
#import <AviasalesWatchSDK/JRSDKModelObject.h>
#endif

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
 *  This flight has Seatback
 */
@property (nonatomic, assign) BOOL entertainmentExists;

@end
