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

@protocol JRSDKFlightSegment;

@interface JRSDKModelUtils(JRSDKFlightSegment)

/**
 *  Checks flight segment to be a direct flight segment
 *
 *  @param flightSegment Flight segment to check
 *
 *  @return `YES` when flight segment is a direct flight segment, `NO` otherwise
 */
+ (BOOL)isDirectFlightSegment:(id<JRSDKFlightSegment>)flightSegment;

/**
 *  Returns origin IATA for flight segment
 *
 *  @param flightSegment Flight segment to calculate origin IATA for
 *
 *  @return Origin IATA
 */
+ (JRSDKIATA)flightSegmentOriginIATA:(id<JRSDKFlightSegment>)flightSegment;

/**
 *  Returns destination IATA for flight segment
 *
 *  @param flightSegment Flight segment to calculate destination IATA for
 *
 *  @return Destination IATA
 */
+ (JRSDKIATA)flightSegmentDestinationIATA:(id<JRSDKFlightSegment>)flightSegment;

/**
 *  Returns flight segment stopover count
 *
 *  @param flightSegment Flight segment to calculate stopover count for
 *
 *  @return Flight segment stopover count
 */
+ (NSInteger)flightSegmentStopoverCount:(id<JRSDKFlightSegment>)flightSegment;

/**
 *  Checks all flight segment flights to include baggage
 *
 *  @param flightSegment Flight segment to check baggage for
 *
 *  @return `YES` when all flight segment flights have baggage included, `NO` otherwise
 */
+ (BOOL)flightSegmentHasIncludedBaggage:(id<JRSDKFlightSegment>)flightSegment;

@end
