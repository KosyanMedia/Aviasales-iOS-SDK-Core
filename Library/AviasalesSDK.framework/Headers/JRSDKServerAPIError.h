//
//  JRSDKServerAPIError.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#ifndef JRSDKServerAPIError_h
#define JRSDKServerAPIError_h

typedef NS_ENUM(NSInteger, JRSDKServerAPIError) {
    /* Request errors */
    JRSDKServerAPIErrorRequestEmpty                    = 0,
    
    /* Connection errors */
    JRSDKServerAPIErrorConnectionFailed                = 35,
    JRSDKServerAPIErrorBadConnection                   = 37,
    
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
