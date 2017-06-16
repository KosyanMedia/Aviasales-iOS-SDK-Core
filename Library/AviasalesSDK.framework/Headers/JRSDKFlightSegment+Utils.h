//
//  JRSDKFlightSegment+Utils.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#if !TARGET_OS_WATCH
#import <AviasalesSDK/JRSDKModelUtils.h>
#else
#import <AviasalesWatchSDK/JRSDKModelUtils.h>
#endif

@class JRSDKFlightSegment;

@interface JRSDKModelUtils(JRSDKFlightSegment)

/**
 *  Checks flight segment to be a direct flight segment
 *
 *  @param flightSegment Flight segment to check
 *
 *  @return `YES` when flight segment is a direct flight segment, `NO` otherwise
 */
+ (BOOL)isDirectFlightSegment:(JRSDKFlightSegment *)flightSegment;

/**
 *  Returns origin IATA for flight segment
 *
 *  @param flightSegment Flight segment to calculate origin IATA for
 *
 *  @return Origin IATA
 */
+ (JRSDKIATA)flightSegmentOriginIATA:(JRSDKFlightSegment *)flightSegment;

/**
 *  Returns destination IATA for flight segment
 *
 *  @param flightSegment Flight segment to calculate destination IATA for
 *
 *  @return Destination IATA
 */
+ (JRSDKIATA)flightSegmentDestinationIATA:(JRSDKFlightSegment *)flightSegment;

/**
 *  Returns flight segment stopover count
 *
 *  @param flightSegment Flight segment to calculate stopover count for
 *
 *  @return Flight segment stopover count
 */
+ (NSInteger)flightSegmentStopoverCount:(JRSDKFlightSegment *)flightSegment;

/**
 * Returns departure date of first flight in flight segment
 *
 * @param flightSegment Flight segment calculate departure date
 *
 * @return Departure date of flight segment
 */
+ (NSDate *)flightSegmentDepartureDate:(JRSDKFlightSegment *)flightSegment;

@end
