//
//  JRSDKPaymentMethod.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#if !TARGET_OS_WATCH
#import <AviasalesSDK/JRSDKModelObject.h>
#else
#import <AviasalesWatchSDK/JRSDKModelObject.h>
#endif

@interface JRSDKPaymentMethod : JRSDKModelObject

/**
 *  Payment method name
 */
@property (nonatomic, retain, nonnull) NSString *name;

@end
