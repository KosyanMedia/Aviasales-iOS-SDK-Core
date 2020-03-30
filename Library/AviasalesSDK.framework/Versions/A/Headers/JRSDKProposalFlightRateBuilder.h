//
//  JRSDKProposalFlightRateBuilder.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>

@class JRSDKProposalFlightRate;
@class JRSDKBaggageRule;

@interface JRSDKProposalFlightRateBuilder : NSObject

@property (nonatomic, strong, nullable) JRSDKBaggageRule *baggageRule;

- (nullable JRSDKProposalFlightRate *)build;

@end
