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


#include "OAIInline_response_200_50.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIInline_response_200_50::OAIInline_response_200_50(QString json) {
    this->init();
    this->fromJson(json);
}

OAIInline_response_200_50::OAIInline_response_200_50() {
    this->init();
}

OAIInline_response_200_50::~OAIInline_response_200_50() {

}

void
OAIInline_response_200_50::init() {
    
    m_answer_isSet = false;
    m_answer_isValid = false;
    
    m_image_isSet = false;
    m_image_isValid = false;
    }

void
OAIInline_response_200_50::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIInline_response_200_50::fromJsonObject(QJsonObject json) {
    
    m_answer_isValid = ::OpenAPI::fromJsonValue(answer, json[QString("answer")]);
    
    
    m_image_isValid = ::OpenAPI::fromJsonValue(image, json[QString("image")]);
    
    
}

QString
OAIInline_response_200_50::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIInline_response_200_50::asJsonObject() const {
    QJsonObject obj;
	if(m_answer_isSet){
        obj.insert(QString("answer"), ::OpenAPI::toJsonValue(answer));
    }
	if(m_image_isSet){
        obj.insert(QString("image"), ::OpenAPI::toJsonValue(image));
    }
    return obj;
}


QString
OAIInline_response_200_50::getAnswer() const {
    return answer;
}
void
OAIInline_response_200_50::setAnswer(const QString &answer) {
    this->answer = answer;
    this->m_answer_isSet = true;
}


QString
OAIInline_response_200_50::getImage() const {
    return image;
}
void
OAIInline_response_200_50::setImage(const QString &image) {
    this->image = image;
    this->m_image_isSet = true;
}

bool
OAIInline_response_200_50::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_answer_isSet){ isObjectUpdated = true; break;}
    
        if(m_image_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAIInline_response_200_50::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_answer_isValid && m_image_isValid && true;
}

}

