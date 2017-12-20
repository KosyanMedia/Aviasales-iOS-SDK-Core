//
//  AviasalesNumberUtil.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>

@interface AviasalesNumberUtil : NSObject

/**
 *  Converts price value from source currency to target currency
 *
 *  @param price    Price value in source currency
 *  @param fromCode Source currency
 *  @param toCode   Target currency
 *
 *  @return Converted price value
 */
+ (nullable NSNumber *)convertPrice:(nullable NSNumber *)price fromCurrency:(nonnull JRSDKCurrency)fromCode to:(nonnull JRSDKCurrency)toCode;

/**
 *  Formats price value with currency symbol of selected currency in `AviasalesSDK`
 *
 *  @param price Price value to format
 *
 *  @return Formatted price
 */
+ (nullable NSString *)formatPrice:(nullable NSNumber *)price;

@end
