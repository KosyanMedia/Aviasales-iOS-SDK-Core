//
//  JRSDKTicket.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#if !TARGET_OS_WATCH
#import <AviasalesSDK/JRSDKModelObject.h>
#else
#import <AviasalesWatchSDK/JRSDKModelObject.h>
#endif

@class JRSDKAirline, JRSDKFlightSegment, JRSDKProposal, JRSDKSearchResultInfo;

@interface JRSDKTicket : JRSDKModelObject

/**
 *  Flight segments for this ticket
 */
@property (nonatomic, strong, nonnull) NSOrderedSet <JRSDKFlightSegment *> *flightSegments;

/**
 *  Prices (sorted by price value)
 */
@property (nonatomic, strong, nonnull) NSOrderedSet <JRSDKProposal *> *proposals;

/**
 *  Main airline (airline that performs the most flights)
 */
@property (nonatomic, strong, nonnull, readonly) JRSDKAirline *mainAirline;

/**
 *  Ticket rating
 */
@property (nonatomic, strong, nonnull, readonly) NSNumber *simpleRating;

/**
 *  All flights duration
 */
@property (nonatomic, strong, nonnull, readonly) NSNumber *totalDuration;

/**
 *  All transfers duration
 */
@property (nonatomic, strong, nonnull, readonly) NSNumber *delayDuration;

/**
 *  This ticket's flight segments has overnight stopovers
 */
@property (nonatomic, assign, readonly) BOOL hasOvernightStopover;

/**
 *  Ticket sign that is unique for each ticket in the search
 */
@property (nonatomic, strong, nonnull) NSString *sign;

/**
 *  Ticket has reliable information because was received from trusted gate
 */
@property (nonatomic, assign) BOOL isFromTrustedGate;

/**
 *  This is a charter ticket
 */
@property (nonatomic, assign) BOOL isCharter;

/**
 *  Search result info, where this ticket is
 */
@property (nonatomic, strong, nonnull) JRSDKSearchResultInfo *searchResultInfo;

/**
 *  Ticket weight based on number of sales
 */
@property (nonatomic, strong, nonnull) NSNumber *weight;

@end
