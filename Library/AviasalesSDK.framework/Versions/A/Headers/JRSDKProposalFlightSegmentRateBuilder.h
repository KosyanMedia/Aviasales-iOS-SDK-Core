//
//  JRSDKProposalFlightSegmentRateBuilder.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>

@class JRSDKProposalFlightSegmentRate;
@class JRSDKProposalFlightRate;

@interface JRSDKProposalFlightSegmentRateBuilder : NSObject

@property (nonatomic, retain, nullable) NSArray <JRSDKProposalFlightRate *> *flightRates;

- (nullable JRSDKProposalFlightSegmentRate *)build;

@end
