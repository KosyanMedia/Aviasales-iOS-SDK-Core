//
//  JRSDKPaymentMethod.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <AviasalesSDK/JRSDKModelObject.h>

@interface JRSDKPaymentMethod : JRSDKModelObject

/**
 *  Payment method name
 */
@property (nonatomic, retain, nonnull) NSString *name;

@end
