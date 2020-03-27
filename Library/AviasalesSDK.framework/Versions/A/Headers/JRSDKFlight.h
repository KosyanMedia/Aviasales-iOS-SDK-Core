//
//  JRSDKFlight.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <AviasalesSDK/JRSDKModelObject.h>

@class JRSDKAirport, JRSDKFlightSegment, JRSDKAirline, JRSDKFlightInfo;

/**
 *  All possible flight types
 */
typedef NS_ENUM(NSUInteger, JRSDKFlightType) {
    /**
     *  By airplane
     */
    JRSDKFlightTypeAirplane = 0,
    /**
     *  By train
     */
    JRSDKFlightTypeTrain,
    /**
     *  By bus
     */
    JRSDKFlightTypeBus,
    /**
     *  By helicopter
     */
    JRSDKFlightTypeHeli
};

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
 *  Airline name (need to use instead of airline.name)
 */
@property (nonatomic, retain, nonnull, readonly) NSString *airlineName;

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

/**
 *  Flight type
 */
@property (nonatomic, assign) JRSDKFlightType type;

@end
