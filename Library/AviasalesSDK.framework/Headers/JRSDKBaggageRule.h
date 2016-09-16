//
//  JRSDKBaggageRule.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//


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


@protocol JRSDKBaggageRule <NSObject>

/**
 *  Baggage type
 */
@property (nonatomic, assign, readonly) JRSDKBaggageRuleType baggageRuleType;

/**
 *  Number of baggage packages
 */
@property (nonatomic, assign, readonly) short baggagePackagesCount;

/**
 *  Total baggage packages weight
 */
@property (nonatomic, assign, readonly) short baggageTotalWeight;

/**
 *  Handbag type
 */
@property (nonatomic, assign, readonly) JRSDKBaggageRuleType handbagRuleType;

/**
 *  Number of handbag packages
 */
@property (nonatomic, assign, readonly) short handbagPackagesCount;

/**
 *  Total handbag packages weight
 */
@property (nonatomic, assign, readonly) short handbagTotalWeight;

/**
 *  If YES total handbag packages weight is already included in total baggage packages weight
 */
@property (nonatomic, assign, readonly) BOOL relative;

@end