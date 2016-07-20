//
//  JRSDKSearchResult.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

@protocol JRSDKTicket;

@protocol JRSDKSearchResult

/**
 *  Identifier of current search. Used in purchase routines
 */
@property (nonatomic, strong, readonly) NSString *searchID;

/**
 *  Tickets ordered by price (for the whole metropolitan area when search was performed for the single airport in an metropolitan area)
 */
@property (nonatomic, strong, readonly) NSOrderedSet <id<JRSDKTicket>> *searchTickets;

/**
 *  Tickets ordered by price
 */
@property (nonatomic, strong, readonly) NSOrderedSet <id<JRSDKTicket>> *strictSearchTickets;

/**
 *  Search date
 */
@property (nonatomic, strong, readonly) NSDate *receivingDate;

@end