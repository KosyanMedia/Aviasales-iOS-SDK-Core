//
//  JRSDKPrice+Utils.h
//  AviasalesSDK
//
//  Created by Denis Chaschin on 26.05.16.
//  Copyright © 2016 aviasales. All rights reserved.
//

#import <Foundation/Foundation.h>

#if TARGET_OS_WATCH
#import <AviasalesWatchSDK/JRSDKModelUtils.h>
#import <AviasalesWatchSDK/DataDefines.h>
#else
#import <AviasalesSDK/JRSDKModelUtils.h>
#import <AviasalesSDK/DataDefines.h>
#endif


@protocol JRSDKPrice;

@interface JRSDKModelUtils (JRSDKPrice)

+ (NSNumber *)priceInUserCurrency:(id<JRSDKPrice>)price;
+ (NSNumber *)priceInUSD:(id<JRSDKPrice>)price;
+ (NSNumber *)price:(id<JRSDKPrice>)price inCurrency:(JRSDKCurrency)currency;
+ (NSComparisonResult)compareFirstPrice:(id<JRSDKPrice>)firstPrice withSecondOne:(id<JRSDKPrice>)secondPrice;

+ (BOOL)priceSupportsPaymentInCredit:(id<JRSDKPrice>)price;
+ (NSNumber *)creditPaymentInUserCurrencyForPrice:(id<JRSDKPrice>)price;
+ (NSNumber *)creditPaymentForPrice:(id<JRSDKPrice>)price inCurrency:(JRSDKCurrency)currency;

@end
