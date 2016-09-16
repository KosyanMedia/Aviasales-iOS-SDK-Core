//
//  JRSDKAirline.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#if !TARGET_OS_WATCH
#import <AviasalesSDK/DataDefines.h>
#else
#import <AviasalesWatchSDK/DataDefines.h>
#endif

@protocol JRSDKAlliance, JRSDKBaggageRule;
@protocol JRSDKAirline <NSObject>

/**
 * Average airline rating (float from 0 to 5)
 */
@property (nonatomic, retain, readonly) NSNumber *averageRate;

/**
 *  Whether airline is a lowcoster
 */
@property (nonatomic, assign, readonly) BOOL isLowcost;

/**
 * Two characters airline IATA-code
 */
@property (nonatomic, retain, readonly) JRSDKIATA iata;

/**
 * Airline name
 */
@property (nonatomic, retain, readonly) NSString *name;

/**
 *  Airline alliance
 */
@property (nonatomic, retain, readonly) id <JRSDKAlliance> alliance;

/**
 *  Common baggage rule for flights of this airline
 */
@property (nonatomic, retain, readonly) id <JRSDKBaggageRule> commonBaggageRule;

@end
