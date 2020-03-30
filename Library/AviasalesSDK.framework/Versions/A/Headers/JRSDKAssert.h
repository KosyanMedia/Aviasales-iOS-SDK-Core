//
//  JRSDKAssert.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>

NSError * _Nonnull _JRSDKCreateAssertionError(NSString * _Nonnull file, NSUInteger line, NSString * _Nonnull message);

extern void (^ _Nullable _JRSDKAssertionErrorHandler)(NSError * _Nonnull);

#if !DEBUG

#define JRSDKAssert(condition, desc, ...)  \
do { \
if (__builtin_expect(!(condition), 0)) {        \
NSString *message = [NSString stringWithFormat:(desc), ## __VA_ARGS__]; \
NSError *error = _JRSDKCreateAssertionError(@__FILE__, __LINE__, message); \
if (_JRSDKAssertionErrorHandler) _JRSDKAssertionErrorHandler(error); \
} \
} while(0)

#else

#define JRSDKAssert(condition, desc, ...) NSAssert((condition), (desc), ## __VA_ARGS__)

#endif // !DEBUG

#define JRSDKParameterAssert(condition) JRSDKAssert((condition), @"Invalid parameter not satisfying: %@", @#condition)
