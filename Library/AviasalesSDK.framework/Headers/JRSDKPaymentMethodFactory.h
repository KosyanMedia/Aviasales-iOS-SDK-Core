//
//  JRSDKPaymentMethodFactory.h
//  AviasalesSDK
//
//  Created by Denis Chaschin on 11.10.16.
//  Copyright © 2016 aviasales. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JRSDKPaymentMethodFactory : NSObject

- (nonnull JRSDKPaymentMethod *)paymentMethodNamed:(nonnull NSString *)methodName;
- (nonnull JRSDKPaymentMethod *)inCreditPaymentMethod;
- (nonnull JRSDKPaymentMethod *)cardPaymentMethod;

@end
