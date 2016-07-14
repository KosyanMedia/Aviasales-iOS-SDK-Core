//
//  JRSDKCurrency+Utils.h
//  AviasalesSDK
//
//  Created by Ilya Amelchenkov on 06.07.16.
//  Copyright © 2016 aviasales. All rights reserved.
//

#if TARGET_OS_WATCH
#import <AviasalesWatchSDK/JRSDKModelUtils.h>
#else
#import <AviasalesSDK/JRSDKModelUtils.h>
#endif

@protocol JRSDKAirline;

@interface JRSDKModelUtils (Currency)
+ (nonnull NSString *)symbolForCurrency:(nonnull JRSDKCurrency)currency;
@end