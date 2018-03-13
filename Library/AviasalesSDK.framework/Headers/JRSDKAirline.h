//
//  JRSDKAirline.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#if !TARGET_OS_WATCH
#import <AviasalesSDK/DataDefines.h>
#import <AviasalesSDK/JRSDKModelObject.h>
#else
#import <AviasalesWatchSDK/DataDefines.h>
#import <AviasalesWatchSDK/JRSDKModelObject.h>
#endif

@class JRSDKAlliance, JRSDKBaggageRule;


@interface JRSDKAirline : JRSDKModelObject

/**
 * Average airline rating (float from 0 to 5)
 */
@property (nonatomic, retain, nonnull, readonly) NSNumber *averageRate;

/**
 *  Whether airline is a lowcoster
 */
@property (nonatomic, assign, readonly) BOOL isLowcost;

/**
 * Two characters airline IATA-code
 */
@property (nonatomic, retain, nonnull, readonly) JRSDKIATA iata;

/**
 * Airline name
 */
@property (nonatomic, retain, nonnull, readonly) NSString *name;

/**
 *  Airline alliance
 */
@property (nonatomic, retain, nonnull, readonly) JRSDKAlliance *alliance;

/**
 *  Common baggage rule for flights of this airline
 */
@property (nonatomic, retain, nullable, readonly) JRSDKBaggageRule *commonBaggageRule;

@end
