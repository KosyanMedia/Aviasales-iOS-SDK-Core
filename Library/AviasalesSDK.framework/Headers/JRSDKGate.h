//
//  JRSDKGate.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#if !TARGET_OS_WATCH
#import <AviasalesSDK/DataDefines.h>
#else
#import <AviasalesWatchSDK/DataDefines.h>
#endif

@protocol JRSDKPaymentMethod;

@protocol JRSDKGate <NSObject>
/**
 *  Average gate rating (float from 0 up to 5)
 */
@property (nonatomic, retain, readonly) NSNumber *averageRate;

/**
 *  Gate currency code
 */
@property (nonatomic, retain, readonly) JRSDKCurrency currencyCode;

/**
 *  Gate identifier
 */
@property (nonatomic, retain, readonly) NSString *gateID;

/**
 *  Main gate identifier (gate itself is the same but a part of prices is provided by the subgate for some reason)
 *  Currently only 1-level inheritance is supported (main gate and it's subgates)
 */
@property (nonatomic, retain, readonly) NSString *mainGateID;

/**
 *  Gate name
 */
@property (nonatomic, strong, readonly) NSString *label;

/**
 *  Gate website is optimized for mobile devices
 */
@property (nonatomic, assign, readonly) BOOL isMobileVersion;

/**
 *  Possible payment methods
 */
@property (nonatomic, retain, readonly) NSSet <id <JRSDKPaymentMethod>> *paymentMethods;

/**
 *  Gate rating
 */
@property (nonatomic, strong, readonly) NSNumber *productivity;

/**
 *  Gate is the website of an airline
 */
@property (nonatomic, retain, readonly) NSNumber *isAirline;

/**
 *  Gate supports assisted booking
 */
@property (nonatomic, retain, readonly) NSNumber *supportsAssistedBooking;

/**
 *  Indicates that we can show an extra step during ticket purchase
 */
@property (nonatomic, assign, readonly) BOOL jetradarOTAExtraStepEnabled;

/**
 *  Whether the gate should include to search results
 */
@property (nonatomic, assign, readonly) BOOL hidden;

@end
