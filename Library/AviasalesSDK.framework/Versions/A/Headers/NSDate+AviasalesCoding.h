//
//  NSDate+AviasalesCoding.h
//
//  Copyright 2020 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>

@interface NSDate(AviasalesCoding)

/**
 *  Calculates current date in %d%m format
 *
 *  @return Date in %d%m format 
 */
- (nonnull NSString *)aviasales_fastDayMonthString;

/**
 *  Creates `NSDate` instance from %d%m string
 *
 *  @param string String with %d%m date format
 *
 *  @return Parsed date
 */
+ (nullable NSDate *)aviasales_dateWithDayMonthString:(nonnull NSString *)string;

@end
