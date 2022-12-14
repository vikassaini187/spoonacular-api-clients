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


#include "OAIInline_response_200_42_measures.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIInline_response_200_42_measures::OAIInline_response_200_42_measures(QString json) {
    this->init();
    this->fromJson(json);
}

OAIInline_response_200_42_measures::OAIInline_response_200_42_measures() {
    this->init();
}

OAIInline_response_200_42_measures::~OAIInline_response_200_42_measures() {

}

void
OAIInline_response_200_42_measures::init() {
    
    m_original_isSet = false;
    m_original_isValid = false;
    
    m_metric_isSet = false;
    m_metric_isValid = false;
    
    m_us_isSet = false;
    m_us_isValid = false;
    }

void
OAIInline_response_200_42_measures::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIInline_response_200_42_measures::fromJsonObject(QJsonObject json) {
    
    m_original_isValid = ::OpenAPI::fromJsonValue(original, json[QString("original")]);
    
    
    m_metric_isValid = ::OpenAPI::fromJsonValue(metric, json[QString("metric")]);
    
    
    m_us_isValid = ::OpenAPI::fromJsonValue(us, json[QString("us")]);
    
    
}

QString
OAIInline_response_200_42_measures::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIInline_response_200_42_measures::asJsonObject() const {
    QJsonObject obj;
	if(original.isSet()){
        obj.insert(QString("original"), ::OpenAPI::toJsonValue(original));
    }
	if(metric.isSet()){
        obj.insert(QString("metric"), ::OpenAPI::toJsonValue(metric));
    }
	if(us.isSet()){
        obj.insert(QString("us"), ::OpenAPI::toJsonValue(us));
    }
    return obj;
}


OAI_recipes_parseIngredients_nutrition_weightPerServing
OAIInline_response_200_42_measures::getOriginal() const {
    return original;
}
void
OAIInline_response_200_42_measures::setOriginal(const OAI_recipes_parseIngredients_nutrition_weightPerServing &original) {
    this->original = original;
    this->m_original_isSet = true;
}


OAI_recipes_parseIngredients_nutrition_weightPerServing
OAIInline_response_200_42_measures::getMetric() const {
    return metric;
}
void
OAIInline_response_200_42_measures::setMetric(const OAI_recipes_parseIngredients_nutrition_weightPerServing &metric) {
    this->metric = metric;
    this->m_metric_isSet = true;
}


OAI_recipes_parseIngredients_nutrition_weightPerServing
OAIInline_response_200_42_measures::getUs() const {
    return us;
}
void
OAIInline_response_200_42_measures::setUs(const OAI_recipes_parseIngredients_nutrition_weightPerServing &us) {
    this->us = us;
    this->m_us_isSet = true;
}

bool
OAIInline_response_200_42_measures::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(original.isSet()){ isObjectUpdated = true; break;}
    
        if(metric.isSet()){ isObjectUpdated = true; break;}
    
        if(us.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAIInline_response_200_42_measures::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_original_isValid && m_metric_isValid && m_us_isValid && true;
}

}

