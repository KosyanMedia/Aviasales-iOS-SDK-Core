//
//  JRSDKPriceCalendarDeparture.h
//
//  Copyright 2018 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>

/**
 *  Date and price keys
 */
typedef NSString JRSDKPriceCalendarDateKey;
typedef NSString JRSDKPriceCalendarPriceKey;

/**
 *  Class holding prices for specific date
 */
@interface JRSDKPriceCalendarDeparture : NSObject

/**
 *  Prices have been loaded
 */
@property (assign, nonatomic) BOOL loaded;

/**
 * Required initializer
 */
- (id)initWithDate:(NSDate *)date;

/**
 *  Corresponding date for departure
 */
- (NSDate *)date;

/**
 *  All prices for departure
 */
- (NSDictionary<JRSDKPriceCalendarPriceKey *, NSNumber *> *)prices;

/**
 *  Minimal price for departure
 */
- (NSNumber *)minPrice;

/**
 *  Date key
 */
- (JRSDKPriceCalendarDateKey *)dateKey;

/**
 *  Clear all prices for departure
 */
- (void)resetPrices;

/**
 *  Corresponding date is outdated
 */
- (BOOL)isOld;

/**
 *  Price for specific date key
 */
- (NSNumber *)getPriceForKey:(JRSDKPriceCalendarPriceKey *)key;

/**
 *  Set price for specific date key
 */
- (void)setPrice:(NSNumber *)price forKey:(JRSDKPriceCalendarPriceKey *)key;

@end
