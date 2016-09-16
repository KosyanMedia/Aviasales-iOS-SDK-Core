//
//  JRSDKTicket+Utils.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#if TARGET_OS_WATCH
#import <AviasalesWatchSDK/JRSDKModelUtils.h>
#else
#import <AviasalesSDK/JRSDKModelUtils.h>
#endif

@protocol JRSDKTicket;
@protocol JRSDKPrice;

@interface JRSDKModelUtils (JRSDKTicket)

/**
 *  Finds the lowest price in ticket
 *
 *  @param ticket Ticket to search price in
 *
 *  @return The lowest price
 */
+ (id<JRSDKPrice>)ticketMinPrice:(id<JRSDKTicket>)ticket;

/**
 *  Finds the price that can be purchased in credit in ticket
 *
 *  @param ticket Ticket to search price in
 *
 *  @return Price that can be purchased in credit
 */
+ (id<JRSDKPrice>)ticketCreditPrice:(id<JRSDKTicket>)ticket;

/**
 *  Checks whether all segments in ticket are direct flights or not
 *
 *  @param ticket Ticket to check
 *
 *  @return `YES` if all segments in ticket are direct flights, `NO` otherwise
 */
+ (BOOL)allSegmentsAreDirectFlights:(id<JRSDKTicket>)ticket;

/**
 *  Returns ticket with minimal price from tickets set
 *
 *  @param ticketSet A set of tickets
 *
 *  @return A ticket with minimal price
 */
+ (id<JRSDKTicket>)ticketWithMinPriceFrom:(NSSet<id<JRSDKTicket>> *)ticketSet;

/**
 *  Returns ticket with minimal price from tickets set
 *
 *  @param ticketSet A ordered by price set of tickets
 *
 *  @return A ticket with minimal price
 */
+ (id<JRSDKTicket>)ticketWithMinPriceFromOrderedSet:(NSOrderedSet<id<JRSDKTicket>> *)ticketsOrderedSet;

/**
 *  Compares two tickets
 *
 *  @param firstTicket  First ticket
 *  @param secondTicket Second ticket
 *
 *  @return `YES` if tickets are the same, `NO` otherwise
 */
+ (BOOL)isTicket:(id<JRSDKTicket>)firstTicket theSameAs:(id<JRSDKTicket>)secondTicket;
    
@end
