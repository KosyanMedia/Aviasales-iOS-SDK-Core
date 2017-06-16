//
//  JRSDKAirlineBuilder.h
//  AviasalesSDK
//
//  Created by Denis Chaschin on 17.11.16.
//  Copyright © 2016 aviasales. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JRSDKAirlineBuilder : NSObject

@property (nonatomic, retain, nullable) NSNumber *averageRate;
@property (nonatomic, assign) BOOL isLowcost;
@property (nonatomic, retain, nullable) JRSDKIATA iata;
@property (nonatomic, retain, nullable) NSString *name;
@property (nonatomic, retain, nullable) JRSDKAlliance *alliance;
@property (nonatomic, retain, nullable) JRSDKBaggageRule *commonBaggageRule;

- (nonnull instancetype)initWithAirlineToUpdate:(nonnull JRSDKAirline *)airline;

- (nullable JRSDKAirline *)build;

@end
