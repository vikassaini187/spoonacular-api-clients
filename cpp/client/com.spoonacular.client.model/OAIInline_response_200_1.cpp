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


#include "OAIInline_response_200_1.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIInline_response_200_1::OAIInline_response_200_1(QString json) {
    this->init();
    this->fromJson(json);
}

OAIInline_response_200_1::OAIInline_response_200_1() {
    this->init();
}

OAIInline_response_200_1::~OAIInline_response_200_1() {

}

void
OAIInline_response_200_1::init() {
    
    m_id_isSet = false;
    m_id_isValid = false;
    
    m_image_isSet = false;
    m_image_isValid = false;
    
    m_image_type_isSet = false;
    m_image_type_isValid = false;
    
    m_likes_isSet = false;
    m_likes_isValid = false;
    
    m_missed_ingredient_count_isSet = false;
    m_missed_ingredient_count_isValid = false;
    
    m_missed_ingredients_isSet = false;
    m_missed_ingredients_isValid = false;
    
    m_title_isSet = false;
    m_title_isValid = false;
    
    m_unused_ingredients_isSet = false;
    m_unused_ingredients_isValid = false;
    
    m_used_ingredient_count_isSet = false;
    m_used_ingredient_count_isValid = false;
    
    m_used_ingredients_isSet = false;
    m_used_ingredients_isValid = false;
    
    m__isSet = false;
    m__isValid = false;
    }

void
OAIInline_response_200_1::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIInline_response_200_1::fromJsonObject(QJsonObject json) {
    
    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    
    
    m_image_isValid = ::OpenAPI::fromJsonValue(image, json[QString("image")]);
    
    
    m_image_type_isValid = ::OpenAPI::fromJsonValue(image_type, json[QString("imageType")]);
    
    
    m_likes_isValid = ::OpenAPI::fromJsonValue(likes, json[QString("likes")]);
    
    
    m_missed_ingredient_count_isValid = ::OpenAPI::fromJsonValue(missed_ingredient_count, json[QString("missedIngredientCount")]);
    
    
    
    m_missed_ingredients_isValid = ::OpenAPI::fromJsonValue(missed_ingredients, json[QString("missedIngredients")]);
    
    m_title_isValid = ::OpenAPI::fromJsonValue(title, json[QString("title")]);
    
    
    
    m_unused_ingredients_isValid = ::OpenAPI::fromJsonValue(unused_ingredients, json[QString("unusedIngredients")]);
    
    m_used_ingredient_count_isValid = ::OpenAPI::fromJsonValue(used_ingredient_count, json[QString("usedIngredientCount")]);
    
    
    
    m_used_ingredients_isValid = ::OpenAPI::fromJsonValue(used_ingredients, json[QString("usedIngredients")]);
    
    m__isValid = ::OpenAPI::fromJsonValue(, json[QString("")]);
    
    
}

