//
//  JRSDKPaymentMethodFactory.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>

@class JRSDKPaymentMethod;

@interface JRSDKPaymentMethodFactory : NSObject

- (nonnull JRSDKPaymentMethod *)paymentMethodNamed:(nonnull NSString *)methodName;
- (nonnull JRSDKPaymentMethod *)cardPaymentMethod;

@end
