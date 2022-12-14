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


#include "OAIInline_response_200_3_extendedIngredients.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIInline_response_200_3_extendedIngredients::OAIInline_response_200_3_extendedIngredients(QString json) {
    this->init();
    this->fromJson(json);
}

OAIInline_response_200_3_extendedIngredients::OAIInline_response_200_3_extendedIngredients() {
    this->init();
}

OAIInline_response_200_3_extendedIngredients::~OAIInline_response_200_3_extendedIngredients() {

}

void
OAIInline_response_200_3_extendedIngredients::init() {
    
    m_aisle_isSet = false;
    m_aisle_isValid = false;
    
    m_amount_isSet = false;
    m_amount_isValid = false;
    
    m_consitency_isSet = false;
    m_consitency_isValid = false;
    
    m_id_isSet = false;
    m_id_isValid = false;
    
    m_image_isSet = false;
    m_image_isValid = false;
    
    m_measures_isSet = false;
    m_measures_isValid = false;
    
    m_meta_isSet = false;
    m_meta_isValid = false;
    
    m_name_isSet = false;
    m_name_isValid = false;
    
    m_original_isSet = false;
    m_original_isValid = false;
    
    m_original_name_isSet = false;
    m_original_name_isValid = false;
    
    m_unit_isSet = false;
    m_unit_isValid = false;
    }

void
OAIInline_response_200_3_extendedIngredients::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIInline_response_200_3_extendedIngredients::fromJsonObject(QJsonObject json) {
    
    m_aisle_isValid = ::OpenAPI::fromJsonValue(aisle, json[QString("aisle")]);
    
    
    m_amount_isValid = ::OpenAPI::fromJsonValue(amount, json[QString("amount")]);
    
    
    m_consitency_isValid = ::OpenAPI::fromJsonValue(consitency, json[QString("consitency")]);
    
    
    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    
    
    m_image_isValid = ::OpenAPI::fromJsonValue(image, json[QString("image")]);
    
    
    m_measures_isValid = ::OpenAPI::fromJsonValue(measures, json[QString("measures")]);
    
    
    
    m_meta_isValid = ::OpenAPI::fromJsonValue(meta, json[QString("meta")]);
    
    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    
    
    m_original_isValid = ::OpenAPI::fromJsonValue(original, json[QString("original")]);
    
    
    m_original_name_isValid = ::OpenAPI::fromJsonValue(original_name, json[QString("originalName")]);
    
    
    m_unit_isValid = ::OpenAPI::fromJsonValue(unit, json[QString("unit")]);
    
    
}

