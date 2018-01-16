//
//  JRSDKPriceCalendarDeparture.h
//
//  Copyright 2018 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>

typedef NSString JRSDKPriceCalendarDateKey;
typedef NSString JRSDKPriceCalendarPriceKey;

@interface JRSDKPriceCalendarDeparture : NSObject

@property (assign, nonatomic) BOOL loaded;

- (id)initWithDate:(NSDate *)date;
- (NSDate *)date;
- (NSDictionary<JRSDKPriceCalendarPriceKey *, NSNumber *> *)prices;
- (NSNumber *)minPrice;
- (JRSDKPriceCalendarDateKey *)dateKey;
- (void)resetPrices;
- (BOOL)isOld;

- (NSNumber *)getPriceForKey:(JRSDKPriceCalendarPriceKey *)key;
- (void)setPrice:(NSNumber *)price forKey:(JRSDKPriceCalendarPriceKey *)key;

@end
