//
//  JRSDKFlightSegment.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <AviasalesSDK/DataDefines.h>
#import <AviasalesSDK/JRSDKModelObject.h>

@class JRSDKAirline, JRSDKFlight, JRSDKSegmentRating, JRSDKTransfer;

@interface JRSDKFlightSegment : JRSDKModelObject

/**
 *  An airline that performs the most flights in this flight segment
 */
@property (nonatomic, retain, nonnull, readonly) JRSDKAirline *segmentAirline;

/**
 *  Flights in the flight segment
 */
@property (nonatomic, retain, nonnull, readonly) NSOrderedSet <JRSDKFlight *> *flights;

/**
 *  Transfers in the flight segment
 */
@property (nonatomic, retain, nonnull, readonly) NSArray<JRSDKTransfer *> *transfers;

/**
 *  Total flights duration in this flight segment (minutes)
 */
@property (nonatomic, assign, readonly) JRSDKFlightDuration totalDurationInMinutes;

/**
 *  Total transfers duration in this flight segment (minutes)
 */
@property (nonatomic, assign, readonly) JRSDKFlightDuration delayDurationInMinutes;

/**
 *  Whether flight segment has overnight stopovers
 */
@property (nonatomic, assign, readonly) BOOL hasOvernightStopover;

/**
 *  Whether flight segment has transfers to other airports (when you arrive to an airport and should move to another one to the next flight)
 */
@property (nonatomic, assign, readonly) BOOL hasTransferToAnotherAirport;

/**
*  Whether flight segment is visa required
*/
@property (nonatomic, assign, readonly) BOOL isVisaRequired;

/**
 *  Departure date timestamp (seconds since 1970)
 */
@property (nonatomic, retain, nonnull, readonly) NSNumber *departureDateTimestamp;

/**
 *  Arrival date timestamp (seconds since 1970)
 */
@property (nonatomic, retain, nonnull, readonly) NSNumber *arrivalDateTimestamp;

/**
 *  Rating with details
 */
@property (nonatomic, retain, nullable, readonly) JRSDKSegmentRating *rating;

@end
