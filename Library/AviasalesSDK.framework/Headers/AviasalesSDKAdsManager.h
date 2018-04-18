//
//  AviasalesSDKAdsManager.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>


@class JRSDKSearchInfo;
@class AviasalesSDKAdsView;
typedef void(^AviasalesSDKAdsManagerCompletion)(AviasalesSDKAdsView *__nullable adsView, NSError *__nullable error);


extern NSString * _Nonnull const kAviasalesSDKAdsManagerErrorDomain;
extern NSInteger const kAviasalesSDKAdsManagerErrorCodeEmplacementIsNotEnabled;


/**
 *  `AviasalesSDKAdsManager` is used to load ads for certain places of your app
 */
@interface AviasalesSDKAdsManager : NSObject

/**
 *  Loads ads to show on the certain screen of the app
 *
 *  @param searchInfo Search info object for the current search
 *  @param completion Callback that will receive an `UIView` subclass to place on screen or an `NSError` in case advert did fail to load
 */
- (void)loadAdsViewForSearchResultsWithSearchInfo:(nonnull JRSDKSearchInfo *)searchInfo completion:(nonnull AviasalesSDKAdsManagerCompletion)completion;

@end
