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


#include "OAIInline_response_200_8.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIInline_response_200_8::OAIInline_response_200_8(QString json) {
    this->init();
    this->fromJson(json);
}

OAIInline_response_200_8::OAIInline_response_200_8() {
    this->init();
}

OAIInline_response_200_8::~OAIInline_response_200_8() {

}

void
OAIInline_response_200_8::init() {
    
    m_sweetness_isSet = false;
    m_sweetness_isValid = false;
    
    m_saltiness_isSet = false;
    m_saltiness_isValid = false;
    
    m_sourness_isSet = false;
    m_sourness_isValid = false;
    
    m_bitterness_isSet = false;
    m_bitterness_isValid = false;
    
    m_savoriness_isSet = false;
    m_savoriness_isValid = false;
    
    m_fattiness_isSet = false;
    m_fattiness_isValid = false;
    
    m_spiciness_isSet = false;
    m_spiciness_isValid = false;
    }

void
OAIInline_response_200_8::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIInline_response_200_8::fromJsonObject(QJsonObject json) {
    
    m_sweetness_isValid = ::OpenAPI::fromJsonValue(sweetness, json[QString("sweetness")]);
    
    
    m_saltiness_isValid = ::OpenAPI::fromJsonValue(saltiness, json[QString("saltiness")]);
    
    
    m_sourness_isValid = ::OpenAPI::fromJsonValue(sourness, json[QString("sourness")]);
    
    
    m_bitterness_isValid = ::OpenAPI::fromJsonValue(bitterness, json[QString("bitterness")]);
    
    
    m_savoriness_isValid = ::OpenAPI::fromJsonValue(savoriness, json[QString("savoriness")]);
    
    
    m_fattiness_isValid = ::OpenAPI::fromJsonValue(fattiness, json[QString("fattiness")]);
    
    
    m_spiciness_isValid = ::OpenAPI::fromJsonValue(spiciness, json[QString("spiciness")]);
    
    
}

QString
OAIInline_response_200_8::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIInline_response_200_8::asJsonObject() const {
    QJsonObject obj;
	if(sweetness.isSet()){
        obj.insert(QString("sweetness"), ::OpenAPI::toJsonValue(sweetness));
    }
	if(saltiness.isSet()){
        obj.insert(QString("saltiness"), ::OpenAPI::toJsonValue(saltiness));
    }
	if(sourness.isSet()){
        obj.insert(QString("sourness"), ::OpenAPI::toJsonValue(sourness));
    }
	if(bitterness.isSet()){
        obj.insert(QString("bitterness"), ::OpenAPI::toJsonValue(bitterness));
    }
	if(savoriness.isSet()){
        obj.insert(QString("savoriness"), ::OpenAPI::toJsonValue(savoriness));
    }
	if(fattiness.isSet()){
        obj.insert(QString("fattiness"), ::OpenAPI::toJsonValue(fattiness));
    }
	if(spiciness.isSet()){
        obj.insert(QString("spiciness"), ::OpenAPI::toJsonValue(spiciness));
    }
    return obj;
}


OAINumber
OAIInline_response_200_8::getSweetness() const {
    return sweetness;
}
void
OAIInline_response_200_8::setSweetness(const OAINumber &sweetness) {
    this->sweetness = sweetness;
    this->m_sweetness_isSet = true;
}


OAINumber
OAIInline_response_200_8::getSaltiness() const {
    return saltiness;
}
void
OAIInline_response_200_8::setSaltiness(const OAINumber &saltiness) {
    this->saltiness = saltiness;
    this->m_saltiness_isSet = true;
}


OAINumber
OAIInline_response_200_8::getSourness() const {
    return sourness;
}
void
OAIInline_response_200_8::setSourness(const OAINumber &sourness) {
    this->sourness = sourness;
    this->m_sourness_isSet = true;
}


OAINumber
OAIInline_response_200_8::getBitterness() const {
    return bitterness;
}
void
OAIInline_response_200_8::setBitterness(const OAINumber &bitterness) {
    this->bitterness = bitterness;
    this->m_bitterness_isSet = true;
}


OAINumber
OAIInline_response_200_8::getSavoriness() const {
    return savoriness;
}
void
OAIInline_response_200_8::setSavoriness(const OAINumber &savoriness) {
    this->savoriness = savoriness;
    this->m_savoriness_isSet = true;
}


OAINumber
OAIInline_response_200_8::getFattiness() const {
    return fattiness;
}
void
OAIInline_response_200_8::setFattiness(const OAINumber &fattiness) {
    this->fattiness = fattiness;
    this->m_fattiness_isSet = true;
}


OAINumber
OAIInline_response_200_8::getSpiciness() const {
    return spiciness;
}
void
OAIInline_response_200_8::setSpiciness(const OAINumber &spiciness) {
    this->spiciness = spiciness;
    this->m_spiciness_isSet = true;
}

bool
OAIInline_response_200_8::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(sweetness.isSet()){ isObjectUpdated = true; break;}
    
        if(saltiness.isSet()){ isObjectUpdated = true; break;}
    
        if(sourness.isSet()){ isObjectUpdated = true; break;}
    
        if(bitterness.isSet()){ isObjectUpdated = true; break;}
    
        if(savoriness.isSet()){ isObjectUpdated = true; break;}
    
        if(fattiness.isSet()){ isObjectUpdated = true; break;}
    
        if(spiciness.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAIInline_response_200_8::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_sweetness_isValid && m_saltiness_isValid && m_sourness_isValid && m_bitterness_isValid && m_savoriness_isValid && m_fattiness_isValid && m_spiciness_isValid && true;
}

}

