//
//  JRSDKFlightSegment.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#if !TARGET_OS_WATCH
#import <AviasalesSDK/DataDefines.h>
#else
#import <AviasalesWatchSDK/DataDefines.h>
#endif

@protocol JRSDKAirline, JRSDKFlight;

@protocol JRSDKFlightSegment <NSObject>

/**
 *  An airline that performs the most flights in this flight segment
 */
@property (nonatomic, retain, readonly) id <JRSDKAirline> segmentAirline;

/**
 *  Flights in the flight segment
 */
@property (nonatomic, retain, readonly) NSOrderedSet <id <JRSDKFlight>> *flights;

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
 *  Departure date timestamp (seconds since 1970)
 */
@property (nonatomic, retain, readonly) NSNumber *departureDateTimestamp;

/**
 *  Arrival date timestamp (seconds since 1970)
 */
@property (nonatomic, retain, readonly) NSNumber *arrivalDateTimestamp;

@end