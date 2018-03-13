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

@protocol AviasalesAirportsStorageProtocol;

@interface JRSDKModelUtils (JRSDKAirport)

/**
 *  Checks airport to be the only airport in the city
 *
 *  @param airport Airport to check
 *
 *  @return `YES` when the airport is the only airport in the city, `NO` otherwise
 */
+ (BOOL)isAirportSingleInItsCity:(nonnull JRSDKAirport *)airport;

/**
 *  Get list of cities for given list of airports
 *
 *  @param airports Airports to fill
 *
 *  @return list of cities
 */
+ (nonnull NSArray<JRSDKAirport *> *)citiesWithNamesOf:(nonnull NSArray<JRSDKAirport *> *)airports;

@end
