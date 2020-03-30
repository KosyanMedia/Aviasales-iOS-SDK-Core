//
//  JRSDKCurrency+Utils.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <AviasalesSDK/JRSDKModelUtils.h>
#import <AviasalesSDK/DataDefines.h>


@interface JRSDKModelUtils (Currency)

/**
 *  Returns currency symbol for the passed currency code
 *
 *  @param currency Currency code to get symbol for
 *
 *  @return Currency symbol
 */
+ (nonnull NSString *)symbolForCurrency:(nonnull JRSDKCurrency)currency;

@end
