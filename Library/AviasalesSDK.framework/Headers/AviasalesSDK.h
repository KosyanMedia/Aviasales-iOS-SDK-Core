//
//  AviasalesSDK.h
//
//  v1.3
//

#import <UIKit/UIKit.h>

//! Project version number for AviasalesCore.
FOUNDATION_EXPORT double AviasalesSDKVersionNumber;

//! Project version string for AviasalesCore.
FOUNDATION_EXPORT const unsigned char AviasalesSDKVersionString[];

// Initialization
#import <AviasalesSDK/AviasalesSDKInitialConfiguration.h>

// Services
#import <AviasalesSDK/JRSDKServerAPIError.h>
#import <AviasalesSDK/AviasalesSDKPurchasePerformer.h>
#import <AviasalesSDK/AviasalesAirportsStorageProtocol.h>
#import <AviasalesSDK/AviasalesSDKAdsManager.h>
#import <AviasalesSDK/AviasalesSDKAdsView.h>
#import <AviasalesSDK/AviasalesNearestAirportsManager.h>
#import <AviasalesSDK/AviasalesAirportsSearchPerformer.h>
#import <AviasalesSDK/JRSDKSearchPerformer.h>

// Utils
#import <AviasalesSDK/JRStringUtil.h>
#import <AviasalesSDK/AviasalesNumberUtil.h>
#import <AviasalesSDK/JRSDKModelUtils.h>
#import <AviasalesSDK/JRSDKAirline+Utils.h>
#import <AviasalesSDK/JRSDKTicket+Utils.h>
#import <AviasalesSDK/JRSDKPrice+Utils.h>
#import <AviasalesSDK/JRSDKSearchInfo+Utils.h>
#import <AviasalesSDK/JRSDKFlightSegment+Utils.h>
#import <AviasalesSDK/JRSDKAirport+Utils.h>
#import <AviasalesSDK/JRSDKTravelSegment+Utils.h>
#import <AviasalesSDK/JRSDKSearchInfo+Utils.h>
#import <AviasalesSDK/JRSDKTravelClass+Utils.h>
#import <AviasalesSDK/JRSDKCurrency+Utils.h>
#import <AviasalesSDK/NSDate+AviasalesCoding.h>

// Model protocols
#import <AviasalesSDK/JRSDKAirline.h>
#import <AviasalesSDK/JRSDKAirport.h>
#import <AviasalesSDK/JRSDKAlliance.h>
#import <AviasalesSDK/DataDefines.h>
#import <AviasalesSDK/JRSDKCurrencyRate.h>
#import <AviasalesSDK/JRSDKFlight.h>
#import <AviasalesSDK/JRSDKFlightSegment.h>
#import <AviasalesSDK/JRSDKGate.h>
#import <AviasalesSDK/JRSDKPaymentMethod.h>
#import <AviasalesSDK/JRSDKPrice.h>
#import <AviasalesSDK/JRSDKSearchInfo.h>
#import <AviasalesSDK/JRSDKSearchResult.h>
#import <AviasalesSDK/JRSDKTicket.h>
#import <AviasalesSDK/JRSDKTravelSegment.h>

// Model protocols implementation
#import <AviasalesSDK/JRSDKConfigurableSearchInfo.h>
#import <AviasalesSDK/JRSDKConfigurableTravelSegment.h>

// Old model, remove it ASAP
#import <AviasalesSDK/AviasalesAirline.h>
#import <AviasalesSDK/AviasalesAirport.h>
#import <AviasalesSDK/AviasalesFilter.h>
#import <AviasalesSDK/AviasalesFiltersBoundary.h>
#import <AviasalesSDK/AviasalesFlight.h>
#import <AviasalesSDK/AviasalesFlightSegment.h>
#import <AviasalesSDK/AviasalesGate.h>
#import <AviasalesSDK/AviasalesPrice.h>
#import <AviasalesSDK/AviasalesTicket.h>

extern NSString *const kAviasalesCurrencyDidUpdateNotificationName;


@interface AviasalesSDK : NSObject

+ (void)setupWithConfiguration:(nonnull AviasalesSDKInitialConfiguration *)configuration;
+ (nonnull AviasalesSDK *)sharedInstance;

@property (nonatomic, strong, nonnull) id<AviasalesAirportsStorageProtocol> airportsStorage;

@property (nonatomic, strong, nonnull) AviasalesNearestAirportsManager *nearestAirportsManager;

@property (nonatomic, strong, nonnull) AviasalesSDKAdsManager *adsManager;

/**
 //TODO: комментарий
 */
@property (nonatomic, strong, nullable) NSString *partnerSubMarker;

/**
 Все доступные трехзначные коды валют
 */
@property (nonatomic, readonly, nonnull) NSArray <JRSDKCurrency> *availableCurrencyCodes;

/**
 Трехзначный код валюты, выбранной пользователем (по умолчанию соответствует выбранной локали)
 */
@property (nonatomic, readonly, nonnull) JRSDKCurrency currencyCode;

/**
 Обновляет валюту пользователя
 @param currencyCode трёхбуквенный код валюты (например: RUB, USD, EUR)
 @return NO, если курс для заданного кода не может быть найден, иначе YES.
 // TODO: работает не как описанно в комментарии. Сделать проверку на наличие курса для currencyCode
 */
- (BOOL)updateCurrencyCode:(nonnull JRSDKCurrency)currencyCode;

- (nonnull JRSDKSearchPerformer *)createSearchPerformer;

@end
