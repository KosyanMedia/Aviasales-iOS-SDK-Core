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


@interface JRSDKModelUtils (JRSDKTicket)

/**
 *  Finds the lowest price in ticket
 *
 *  @param ticket Ticket to search price in
 *
 *  @return The lowest price
 */
+ (JRSDKProposal *)ticketMinimalPriceProposal:(JRSDKTicket *)ticket;

/**
 *  Finds the price that can be purchased in credit in ticket
 *
 *  @param ticket Ticket to search price in
 *
 *  @return Price that can be purchased in credit
 */
+ (JRSDKProposal *)ticketCreditProposal:(JRSDKTicket *)ticket;

/**
 *  Checks whether all segments in ticket are direct flights or not
 *
 *  @param ticket Ticket to check
 *
 *  @return `YES` if all segments in ticket are direct flights, `NO` otherwise
 */
+ (BOOL)allSegmentsAreDirectFlights:(JRSDKTicket *)ticket;

/**
 *  Returns ticket with minimal price from tickets set
 *
 *  @param ticketSet A set of tickets
 *
 *  @return A ticket with minimal price
 */
+ (JRSDKTicket *)ticketWithMinPriceFrom:(NSSet<JRSDKTicket *> *)ticketSet;

/**
 *  Returns ticket with minimal price from tickets set
 *
 *  @param ticketsOrderedSet A ordered by price set of tickets
 *
 *  @return A ticket with minimal price
 */
+ (JRSDKTicket *)ticketWithMinPriceFromOrderedSet:(NSOrderedSet<JRSDKTicket *> *)ticketsOrderedSet;
    
@end
