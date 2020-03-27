//
//  JRSDKAirlineBuilder.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>
#import <AviasalesSDK/DataDefines.h>

@class JRSDKAlliance;
@class JRSDKAirline;
@class JRSDKBaggageRule;

@interface JRSDKAirlineBuilder : NSObject

@property (nonatomic, retain, nullable) NSNumber *averageRate;
@property (nonatomic, assign) BOOL isLowcost;
@property (nonatomic, retain, nullable) JRSDKIATA iata;
@property (nonatomic, retain, nullable) NSString *name;
@property (nonatomic, retain, nullable) JRSDKAlliance *alliance;
@property (nonatomic, retain, nullable) JRSDKBaggageRule *commonBaggageRule;
@property (nonatomic, copy, nullable) NSString *brandColorHex;

- (nonnull instancetype)initWithAirlineToUpdate:(nonnull JRSDKAirline *)airline;

- (nullable JRSDKAirline *)build;

@end
