//
//  NSDate+AviasalesCoding.h
//  Pods
//
//  Created by Denis Chaschin on 30.03.16.
//
//

#import <Foundation/Foundation.h>

@interface NSDate(AviasalesCoding)
- (NSString *)aviasales_fastDayMonthString;
+ (NSDate *)aviasales_dateWithDayMonthString:(NSString *)string;
@end
