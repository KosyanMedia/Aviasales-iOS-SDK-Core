//
//  JRSDKFlight.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#if !TARGET_OS_WATCH
#import <AviasalesSDK/JRSDKModelObject.h>
#else
#import <AviasalesWatchSDK/JRSDKModelObject.h>
#endif

@class JRSDKAirport, JRSDKFlightSegment, JRSDKAirline, JRSDKFlightInfo;

@interface JRSDKFlight : JRSDKModelObject

/**
 *  Aircraft that performs the flight
 */
@property (nonatomic, retain, nullable) NSString *aircraft;

/**
 *  Arrival date (local time of destination airport)
 */
@property (nonatomic, retain, nonnull) NSDate *arrivalDate;

/**
 *  Transfer duration before the flight
 */
@property (nonatomic, retain, nonnull) NSNumber *delay;

/**
 *  Departure time (local time of origin airport)
 */
@property (nonatomic, retain, nonnull) NSDate *departureDate;

/**
 *  Flight duration (minutes)
 */
@property (nonatomic, retain, nonnull) NSNumber *duration;

/**
 *  Flight number
 */
@property (nonatomic, retain, nonnull) NSString *number;

/**
 *  Flight equipment
 */
@property (nonatomic, retain, nullable) NSString *equipment;

/**
 *  Airline that performs the flight
 */
@property (nonatomic, retain, nonnull) JRSDKAirline *airline;

/**
 *  An airline that sells tickets to the flight
 */
@property (nonatomic, retain, nonnull) JRSDKAirline *marketingAirline;

/**
 *  An airport where the flight starts
 */
@property (nonatomic, retain, nonnull) JRSDKAirport *originAirport;

/**
 *  An airport where the flight ends
 */
@property (nonatomic, retain, nonnull) JRSDKAirport *destinationAirport;

/**
 *  Technical stops
 */
@property (nonatomic, retain, nonnull) NSOrderedSet<JRSDKAirport *> *technicalStops;

/**
 *  Additional flight info
 */
@property (nonatomic, retain, nonnull) JRSDKFlightInfo *flightInfo;

@end
