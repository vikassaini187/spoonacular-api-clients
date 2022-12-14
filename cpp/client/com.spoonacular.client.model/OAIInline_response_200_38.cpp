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


#include "OAIInline_response_200_38.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIInline_response_200_38::OAIInline_response_200_38(QString json) {
    this->init();
    this->fromJson(json);
}

OAIInline_response_200_38::OAIInline_response_200_38() {
    this->init();
}

OAIInline_response_200_38::~OAIInline_response_200_38() {

}

void
OAIInline_response_200_38::init() {
    
    m_days_isSet = false;
    m_days_isValid = false;
    }

void
OAIInline_response_200_38::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIInline_response_200_38::fromJsonObject(QJsonObject json) {
    
    
    m_days_isValid = ::OpenAPI::fromJsonValue(days, json[QString("days")]);
    
}

QString
OAIInline_response_200_38::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIInline_response_200_38::asJsonObject() const {
    QJsonObject obj;
	
    if(days.size() > 0){
        obj.insert(QString("days"), ::OpenAPI::toJsonValue(days));
    } 
    return obj;
}


QList<OAIInline_response_200_38_days>
OAIInline_response_200_38::getDays() const {
    return days;
}
void
OAIInline_response_200_38::setDays(const QList<OAIInline_response_200_38_days> &days) {
    this->days = days;
    this->m_days_isSet = true;
}

bool
OAIInline_response_200_38::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(days.size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAIInline_response_200_38::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_days_isValid && true;
}

}

