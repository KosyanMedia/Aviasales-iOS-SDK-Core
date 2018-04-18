//
//  JRSDKAirline+Utils.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <CoreGraphics/CoreGraphics.h>
#if TARGET_OS_WATCH
#import <AviasalesWatchSDK/JRSDKModelUtils.h>
#else
#import <AviasalesSDK/JRSDKModelUtils.h>
#endif


@interface JRSDKModelUtils (Airline)

/**
 *  Convenient methods to generate URL string for airline logo by airline IATA
 */
+ (nonnull NSString *)airlineLogoUrlWithIATA:(nonnull JRSDKIATA)iata;
+ (nonnull NSString *)airlineSquareLogoUrlWithIATA:(nonnull JRSDKIATA)iata width:(CGFloat)width;
+ (nonnull NSString *)airlineLogoUrlWithIATA:(nonnull JRSDKIATA)iata size:(CGSize)size;

@end
