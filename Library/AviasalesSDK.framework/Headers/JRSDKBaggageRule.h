//
//  JRSDKBaggageRule.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#if !TARGET_OS_WATCH
#import <AviasalesSDK/JRSDKModelObject.h>
#else
#import <AviasalesWatchSDK/JRSDKModelObject.h>
#endif


typedef NS_ENUM(short, JRSDKBaggageRuleType) {
    /**
     *  No info available
     */
    JRSDKBaggageRuleTypeNoInfo = 0,
    
    /**
     *  Baggage not included
     */
    JRSDKBaggageRuleTypeNotIncluded,
    
    /**
     *  X packages per (totalWeight/X) kilograms included
     */
    JRSDKBaggageRuleTypeXPackagesPerYKilos,
    
    /**
     *  X kilograms of baggage included
     */
    JRSDKBaggageRuleTypeXKilos
};


@interface JRSDKBaggageRule : JRSDKModelObject

/**
 *  Baggage type
 */
@property (nonatomic, assign) JRSDKBaggageRuleType baggageRuleType;

/**
 *  Number of baggage packages
 */
@property (nonatomic, assign) short baggagePackagesCount;

/**
 *  Total baggage packages weight
 */
@property (nonatomic, assign) short baggageTotalWeight;

/**
 *  Handbag type
 */
@property (nonatomic, assign) JRSDKBaggageRuleType handbagRuleType;

/**
 *  Number of handbag packages
 */
@property (nonatomic, assign) short handbagPackagesCount;

/**
 *  Total handbag packages weight
 */
@property (nonatomic, assign) short handbagTotalWeight;

/**
 *  If YES total handbag packages weight is already included in total baggage packages weight
 */
@property (nonatomic, assign) BOOL relative;

/**
 *  No info baggage rule
 */
+ (nonnull instancetype)noInfoBaggageRule;

@end
