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


#include "OAI_food_ingredients_map_products.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAI_food_ingredients_map_products::OAI_food_ingredients_map_products(QString json) {
    this->init();
    this->fromJson(json);
}

OAI_food_ingredients_map_products::OAI_food_ingredients_map_products() {
    this->init();
}

OAI_food_ingredients_map_products::~OAI_food_ingredients_map_products() {

}

void
OAI_food_ingredients_map_products::init() {
    
    m_id_isSet = false;
    m_id_isValid = false;
    
    m_title_isSet = false;
    m_title_isValid = false;
    
    m_upc_isSet = false;
    m_upc_isValid = false;
    }

void
OAI_food_ingredients_map_products::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAI_food_ingredients_map_products::fromJsonObject(QJsonObject json) {
    
    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    
    
    m_title_isValid = ::OpenAPI::fromJsonValue(title, json[QString("title")]);
    
    
    m_upc_isValid = ::OpenAPI::fromJsonValue(upc, json[QString("upc")]);
    
    
}

QString
OAI_food_ingredients_map_products::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAI_food_ingredients_map_products::asJsonObject() const {
    QJsonObject obj;
	if(m_id_isSet){
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
	if(m_title_isSet){
        obj.insert(QString("title"), ::OpenAPI::toJsonValue(title));
    }
	if(m_upc_isSet){
        obj.insert(QString("upc"), ::OpenAPI::toJsonValue(upc));
    }
    return obj;
}


qint32
OAI_food_ingredients_map_products::getId() const {
    return id;
}
void
OAI_food_ingredients_map_products::setId(const qint32 &id) {
    this->id = id;
    this->m_id_isSet = true;
}


QString
OAI_food_ingredients_map_products::getTitle() const {
    return title;
}
void
OAI_food_ingredients_map_products::setTitle(const QString &title) {
    this->title = title;
    this->m_title_isSet = true;
}


QString
OAI_food_ingredients_map_products::getUpc() const {
    return upc;
}
void
OAI_food_ingredients_map_products::setUpc(const QString &upc) {
    this->upc = upc;
    this->m_upc_isSet = true;
}

bool
OAI_food_ingredients_map_products::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_id_isSet){ isObjectUpdated = true; break;}
    
        if(m_title_isSet){ isObjectUpdated = true; break;}
    
        if(m_upc_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAI_food_ingredients_map_products::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_title_isValid && m_upc_isValid && true;
}

}

