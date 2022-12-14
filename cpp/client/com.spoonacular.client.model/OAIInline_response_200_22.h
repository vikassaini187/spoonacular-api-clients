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
 * OAIInline_response_200_22.h
 *
 * 
 */

#ifndef OAIInline_response_200_22_H
#define OAIInline_response_200_22_H

#include <QJsonObject>


#include "com.spoonacular.client.model\OAIInline_response_200_22_nutrition.h"
#include "com.spoonacular.client.model\OAINumber.h"
#include "com.spoonacular.client.model\OAIObject.h"
#include "com.spoonacular.client.model\OAI_recipes_parseIngredients_estimatedCost.h"
#include <QList>
#include <QString>

#include "OAIObject.h"
#include "OAIEnum.h"

namespace OpenAPI {

class OAIInline_response_200_22: public OAIObject {
public:
    OAIInline_response_200_22();
    OAIInline_response_200_22(QString json);
    ~OAIInline_response_200_22() override;

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    
    qint32 getId() const;
    void setId(const qint32 &id);

    
    QString getOriginal() const;
    void setOriginal(const QString &original);

    
    QString getOriginalName() const;
    void setOriginalName(const QString &original_name);

    
    QString getName() const;
    void setName(const QString &name);

    
    QString getNameClean() const;
    void setNameClean(const QString &name_clean);

    
    OAINumber getAmount() const;
    void setAmount(const OAINumber &amount);

    
    QString getUnit() const;
    void setUnit(const QString &unit);

    
    QString getUnitShort() const;
    void setUnitShort(const QString &unit_short);

    
    QString getUnitLong() const;
    void setUnitLong(const QString &unit_long);

    
    QList<QString> getPossibleUnits() const;
    void setPossibleUnits(const QList<QString> &possible_units);

    
    OAI_recipes_parseIngredients_estimatedCost getEstimatedCost() const;
    void setEstimatedCost(const OAI_recipes_parseIngredients_estimatedCost &estimated_cost);

    
    QString getConsistency() const;
    void setConsistency(const QString &consistency);

    
    QList<QString> getShoppingListUnits() const;
    void setShoppingListUnits(const QList<QString> &shopping_list_units);

    
    QString getAisle() const;
    void setAisle(const QString &aisle);

    
    QString getImage() const;
    void setImage(const QString &image);

    
    QList<OAIObject> getMeta() const;
    void setMeta(const QList<OAIObject> &meta);

    
    OAIInline_response_200_22_nutrition getNutrition() const;
    void setNutrition(const OAIInline_response_200_22_nutrition &nutrition);

    
    QList<QString> getCategoryPath() const;
    void setCategoryPath(const QList<QString> &category_path);

    
    
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    
    qint32 id;
    bool m_id_isSet;
    bool m_id_isValid;
    
    QString original;
    bool m_original_isSet;
    bool m_original_isValid;
    
    QString original_name;
    bool m_original_name_isSet;
    bool m_original_name_isValid;
    
    QString name;
    bool m_name_isSet;
    bool m_name_isValid;
    
    QString name_clean;
    bool m_name_clean_isSet;
    bool m_name_clean_isValid;
    
    OAINumber amount;
    bool m_amount_isSet;
    bool m_amount_isValid;
    
    QString unit;
    bool m_unit_isSet;
    bool m_unit_isValid;
    
    QString unit_short;
    bool m_unit_short_isSet;
    bool m_unit_short_isValid;
    
    QString unit_long;
    bool m_unit_long_isSet;
    bool m_unit_long_isValid;
    
    QList<QString> possible_units;
    bool m_possible_units_isSet;
    bool m_possible_units_isValid;
    
    OAI_recipes_parseIngredients_estimatedCost estimated_cost;
    bool m_estimated_cost_isSet;
    bool m_estimated_cost_isValid;
    
    QString consistency;
    bool m_consistency_isSet;
    bool m_consistency_isValid;
    
    QList<QString> shopping_list_units;
    bool m_shopping_list_units_isSet;
    bool m_shopping_list_units_isValid;
    
    QString aisle;
    bool m_aisle_isSet;
    bool m_aisle_isValid;
    
    QString image;
    bool m_image_isSet;
    bool m_image_isValid;
    
    QList<OAIObject> meta;
    bool m_meta_isSet;
    bool m_meta_isValid;
    
    OAIInline_response_200_22_nutrition nutrition;
    bool m_nutrition_isSet;
    bool m_nutrition_isValid;
    
    QList<QString> category_path;
    bool m_category_path_isSet;
    bool m_category_path_isValid;
    
    };

}

#endif // OAIInline_response_200_22_H
