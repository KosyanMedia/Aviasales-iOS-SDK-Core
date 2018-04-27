# Aviasales/Jetradar iOS SDK Core
[![CocoaPods](https://img.shields.io/cocoapods/v/AviasalesSDK.svg)](https://cocoapods.org/pods/AviasalesSDK)
[![CocoaPods](https://img.shields.io/cocoapods/p/AviasalesSDK.svg)](https://cocoapods.org/pods/AviasalesSDK)
[![Travis](https://img.shields.io/travis/KosyanMedia/Aviasales-iOS-SDK-Core/master.svg)](https://travis-ci.org/KosyanMedia/Aviasales-iOS-SDK-Core)


## Example
As an example, you are welcome to use our Template Project from [Aviasales-iOS-SDK repo](https://github.com/KosyanMedia/Aviasales-iOS-SDK).

## ⚙ Installation
The easiest way is to use [CocoaPods](http://cocoapods.org). It takes care of all required frameworks and third party dependencies:

```ruby
pod 'AviasalesSDK', '~> 3.1.1'
```

We recommend to import ```AviasalesSDK.h``` in each file where you use objects or protocols from SDK.

```objc
#import <AviasalesSDK/AviasalesSDK.h>
```

Configure ```AviasalesSDK``` object before interaction with SDK like this:

```objc
AviasalesSDKInitialConfiguration *configuration = [AviasalesSDKInitialConfiguration configurationWithAPIToken:@"Your api token here"
                                                                                                    APILocale:[NSLocale currentLocale].localeIdentifier
                                                                                                partnerMarker:@"Your partner marker here"];
[AviasalesSDK setupWithConfiguration:configuration];
```
Don't forget to replace two placeholders in this example with the actual values.


## Features
### ✈️ Flight Tickets Search
Specify search parameters using a ```JRSDKSearchInfoBuilder``` object. Take a look at the example below.

#### Create search info
Create simple object that describes new search:

```objc
JRSDKConfigurableSearchInfo *searchInfoBuilder = [[JRSDKSearchInfoBuilder alloc] init];
```
Set necessary parameters for the search (*adults = 2* and *travelClass = Business* means that two adults would like to travel in business class):

```objc
searchInfoBuilder.adults = 2;
searchInfoBuilder.travelClass = JRSDKTravelClassBusiness;
```
Set travel dates and airports (using airports storage from the SDK):

```objc
JRSDKTravelSegmentBuilder *travelSegmentBuilder = [JRSDKTravelSegmentBuilder new]
travelSegmentBuilder.departureDate = [NSDate date];
travelSegmentBuilder.originAirport = [[AviasalesSDK sharedInstance].airportsStorage findAnythingByIATA:@"LED"];
travelSegmentBuilder.destinationAirport = [[AviasalesSDK sharedInstance].airportsStorage findAnythingByIATA:@"MOW"];
```
Save that travel segment to the search info:

```objc
searchInfoBuilder.travelSegments = [NSOrderedSet orderedSetWithObject:[travelSegmentBuilder build]];
```

And finally we can build a `JRSDKSearchInfo` object for further usage:

```objc
JRSDKSearchInfo *searchInfo = [searchInfoBuilder build];
```

That's it. Search info is ready for search.

#### Perform search request
To perform search request use ```SearchPerformer``` received from the SDK and send search info to it. **Don't forget to store** this performer somewhere during the search process.

```objc
JRSDKSearchPerformer *searchPerformer = [[AviasalesSDK sharedInstance] createSearchPerformer];
```
To retrieve live and final search results set delegate (```JRSDKSearchPerformerDelegate```) to this search performer:

```objc
searchPerformer.delegate = self;
```
This delegate requires to implement three methods:
First one is called when results are ready to be displayed (SDK continues to wait for more results after this call and in some **very rare** cases it can get cheaper tickets for this request):

```objc
- (void)searchPerformer:(JRSDKSearchPerformer *)searchPerformer didFinishRegularSearch:(JRSDKSearchInfo *)searchInfo withResult:(JRSDKSearchResult *)result andMetropolitanResult:(JRSDKSearchResult *)metropolitanResult;
```
Second needed to receive error if it occures during the search

```objc
- (void)searchPerformer:(JRSDKSearchPerformer *)searchPerformer didFailSearchWithError:(NSError *)error connection:(JRServerAPIConnection *)connection;
```
And the third one needed to understand when the process is finished. After its call, you can release search performer because it is not recyclable.

```objc
- (void)searchPerformer:(JRSDKSearchPerformer *)searchPerformer didFinalizeSearchWithInfo:(id<JRSDKSearchInfo>)searchInfo error:(NSError *)error;
```

Optional method is called when a new chunk of tickets is received from server:

```objc
- (void)searchPerformer:(JRSDKSearchPerformer *)searchPerformer didFindSomeTickets:(JRSDKSearchResultsChunk *)newTickets inSearchInfo:(JRSDKSearchInfo *)searchInfo temporaryResult:(JRSDKSearchResult *)temporaryResult temporaryMetropolitanResult:(JRSDKSearchResult *)temporaryMetropolitanResult;
```

Start search performing:

```objc
[searchPerformer performSearchWithSearchInfo:searchInfo
                             includeResultsInEnglish:YES];
```

#### Parsing search result

Search results are received as ```JRSDKSearchResult``` objects. If a search is started with a specific airport as a parameter, ```result``` и ```metropolitanResult``` will be different — tha last one will contain tickets to any airport of the given city.

### <a name="ticket-purchase-anchor"></a>💸 Tickets purchase
```AviasalesSDKPurchasePerformer``` is object used to perform ticket purchase. Each ticket contains different proposals from different agencies, you should use one of them as an input parameter.
Create performer using price and searchId (```JRSDKSearchResult > JRSDKSearchResultInfo```) that was returned with the search result.

```objc
- (instancetype)initWithPrice:(id <JRSDKPrice>)price
                     searchId:(NSString *)searchId;
```
Generate a link for the purchase:

```objc
- (void)performWithDelegate:(id <AviasalesSDKPurchasePerformerDelegate>)delegate;
```
Open link received by delegate in browser to provide user purchase form.

### 📺 Advertisement
Aviasales SDK allows you to generate additional revenue by displaying advertisements to your users.
Use ```AviasalesSDKAdsManager``` object received like:

```objc
[AviasalesSDK sharedInstance].adsManager
```
to load information for the waiting screen 

```objc 
- (void)loadAdsViewForWaitingScreenWithSearchInfo:(id <JRSDKSearchInfo>)searchInfo completion:(AviasalesSDKAdsManagerCompletion)completion;
```
or for the search results list with your search info.

```objc
- (void)loadAdsViewForSearchResultsWithSearchInfo:(id <JRSDKSearchInfo>)searchInfo completion:(AviasalesSDKAdsManagerCompletion)completion;
```
After appropriate method call you will receive ```AviasalesSDKAdsView``` with ads.

## ⚒ Other Utils by SDK
Name | How to retrieve object | Description
-----|-----------------------|------------
Airports storage|```[AviasalesSDK sharedInstance].airportsStorage```|Finds airport by IATA, provides a list of airports
```AviasalesAirportsSearchPerformer```| ```[[AviasalesAirportsSearchPerformer alloc] init]```|Finds airports by string
```AviasalesNearestAirportsManager```|```[AviasalesSDK sharedInstance].nearestAirportsManager```|Finds nearest airports to the current user.
```AviasalesSDKAdsManager```|```[AviasalesSDK sharedInstance].adsManager```| Loads and displays advertisement according to search parameters
```JRSDKModelUtils```| ```[JRSDKModelUtils <method name here>]```|Util methods that help you to work with SDK objects