QString
OAIInline_response_200_3_extendedIngredients::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIInline_response_200_3_extendedIngredients::asJsonObject() const {
    QJsonObject obj;
	if(m_aisle_isSet){
        obj.insert(QString("aisle"), ::OpenAPI::toJsonValue(aisle));
    }
	if(amount.isSet()){
        obj.insert(QString("amount"), ::OpenAPI::toJsonValue(amount));
    }
	if(m_consitency_isSet){
        obj.insert(QString("consitency"), ::OpenAPI::toJsonValue(consitency));
    }
	if(m_id_isSet){
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
	if(m_image_isSet){
        obj.insert(QString("image"), ::OpenAPI::toJsonValue(image));
    }
	if(measures.isSet()){
        obj.insert(QString("measures"), ::OpenAPI::toJsonValue(measures));
    }
	
    if(meta.size() > 0){
        obj.insert(QString("meta"), ::OpenAPI::toJsonValue(meta));
    } 
	if(m_name_isSet){
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
	if(m_original_isSet){
        obj.insert(QString("original"), ::OpenAPI::toJsonValue(original));
    }
	if(m_original_name_isSet){
        obj.insert(QString("originalName"), ::OpenAPI::toJsonValue(original_name));
    }
	if(m_unit_isSet){
        obj.insert(QString("unit"), ::OpenAPI::toJsonValue(unit));
    }
    return obj;
}


QString
OAIInline_response_200_3_extendedIngredients::getAisle() const {
    return aisle;
}
void
OAIInline_response_200_3_extendedIngredients::setAisle(const QString &aisle) {
    this->aisle = aisle;
    this->m_aisle_isSet = true;
}


OAINumber
OAIInline_response_200_3_extendedIngredients::getAmount() const {
    return amount;
}
void
OAIInline_response_200_3_extendedIngredients::setAmount(const OAINumber &amount) {
    this->amount = amount;
    this->m_amount_isSet = true;
}


QString
OAIInline_response_200_3_extendedIngredients::getConsitency() const {
    return consitency;
}
void
OAIInline_response_200_3_extendedIngredients::setConsitency(const QString &consitency) {
    this->consitency = consitency;
    this->m_consitency_isSet = true;
}


qint32
OAIInline_response_200_3_extendedIngredients::getId() const {
    return id;
}
void
OAIInline_response_200_3_extendedIngredients::setId(const qint32 &id) {
    this->id = id;
    this->m_id_isSet = true;
}


QString
OAIInline_response_200_3_extendedIngredients::getImage() const {
    return image;
}
void
OAIInline_response_200_3_extendedIngredients::setImage(const QString &image) {
    this->image = image;
    this->m_image_isSet = true;
}


OAIInline_response_200_3_measures
OAIInline_response_200_3_extendedIngredients::getMeasures() const {
    return measures;
}
void
OAIInline_response_200_3_extendedIngredients::setMeasures(const OAIInline_response_200_3_measures &measures) {
    this->measures = measures;
    this->m_measures_isSet = true;
}


QList<QString>
OAIInline_response_200_3_extendedIngredients::getMeta() const {
    return meta;
}
void
OAIInline_response_200_3_extendedIngredients::setMeta(const QList<QString> &meta) {
    this->meta = meta;
    this->m_meta_isSet = true;
}


QString
OAIInline_response_200_3_extendedIngredients::getName() const {
    return name;
}
void
OAIInline_response_200_3_extendedIngredients::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}


QString
OAIInline_response_200_3_extendedIngredients::getOriginal() const {
    return original;
}
void
OAIInline_response_200_3_extendedIngredients::setOriginal(const QString &original) {
    this->original = original;
    this->m_original_isSet = true;
}


QString
OAIInline_response_200_3_extendedIngredients::getOriginalName() const {
    return original_name;
}
void
OAIInline_response_200_3_extendedIngredients::setOriginalName(const QString &original_name) {
    this->original_name = original_name;
    this->m_original_name_isSet = true;
}


QString
OAIInline_response_200_3_extendedIngredients::getUnit() const {
    return unit;
}
void
OAIInline_response_200_3_extendedIngredients::setUnit(const QString &unit) {
    this->unit = unit;
    this->m_unit_isSet = true;
}

bool
OAIInline_response_200_3_extendedIngredients::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_aisle_isSet){ isObjectUpdated = true; break;}
    
        if(amount.isSet()){ isObjectUpdated = true; break;}
    
        if(m_consitency_isSet){ isObjectUpdated = true; break;}
    
        if(m_id_isSet){ isObjectUpdated = true; break;}
    
        if(m_image_isSet){ isObjectUpdated = true; break;}
    
        if(measures.isSet()){ isObjectUpdated = true; break;}
    
        if(meta.size() > 0){ isObjectUpdated = true; break;}
    
        if(m_name_isSet){ isObjectUpdated = true; break;}
    
        if(m_original_isSet){ isObjectUpdated = true; break;}
    
        if(m_original_name_isSet){ isObjectUpdated = true; break;}
    
        if(m_unit_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAIInline_response_200_3_extendedIngredients::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_aisle_isValid && m_amount_isValid && m_consitency_isValid && m_id_isValid && m_image_isValid && m_name_isValid && m_original_isValid && m_original_name_isValid && m_unit_isValid && true;
}

}

