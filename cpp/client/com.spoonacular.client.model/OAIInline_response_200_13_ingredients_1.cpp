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


#include "OAIInline_response_200_13_ingredients_1.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIInline_response_200_13_ingredients_1::OAIInline_response_200_13_ingredients_1(QString json) {
    this->init();
    this->fromJson(json);
}

OAIInline_response_200_13_ingredients_1::OAIInline_response_200_13_ingredients_1() {
    this->init();
}

OAIInline_response_200_13_ingredients_1::~OAIInline_response_200_13_ingredients_1() {

}

void
OAIInline_response_200_13_ingredients_1::init() {
    
    m_id_isSet = false;
    m_id_isValid = false;
    
    m_name_isSet = false;
    m_name_isValid = false;
    }

void
OAIInline_response_200_13_ingredients_1::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIInline_response_200_13_ingredients_1::fromJsonObject(QJsonObject json) {
    
    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    
    
    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    
    
}

QString
OAIInline_response_200_13_ingredients_1::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIInline_response_200_13_ingredients_1::asJsonObject() const {
    QJsonObject obj;
	if(m_id_isSet){
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
	if(m_name_isSet){
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
    return obj;
}


qint32
OAIInline_response_200_13_ingredients_1::getId() const {
    return id;
}
void
OAIInline_response_200_13_ingredients_1::setId(const qint32 &id) {
    this->id = id;
    this->m_id_isSet = true;
}


QString
OAIInline_response_200_13_ingredients_1::getName() const {
    return name;
}
void
OAIInline_response_200_13_ingredients_1::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool
OAIInline_response_200_13_ingredients_1::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_id_isSet){ isObjectUpdated = true; break;}
    
        if(m_name_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAIInline_response_200_13_ingredients_1::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_name_isValid && true;
}

}