QString
OAIInline_response_200_1::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIInline_response_200_1::asJsonObject() const {
    QJsonObject obj;
	if(m_id_isSet){
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
	if(m_image_isSet){
        obj.insert(QString("image"), ::OpenAPI::toJsonValue(image));
    }
	if(m_image_type_isSet){
        obj.insert(QString("imageType"), ::OpenAPI::toJsonValue(image_type));
    }
	if(m_likes_isSet){
        obj.insert(QString("likes"), ::OpenAPI::toJsonValue(likes));
    }
	if(m_missed_ingredient_count_isSet){
        obj.insert(QString("missedIngredientCount"), ::OpenAPI::toJsonValue(missed_ingredient_count));
    }
	
    if(missed_ingredients.size() > 0){
        obj.insert(QString("missedIngredients"), ::OpenAPI::toJsonValue(missed_ingredients));
    } 
	if(m_title_isSet){
        obj.insert(QString("title"), ::OpenAPI::toJsonValue(title));
    }
	
    if(unused_ingredients.size() > 0){
        obj.insert(QString("unusedIngredients"), ::OpenAPI::toJsonValue(unused_ingredients));
    } 
	if(used_ingredient_count.isSet()){
        obj.insert(QString("usedIngredientCount"), ::OpenAPI::toJsonValue(used_ingredient_count));
    }
	
    if(used_ingredients.size() > 0){
        obj.insert(QString("usedIngredients"), ::OpenAPI::toJsonValue(used_ingredients));
    } 
	if(m__isSet){
        obj.insert(QString(""), ::OpenAPI::toJsonValue());
    }
    return obj;
}


qint32
OAIInline_response_200_1::getId() const {
    return id;
}
void
OAIInline_response_200_1::setId(const qint32 &id) {
    this->id = id;
    this->m_id_isSet = true;
}


QString
OAIInline_response_200_1::getImage() const {
    return image;
}
void
OAIInline_response_200_1::setImage(const QString &image) {
    this->image = image;
    this->m_image_isSet = true;
}


QString
OAIInline_response_200_1::getImageType() const {
    return image_type;
}
void
OAIInline_response_200_1::setImageType(const QString &image_type) {
    this->image_type = image_type;
    this->m_image_type_isSet = true;
}


qint32
OAIInline_response_200_1::getLikes() const {
    return likes;
}
void
OAIInline_response_200_1::setLikes(const qint32 &likes) {
    this->likes = likes;
    this->m_likes_isSet = true;
}


qint32
OAIInline_response_200_1::getMissedIngredientCount() const {
    return missed_ingredient_count;
}
void
OAIInline_response_200_1::setMissedIngredientCount(const qint32 &missed_ingredient_count) {
    this->missed_ingredient_count = missed_ingredient_count;
    this->m_missed_ingredient_count_isSet = true;
}


QList<OAI_recipes_findByIngredients_missedIngredients>
OAIInline_response_200_1::getMissedIngredients() const {
    return missed_ingredients;
}
void
OAIInline_response_200_1::setMissedIngredients(const QList<OAI_recipes_findByIngredients_missedIngredients> &missed_ingredients) {
    this->missed_ingredients = missed_ingredients;
    this->m_missed_ingredients_isSet = true;
}


QString
OAIInline_response_200_1::getTitle() const {
    return title;
}
void
OAIInline_response_200_1::setTitle(const QString &title) {
    this->title = title;
    this->m_title_isSet = true;
}


QList<OAIObject>
OAIInline_response_200_1::getUnusedIngredients() const {
    return unused_ingredients;
}
void
OAIInline_response_200_1::setUnusedIngredients(const QList<OAIObject> &unused_ingredients) {
    this->unused_ingredients = unused_ingredients;
    this->m_unused_ingredients_isSet = true;
}


OAINumber
OAIInline_response_200_1::getUsedIngredientCount() const {
    return used_ingredient_count;
}
void
OAIInline_response_200_1::setUsedIngredientCount(const OAINumber &used_ingredient_count) {
    this->used_ingredient_count = used_ingredient_count;
    this->m_used_ingredient_count_isSet = true;
}


QList<OAI_recipes_findByIngredients_missedIngredients>
OAIInline_response_200_1::getUsedIngredients() const {
    return used_ingredients;
}
void
OAIInline_response_200_1::setUsedIngredients(const QList<OAI_recipes_findByIngredients_missedIngredients> &used_ingredients) {
    this->used_ingredients = used_ingredients;
    this->m_used_ingredients_isSet = true;
}


QString
OAIInline_response_200_1::get() const {
    return ;
}
void
OAIInline_response_200_1::set(const QString &) {
    this-> = ;
    this->m__isSet = true;
}

bool
OAIInline_response_200_1::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_id_isSet){ isObjectUpdated = true; break;}
    
        if(m_image_isSet){ isObjectUpdated = true; break;}
    
        if(m_image_type_isSet){ isObjectUpdated = true; break;}
    
        if(m_likes_isSet){ isObjectUpdated = true; break;}
    
        if(m_missed_ingredient_count_isSet){ isObjectUpdated = true; break;}
    
        if(missed_ingredients.size() > 0){ isObjectUpdated = true; break;}
    
        if(m_title_isSet){ isObjectUpdated = true; break;}
    
        if(unused_ingredients.size() > 0){ isObjectUpdated = true; break;}
    
        if(used_ingredient_count.isSet()){ isObjectUpdated = true; break;}
    
        if(used_ingredients.size() > 0){ isObjectUpdated = true; break;}
    
        if(m__isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAIInline_response_200_1::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_image_isValid && m_image_type_isValid && m_likes_isValid && m_missed_ingredient_count_isValid && m_missed_ingredients_isValid && m_title_isValid && m_unused_ingredients_isValid && m_used_ingredient_count_isValid && m_used_ingredients_isValid && true;
}

}

