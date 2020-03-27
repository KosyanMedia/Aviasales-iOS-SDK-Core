//
//  JRSDKProposalRateBuilder.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>

@class JRSDKProposalFlightSegmentRate;
@class JRSDKProposalRate;

@interface JRSDKProposalRateBuilder : NSObject

@property (nonatomic, retain, nullable) NSArray <JRSDKProposalFlightSegmentRate *> *flightSegmentRates;

- (nullable JRSDKProposalRate *)build;

@end
