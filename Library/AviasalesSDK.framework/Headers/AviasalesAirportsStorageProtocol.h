//
//  AviasalesAirportsStorageProtocol.h
//  AviasalesSDK
//
//  Created by Dmitry Ryumin on 31/05/16.
//  Copyright © 2016 aviasales. All rights reserved.
//

#if !TARGET_OS_WATCH
#import <AviasalesSDK/DataDefines.h>
#else
#import <AviasalesWatchSDK/DataDefines.h>
#endif

@protocol JRSDKAirport;
@protocol AviasalesAirportsDataProtocol;

FOUNDATION_EXPORT NSString *const kAviasalesAirportsStorageNewAirportsParsedNotificationName;

@protocol AviasalesAirportsStorageProtocol <NSObject>

- (void)loadAirportsFromAirportsData:(id<AviasalesAirportsDataProtocol>)airportsData;

- (id <JRSDKAirport>)findAirportByIATA:(JRSDKIATA)iata city:(BOOL)isCity;
- (id <JRSDKAirport>)findTopAirportByIATA:(JRSDKIATA)iata city:(BOOL)isCity;
- (id <JRSDKAirport>)findOrCreateAirportByIATA:(JRSDKIATA)iata city:(BOOL)isCity;
- (id <JRSDKAirport>)findAnythingByIATA:(JRSDKIATA)iata;
- (void)storeAirports:(NSArray <id <JRSDKAirport>> *)airports;

- (JRSDKIATA)mainIATAByIATA:(JRSDKIATA)iata;

- (NSArray <id <JRSDKAirport>> *)topAirports;
- (NSArray <id <JRSDKAirport>> *)allAirports;

@end
