//
//  JRSDKAirportBuilder.h
//  AviasalesSDK
//
//  Created by Denis Chaschin on 17.11.16.
//  Copyright © 2016 aviasales. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JRSDKAirportBuilder : NSObject

@property (nonatomic, retain, nullable) NSNumber *averageRate;
@property (nonatomic, retain, nullable) NSString *city;
@property (nonatomic, retain, nullable) NSString *cityNameCasePr;
@property (nonatomic, retain, nullable) NSString *cityNameCaseRo;
@property (nonatomic, retain, nullable) NSString *cityNameCaseVi;
@property (nonatomic, retain, nullable) NSString *countryCode;
@property (nonatomic, retain, nullable) NSString *countryName;
@property (nonatomic, retain, nullable) JRSDKIATA iata;
@property (nonatomic, retain, nullable) JRSDKIATA parentIata;
@property (nonatomic, retain, nullable) NSNumber *latitude;
@property (nonatomic, retain, nullable) NSNumber *longitude;
@property (nonatomic, retain, nullable) NSTimeZone *timeZone;
@property (nonatomic, retain, nullable) NSString *airportName;
@property (nonatomic, retain, nullable) NSArray <NSString *> *indexStrings;
@property (nonatomic, assign) JRSDKAirportType airportType;
@property (nonatomic, assign) NSInteger weight;
@property (nonatomic, assign) BOOL searchable;
@property (nonatomic, assign) BOOL flightable;
@property (nonatomic, assign) BOOL fromServer;
@property (nonatomic, assign) BOOL isCity;

- (nonnull instancetype)initWithAirportToCopy:(nonnull JRSDKAirport *)airport;

- (nullable JRSDKAirport *)build;
- (BOOL)canBuild;

@end
