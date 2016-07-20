//
//  JRSDKCurrencyRate.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

@protocol JRSDKCurrencyRate

/**
 *  Currency code
 */
@property (nonatomic, retain, readonly) JRSDKCurrency code;

/**
 *  Currency rate
 */
@property (nonatomic, retain, readonly) NSNumber *rate;

@end
