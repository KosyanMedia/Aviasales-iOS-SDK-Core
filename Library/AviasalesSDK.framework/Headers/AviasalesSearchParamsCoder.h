//
//  AviasalesSearchParamsCoder.h
//  Pods
//
//  Created by Denis Chaschin on 30.03.16.
//
//

#import <Foundation/Foundation.h>

@class AviasalesSearchParams;

/**
 * Позволяет кодировать параметры поиска в строку и обратно.
 */
@protocol AviasalesSearchParamsCoder

/**
 * Преобразует строку в параметры поиска.
 * @return Параметры поиска, построенные по строке или nil, если не удалось раскодировать параметры.
 */
- (nullable AviasalesSearchParams *)searchParamsWithString:(nonnull NSString *)encodedSearchParams;

/**
 * Преобразует параметры поиска в строку.
 * @return Закодированные параметры поиска или nil при возникновении ошибки.
 */
- (nullable NSString *)encodeSearchParams:(nonnull AviasalesSearchParams *)searchParams;
@end
