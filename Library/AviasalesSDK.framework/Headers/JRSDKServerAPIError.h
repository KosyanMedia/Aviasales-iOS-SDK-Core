//
//  JRSDKServerAPIError.h
//  AviasalesSDK
//
//  Created by Dmitry Ryumin on 11/07/16.
//  Copyright © 2016 aviasales. All rights reserved.
//

#ifndef JRSDKServerAPIError_h
#define JRSDKServerAPIError_h

typedef NS_ENUM(NSInteger, JRSDKServerAPIError) {
    /* Request errors */
    JRSDKServerAPIErrorRequestEmpty                    = 0,
    
    /* Connection errors */
    JRSDKServerAPIErrorConnectionFailed                = 35,
    
    /* Response errors */
    JRSDKServerAPIErrorBadResponse                     = 43,
    
    /* Parsing errors */
    JRSDKServerAPIErrorSearchNoTickets                 = 99,
    JRSDKServerAPIErrorParsingUndefinedError           = 1000,
    JRSDKServerAPIErrorSearchIDParsing                 = 1001,
    JRSDKServerAPIErrorSearchTicketsParsing            = 1002,
    JRSDKServerAPIErrorSearchAirlinesParsing           = 1003,
    JRSDKServerAPIErrorSearchAirportsParsing           = 1004,
    JRSDKServerAPIErrorSearchGatesParsing              = 1005,
    JRSDKServerAPIErrorSearchCurrenciesParsing         = 1006,
};

#endif /* JRSDKServerAPIError_h */
