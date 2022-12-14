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


#include "OAIInline_response_200_10_amount.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIInline_response_200_10_amount::OAIInline_response_200_10_amount(QString json) {
    this->init();
    this->fromJson(json);
}

OAIInline_response_200_10_amount::OAIInline_response_200_10_amount() {
    this->init();
}

OAIInline_response_200_10_amount::~OAIInline_response_200_10_amount() {

}

void
OAIInline_response_200_10_amount::init() {
    
    m_metric_isSet = false;
    m_metric_isValid = false;
    
    m_us_isSet = false;
    m_us_isValid = false;
    }

void
OAIInline_response_200_10_amount::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIInline_response_200_10_amount::fromJsonObject(QJsonObject json) {
    
    m_metric_isValid = ::OpenAPI::fromJsonValue(metric, json[QString("metric")]);
    
    
    m_us_isValid = ::OpenAPI::fromJsonValue(us, json[QString("us")]);
    
    
}

QString
OAIInline_response_200_10_amount::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIInline_response_200_10_amount::asJsonObject() const {
    QJsonObject obj;
	if(metric.isSet()){
        obj.insert(QString("metric"), ::OpenAPI::toJsonValue(metric));
    }
	if(us.isSet()){
        obj.insert(QString("us"), ::OpenAPI::toJsonValue(us));
    }
    return obj;
}


OAIInline_response_200_10_amount_metric
OAIInline_response_200_10_amount::getMetric() const {
    return metric;
}
void
OAIInline_response_200_10_amount::setMetric(const OAIInline_response_200_10_amount_metric &metric) {
    this->metric = metric;
    this->m_metric_isSet = true;
}


OAIInline_response_200_10_amount_metric
OAIInline_response_200_10_amount::getUs() const {
    return us;
}
void
OAIInline_response_200_10_amount::setUs(const OAIInline_response_200_10_amount_metric &us) {
    this->us = us;
    this->m_us_isSet = true;
}

bool
OAIInline_response_200_10_amount::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(metric.isSet()){ isObjectUpdated = true; break;}
    
        if(us.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAIInline_response_200_10_amount::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_metric_isValid && m_us_isValid && true;
}

}

