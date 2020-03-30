//
//  JRSDKPriceBuilder.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>
#import <AviasalesSDK/DataDefines.h>

@class JRSDKPrice;

NS_ASSUME_NONNULL_BEGIN

@interface JRSDKPriceBuilder : NSObject

@property (strong, nonatomic, nullable) JRSDKCurrency currency;
@property (assign, nonatomic) float value;

- (BOOL)canBuild;
- (nullable JRSDKPrice *)build;

+ (nullable JRSDKPrice *)priceWithCurrency:(JRSDKCurrency)currency value:(float)value;

@end

NS_ASSUME_NONNULL_END
