//
//  JRSDKProposalFlightRate.h
//  AviasalesSDK
//
//  Created by Ilya Amelchenkov on 21.04.17.
//  Copyright © 2017 aviasales. All rights reserved.
//

#if !TARGET_OS_WATCH
#import <AviasalesSDK/DataDefines.h>
#import <AviasalesSDK/JRSDKModelObject.h>
#else
#import <AviasalesWatchSDK/DataDefines.h>
#import <AviasalesWatchSDK/JRSDKModelObject.h>
#endif

@class JRSDKBaggageRule;

@interface JRSDKProposalFlightRate : JRSDKModelObject

+ (nonnull instancetype)unknownRate;

/**
 *  Baggage rule
 */
@property (nonatomic, strong, nonnull, readonly) JRSDKBaggageRule *baggageRule;

@end
