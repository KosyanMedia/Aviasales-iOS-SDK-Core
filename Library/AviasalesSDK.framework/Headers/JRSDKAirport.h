typedef NS_ENUM(NSUInteger, JRSDKAirportType) {
    JRSDKAirportTypeAirport = 0,
    JRSDKAirportTypeRailwayStation
};

@protocol JRSDKAirport

@property (nonatomic, retain) NSNumber *averageRate;
@property (nonatomic, retain) NSString *city;
@property (nonatomic, retain) NSString *cityNameCasePr;
@property (nonatomic, retain) NSString *cityNameCaseRo;
@property (nonatomic, retain) NSString *cityNameCaseVi;
@property (nonatomic, retain) NSString *country;
@property (nonatomic, retain) NSString *iata;
@property (nonatomic, retain) NSString *parentIata;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, retain) NSString *airportName;
@property (nonatomic, retain) NSNumber *searchesCount;
@property (nonatomic, assign) BOOL isAny;
@property (nonatomic, assign) JRSDKAirportType airportType;
@property (nonatomic, retain) NSArray <NSString *> *indexStrings;

@end
