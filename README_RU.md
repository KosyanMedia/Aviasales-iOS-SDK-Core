# Aviasales/JetRadar iOS SDK Core
[![CocoaPods](https://img.shields.io/cocoapods/v/AviasalesSDK.svg)](https://cocoapods.org/pods/AviasalesSDK)
[![CocoaPods](https://img.shields.io/cocoapods/p/AviasalesSDK.svg)](https://cocoapods.org/pods/AviasalesSDK)
[![Travis](https://img.shields.io/travis/KosyanMedia/Aviasales-iOS-SDK-Core/master.svg)](https://travis-ci.org/KosyanMedia/Aviasales-iOS-SDK-Core)


## Example
В качестве примера использования SDK, посмотрите шаблонный проект в репозитории [Aviasales-iOS-SDK](https://github.com/KosyanMedia/Aviasales-iOS-SDK).

## ⚙ Installation
Самый простой способ добавления AviasalesSDK в проект - с использованием [CocoaPods](http://cocoapods.org).:

```ruby
pod 'AviasalesSDK', '~> 3.1.1'
```

Мы рекомендуем импортировать ```AviasalesSDK.h``` в каждом файле, где вы пользуетесь объектами или протоколами из SDK.

```objc
#import <AviasalesSDK/AviasalesSDK.h>
```

Перед началом использования SDK, вам нужно сконфигурировать объект ```AviasalesSDK``` вот так:

```objc
AviasalesSDKInitialConfiguration *configuration = [AviasalesSDKInitialConfiguration configurationWithAPIToken:@"Сюда скопируйте ваш api token"
                                                                                                    APILocale:[NSLocale currentLocale].localeIdentifier
                                                                                                partnerMarker:@"А тут разместите ваш marker партнера"];
[AviasalesSDK setupWithConfiguration:configuration];
```
Главное не забудьте **заменить текст в кавычках** на ваши актульные **токен и маркер**, которые могут быть получены на сайте [TravelPayouts](https://travelpayouts.com/).


## Основные части SDK
### ✈️ Поиск билетов на самолеты
Задайте параметры поиска, используя объект класса ```JRSDKSearchInfoBuilder```. Посмотрите пример ниже, чтобы лучше понять, как задавать параметры.

#### Задание параметров поиска
Создадим простой объект, описывающий новый поиск:

```objc
JRSDKConfigurableSearchInfo *searchInfoBuilder = [[JRSDKSearchInfoBuilder alloc] init];
```
Установим желаемые параметры поиска (например *adults = 2* и *travelClass = Business* значит, что двое взрослых людей полетят бизнес классом).

```objc
searchInfoBuilder.adults = 2;
searchInfoBuilder.travelClass = JRSDKTravelClassBusiness;
```
Зададим даты перелетов и аэропорты вылетов (их можно задать много, просто повторив следующий шаг несколько раз):

```objc
JRSDKTravelSegmentBuilder *travelSegmentBuilder = [JRSDKTravelSegmentBuilder new]
travelSegmentBuilder.departureDate = [NSDate date];
travelSegmentBuilder.originAirport = [[AviasalesSDK sharedInstance].airportsStorage findAnythingByIATA:@"LED"];
travelSegmentBuilder.destinationAirport = [[AviasalesSDK sharedInstance].airportsStorage findAnythingByIATA:@"MOW"];
```
Сохраним созданный перелет в параметры поиска:

```objc
searchInfoBuilder.travelSegments = [NSOrderedSet orderedSetWithObject:[travelSegmentBuilder build]];
```

Теперь можно собрать объект `JRSDKSearchInfo` для дальнейшего использования:

```objc
JRSDKSearchInfo *searchInfo = [searchInfoBuilder build];
```

Вот и всё. Параметры поиска готовы. Можем запускать поиск авиабилетов.

#### Выполнение поискового запроса
Для выполнения поискового запроса получите объект ```SearchPerformer``` из SDK и передайте ему параметры поиска. Не забудьте **сохранить полученный объект** пока выполняется поиск. Никто не будет хранить его за вас.

```objc
JRSDKSearchPerformer *searchPerformer = [[AviasalesSDK sharedInstance] createSearchPerformer];
```
Чтобы получить результаты живой выдачи и финальные результаты поиска. укажите объект, соответствующий протоколу ```JRSDKSearchPerformerDelegate```), который будет их получать:

```objc
searchPerformer.delegate = self;
```
Этот объект должен реализовать три метода:

Первый метод вызовется, когда основные результаты поиска будут готовы для отображения (после этого вызова SDK будет продолжать ждать от сервера данные, и, **в очень редком случае**, может получить дополнительные более дешёвые билеты):

```objc
- (void)searchPerformer:(JRSDKSearchPerformer *)searchPerformer didFinishRegularSearch:(JRSDKSearchInfo *)searchInfo withResult:(JRSDKSearchResult *)result andMetropolitanResult:(JRSDKSearchResult *)metropolitanResult;
```
Второй метод, чтобы получить ошибку, если она вдруг возникнет в процессе поиска (например, может отключиться интернет):

```objc
- (void)searchPerformer:(JRSDKSearchPerformer *)searchPerformer didFailSearchWithError:(NSError *)error connection:(JRServerAPIConnection *)connection;
```
И третий метод нужен, чтобы понять, когда поиск завершится и больше не будет новых результатов. После вызова этого метода, вы можете удалить ```SearchPerformer``` из памяти (переиспользовать его не стоит, для следующего поиска создайте новый):

```objc
- (void)searchPerformer:(JRSDKSearchPerformer *)searchPerformer didFinalizeSearchWithInfo:(id<JRSDKSearchInfo>)searchInfo error:(NSError *)error;
```

Опциональный метод, который вызывается, когда появляется информация о новой пачке билетов (но поиск ещё не завершён):

```objc
- (void)searchPerformer:(JRSDKSearchPerformer *)searchPerformer didFindSomeTickets:(JRSDKSearchResultsChunk *)newTickets inSearchInfo:(JRSDKSearchInfo *)searchInfo temporaryResult:(JRSDKSearchResult *)temporaryResult temporaryMetropolitanResult:(JRSDKSearchResult *)temporaryMetropolitanResult;
```

Теперь, когда все нужные методы у нас есть, запускаем поиск (сразу укажите, включать нам результаты агенств на английском языке в выдачу или нет):

```objc
[searchPerformer performSearchWithSearchInfo:searchInfo
                             includeResultsInEnglish:YES];
```

#### Получение результатов поиска
Результаты поиска возвращаются с помощью объектов ```JRSDKSearchResult```. В случае, если поиск был совершён с указанием конкретного аэропорта, ```result``` и ```metropolitanResult``` будут отличаться — последний будет содержать билеты в любой аэропорт данного города.

### <a name="ticket-purchase-anchor"></a>💸 Покупка билетов
Для покупки билетов будем пользоваться объектом ```AviasalesSDKPurchasePerformer```. Каждый билет содержит много предложений от разных агентств. Вам нужно понять, какое из них вас устраивает и создать ```AviasalesSDKPurchasePerformer``` с желаемым предложением и параметром searchId (```JRSDKSearchResult > JRSDKSearchResultInfo```) с помощью метода:

```objc
- (instancetype)initWithProposal:(JRSDKProposal *)proposal searchId:(NSString *)searchId;
```
Запустим процесс генерации ссылки:

```objc
- (void)performWithDelegate:(id <AviasalesSDKPurchasePerformerDelegate>)delegate;
```
Вам вернут ссылку, которую надо открыть в браузере, чтобы пользователь заполнил данные о себе и купил билет.

### 📺 Реклама
Aviasales SDK дает вам дополнительную возможность зарабатывать деньги, отображая высококачественную контекстную рекламу вашим пользователям.
Используйте объект ```AviasalesSDKAdsManager``` вот так:

```objc
[AviasalesSDK sharedInstance].adsManager
```
чтобы загрузить контекстную рекламу на момент ожидания завершения поиска:

```objc 
- (void)loadAdsViewForWaitingScreenWithSearchInfo:(id <JRSDKSearchInfo>)searchInfo completion:(AviasalesSDKAdsManagerCompletion)completion;
```
или для отображения в результатах поиска:

```objc
- (void)loadAdsViewForSearchResultsWithSearchInfo:(id <JRSDKSearchInfo>)searchInfo completion:(AviasalesSDKAdsManagerCompletion)completion;
```
После вызова соответствующего метода, вам вернется объект ```AviasalesSDKAdsView``` с рекламой. Отобразите его пользователю.

## ⚒ Дополнительные утилиты, поставляемые с SDK
Name | How to retrieve object | Description
-----|-----------------------|------------
Airports storage|```[AviasalesSDK sharedInstance].airportsStorage```|Поиск аэропортов по IATA коду, или получение списка всех аэропортов
```AviasalesAirportsSearchPerformer```| ```[[AviasalesAirportsSearchPerformer alloc] init]```|Поиск аэропортов по строке
```AviasalesNearestAirportsManager```|```[AviasalesSDK sharedInstance].nearestAirportsManager```|Поиск аэропортов рядом с пользователем
```AviasalesSDKAdsManager```|```[AviasalesSDK sharedInstance].adsManager```| Загрузка и отображение контекстной рекламы Aviasales с учетом параметров поиска
```JRSDKModelUtils```| ```[JRSDKModelUtils <method name here>]```|Различные удобные методы, которые помогут вам при работе с объектами SDK
