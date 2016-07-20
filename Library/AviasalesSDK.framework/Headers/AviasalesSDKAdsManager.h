//
//  AviasalesSDKAdsManager.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <Foundation/Foundation.h>


@protocol JRSDKSearchInfo;
@class AviasalesSDKAdsView;
typedef void(^AviasalesSDKAdsManagerCompletion)(AviasalesSDKAdsView *__nullable adsView, NSError *__nullable error);


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
- (void)loadAdsViewForWaitingScreenWithSearchInfo:(nonnull id <JRSDKSearchInfo>)searchInfo completion:(__nonnull AviasalesSDKAdsManagerCompletion)completion;
- (void)loadAdsViewForSearchResultsWithSearchInfo:(nonnull id <JRSDKSearchInfo>)searchInfo completion:(__nonnull AviasalesSDKAdsManagerCompletion)completion;

@end
