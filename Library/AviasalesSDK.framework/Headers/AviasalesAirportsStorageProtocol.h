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

@class JRSDKAirport;
@protocol AviasalesAirportsDataProtocol;

@class JRSDKCountry;

/**
 *  Notification with this name is posted via NSNotificationCenter when new airports appear in airports storage
 */
FOUNDATION_EXPORT NSString *const kAviasalesAirportsStorageNewAirportsParsedNotificationName;

/**
 *  Storage provides convenient methods to save and fetch airports
 */

// TODO: Need rename to AviasalesLocationsStorageProtocol in future
@protocol AviasalesAirportsStorageProtocol <NSObject>

/**
 *  A full list of airports
 */
- (NSArray <JRSDKAirport *> *)airports;

/**
 *  A full list of countries
 */
- (NSArray <JRSDKCountry *> *)countries;

/**
 *  Get top cities by country
 *  @param country `JRSDKCountry` to find airports for
 */
- (NSArray <JRSDKAirport *> *)citiesByCountry:(JRSDKCountry *)country;

/**
 *  Convenient methods to fetch/save airports by IATA
 */
- (JRSDKAirport *)findAirportByIATA:(JRSDKIATA)iata city:(BOOL)isCity;
- (JRSDKAirport *)findOrCreateAirportByIATA:(JRSDKIATA)iata city:(BOOL)isCity;
- (JRSDKAirport *)findAnythingByIATA:(JRSDKIATA)iata;
- (NSArray <JRSDKAirport *> *)findAllAirportsByIATA:(JRSDKIATA)IATA;

/**
 *  Saves airports list to storage
 *
 *  @param airports `NSArray` with `JRSDKAirport`
 */
- (void)storeAirports:(NSArray <JRSDKAirport *> *)airports;

/**
 *  Saves countries list to storage
 *
 *  @param countries `NSArray` with JRSDKCountry
 */
- (void)storeCountries:(NSArray <JRSDKCountry *> *)countries;

/**
 *  Finds main IATA for the passed IATA. For example the main IATA for `VKO` (Moscow, Vnukovo) IATA is `MOW` (Moscow, all airports)
 *
 *  @param iata IATA to find main IATA for
 *
 *  @return Main IATA for the passed IATA or the passed IATA itself if the IATA is already main IATA or there is no main IATA at all
 */
- (JRSDKIATA)mainIATAByIATA:(JRSDKIATA)iata;

/**
 *  Finds main city for the passed airport.
 *
 *  @param airport to find main city for
 *
 *  @return Main city or self
 */
- (JRSDKAirport *)cityOrSelfByAirport:(JRSDKAirport *)airport;

@end
