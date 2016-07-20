//
//  JRSDKPaymentMethod.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

@protocol JRSDKPaymentMethod <NSObject>

/**
 *  Payment method name
 */
@property (nonatomic, retain, readonly) NSString *name;

@end