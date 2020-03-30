//
//  JRSDKBaggageRuleBuilder.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>

@class JRSDKBaggageRuleDescription;
@class JRSDKBaggageRule;

@interface JRSDKBaggageRuleBuilder : NSObject

@property (nonatomic, strong, nullable) JRSDKBaggageRuleDescription *baggage;
@property (nonatomic, strong, nullable) JRSDKBaggageRuleDescription *handbags;
@property (nonatomic, assign) BOOL relative;

- (nonnull JRSDKBaggageRule *)build;

@end
