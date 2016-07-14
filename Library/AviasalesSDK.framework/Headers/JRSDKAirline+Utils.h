//
//  JRSDKAirline+Utils.h
//  AviasalesSDK
//
//  Created by Denis Chaschin on 25.04.16.
//  Copyright © 2016 Go Travel Un Limited. All rights reserved.
//

#import <CoreGraphics/CoreGraphics.h>
#if TARGET_OS_WATCH
#import <AviasalesWatchSDK/JRSDKModelUtils.h>
#else
#import <AviasalesSDK/JRSDKModelUtils.h>
#endif

@protocol JRSDKAirline;

@interface JRSDKModelUtils (Airline)
+ (nonnull NSString *)airlineLogoUrlWithIATA:(nonnull JRSDKIATA)iata;
+ (nonnull NSString *)airlineSquareLogoUrlWithIATA:(nonnull JRSDKIATA)iata width:(CGFloat)width;
+ (nonnull NSString *)airlineLogoUrlWithIATA:(nonnull JRSDKIATA)iata size:(CGSize)size;
@end
