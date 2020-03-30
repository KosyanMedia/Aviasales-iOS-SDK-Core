//
//  JRSDKCurrencyRate.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <AviasalesSDK/JRSDKModelObject.h>
#import <AviasalesSDK/DataDefines.h>

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
