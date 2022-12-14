#import <Foundation/Foundation.h>
#import "OAIInlineResponse20044.h"
#import "OAIInlineResponse20045.h"
#import "OAIInlineResponse20046.h"
#import "OAIInlineResponse20047.h"
#import "OAIApi.h"

/**
* spoonacular API
* The spoonacular Nutrition, Recipe, and Food API allows you to access over 380,000 recipes, thousands of ingredients, 800,000 food products, and 100,000 menu items. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.
*
* The version of the OpenAPI document: 1.0
* Contact: mail@spoonacular.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/



@interface OAIWineApi: NSObject <OAIApi>

extern NSString* kOAIWineApiErrorDomain;
extern NSInteger kOAIWineApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(OAIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Dish Pairing for Wine
/// Find a dish that goes well with a given wine.
///
/// @param wine The type of wine that should be paired, e.g. \&quot;merlot\&quot;, \&quot;riesling\&quot;, or \&quot;malbec\&quot;.
/// 
///  code:200 message:"Success",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return OAIInlineResponse20044*
-(NSURLSessionTask*) getDishPairingForWineWithWine: (NSString*) wine
    completionHandler: (void (^)(OAIInlineResponse20044* output, NSError* error)) handler;


/// Wine Description
/// Get a simple description of a certain wine, e.g. \"malbec\", \"riesling\", or \"merlot\".
///
/// @param wine The name of the wine that should be paired, e.g. \&quot;merlot\&quot;, \&quot;riesling\&quot;, or \&quot;malbec\&quot;.
/// 
///  code:200 message:"Success",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return OAIInlineResponse20046*
-(NSURLSessionTask*) getWineDescriptionWithWine: (NSString*) wine
    completionHandler: (void (^)(OAIInlineResponse20046* output, NSError* error)) handler;


/// Wine Pairing
/// Find a wine that goes well with a food. Food can be a dish name (\"steak\"), an ingredient name (\"salmon\"), or a cuisine (\"italian\").
///
/// @param food The food to get a pairing for. This can be a dish (\&quot;steak\&quot;), an ingredient (\&quot;salmon\&quot;), or a cuisine (\&quot;italian\&quot;).
/// @param maxPrice The maximum price for the specific wine recommendation in USD. (optional)
/// 
///  code:200 message:"Success",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return OAIInlineResponse20045*
-(NSURLSessionTask*) getWinePairingWithFood: (NSString*) food
    maxPrice: (NSNumber*) maxPrice
    completionHandler: (void (^)(OAIInlineResponse20045* output, NSError* error)) handler;


/// Wine Recommendation
/// Get a specific wine recommendation (concrete product) for a given wine type, e.g. \"merlot\".
///
/// @param wine The type of wine to get a specific product recommendation for.
/// @param maxPrice The maximum price for the specific wine recommendation in USD. (optional)
/// @param minRating The minimum rating of the recommended wine between 0 and 1. For example, 0.8 equals 4 out of 5 stars. (optional)
/// @param number The number of wine recommendations expected (between 1 and 100). (optional) (default to @10)
/// 
///  code:200 message:"Success",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return OAIInlineResponse20047*
-(NSURLSessionTask*) getWineRecommendationWithWine: (NSString*) wine
    maxPrice: (NSNumber*) maxPrice
    minRating: (NSNumber*) minRating
    number: (NSNumber*) number
    completionHandler: (void (^)(OAIInlineResponse20047* output, NSError* error)) handler;



@end
