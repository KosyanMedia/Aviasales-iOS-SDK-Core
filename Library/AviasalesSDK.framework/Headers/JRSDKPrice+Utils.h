//
//  JRSDKPrice+Utils.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#if TARGET_OS_WATCH
#import <AviasalesWatchSDK/JRSDKPrice.h>
#else
#import <AviasalesSDK/JRSDKPrice.h>
#endif

@interface JRSDKPrice (Utils)

/**
 *  Convenient methods to get the price value in different currencies
 */
- (nonnull NSNumber *)priceInUserCurrency;
- (nonnull NSNumber *)priceByConfigurationInRUBOrUSD;
- (nonnull NSNumber *)priceInRUB;
- (nonnull NSNumber *)priceInUSD;
- (nonnull NSNumber *)priceInCurrency:(nonnull JRSDKCurrency)currency;
- (NSComparisonResult)compareWith:(nonnull JRSDKPrice *)anotherPrice;

@end
