//
//  JRStringUtil.h
//  Aviasales iOS Apps
//
//  Created by Ruslan Shevchuk on 25/02/14.
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIFont.h>

NSString *safeString(NSString *inputString);

@interface JRStringUtil : NSObject

+ (NSString *)stringFromInstance:(id)instance;
+ (NSString *)stringFromInstance:(id)instance
                  removingString:(NSString *)string;

@end


@interface NSString(StringHeight)

- (CGFloat)heightForWidth:(CGFloat)width
               font:(UIFont *)font;

@end

typedef double (^StringWeighter)(NSString *);

@interface NSString(Merging)

+ (NSString *)createCitiesString:(NSArray *)citiesNames
                        maxWidth:(CGFloat)maxWidth
                      attributes:(NSDictionary *)attributes;
+ (NSString *)createCitiesString:(NSArray *)citiesNames
                        maxWidth:(CGFloat)maxWidth
                            font:(UIFont *)font;
+ (NSString *)createCitiesStringForComplexSearch:(NSArray *)citiesNames
                                        maxWidth:(CGFloat)maxWidth
                                            font:(UIFont *)font;
+ (NSString *)createCitiesStringForComplexSearch:(NSArray *)citiesNames
                                        maxWidth:(CGFloat)maxWidth
                                      attributes:(NSDictionary *)attributes;
/**
 * assert(preferableNumberOfCharacters1 + preferableNumberOfCharacters2 + separator.length <= preferableResultWidth)
 */
+ (NSString *)join:(NSString *)string1 preferableLength:(NSInteger)preferableNumberOfCharacters1
              with:(NSString *)string2 preferableLength:(NSInteger)preferableNumberOfCharacters2
                by:(NSString *)separator
  fitResultToLength:(NSInteger)preferableResultLength;

+ (NSString *)join:(NSString *)string1 preferableWidth:(CGFloat)preferableWidth1
              with:(NSString *)string2 preferableWidth:(CGFloat)preferableWidth2
                by:(NSString *)separator font:(UIFont *)font
    fitResultWidth:(CGFloat)preferableResultWidth;

+ (NSString *)join:(NSString *)string1 preferableWidth:(CGFloat)preferableWidth1
              with:(NSString *)string2 preferableWidth:(CGFloat)preferableWidth2
                by:(NSString *)separator attributes:(NSDictionary *)attributes
    fitResultWidth:(CGFloat)preferableResultWidth;

/**
 * assert(preferableString1Weight + preferableString2Weight + weigher(separator) <= preferableResultWeight)
 */
+ (NSString *)join:(NSString *)string1 preferableWeight:(double)preferableString1Weight
              with:(NSString *)string2 preferableWeight:(double)preferableString2Weight
                by:(NSString *)separator fitResultToWidth:(double)preferableResultWeight
           weigher:(StringWeighter)weigher;

- (NSString *)substringToWeight:(double)weight
                   withWeighter:(StringWeighter)weighter;
@end

@interface NSString(FullImageName)
- (NSString *)fullImageName;
@end