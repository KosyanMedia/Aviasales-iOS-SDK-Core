@protocol JRSDKTicket;

@protocol JRSDKSearchResult

@property (nonatomic, strong, readonly) NSString *searchID;
/**
 * Tickets ordered by price
 */
@property (nonatomic, strong, readonly) NSOrderedSet <id<JRSDKTicket>> *searchTickets;
/**
 * Tickets ordered by price
 */
@property (nonatomic, strong, readonly) NSOrderedSet <id<JRSDKTicket>> *strictSearchTickets;
@property (nonatomic, strong, readonly) NSDate *receivingDate;

@end