//
//  JRSDKProposalFlightRate.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <AviasalesSDK/DataDefines.h>
#import <AviasalesSDK/JRSDKModelObject.h>

@class JRSDKBaggageRule;

@interface JRSDKProposalFlightRate : JRSDKModelObject

+ (nonnull instancetype)unknownRate;

/**
 *  Baggage rule
 */
@property (nonatomic, strong, nonnull, readonly) JRSDKBaggageRule *baggageRule;

@end
