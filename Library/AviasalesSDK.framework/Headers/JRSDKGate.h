//
//  JRSDKGate.h
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

@class JRSDKPaymentMethod;

@interface JRSDKGate : JRSDKModelObject
/**
 *  Average gate rating (float from 0 up to 5)
 */
@property (nonatomic, retain, nonnull) NSNumber *averageRate;

/**
 *  Gate identifier
 */
@property (nonatomic, retain, nonnull) NSString *gateID;

/**
 *  Main gate identifier (gate itself is the same but a part of prices is provided by the subgate for some reason)
 *  Currently only 1-level inheritance is supported (main gate and it's subgates)
 */
@property (nonatomic, retain, nonnull) NSString *mainGateID;

/**
 *  Gate name
 */
@property (nonatomic, strong, nonnull) NSString *label;

/**
 *  Gate website is optimized for mobile devices
 */
@property (nonatomic, assign) BOOL isMobileVersion;

/**
 *  Possible payment methods
 */
@property (nonatomic, retain, nonnull) NSSet <JRSDKPaymentMethod *> *paymentMethods;

/**
 *  Gate rating
 */
@property (nonatomic, strong, nullable) NSNumber *productivity;

/**
 *  Gate is the website of an airline
 */
@property (nonatomic, retain, nullable) NSNumber *isAirline;

/**
 *  Gate supports assisted booking
 */
@property (nonatomic, retain, nonnull) NSNumber *supportsAssistedBooking;

/**
 *  Indicates that we can show an extra step during ticket purchase
 */
@property (nonatomic, assign) BOOL jetradarOTAExtraStepEnabled;

/**
 *  Whether the gate should include to search results
 */
@property (nonatomic, assign) BOOL hidden;

/**
 *  The moment when the gate first responded during search routine
 */
@property (nonatomic, strong, nonnull) NSDate *responseDate;

/**
 *  Whether the gate's productivity should be increased for tickets with main airlines from this set
 */
@property (nonatomic, strong, nonnull) NSSet <NSSet <JRSDKIATA> *> *raiseProductivityForAirlineIATAs;


@end
