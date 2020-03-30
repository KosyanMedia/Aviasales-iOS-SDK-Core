//
//  JRSDKPriceCalendarLoader.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>
#import <AviasalesSDK/JRSDKPriceCalendarDeparture.h>

@class JRSDKSearchInfo;
@class JRSDKSearchResult;

/**
 *  Default currency
 */
#define JR_SDK_PRICE_CALENDAR_DEFAULT_CURRENCY_CODE @"rub"

/**
 *  Price calendar loader notification keys
 */
#define JRSDKPriceCalendarLoaderStartLoadingNotification @"JRSDKPriceCalendarLoaderStartLoadingNotification"
#define JRSDKPriceCalendarLoaderStartLoadingDatePricesNotification @"JRSDKPriceCalendarLoaderStartLoadingDatePricesNotification"
#define JRSDKPriceCalendarLoaderEndLoadingNotification @"JRSDKPriceCalendarLoaderEndLoadingNotification"

/**
 *  Number of past departures in days
 */
#define JRSDKPriceCalendarLoaderNumberOfOldDepartures 30

@protocol JRSDKPriceCalendarLoaderDelegate;

/**
 *  Load prices for JRSDKSearchInfo and generate JRSDKPriceCalendarDeparture instances
 */
@interface JRSDKPriceCalendarLoader : NSObject

/**
 *  Corresponding JRSDKSearchInfo
 */
@property (strong, nonatomic, readonly) JRSDKSearchInfo *searchInfo;

/**
 *  Fetch prices only for direct flights
 */
@property (assign, nonatomic) BOOL onlyDirect;

/**
 *  JRSDKPriceCalendarLoader is currently loading data
 */
@property (assign, nonatomic, readonly) BOOL isLoading;

/**
 *  Currently selected JRSDKPriceCalendarDeparture
 */
@property (strong, nonatomic, readonly) JRSDKPriceCalendarDeparture *selectedDeparture;

/**
 *  Select specific date
 */
- (void)selectDepartureDate:(NSDate *)date initialSelect:(BOOL)initialSelect;

/**
 *  All departures have been loaded for provided JRSDKSearchInfo
 */
@property (strong, nonatomic, readonly) NSArray <JRSDKPriceCalendarDeparture *> *allDepartures;

/**
 *  Average price for all departures
 */
@property (strong, nonatomic, readonly) NSNumber *averageDeparturePrice;

/**
 *  Maximum price for all departures
 */
@property (strong, nonatomic, readonly) NSNumber *maximumDeparturePrice;

/**
 *  Minimum price for all departures
 */
@property (strong, nonatomic, readonly) NSNumber *minimumDeparturePrice;

/**
 *  JRSDKPriceCalendarLoader constructor
 */
+ (JRSDKPriceCalendarLoader *)loaderWithSearchInfo:(JRSDKSearchInfo *)searchInfo delegate:(NSObject<JRSDKPriceCalendarLoaderDelegate> *)delegate;

/**
 *  JRSDKPriceCalendarLoader has prices
 */
- (BOOL)hasPrices;

/**
 *  JRSDKPriceCalendarLoader has direct flights prices
 */
- (BOOL)hasDirectPrices;

/**
 *  Returns minimum monthly price for provided date
 */
- (NSNumber *)minPriceInMonthOfDate:(NSDate *)date;

/**
 *  Returns average direct flights monthly price for provided date
 */
- (NSNumber *)avgDirectPriceInMonthOfDate:(NSDate *)date;

/**
 *  Returns average indirect flights monthly price for provided date
 */
- (NSNumber *)avgNotDirectPriceInMonthOfDate:(NSDate *)date;

/**
 *  Checks if provided price is minimal for particular month of provided date
 */
- (BOOL)isMinimalPrice:(NSNumber *)price forMonthOfDate:(NSDate *)date;

/**
 *  Checks if loader has prices for provided date +/- number of days
 */
- (BOOL)hasPricesAroundDate:(NSDate *)date radius:(NSInteger)daysCount;

/**
 *  Update lowest price from JRSDKSearchResult
 */
- (void)updateMinimalPriceFromSearchResult:(JRSDKSearchResult *)searchResult;

#pragma mark - Helpers

/**
 *  Returns corresponding return date for provided departure date
 */
- (NSDate *)correspondingReturnDateForDepartureDate:(NSDate *)departureDate;

/**
 *  Checks if JRSDKPriceCalendarLoader can load data for provided JRSDKSearchInfo
 */
+ (BOOL)searchInfoIsValidForPriceCalendar:(JRSDKSearchInfo *)searchInfo;

/**
 *  Returns date for provided date key
 */
+ (NSDate *)dateFromKey:(JRSDKPriceCalendarDateKey *)key;

/**
 *  Returns date key for provided date
 */
+ (JRSDKPriceCalendarDateKey *)keyForDate:(NSDate *)date;

@end

/**
 *  JRSDKPriceCalendarLoader delegate protocol
 */
@protocol JRSDKPriceCalendarLoaderDelegate

@optional

/**
 *  Invokes when JRSDKPriceCalendarLoader has started loading data for departure
 */
- (void)priceCalendarLoader:(JRSDKPriceCalendarLoader *)loader didStartLoadingForDeparture:(JRSDKPriceCalendarDeparture *)departure;

/**
 *  Invokes when JRSDKPriceCalendarLoader has failed to load data for departure
 */
- (void)priceCalendarLoader:(JRSDKPriceCalendarLoader *)loader didFailToLoadForDeparture:(JRSDKPriceCalendarDeparture *)departure retryBlock:(void (^)(void))retryBlock;

@end
