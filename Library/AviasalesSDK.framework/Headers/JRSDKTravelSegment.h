//
//  JRSDKTravelSegment.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

@protocol JRSDKAirport;

@protocol JRSDKTravelSegment

/**
 *  Departure date
 */
@property (nonatomic, retain) NSDate *departureDate;

/**
 *  Origin airport
 */
@property (nonatomic, retain) id<JRSDKAirport> originAirport;

/**
 *  Destination airport
 */
@property (nonatomic, retain) id<JRSDKAirport> destinationAirport;

@end
