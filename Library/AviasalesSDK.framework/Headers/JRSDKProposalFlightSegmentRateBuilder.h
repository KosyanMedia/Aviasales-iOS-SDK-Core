//
//  JRSDKProposalFlightSegmentRateBuilder.h
//  AviasalesSDK
//
//  Created by Ilya Amelchenkov on 21.04.17.
//  Copyright © 2017 aviasales. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JRSDKProposalFlightSegmentRateBuilder : NSObject

@property (nonatomic, retain, nullable) NSArray <JRSDKProposalFlightRate *> *flightRates;

- (nullable JRSDKProposalFlightSegmentRate *)build;

@end
