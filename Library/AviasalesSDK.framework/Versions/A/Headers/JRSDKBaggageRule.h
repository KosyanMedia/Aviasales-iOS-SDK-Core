//
//  JRSDKBaggageRule.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <AviasalesSDK/JRSDKModelObject.h>

@class JRSDKBaggageRuleDescription;

@interface JRSDKBaggageRule : JRSDKModelObject

/**
 *  Baggage description
 */
@property (nonatomic, strong, nonnull) JRSDKBaggageRuleDescription *baggage;

/**
 *  Handbags description
 */
@property (nonatomic, strong, nonnull) JRSDKBaggageRuleDescription *handbags;

/**
 *  If YES total handbag packages weight is already included in total baggage packages weight
 */
@property (nonatomic, assign) BOOL relative;

/**
 *  No info baggage rule
 */
+ (nonnull instancetype)noInfoBaggageRule;

@end
