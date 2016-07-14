#import <Foundation/Foundation.h>
#import "DataDefines.h"

extern const NSTimeInterval kJRSDKSearchPerformerAverageSearchTime;

@class JRSDKSearchPerformer;
@protocol JRSDKSearchInfo, JRSDKTicket, JRSDKSearchResult;
@class JRServerAPIConnection;

@protocol JRSDKSearchPerformerDelegate <NSObject>
- (void)searchPerformer:(JRSDKSearchPerformer *)searchPerformer didFinishRegularSearch:(id<JRSDKSearchInfo>)searchInfo withResult:(id<JRSDKSearchResult>)result;
- (void)searchPerformer:(JRSDKSearchPerformer *)searchPerformer didFailSearchWithError:(NSError *)error connection:(JRServerAPIConnection *)connection;
- (void)searchPerformer:(JRSDKSearchPerformer *)searchPerformer didFinalizeSearchWithInfo:(id<JRSDKSearchInfo>)searchInfo error:(NSError *)error;

@optional
- (void)searchPerformer:(JRSDKSearchPerformer *)searchPerformer didFindSomeTicketsInSearchInfo:(id<JRSDKSearchInfo>)searchInfo temporaryResult:(id<JRSDKSearchResult>)temporaryResult;
@end

@interface JRSDKSearchPerformer : NSObject

@property (nonatomic, weak) id<JRSDKSearchPerformerDelegate> delegate;
@property (strong, nonatomic) NSString *testSearchJSONName;
@property (strong, nonatomic) NSString *testMagicSearchJSONName;

- (void)performSearchWithSearchInfo:(id<JRSDKSearchInfo>)searchInfo
                        knowEnglish:(BOOL)knowEnglish;

- (void)terminateSearch;

@property(nonatomic) NSUInteger maxTimeoutRetries;

@end