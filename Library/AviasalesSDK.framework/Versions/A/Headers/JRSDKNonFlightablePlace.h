//
//  JRSDKNonFlightablePlace.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <AviasalesSDK/JRSDKModelObject.h>
#import <AviasalesSDK/JRSDKLocation.h>

@class JRSDKAirport;

@interface JRSDKNonFlightablePlace : JRSDKModelObject <JRSDKLocation>

/**
 *   Non flightable place
 */
@property (nonatomic, strong, nonnull) JRSDKAirport *place;

/**
 *   Nearest flightable places to non flightable place
 */
@property (nonatomic, strong, nonnull) NSArray<JRSDKAirport *> *nearestPlaces;

@end
