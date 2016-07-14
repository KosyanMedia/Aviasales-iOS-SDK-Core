//
//  JRSDKSearchInfo+Utils.h
//  AviasalesSDK
//
//  Created by Denis Chaschin on 09.06.16.
//  Copyright © 2016 aviasales. All rights reserved.
//

#import <Foundation/Foundation.h>

#if !TARGET_OS_WATCH
#import <AviasalesSDK/JRSDKModelUtils.h>
#import <AviasalesSDK/JRSDKSearchInfo.h>
#else
#import <AviasalesWatchSDK/JRSDKModelUtils.h>
#import <AviasalesWatchSDK/JRSDKSearchInfo.h>
#endif


#ifndef JRSDKSearchInfo_Utils_h
#define JRSDKSearchInfo_Utils_h

typedef NS_ENUM (NSUInteger, JRSDKSearchInfoType) {
    JRSDKSearchInfoOneWayType          = 0,
    JRSDKSearchInfoDirectReturnType    = 1,
    JRSDKSearchInfoComplexType         = 2
};

@interface JRSDKModelUtils(JRSDKSearchInfo)
+ (JRSDKSearchInfoType)searchInfoType:(id<JRSDKSearchInfo>)searchInfo;
+ (BOOL)searchInfoIsDirectReturnFlight:(id<JRSDKSearchInfo>)searchInfo;
+ (BOOL)isSimpleSearch:(id<JRSDKSearchInfo>)searchInfo;
+ (BOOL)searchInfoIsComplex:(id<JRSDKSearchInfo>)searchInfo;
+ (BOOL)isSearchInfoComplexOpenJawSearch:(id<JRSDKSearchInfo>)searchInfo;
+ (NSString *)searchInfo:(id<JRSDKSearchInfo>)searchInfo internalUIDUsingMetropolitanIatas:(BOOL)metropolitanIatas;
+ (NSString *)searchInfo:(id<JRSDKSearchInfo>)searchInfo UIDForURLSWithMetropolitanIatas:(BOOL)metropolitanIatas;
+ (NSDictionary *)searchInfoDictionaryRepresentation:(id<JRSDKSearchInfo>)searchInfo;

/**
 * Deep copy only those search info fields that necessary to perform search
 */
+ (id<JRSDKSearchInfo>)copySearchInfoForSearch:(id<JRSDKSearchInfo>)src;
+ (NSInteger)searchInfoNumberOfPassengers:(id<JRSDKSearchInfo>)searchInfo;

@end

#endif
