//
//  JRSDKPriceCalendarLoader.h
//
//  Copyright 2018 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>
#import <AviasalesSDK/JRSDKPriceCalendarDeparture.h>

#define JR_SDK_PRICE_CALENDAR_DEFAULT_CURRENCY_CODE @"rub"

#define JRSDKPriceCalendarLoaderStartLoadingNotification @"JRSDKPriceCalendarLoaderStartLoadingNotification"
#define JRSDKPriceCalendarLoaderStartLoadingDatePricesNotification @"JRSDKPriceCalendarLoaderStartLoadingDatePricesNotification"
#define JRSDKPriceCalendarLoaderEndLoadingNotification @"JRSDKPriceCalendarLoaderEndLoadingNotification"

#define JRSDKPriceCalendarLoaderNumberOfOldDepartures 30

@protocol JRSDKPriceCalendarLoaderDelegate;


@interface JRSDKPriceCalendarLoader : NSObject

@property (strong, nonatomic, readonly) JRSDKSearchInfo *searchInfo;
@property (assign, nonatomic) BOOL onlyDirect;

@property (strong, nonatomic, readonly) JRSDKPriceCalendarDeparture *selectedDeparture;
- (void)selectDepartureDate:(NSDate *)date initialSelect:(BOOL)initialSelect;
@property (strong, nonatomic, readonly) NSArray <JRSDKPriceCalendarDeparture *> *allDepartures;
@property (strong, nonatomic, readonly) NSNumber *averageDeparturePrice;
@property (strong, nonatomic, readonly) NSNumber *maximumDeparturePrice;
@property (strong, nonatomic, readonly) NSNumber *minimumDeparturePrice;

+ (JRSDKPriceCalendarLoader *)loaderWithSearchInfo:(JRSDKSearchInfo *)searchInfo delegate:(id <JRSDKPriceCalendarLoaderDelegate>)delegate;

- (BOOL)hasPrices;
- (BOOL)hasDirectPrices;
- (NSNumber *)minPriceInMonthOfDate:(NSDate *)date;
- (NSNumber *)avgDirectPriceInMonthOfDate:(NSDate *)date;
- (NSNumber *)avgNotDirectPriceInMonthOfDate:(NSDate *)date;
- (BOOL)isMinimalPrice:(NSNumber *)price forMonthOfDate:(NSDate *)date;
- (BOOL)hasPricesAroundDate:(NSDate *)date radius:(NSInteger)daysCount;
- (void)updateMinimalPriceFromSearchResult:(JRSDKSearchResult *)searchResult;

#pragma mark - Helpers

- (NSDate *)correspondingReturnDateForDepartureDate:(NSDate *)departureDate;

+ (BOOL)searchInfoIsValidForPriceCalendar:(JRSDKSearchInfo *)searchInfo;
+ (NSDate *)dateFromKey:(JRSDKPriceCalendarDateKey *)key;
+ (JRSDKPriceCalendarDateKey *)keyForDate:(NSDate *)date;

@end


@protocol JRSDKPriceCalendarLoaderDelegate

- (void)priceCalendarLoader:(JRSDKPriceCalendarLoader *)loader didStartLoadingForDeparture:(JRSDKPriceCalendarDeparture *)departure;
- (void)priceCalendarLoader:(JRSDKPriceCalendarLoader *)loader didFailToLoadForDeparture:(JRSDKPriceCalendarDeparture *)departure retryBlock:(void (^)(void))retryBlock;

@end
