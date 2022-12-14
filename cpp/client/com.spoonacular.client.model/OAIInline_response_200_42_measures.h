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
 * OAIInline_response_200_42_measures.h
 *
 * 
 */

#ifndef OAIInline_response_200_42_measures_H
#define OAIInline_response_200_42_measures_H

#include <QJsonObject>


#include "com.spoonacular.client.model\OAI_recipes_parseIngredients_nutrition_weightPerServing.h"

#include "OAIObject.h"
#include "OAIEnum.h"

namespace OpenAPI {

class OAIInline_response_200_42_measures: public OAIObject {
public:
    OAIInline_response_200_42_measures();
    OAIInline_response_200_42_measures(QString json);
    ~OAIInline_response_200_42_measures() override;

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    
    OAI_recipes_parseIngredients_nutrition_weightPerServing getOriginal() const;
    void setOriginal(const OAI_recipes_parseIngredients_nutrition_weightPerServing &original);

    
    OAI_recipes_parseIngredients_nutrition_weightPerServing getMetric() const;
    void setMetric(const OAI_recipes_parseIngredients_nutrition_weightPerServing &metric);

    
    OAI_recipes_parseIngredients_nutrition_weightPerServing getUs() const;
    void setUs(const OAI_recipes_parseIngredients_nutrition_weightPerServing &us);

    
    
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    
    OAI_recipes_parseIngredients_nutrition_weightPerServing original;
    bool m_original_isSet;
    bool m_original_isValid;
    
    OAI_recipes_parseIngredients_nutrition_weightPerServing metric;
    bool m_metric_isSet;
    bool m_metric_isValid;
    
    OAI_recipes_parseIngredients_nutrition_weightPerServing us;
    bool m_us_isSet;
    bool m_us_isValid;
    
    };

}

#endif // OAIInline_response_200_42_measures_H
