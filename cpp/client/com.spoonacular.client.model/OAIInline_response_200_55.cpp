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


#include "OAIInline_response_200_55.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIInline_response_200_55::OAIInline_response_200_55(QString json) {
    this->init();
    this->fromJson(json);
}

OAIInline_response_200_55::OAIInline_response_200_55() {
    this->init();
}

OAIInline_response_200_55::~OAIInline_response_200_55() {

}

void
OAIInline_response_200_55::init() {
    
    m_text_isSet = false;
    m_text_isValid = false;
    }

void
OAIInline_response_200_55::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIInline_response_200_55::fromJsonObject(QJsonObject json) {
    
    m_text_isValid = ::OpenAPI::fromJsonValue(text, json[QString("text")]);
    
    
}

QString
OAIInline_response_200_55::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIInline_response_200_55::asJsonObject() const {
    QJsonObject obj;
	if(m_text_isSet){
        obj.insert(QString("text"), ::OpenAPI::toJsonValue(text));
    }
    return obj;
}


QString
OAIInline_response_200_55::getText() const {
    return text;
}
void
OAIInline_response_200_55::setText(const QString &text) {
    this->text = text;
    this->m_text_isSet = true;
}

bool
OAIInline_response_200_55::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_text_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAIInline_response_200_55::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_text_isValid && true;
}

}

