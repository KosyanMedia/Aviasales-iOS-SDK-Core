//
//  JRSDKBaggageRuleBuilder.h
//  AviasalesSDK
//
//  Created by Denis Chaschin on 17.11.16.
//  Copyright © 2016 aviasales. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JRSDKBaggageRuleBuilder : NSObject

@property (nonatomic, assign) JRSDKBaggageRuleType baggageRuleType;
@property (nonatomic, assign) short baggagePackagesCount;
@property (nonatomic, assign) short baggageTotalWeight;
@property (nonatomic, assign) JRSDKBaggageRuleType handbagRuleType;
@property (nonatomic, assign) short handbagPackagesCount;
@property (nonatomic, assign) short handbagTotalWeight;
@property (nonatomic, assign) BOOL relative;

- (nonnull JRSDKBaggageRule *)build;

@end
