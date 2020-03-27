//
//  JRSDKBaggageRuleDescriptionBuilder.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>

#import <AviasalesSDK/JRSDKBaggageRuleDescription.h>

@interface JRSDKBaggageRuleDescriptionBuilder : NSObject

@property (nonatomic, assign) JRSDKBaggageRuleType type;
@property (nonatomic, assign) short packagesCount;
@property (nonatomic, assign) short packageWeight;
@property (nonatomic, assign) BOOL hasDimensionRestrictions;
@property (nonatomic, assign) short maxLength;
@property (nonatomic, assign) short maxWidth;
@property (nonatomic, assign) short maxHeight;

- (nonnull JRSDKBaggageRuleDescription *)build;

@end
