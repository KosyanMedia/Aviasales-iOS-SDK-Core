//
//  JRSDKPrice.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#if !TARGET_OS_WATCH
#import <AviasalesSDK/DataDefines.h>
#else
#import <AviasalesWatchSDK/DataDefines.h>
#endif

@protocol JRSDKGate, JRSDKTicket;

@protocol JRSDKPrice <NSObject>

/**
 *  Gate that offers this price
 */
@property (nonatomic, retain, readonly) id <JRSDKGate> gate;

/**
 *  Price currency
 */
@property (nonatomic, strong, readonly) JRSDKCurrency currency;

/**
 *  Price value
 */
@property (nonatomic, assign, readonly) NSInteger value; //TODO: change to double or multiply with 100

/**
 *  Order identifier that is used during purchase process
 */
@property (nonatomic, retain, readonly) NSString *orderID;

/**
 *  Monthly credit payment value
 */
@property (nonatomic, retain, readonly) NSNumber *creditPayment;

/**
 *  Currency of credit payment
 */
@property (nonatomic, retain, readonly) JRSDKCurrency creditPaymentsCurrencyCode;

/**
 *  Number of credit payments
 */
@property (nonatomic, retain, readonly) NSNumber *creditPaymentsCount;

/**
 *  Credit grace period
 */
@property (nonatomic, retain, readonly) NSNumber *creditGracePeriod;

/**
 *  Credit last payment date
 */
@property (nonatomic, retain, readonly) NSDate *creditLastPaymentDate;

/**
 *  Credit overpayment (e.g. 14%)
 */
@property (nonatomic, retain, readonly) NSNumber *creditOverpaymentPercent;

@end