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
FOUNDATION_EXPORT NSString *_Nonnull const kAviasalesAirportsStorageNewAirportsParsedNotificationName;

/**
 *  Storage provides convenient methods to save and fetch airports
 */

// TODO: Need rename to AviasalesLocationsStorageProtocol in future
@protocol AviasalesAirportsStorageProtocol <NSObject>

/**
 *  A full list of airports
 */
- (nullable NSArray <JRSDKAirport *> *)airports;

/**
 *  A full list of countries
 */
- (nullable NSArray <JRSDKCountry *> *)countries;

/**
 *  Get top cities by country
 *  @param country `JRSDKCountry` to find airports for
 */
- (nullable NSArray <JRSDKAirport *> *)citiesByCountry:(nullable JRSDKCountry *)country;

/**
 *  Convenient methods to fetch/save airports by IATA
 */
- (nullable JRSDKAirport *)findAirportByIATA:(nullable JRSDKIATA)iata city:(BOOL)isCity;
- (nullable JRSDKAirport *)findOrCreateAirportByIATA:(nullable JRSDKIATA)iata city:(BOOL)isCity;
- (nullable JRSDKAirport *)findAnythingByIATA:(nullable JRSDKIATA)iata;
- (nullable NSArray <JRSDKAirport *> *)findAllAirportsByIATA:(nullable JRSDKIATA)IATA;

/**
 *  Convenient methods to fetch country by code
 */
- (nullable JRSDKCountry *)findCountryByCode:(nonnull NSString *)code;

/**
 *  Saves airports list to storage
 *
 *  @param airports `NSArray` with `JRSDKAirport`
 */
- (void)storeAirports:(nullable NSArray <JRSDKAirport *> *)airports;

/**
 *  Saves countries list to storage
 *
 *  @param countries `NSArray` with JRSDKCountry
 */
- (void)storeCountries:(nullable NSArray <JRSDKCountry *> *)countries;

/**
 *  Finds main IATA for the passed IATA. For example the main IATA for `VKO` (Moscow, Vnukovo) IATA is `MOW` (Moscow, all airports)
 *
 *  @param iata IATA to find main IATA for
 *
 *  @return Main IATA for the passed IATA or the passed IATA itself if the IATA is already main IATA or there is no main IATA at all
 */
- (nullable JRSDKIATA)mainIATAByIATA:(nullable JRSDKIATA)iata;

/**
 *  Finds main city for the passed airport.
 *
 *  @param airport to find main city for
 *
 *  @return Main city or self
 */
- (nullable JRSDKAirport *)cityOrSelfByAirport:(nullable JRSDKAirport *)airport;

/**
 *  Finds main city for the passed airport.
 *
 *  @param airport to find main city for
 *
 *  @return Main city or nil
 */
- (nullable JRSDKAirport *)cityByAirport:(nullable JRSDKAirport *)airport;

@end
