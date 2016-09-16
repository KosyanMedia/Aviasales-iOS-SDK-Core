//
//  JRSDKFlight.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

@protocol JRSDKAirport, JRSDKFlightSegment, JRSDKAirline;

@protocol JRSDKFlight <NSObject>

/**
 *  Aircraft that performs the flight
 */
@property (nonatomic, retain, readonly) NSString *aircraft;

/**
 *  Arrival date (local time of destination airport)
 */
@property (nonatomic, retain, readonly) NSDate *arrivalDate;

/**
 *  Transfer duration before the flight
 */
@property (nonatomic, retain, readonly) NSNumber *delay;

/**
 *  Departure time (local time of origin airport)
 */
@property (nonatomic, retain, readonly) NSDate *departureDate;

/**
 *  Flight duration (minutes)
 */
@property (nonatomic, retain, readonly) NSNumber *duration;

/**
 *  Flight number
 */
@property (nonatomic, retain, readonly) NSString *number;

/**
 *  Airline that performs the flight
 */
@property (nonatomic, retain, readonly) id <JRSDKAirline> airline;

/**
 *  An airline that actually performs the flight
 */
@property (nonatomic, retain, readonly) id <JRSDKAirline> operatingAirline;

/**
 *  An airport where the flight starts
 */
@property (nonatomic, retain, readonly) id <JRSDKAirport> originAirport;

/**
 *  An airport where the flight ends
 */
@property (nonatomic, retain, readonly) id <JRSDKAirport> destinationAirport;

/**
 *  Baggage rule
 */
@property (nonatomic, retain, readonly) id <JRSDKBaggageRule> baggageRule;

@end
