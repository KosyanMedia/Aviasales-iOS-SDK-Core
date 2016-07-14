//
//  AviasalesAirport.h
//

#import <Foundation/Foundation.h>
#import <AviasalesSDK/JRSDKAirport.h>

/*
 Объект, описывающий пункт отправления или назначения (аэропорт или метрополию)
 */
@interface AviasalesAirport : NSObject <JRSDKAirport>

/**
 Имя пункта в виде "Город, Страна"
 */
@property (nonatomic, strong) NSString *name;

#pragma mark - Protocol read-write redefinitions

@property (nonatomic, retain) NSNumber *averageRate;
@property (nonatomic, retain) NSString *city;
@property (nonatomic, retain) NSString *cityNameCasePr;
@property (nonatomic, retain) NSString *cityNameCaseRo;
@property (nonatomic, retain) NSString *cityNameCaseVi;
@property (nonatomic, retain) NSString *country;
@property (nonatomic, retain) JRSDKIATA iata;
@property (nonatomic, retain) JRSDKIATA parentIata;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, retain) NSString *airportName;
@property (nonatomic, assign) NSInteger numberOfSearches;
@property (nonatomic, assign) BOOL isCity;
@property (nonatomic, assign) JRSDKAirportType airportType;
@property (nonatomic, retain) NSArray <NSString *> *indexStrings;
@property (nonatomic, assign) BOOL fromServer;
@property (nonatomic, strong) NSTimeZone *timeZone;

@end
