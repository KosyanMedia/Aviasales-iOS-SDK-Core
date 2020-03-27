//
//  JRSDKTravelSegment.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <AviasalesSDK/JRSDKModelObject.h>

@class JRSDKAirport;

@interface JRSDKTravelSegment : JRSDKModelObject

/**
 *  Departure date
 */
@property (nonatomic, retain, nonnull) NSDate *departureDate;

/**
 *  Origin airport
 */
@property (nonatomic, retain, nonnull) JRSDKAirport *originAirport;

/**
 *  Destination airport
 */
@property (nonatomic, retain, nonnull) JRSDKAirport *destinationAirport;

@end
