//
//  JRSDKModelObject.h
//  AviasalesSDK
//
//  Created by Ilya Amelchenkov on 13.01.17.
//  Copyright © 2017 aviasales. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JRSDKModelObject : NSObject <NSCopying>

+ (nonnull instancetype)new OBJC_UNAVAILABLE("Use builders instead");

- (nonnull instancetype)init OBJC_UNAVAILABLE("Use builders instead");

- (nonnull instancetype)initUnsafeObject;

@end
