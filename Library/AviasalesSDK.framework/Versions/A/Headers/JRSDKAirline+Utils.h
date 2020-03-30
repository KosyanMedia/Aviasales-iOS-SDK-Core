//
//  JRSDKAirline+Utils.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <CoreGraphics/CoreGraphics.h>
#import <AviasalesSDK/JRSDKModelUtils.h>
#import <AviasalesSDK/DataDefines.h>

/**
 *  Gravity of logo inside defined size
 */
typedef NS_ENUM(NSUInteger, JRAirlineLogoGravity) {
    JRAirlineLogoGravityNoGravity,
    JRAirlineLogoGravityWest,
    JRAirlineLogoGravityEast
};

@interface JRSDKModelUtils (Airline)

/**
 *  Convenient methods to generate URL string for airline logo by airline IATA
 */
+ (nonnull NSString *)airlineSquareLogoUrlWithIATA:(nonnull JRSDKIATA)iata width:(CGFloat)width isDark:(BOOL)isDark;
+ (nonnull NSString *)airlineLogoUrlWithIATA:(nonnull JRSDKIATA)iata size:(CGSize)size isDark:(BOOL)isDark gravity:(JRAirlineLogoGravity)gravity;

@end
