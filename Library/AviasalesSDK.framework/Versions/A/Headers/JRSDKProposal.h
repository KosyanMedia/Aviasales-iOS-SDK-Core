//
//  JRSDKProposal.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <AviasalesSDK/DataDefines.h>
#import <AviasalesSDK/JRSDKModelObject.h>

@class JRSDKGate, JRSDKTicket, JRSDKPrice, JRSDKProposalRate;

@interface JRSDKProposal : JRSDKModelObject

/**
 *  Gate that offers this price
 */
@property (nonatomic, strong, nonnull) JRSDKGate *gate;

/**
 *  Proposal price
 */
@property (nonatomic, strong, nonnull) JRSDKPrice *price;

/**
 *  Proposal rate
 */
@property (nonatomic, strong, nonnull) JRSDKProposalRate *rate;

/**
 *  Order identifier that is used during purchase process
 */
@property (nonatomic, strong, nonnull) NSString *orderID;

/**
 *  Proposal unique identifier, can be used between search sessions
 */
@property (nonatomic, strong, nonnull) NSString *fareKeyCode;

/**
 * Ticket that can be purchased with this price
 */
@property (nonatomic, weak, null_unspecified) JRSDKTicket *ticket;

/**
 * Number of seats, which available for purchase by this proposal
 */
@property (nonatomic, strong, nullable) NSNumber *availableNumberOfSeats;

@end
