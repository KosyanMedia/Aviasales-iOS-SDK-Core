//
//  JRSDKProposal.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#if !TARGET_OS_WATCH
#import <AviasalesSDK/DataDefines.h>
#import <AviasalesSDK/JRSDKModelObject.h>
#else
#import <AviasalesWatchSDK/DataDefines.h>
#import <AviasalesWatchSDK/JRSDKModelObject.h>
#endif

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
 *  Monthly credit payment value
 */
@property (nonatomic, strong, nullable) JRSDKPrice *creditPayment;

/**
 *  Number of credit payments
 */
@property (nonatomic, strong, nullable) NSNumber *creditPaymentsCount;

/**
 *  Credit grace period
 */
@property (nonatomic, strong, nullable) NSNumber *creditGracePeriod;

/**
 *  Credit last payment date
 */
@property (nonatomic, strong, nullable) NSDate *creditLastPaymentDate;

/**
 *  Credit overpayment (e.g. 14%)
 */
@property (nonatomic, strong, nullable) NSNumber *creditOverpaymentPercent;

/**
 * Ticket that can be purchased with this price
 */
@property (nonatomic, unsafe_unretained, nullable) JRSDKTicket *ticket;

@end
