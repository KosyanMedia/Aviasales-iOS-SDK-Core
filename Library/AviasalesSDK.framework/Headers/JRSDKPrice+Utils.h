//
//  JRSDKPrice+Utils.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
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

/**
 *  Convenient methods to get the price value in different currencies
 */
+ (NSNumber *)priceInUserCurrency:(id<JRSDKPrice>)price;
+ (NSNumber *)priceInUSD:(id<JRSDKPrice>)price;
+ (NSNumber *)price:(id<JRSDKPrice>)price inCurrency:(JRSDKCurrency)currency;

/**
 *  Compares two prices
 *
 *  @param firstPrice  First price
 *  @param secondPrice Second price
 *
 *  @return `YES` if prices are the same, `NO` otherwise
 */
+ (NSComparisonResult)compareFirstPrice:(id<JRSDKPrice>)firstPrice withSecondOne:(id<JRSDKPrice>)secondPrice;

/**
 *  Checks whether the price can be purchased in credit
 *
 *  @param price Price to check
 *
 *  @return `YES` if the price can be purchased in credit, `NO` otherwise
 */
+ (BOOL)priceSupportsPaymentInCredit:(id<JRSDKPrice>)price;

/**
 *  Convenient methods to get the credit payment value in different currencies
 */
+ (NSNumber *)creditPaymentInUserCurrencyForPrice:(id<JRSDKPrice>)price;
+ (NSNumber *)creditPaymentForPrice:(id<JRSDKPrice>)price inCurrency:(JRSDKCurrency)currency;

@end
