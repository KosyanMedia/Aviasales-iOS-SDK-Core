//
//  JRSDKPrice.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <AviasalesSDK/JRSDKModelObject.h>
#import <AviasalesSDK/DataDefines.h>


@interface JRSDKPrice : JRSDKModelObject

/**
 *  Price currency
 */
@property (nonatomic, strong, nonnull) JRSDKCurrency currency;

/**
 *  Price value
 */
@property (nonatomic, assign) float value;

@end
