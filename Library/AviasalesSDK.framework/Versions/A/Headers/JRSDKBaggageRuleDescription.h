//
//  JRSDKBaggageRuleDescription.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//


#import <AviasalesSDK/JRSDKModelObject.h>


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
    JRSDKBaggageRuleTypeXKilos,

    /**
     *  X packages included
     */
    JRSDKBaggageRuleTypeXPackages
};


@interface JRSDKBaggageRuleDescription : JRSDKModelObject

/**
 *  Baggage type
 */
@property (nonatomic, assign) JRSDKBaggageRuleType type;

/**
 *  Number of baggage packages
 */
@property (nonatomic, assign) short packagesCount;

/**
 *  Package weight
 */
@property (nonatomic, assign) short packageWeight;

/**
 *  Total weight
 */
@property (nonatomic, assign, readonly) short totalWeight;

/**
 *  Has dimension restrictions
 */
@property (nonatomic, assign) BOOL hasDimensionRestrictions;

/**
 *  Maximum length
 */
@property (nonatomic, assign) short maxLength;

/**
 *  Maximum width
 */
@property (nonatomic, assign) short maxWidth;

/**
 *  Maximum height
 */
@property (nonatomic, assign) short maxHeight;

/**
 *  Dimension restrictions are equal to each other
 */
@property (nonatomic, assign, readonly) BOOL dimensionRestrictionsAreEqual;

/**
 *  No info baggage rule description
 */
+ (nonnull instancetype)noInfoBaggageRuleDescription;

@end
