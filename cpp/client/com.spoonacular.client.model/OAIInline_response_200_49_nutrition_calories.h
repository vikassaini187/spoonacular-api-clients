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

/*
 * OAIInline_response_200_49_nutrition_calories.h
 *
 * 
 */

#ifndef OAIInline_response_200_49_nutrition_calories_H
#define OAIInline_response_200_49_nutrition_calories_H

#include <QJsonObject>


#include "com.spoonacular.client.model\OAIInline_response_200_49_nutrition_calories_confidenceRange95Percent.h"
#include "com.spoonacular.client.model\OAINumber.h"
#include <QString>

#include "OAIObject.h"
#include "OAIEnum.h"

namespace OpenAPI {

class OAIInline_response_200_49_nutrition_calories: public OAIObject {
public:
    OAIInline_response_200_49_nutrition_calories();
    OAIInline_response_200_49_nutrition_calories(QString json);
    ~OAIInline_response_200_49_nutrition_calories() override;

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    
    OAINumber getValue() const;
    void setValue(const OAINumber &value);

    
    QString getUnit() const;
    void setUnit(const QString &unit);

    
    OAIInline_response_200_49_nutrition_calories_confidenceRange95Percent getConfidenceRange95Percent() const;
    void setConfidenceRange95Percent(const OAIInline_response_200_49_nutrition_calories_confidenceRange95Percent &confidence_range95_percent);

    
    OAINumber getStandardDeviation() const;
    void setStandardDeviation(const OAINumber &standard_deviation);

    
    
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    
    OAINumber value;
    bool m_value_isSet;
    bool m_value_isValid;
    
    QString unit;
    bool m_unit_isSet;
    bool m_unit_isValid;
    
    OAIInline_response_200_49_nutrition_calories_confidenceRange95Percent confidence_range95_percent;
    bool m_confidence_range95_percent_isSet;
    bool m_confidence_range95_percent_isValid;
    
    OAINumber standard_deviation;
    bool m_standard_deviation_isSet;
    bool m_standard_deviation_isValid;
    
    };

}

#endif // OAIInline_response_200_49_nutrition_calories_H
