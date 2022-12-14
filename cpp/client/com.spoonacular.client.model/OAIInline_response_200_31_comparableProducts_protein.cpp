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


#include "OAIInline_response_200_31_comparableProducts_protein.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIInline_response_200_31_comparableProducts_protein::OAIInline_response_200_31_comparableProducts_protein(QString json) {
    this->init();
    this->fromJson(json);
}

OAIInline_response_200_31_comparableProducts_protein::OAIInline_response_200_31_comparableProducts_protein() {
    this->init();
}

OAIInline_response_200_31_comparableProducts_protein::~OAIInline_response_200_31_comparableProducts_protein() {

}

void
OAIInline_response_200_31_comparableProducts_protein::init() {
    
    m_difference_isSet = false;
    m_difference_isValid = false;
    
    m_id_isSet = false;
    m_id_isValid = false;
    
    m_image_isSet = false;
    m_image_isValid = false;
    
    m_title_isSet = false;
    m_title_isValid = false;
    }

void
OAIInline_response_200_31_comparableProducts_protein::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIInline_response_200_31_comparableProducts_protein::fromJsonObject(QJsonObject json) {
    
    m_difference_isValid = ::OpenAPI::fromJsonValue(difference, json[QString("difference")]);
    
    
    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    
    
    m_image_isValid = ::OpenAPI::fromJsonValue(image, json[QString("image")]);
    
    
    m_title_isValid = ::OpenAPI::fromJsonValue(title, json[QString("title")]);
    
    
}

QString
OAIInline_response_200_31_comparableProducts_protein::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIInline_response_200_31_comparableProducts_protein::asJsonObject() const {
    QJsonObject obj;
	if(difference.isSet()){
        obj.insert(QString("difference"), ::OpenAPI::toJsonValue(difference));
    }
	if(m_id_isSet){
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
	if(m_image_isSet){
        obj.insert(QString("image"), ::OpenAPI::toJsonValue(image));
    }
	if(m_title_isSet){
        obj.insert(QString("title"), ::OpenAPI::toJsonValue(title));
    }
    return obj;
}


OAINumber
OAIInline_response_200_31_comparableProducts_protein::getDifference() const {
    return difference;
}
void
OAIInline_response_200_31_comparableProducts_protein::setDifference(const OAINumber &difference) {
    this->difference = difference;
    this->m_difference_isSet = true;
}


qint32
OAIInline_response_200_31_comparableProducts_protein::getId() const {
    return id;
}
void
OAIInline_response_200_31_comparableProducts_protein::setId(const qint32 &id) {
    this->id = id;
    this->m_id_isSet = true;
}


QString
OAIInline_response_200_31_comparableProducts_protein::getImage() const {
    return image;
}
void
OAIInline_response_200_31_comparableProducts_protein::setImage(const QString &image) {
    this->image = image;
    this->m_image_isSet = true;
}


QString
OAIInline_response_200_31_comparableProducts_protein::getTitle() const {
    return title;
}
void
OAIInline_response_200_31_comparableProducts_protein::setTitle(const QString &title) {
    this->title = title;
    this->m_title_isSet = true;
}

bool
OAIInline_response_200_31_comparableProducts_protein::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(difference.isSet()){ isObjectUpdated = true; break;}
    
        if(m_id_isSet){ isObjectUpdated = true; break;}
    
        if(m_image_isSet){ isObjectUpdated = true; break;}
    
        if(m_title_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAIInline_response_200_31_comparableProducts_protein::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_difference_isValid && m_id_isValid && m_image_isValid && m_title_isValid && true;
}

}

