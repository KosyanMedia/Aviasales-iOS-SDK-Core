//
//  NumberUtil.h
//  aviasales
//
//  Created by Nikita Kabardin on 10/9/11.
//  Copyright (c) 2011 Cleverpumpkin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AviasalesNumberUtil : NSObject

+ (NSNumber *)stringToNumber:(NSString*)string;
+ (NSString *)choosePluralForNumber:(NSInteger)num from:(NSString*)one andFrom:(NSString*)two andFrom:(NSString*)three;
+ (NSNumber *)numberFromInstance:(id)instance positive:(BOOL)positive;

+ (NSNumber *)convertPrice:(NSNumber *)price fromCurrency:(JRSDKCurrency)fromCode to:(JRSDKCurrency)toCode;
+ (NSString *)formatPrice:(NSNumber *)price;

+ (NSCalendar*)sharedCalendar;
+ (NSInteger)timeInMinutesOfDate:(NSDate *)date;
+ (void)updateCurrencyCode:(JRSDKCurrency)currencyCode;

@end
