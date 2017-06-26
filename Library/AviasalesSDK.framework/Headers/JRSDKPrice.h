//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

@interface JRSDKPrice : JRSDKModelObject

/**
 *  Price currency
 */
@property (nonatomic, strong, nonnull) JRSDKCurrency currency;

/**
 *  Price value
 */
@property (nonatomic, assign) NSInteger value; //TODO: change to double or multiply with 100

@end
