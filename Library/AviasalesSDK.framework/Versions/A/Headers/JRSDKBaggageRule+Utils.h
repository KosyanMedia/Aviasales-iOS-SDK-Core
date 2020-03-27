//
//  JRSDKBaggageRule+Utils.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <AviasalesSDK/JRSDKModelUtils.h>


@class JRSDKBaggageRule;


@interface JRSDKModelUtils (JRSDKBaggageRule)

/**
 *  Checks baggage rule to contain any info
 *
 *  @param baggageRule Baggage rule to check
 *
 *  @return `YES` if there is any information about baggage, `NO` otherwise
 */
+ (BOOL)baggageRuleHasAnyInfo:(nullable JRSDKBaggageRule *)baggageRule;

/**
 *  Compares two baggage rules by total baggage weight
 *
 *  @param rule      first baggage rule
 *  @param otherRule second baggage rule
 *
 *  @return Comparison result
 */
+ (NSComparisonResult)compareBaggageRule:(nonnull JRSDKBaggageRule *)rule toOtherBaggageRule:(nonnull JRSDKBaggageRule *)otherRule;

@end
