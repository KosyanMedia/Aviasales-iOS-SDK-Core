//
//  JRSDKTicket.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

@protocol JRSDKAirline, JRSDKFlightSegment, JRSDKPrice, JRSDKSearchInfo;

@protocol JRSDKTicket <NSObject>

/**
 *  Flight segments for this ticket
 */
@property (nonatomic, retain, readonly) NSOrderedSet <id <JRSDKFlightSegment>> *flightSegments;

/**
 *  Prices (sorted by price value)
 */
@property (nonatomic, strong, readonly) NSOrderedSet <id <JRSDKPrice>> *prices;

/**
 *  Main airline (airline that performs the most flights)
 */
@property (nonatomic, retain, readonly) id <JRSDKAirline> mainAirline;

/**
 *  Ticket rating
 */
@property (nonatomic, retain, readonly) NSNumber *simpleRating;

/**
 *  All flights duration
 */
@property (nonatomic, retain, readonly) NSNumber *totalDuration;

/**
 *  All transfers duration
 */
@property (nonatomic, retain, readonly) NSNumber *delayDuration;

/**
 *  This ticket's flight segments has overnight stopovers
 */
@property (nonatomic, assign, readonly) BOOL hasOvernightStopover;

/**
 *  Ticket sign that is unique for each ticket in the search
 */
@property (nonatomic, retain, readonly) NSString *sign;

/**
 *  Ticket has reliable information because was received from trusted gate
 */
@property (nonatomic, assign, readonly) BOOL isFromTrustedGate;

/**
 *  Search info that was used to find this ticket
 */
- (id <JRSDKSearchInfo>)searchInfo;

@end