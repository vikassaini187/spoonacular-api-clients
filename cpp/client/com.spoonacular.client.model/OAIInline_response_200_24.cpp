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


#include "OAIInline_response_200_24.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIInline_response_200_24::OAIInline_response_200_24(QString json) {
    this->init();
    this->fromJson(json);
}

OAIInline_response_200_24::OAIInline_response_200_24() {
    this->init();
}

OAIInline_response_200_24::~OAIInline_response_200_24() {

}

void
OAIInline_response_200_24::init() {
    
    m_name_isSet = false;
    m_name_isValid = false;
    
    m_image_isSet = false;
    m_image_isValid = false;
    
    m_id_isSet = false;
    m_id_isValid = false;
    
    m_aisle_isSet = false;
    m_aisle_isValid = false;
    
    m_possible_units_isSet = false;
    m_possible_units_isValid = false;
    }

void
OAIInline_response_200_24::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIInline_response_200_24::fromJsonObject(QJsonObject json) {
    
    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    
    
    m_image_isValid = ::OpenAPI::fromJsonValue(image, json[QString("image")]);
    
    
    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    
    
    m_aisle_isValid = ::OpenAPI::fromJsonValue(aisle, json[QString("aisle")]);
    
    
    
    m_possible_units_isValid = ::OpenAPI::fromJsonValue(possible_units, json[QString("possibleUnits")]);
    
}

QString
OAIInline_response_200_24::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIInline_response_200_24::asJsonObject() const {
    QJsonObject obj;
	if(m_name_isSet){
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
	if(m_image_isSet){
        obj.insert(QString("image"), ::OpenAPI::toJsonValue(image));
    }
	if(m_id_isSet){
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
	if(m_aisle_isSet){
        obj.insert(QString("aisle"), ::OpenAPI::toJsonValue(aisle));
    }
	
    if(possible_units.size() > 0){
        obj.insert(QString("possibleUnits"), ::OpenAPI::toJsonValue(possible_units));
    } 
    return obj;
}


QString
OAIInline_response_200_24::getName() const {
    return name;
}
void
OAIInline_response_200_24::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}


QString
OAIInline_response_200_24::getImage() const {
    return image;
}
void
OAIInline_response_200_24::setImage(const QString &image) {
    this->image = image;
    this->m_image_isSet = true;
}


qint32
OAIInline_response_200_24::getId() const {
    return id;
}
void
OAIInline_response_200_24::setId(const qint32 &id) {
    this->id = id;
    this->m_id_isSet = true;
}


QString
OAIInline_response_200_24::getAisle() const {
    return aisle;
}
void
OAIInline_response_200_24::setAisle(const QString &aisle) {
    this->aisle = aisle;
    this->m_aisle_isSet = true;
}


QList<QString>
OAIInline_response_200_24::getPossibleUnits() const {
    return possible_units;
}
void
OAIInline_response_200_24::setPossibleUnits(const QList<QString> &possible_units) {
    this->possible_units = possible_units;
    this->m_possible_units_isSet = true;
}

bool
OAIInline_response_200_24::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_name_isSet){ isObjectUpdated = true; break;}
    
        if(m_image_isSet){ isObjectUpdated = true; break;}
    
        if(m_id_isSet){ isObjectUpdated = true; break;}
    
        if(m_aisle_isSet){ isObjectUpdated = true; break;}
    
        if(possible_units.size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAIInline_response_200_24::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_name_isValid && m_image_isValid && m_id_isValid && m_aisle_isValid && m_possible_units_isValid && true;
}

}

