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


#include "OAIInline_response_200_33.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIInline_response_200_33::OAIInline_response_200_33(QString json) {
    this->init();
    this->fromJson(json);
}

OAIInline_response_200_33::OAIInline_response_200_33() {
    this->init();
}

OAIInline_response_200_33::~OAIInline_response_200_33() {

}

void
OAIInline_response_200_33::init() {
    
    m_clean_title_isSet = false;
    m_clean_title_isValid = false;
    
    m_image_isSet = false;
    m_image_isValid = false;
    
    m_category_isSet = false;
    m_category_isValid = false;
    
    m_breadcrumbs_isSet = false;
    m_breadcrumbs_isValid = false;
    
    m_usda_code_isSet = false;
    m_usda_code_isValid = false;
    }

void
OAIInline_response_200_33::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIInline_response_200_33::fromJsonObject(QJsonObject json) {
    
    m_clean_title_isValid = ::OpenAPI::fromJsonValue(clean_title, json[QString("cleanTitle")]);
    
    
    m_image_isValid = ::OpenAPI::fromJsonValue(image, json[QString("image")]);
    
    
    m_category_isValid = ::OpenAPI::fromJsonValue(category, json[QString("category")]);
    
    
    
    m_breadcrumbs_isValid = ::OpenAPI::fromJsonValue(breadcrumbs, json[QString("breadcrumbs")]);
    
    m_usda_code_isValid = ::OpenAPI::fromJsonValue(usda_code, json[QString("usdaCode")]);
    
    
}

QString
OAIInline_response_200_33::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIInline_response_200_33::asJsonObject() const {
    QJsonObject obj;
	if(m_clean_title_isSet){
        obj.insert(QString("cleanTitle"), ::OpenAPI::toJsonValue(clean_title));
    }
	if(m_image_isSet){
        obj.insert(QString("image"), ::OpenAPI::toJsonValue(image));
    }
	if(m_category_isSet){
        obj.insert(QString("category"), ::OpenAPI::toJsonValue(category));
    }
	
    if(breadcrumbs.size() > 0){
        obj.insert(QString("breadcrumbs"), ::OpenAPI::toJsonValue(breadcrumbs));
    } 
	if(m_usda_code_isSet){
        obj.insert(QString("usdaCode"), ::OpenAPI::toJsonValue(usda_code));
    }
    return obj;
}


QString
OAIInline_response_200_33::getCleanTitle() const {
    return clean_title;
}
void
OAIInline_response_200_33::setCleanTitle(const QString &clean_title) {
    this->clean_title = clean_title;
    this->m_clean_title_isSet = true;
}


QString
OAIInline_response_200_33::getImage() const {
    return image;
}
void
OAIInline_response_200_33::setImage(const QString &image) {
    this->image = image;
    this->m_image_isSet = true;
}


QString
OAIInline_response_200_33::getCategory() const {
    return category;
}
void
OAIInline_response_200_33::setCategory(const QString &category) {
    this->category = category;
    this->m_category_isSet = true;
}


QList<QString>
OAIInline_response_200_33::getBreadcrumbs() const {
    return breadcrumbs;
}
void
OAIInline_response_200_33::setBreadcrumbs(const QList<QString> &breadcrumbs) {
    this->breadcrumbs = breadcrumbs;
    this->m_breadcrumbs_isSet = true;
}


qint32
OAIInline_response_200_33::getUsdaCode() const {
    return usda_code;
}
void
OAIInline_response_200_33::setUsdaCode(const qint32 &usda_code) {
    this->usda_code = usda_code;
    this->m_usda_code_isSet = true;
}

bool
OAIInline_response_200_33::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_clean_title_isSet){ isObjectUpdated = true; break;}
    
        if(m_image_isSet){ isObjectUpdated = true; break;}
    
        if(m_category_isSet){ isObjectUpdated = true; break;}
    
        if(breadcrumbs.size() > 0){ isObjectUpdated = true; break;}
    
        if(m_usda_code_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAIInline_response_200_33::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_clean_title_isValid && m_image_isValid && m_category_isValid && m_breadcrumbs_isValid && m_usda_code_isValid && true;
}

}

