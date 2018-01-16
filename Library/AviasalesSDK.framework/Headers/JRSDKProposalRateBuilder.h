//
//  JRSDKProposalRateBuilder.h
//  AviasalesSDK
//
//  Created by Ilya Amelchenkov on 21.04.17.
//  Copyright © 2017 aviasales. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JRSDKProposalRateBuilder : NSObject

@property (nonatomic, retain, nullable) NSArray <JRSDKProposalFlightSegmentRate *> *flightSegmentRates;

- (nullable JRSDKProposalRate *)build;

@end
