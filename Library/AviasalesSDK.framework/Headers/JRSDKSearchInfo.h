@protocol JRSDKTravelSegment, JRSDKTicket, JRSDKSearchResult;

typedef NS_ENUM (NSInteger, JRSDKTravelClass) {
    JRSDKTravelClassEconomy = 0,
    JRSDKTravelClassBusiness = 1,
    JRSDKTravelClassPremiumEconomy = 2,
    JRSDKTravelClassFirst = 3
};

@protocol JRSDKSearchInfo <NSObject>

@property (nonatomic, assign, readonly) JRSDKTravelClass travelClass;
@property (nonatomic, assign, readonly) NSInteger adults;
@property (nonatomic, assign, readonly) NSInteger children;
@property (nonatomic, assign, readonly) NSInteger infants;

@property (nonatomic, retain, readonly) NSOrderedSet <id <JRSDKTravelSegment>> *travelSegments;

@property (nonatomic, strong, readonly) id<JRSDKSearchResult> searchResult;

@end
