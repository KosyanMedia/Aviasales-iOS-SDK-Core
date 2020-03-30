//
//  JRSDKGateBuilder.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>
#import <AviasalesSDK/DataDefines.h>
#import <AviasalesSDK/JRSDKGate.h>

@class JRSDKPaymentMethod;
@class JRSDKGate;

@interface JRSDKGateBuilder : NSObject

@property (strong, nonatomic, nullable) NSNumber *averageRate;
@property (strong, nonatomic, nullable) NSString *gateID;
@property (strong, nonatomic, nullable) NSString *mainGateID;
@property (strong, nonatomic, nullable) NSString *label;
@property (assign, nonatomic) BOOL isMobileVersion;
@property (assign, nonatomic) BOOL hidden;
@property (strong, nonatomic, nullable) NSSet <JRSDKPaymentMethod *> *paymentMethods;
@property (strong, nonatomic, nullable) NSNumber *productivity;
@property (strong, nonatomic, nullable) NSNumber *isAirline;
@property (strong, nonatomic, nullable) NSDate *responseDate;
@property (strong, nonatomic, nullable) NSSet <NSSet <JRSDKIATA> *> *raiseProductivityForAirlineIATAs;

- (nonnull instancetype)initWithGateToCopy:(nonnull JRSDKGate *)gate;

- (nullable JRSDKGate *)build;

@end
