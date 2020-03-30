//
//  JRSDKModelObject.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>

@interface JRSDKModelObject : NSObject <NSCopying>

+ (nonnull instancetype)new OBJC_UNAVAILABLE("Use builders instead");

- (nonnull instancetype)init OBJC_UNAVAILABLE("Use builders instead");

- (nonnull instancetype)initUnsafeObject;

@end
