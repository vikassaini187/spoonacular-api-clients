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


#include "OAI_recipes_parseIngredients_nutrition_caloricBreakdown.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAI_recipes_parseIngredients_nutrition_caloricBreakdown::OAI_recipes_parseIngredients_nutrition_caloricBreakdown(QString json) {
    this->init();
    this->fromJson(json);
}

OAI_recipes_parseIngredients_nutrition_caloricBreakdown::OAI_recipes_parseIngredients_nutrition_caloricBreakdown() {
    this->init();
}

OAI_recipes_parseIngredients_nutrition_caloricBreakdown::~OAI_recipes_parseIngredients_nutrition_caloricBreakdown() {

}

void
OAI_recipes_parseIngredients_nutrition_caloricBreakdown::init() {
    
    m_percent_protein_isSet = false;
    m_percent_protein_isValid = false;
    
    m_percent_fat_isSet = false;
    m_percent_fat_isValid = false;
    
    m_percent_carbs_isSet = false;
    m_percent_carbs_isValid = false;
    }

void
OAI_recipes_parseIngredients_nutrition_caloricBreakdown::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAI_recipes_parseIngredients_nutrition_caloricBreakdown::fromJsonObject(QJsonObject json) {
    
    m_percent_protein_isValid = ::OpenAPI::fromJsonValue(percent_protein, json[QString("percentProtein")]);
    
    
    m_percent_fat_isValid = ::OpenAPI::fromJsonValue(percent_fat, json[QString("percentFat")]);
    
    
    m_percent_carbs_isValid = ::OpenAPI::fromJsonValue(percent_carbs, json[QString("percentCarbs")]);
    
    
}

QString
OAI_recipes_parseIngredients_nutrition_caloricBreakdown::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAI_recipes_parseIngredients_nutrition_caloricBreakdown::asJsonObject() const {
    QJsonObject obj;
	if(percent_protein.isSet()){
        obj.insert(QString("percentProtein"), ::OpenAPI::toJsonValue(percent_protein));
    }
	if(percent_fat.isSet()){
        obj.insert(QString("percentFat"), ::OpenAPI::toJsonValue(percent_fat));
    }
	if(percent_carbs.isSet()){
        obj.insert(QString("percentCarbs"), ::OpenAPI::toJsonValue(percent_carbs));
    }
    return obj;
}


OAINumber
OAI_recipes_parseIngredients_nutrition_caloricBreakdown::getPercentProtein() const {
    return percent_protein;
}
void
OAI_recipes_parseIngredients_nutrition_caloricBreakdown::setPercentProtein(const OAINumber &percent_protein) {
    this->percent_protein = percent_protein;
    this->m_percent_protein_isSet = true;
}


OAINumber
OAI_recipes_parseIngredients_nutrition_caloricBreakdown::getPercentFat() const {
    return percent_fat;
}
void
OAI_recipes_parseIngredients_nutrition_caloricBreakdown::setPercentFat(const OAINumber &percent_fat) {
    this->percent_fat = percent_fat;
    this->m_percent_fat_isSet = true;
}


OAINumber
OAI_recipes_parseIngredients_nutrition_caloricBreakdown::getPercentCarbs() const {
    return percent_carbs;
}
void
OAI_recipes_parseIngredients_nutrition_caloricBreakdown::setPercentCarbs(const OAINumber &percent_carbs) {
    this->percent_carbs = percent_carbs;
    this->m_percent_carbs_isSet = true;
}

bool
OAI_recipes_parseIngredients_nutrition_caloricBreakdown::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(percent_protein.isSet()){ isObjectUpdated = true; break;}
    
        if(percent_fat.isSet()){ isObjectUpdated = true; break;}
    
        if(percent_carbs.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAI_recipes_parseIngredients_nutrition_caloricBreakdown::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_percent_protein_isValid && m_percent_fat_isValid && m_percent_carbs_isValid && true;
}

}

