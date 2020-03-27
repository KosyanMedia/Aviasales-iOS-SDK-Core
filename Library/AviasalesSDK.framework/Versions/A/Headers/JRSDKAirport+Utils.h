//
//  JRSDKAirport+Utils.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <AviasalesSDK/JRSDKModelUtils.h>

@protocol AviasalesAirportsStorageProtocol;
@class JRSDKAirport;

@interface JRSDKModelUtils (JRSDKAirport)

/**
 *  Checks airport to be the only airport in the city
 *
 *  @param airport Airport to check
 *
 *  @return `YES` when the airport is the only airport in the city, `NO` otherwise
 */
+ (BOOL)isAirportSingleInItsCity:(nonnull JRSDKAirport *)airport;

@end
