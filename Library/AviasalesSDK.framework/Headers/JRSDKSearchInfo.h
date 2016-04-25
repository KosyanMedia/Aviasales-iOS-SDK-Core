@protocol JRSDKTravelSegment, JRSDKTicket;

typedef NS_ENUM (NSInteger, JRSDKTravelClass) {
    JRSDKTravelClassEconomy = 0,
    JRSDKTravelClassBusiness = 1,
    JRSDKTravelClassPremiumEconomy = 2,
    JRSDKTravelClassFirst = 3
};

@protocol JRSDKSearchInfo

@property (nonatomic, assign) JRSDKTravelClass travelClass;
@property (nonatomic, assign) NSInteger adults;
@property (nonatomic, assign) NSInteger children;
@property (nonatomic, assign) NSInteger infants;

@property (nonatomic, retain) NSOrderedSet <id <JRSDKTravelSegment>> *travelSegments;

@property (nonatomic, retain) NSSet <id <JRSDKTicket>> *searchTickets;
@property (nonatomic, retain) NSSet <id <JRSDKTicket>> *strictSearchTickets;

@end
