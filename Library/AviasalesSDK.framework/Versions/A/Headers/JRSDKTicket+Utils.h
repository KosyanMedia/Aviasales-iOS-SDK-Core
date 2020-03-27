//
//  JRSDKTicket+Utils.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <AviasalesSDK/JRSDKModelUtils.h>

@class JRSDKProposal;
@class JRSDKTicket;


@interface JRSDKModelUtils (JRSDKTicket)

/**
 *  Compares two tickets
 *
 *  @param firstTicket  First ticket
 *  @param secondTicket Second ticket
 *
 *  @return Comparison result
 */
+ (NSComparisonResult)compareFirstTicket:(nonnull JRSDKTicket *)firstTicket withSecondOne:(nonnull JRSDKTicket *)secondTicket;

/**
 *  Finds the lowest price in ticket
 *
 *  @param ticket Ticket to search price in
 *
 *  @return The lowest price
 */
+ (nullable JRSDKProposal *)ticketMinimalPriceProposal:(nullable JRSDKTicket *)ticket;

/**
 *  Checks whether all segments in ticket are direct flights or not
 *
 *  @param ticket Ticket to check
 *
 *  @return `YES` if all segments in ticket are direct flights, `NO` otherwise
 */
+ (BOOL)allSegmentsAreDirectFlights:(nullable JRSDKTicket *)ticket;

/**
 *  Checks whether at least one flight in performed by airplane
 *
 *  @param ticket Ticket to check
 *
 *  @return `YES` if at least one flight is performed by airplane, `NO` otherwise
 */
+ (BOOL)atLeastOneFlightIsPerformedByAirplane:(nullable JRSDKTicket *)ticket;

/**
 *  Checks whether all flights in ticket are performed by train
 *
 *  @param ticket Ticket to check
 *
 *  @return `YES` if all flights in ticket are performed by train, `NO` otherwise
 */
+ (BOOL)allFlightsArePerformedByTrain:(nullable JRSDKTicket *)ticket;

/**
 *  Checks whether all flights in ticket are performed by bus
 *
 *  @param ticket Ticket to check
 *
 *  @return `YES` if all flights in ticket are performed by bus, `NO` otherwise
 */
+ (BOOL)allFlightsArePerformedByBus:(nullable JRSDKTicket *)ticket;

/**
 *  Checks whether all flights in ticket have RU country code for origin airport and destination airport
 *
 *  @param ticket Ticket to check
 *
 *  @return `YES` if all flights in ticket have RU country code for origin airport and destination airport, `NO` otherwise
 */
+ (BOOL)allFlightsAreRussian:(nullable JRSDKTicket *)ticket;

/**
 *  Returns ticket with minimal price from tickets set
 *
 *  @param ticketSet A set of tickets
 *
 *  @return A ticket with minimal price
 */
+ (nullable JRSDKTicket *)ticketWithMinPriceFrom:(nullable NSSet<JRSDKTicket *> *)ticketSet;

/**
 *  Returns ticket with minimal price from tickets set
 *
 *  @param ticketsOrderedSet A ordered by price set of tickets
 *
 *  @return A ticket with minimal price
 */
+ (nullable JRSDKTicket *)ticketWithMinPriceFromOrderedSet:(nullable NSOrderedSet<JRSDKTicket *> *)ticketsOrderedSet;
    
@end
