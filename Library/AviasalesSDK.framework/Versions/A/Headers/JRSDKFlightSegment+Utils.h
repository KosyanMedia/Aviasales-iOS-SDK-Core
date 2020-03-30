//
//  JRSDKFlightSegment+Utils.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <AviasalesSDK/JRSDKModelUtils.h>
#import <AviasalesSDK/DataDefines.h>

@class JRSDKFlightSegment;

@interface JRSDKModelUtils(JRSDKFlightSegment)

/**
 *  Checks flight segment to be a direct flight segment
 *
 *  @param flightSegment Flight segment to check
 *
 *  @return `YES` when flight segment is a direct flight segment, `NO` otherwise
 */
+ (BOOL)isDirectFlightSegment:(nonnull JRSDKFlightSegment *)flightSegment;

/**
 *  Returns origin IATA for flight segment
 *
 *  @param flightSegment Flight segment to calculate origin IATA for
 *
 *  @return Origin IATA
 */
+ (nullable JRSDKIATA)flightSegmentOriginIATA:(nonnull JRSDKFlightSegment *)flightSegment;

/**
 *  Returns destination IATA for flight segment
 *
 *  @param flightSegment Flight segment to calculate destination IATA for
 *
 *  @return Destination IATA
 */
+ (nullable JRSDKIATA)flightSegmentDestinationIATA:(nonnull JRSDKFlightSegment *)flightSegment;

/**
 *  Returns flight segment stopover count
 *
 *  @param flightSegment Flight segment to calculate stopover count for
 *
 *  @return Flight segment stopover count
 */
+ (NSInteger)flightSegmentStopoverCount:(nonnull JRSDKFlightSegment *)flightSegment;

/**
 * Returns departure date of first flight in flight segment
 *
 * @param flightSegment Flight segment calculate departure date
 *
 * @return Departure date of flight segment
 */
+ (nonnull NSDate *)flightSegmentDepartureDate:(nonnull JRSDKFlightSegment *)flightSegment;

@end
