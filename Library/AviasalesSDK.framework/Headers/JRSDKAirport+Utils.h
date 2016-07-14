//
//  JRSDKModelUtils+JRSDKAirport.h
//  AviasalesSDK
//
//  Created by Dmitry Ryumin on 06/06/16.
//  Copyright © 2016 aviasales. All rights reserved.
//


#if !TARGET_OS_WATCH
#import <AviasalesSDK/JRSDKModelUtils.h>
#else
#import <AviasalesWatchSDK/JRSDKModelUtils.h>
#endif

@protocol JRSDKAirport;
@protocol AviasalesAirportsStorageProtocol;

@interface JRSDKModelUtils (JRSDKAirport)

+ (BOOL)airport:(id<JRSDKAirport>)airport1 isEqualToAirport:(id<JRSDKAirport>)airport2;

+ (id<JRSDKAirport>)copyAirportForSearch:(id<JRSDKAirport>)src;

+ (BOOL)airportIsAirport:(id<JRSDKAirport>)airport strictSearchMode:(BOOL)returnOnlyStrictSearchTickets;
+ (BOOL)isAirportSingleInItsCity:(id<JRSDKAirport>)airport;
@end
