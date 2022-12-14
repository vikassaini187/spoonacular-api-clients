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

#ifndef OAI_OAIWineApi_H
#define OAI_OAIWineApi_H

#include "OAIHttpRequest.h"

#include "com.spoonacular.client.model\OAIInline_response_200_44.h"
#include "com.spoonacular.client.model\OAIInline_response_200_45.h"
#include "com.spoonacular.client.model\OAIInline_response_200_46.h"
#include "com.spoonacular.client.model\OAIInline_response_200_47.h"
#include "com.spoonacular.client.model\OAINumber.h"
#include <QString>

#include <QObject>

namespace OpenAPI {

class OAIWineApi: public QObject {
    Q_OBJECT

public:
    OAIWineApi();
    OAIWineApi(QString host, QString basePath);
    ~OAIWineApi();

    QString host;
    QString basePath;
    QMap<QString, QString> defaultHeaders;

    void getDishPairingForWine(const QString& wine);
    void getWineDescription(const QString& wine);
    void getWinePairing(const QString& food, const OAINumber& max_price);
    void getWineRecommendation(const QString& wine, const OAINumber& max_price, const OAINumber& min_rating, const OAINumber& number);
    
private:
    void getDishPairingForWineCallback (OAIHttpRequestWorker * worker);
    void getWineDescriptionCallback (OAIHttpRequestWorker * worker);
    void getWinePairingCallback (OAIHttpRequestWorker * worker);
    void getWineRecommendationCallback (OAIHttpRequestWorker * worker);
    
signals:
    void getDishPairingForWineSignal(OAIInline_response_200_44 summary);
    void getWineDescriptionSignal(OAIInline_response_200_46 summary);
    void getWinePairingSignal(OAIInline_response_200_45 summary);
    void getWineRecommendationSignal(OAIInline_response_200_47 summary);
    
    void getDishPairingForWineSignalFull(OAIHttpRequestWorker* worker, OAIInline_response_200_44 summary);
    void getWineDescriptionSignalFull(OAIHttpRequestWorker* worker, OAIInline_response_200_46 summary);
    void getWinePairingSignalFull(OAIHttpRequestWorker* worker, OAIInline_response_200_45 summary);
    void getWineRecommendationSignalFull(OAIHttpRequestWorker* worker, OAIInline_response_200_47 summary);
    
    void getDishPairingForWineSignalE(OAIInline_response_200_44 summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void getWineDescriptionSignalE(OAIInline_response_200_46 summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void getWinePairingSignalE(OAIInline_response_200_45 summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void getWineRecommendationSignalE(OAIInline_response_200_47 summary, QNetworkReply::NetworkError error_type, QString& error_str);
    
    void getDishPairingForWineSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void getWineDescriptionSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void getWinePairingSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void getWineRecommendationSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    
};

}
#endif
