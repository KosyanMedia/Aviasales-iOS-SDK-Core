//
//  AviasalesSDKInitialConfiguration.h
//  AviasalesSDK
//
//  Created by Ilya Amelchenkov on 09.06.16.
//  Copyright © 2016 aviasales. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AviasalesSDKInitialConfiguration : NSObject

/**
 Уникальный токен партнера, который используется для подписывания поискового запроса
 */
@property (nonatomic, strong, nonnull) NSString *APIToken;

/**
 Предпочитаемая локаль для API поиска
 */
@property (nonatomic, strong, nonnull) NSString *APILocale;

/**
 Маркер — идентификатор партнера, который используется для осуществления поиска и перехода к покупке
 */
@property (nonatomic, strong, nonnull) NSString *partnerMarker;

+ (nonnull instancetype)configurationWithAPIToken:(nonnull NSString *)APIToken APILocale:(nonnull NSString *)APILocale partnerMarker:(nullable NSString *)partnerMarker;

@end
