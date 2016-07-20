//
//  AviasalesAirportsStorageProtocol.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#if !TARGET_OS_WATCH
#import <AviasalesSDK/DataDefines.h>
#else
#import <AviasalesWatchSDK/DataDefines.h>
#endif

@protocol JRSDKAirport;
@protocol AviasalesAirportsDataProtocol;

/**
 *  Notification with this name is posted via NSNotificationCenter when new airports appear in airports storage
 */
FOUNDATION_EXPORT NSString *const kAviasalesAirportsStorageNewAirportsParsedNotificationName;

/**
 *  Storage provides convenient methods to save and fetch airports
 */
@protocol AviasalesAirportsStorageProtocol <NSObject>

/**
 *  A list of best airports overall
 */
- (NSArray <id <JRSDKAirport>> *)topAirports;

/**
 *  A full list of airports
 */
- (NSArray <id <JRSDKAirport>> *)allAirports;

/**
 *  Convenient methods to fetch/save airports by IATA
 */
- (id <JRSDKAirport>)findAirportByIATA:(JRSDKIATA)iata city:(BOOL)isCity;
- (id <JRSDKAirport>)findTopAirportByIATA:(JRSDKIATA)iata city:(BOOL)isCity;
- (id <JRSDKAirport>)findOrCreateAirportByIATA:(JRSDKIATA)iata city:(BOOL)isCity;
- (id <JRSDKAirport>)findAnythingByIATA:(JRSDKIATA)iata;

/**
 *  Saves airports list to storage
 *
 *  @param airports `NSArray` with `id <JRSDKAirport>`
 */
- (void)storeAirports:(NSArray <id <JRSDKAirport>> *)airports;

/**
 *  Finds main IATA for the passed IATA. For example the main IATA for `VKO` (Moscow, Vnukovo) IATA is `MOW` (Moscow, all airports)
 *
 *  @param iata IATA to find main IATA for
 *
 *  @return Main IATA for the passed IATA or the passed IATA itself if the IATA is already main IATA or there is no main IATA at all
 */
- (JRSDKIATA)mainIATAByIATA:(JRSDKIATA)iata;

@end
