//
//  JRSDKCurrency+Utils.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#if TARGET_OS_WATCH
#import <AviasalesWatchSDK/JRSDKModelUtils.h>
#else
#import <AviasalesSDK/JRSDKModelUtils.h>
#endif

@protocol JRSDKAirline;

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