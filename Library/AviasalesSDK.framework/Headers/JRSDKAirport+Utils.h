//
//  JRSDKAirport+Utils.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#if !TARGET_OS_WATCH
#import <AviasalesSDK/JRSDKModelUtils.h>
#else
#import <AviasalesWatchSDK/JRSDKModelUtils.h>
#endif

@protocol JRSDKAirport;
@protocol AviasalesAirportsStorageProtocol;

@interface JRSDKModelUtils (JRSDKAirport)

/**
 *  Compares two airports
 *
 *  @param airport1  First airport
 *  @param airport2  Second airport
 *
 *  @return `YES` if airports are the same, `NO` otherwise
 */
+ (BOOL)airport:(id<JRSDKAirport>)airport1 isEqualToAirport:(id<JRSDKAirport>)airport2;

/**
 *  Copies an airport
 *
 *  @param src Airport to copy
 *
 *  @return An airport copy 
 */
+ (id<JRSDKAirport>)copyAirportForSearch:(id<JRSDKAirport>)src;

/**
 *  Checks airport to be the only airport in the city
 *
 *  @param airport Airport to check
 *
 *  @return `YES` when the airport is the only airport in the city, `NO` otherwise
 */
+ (BOOL)isAirportSingleInItsCity:(id<JRSDKAirport>)airport;

@end
