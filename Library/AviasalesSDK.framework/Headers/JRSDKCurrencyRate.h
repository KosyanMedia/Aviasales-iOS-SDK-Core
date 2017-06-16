//
//  JRSDKCurrencyRate.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#if !TARGET_OS_WATCH
#import <AviasalesSDK/JRSDKModelObject.h>
#else
#import <AviasalesWatchSDK/JRSDKModelObject.h>
#endif

@interface JRSDKCurrencyRate : JRSDKModelObject

/**
 *  Currency code
 */
@property (nonatomic, retain, nonnull) JRSDKCurrency code;

/**
 *  Currency rate
 */
@property (nonatomic, retain, nonnull) NSNumber *rate;

@end
