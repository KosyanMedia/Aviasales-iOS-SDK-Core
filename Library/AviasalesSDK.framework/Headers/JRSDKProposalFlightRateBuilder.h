//
//  JRSDKProposalFlightRateBuilder.h
//  AviasalesSDK
//
//  Created by Ilya Amelchenkov on 21.04.17.
//  Copyright © 2017 aviasales. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JRSDKProposalFlightRateBuilder : NSObject

@property (nonatomic, strong, nullable) JRSDKBaggageRule *baggageRule;

- (nullable JRSDKProposalFlightRate *)build;

@end
