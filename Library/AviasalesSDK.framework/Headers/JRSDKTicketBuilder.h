#import <Foundation/Foundation.h>

@class JRSDKProposalBuilder;

@interface JRSDKTicketBuilder : NSObject

@property (strong, nonatomic, nullable) NSOrderedSet <JRSDKFlightSegment *> *flightSegments;
@property (strong, nonatomic, nullable) NSOrderedSet <JRSDKProposal *> *proposals;
@property (strong, nonatomic, nullable) NSOrderedSet <JRSDKProposalBuilder *> *proposalBuilders; //ticket will be set up to those builders
@property (strong, nonatomic, nullable) NSNumber *simpleRating;
@property (strong, nonatomic, nullable) NSString *sign;
@property (assign, nonatomic) BOOL isFromTrustedGate;
@property (assign, nonatomic) BOOL isCharter;
@property (strong, nonatomic, nullable) JRSDKSearchResultInfo *searchResultInfo;
@property (strong, nonatomic, nullable) NSNumber *weight;

- (nonnull instancetype)initWithTicketToUpdate:(nonnull JRSDKTicket *)ticket;
- (nonnull instancetype)initWithTicketToCopy:(nonnull JRSDKTicket *)ticket;

/**
 * Returns ticket if all properties set up correctly. Nil instead.
 * In debug release assertion will be thrown if properties set up wrongly.
 */
- (nullable JRSDKTicket *)build;

@end


