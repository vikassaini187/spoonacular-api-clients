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
 * OAIInline_response_200_results.h
 *
 * 
 */

#ifndef OAIInline_response_200_results_H
#define OAIInline_response_200_results_H

#include <QJsonObject>


#include "com.spoonacular.client.model\OAINumber.h"
#include <QString>

#include "OAIObject.h"
#include "OAIEnum.h"

namespace OpenAPI {

class OAIInline_response_200_results: public OAIObject {
public:
    OAIInline_response_200_results();
    OAIInline_response_200_results(QString json);
    ~OAIInline_response_200_results() override;

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    
    qint32 getId() const;
    void setId(const qint32 &id);

    
    QString getTitle() const;
    void setTitle(const QString &title);

    
    OAINumber getCalories() const;
    void setCalories(const OAINumber &calories);

    
    QString getCarbs() const;
    void setCarbs(const QString &carbs);

    
    QString getFat() const;
    void setFat(const QString &fat);

    
    QString getImage() const;
    void setImage(const QString &image);

    
    QString getImageType() const;
    void setImageType(const QString &image_type);

    
    QString getProtein() const;
    void setProtein(const QString &protein);

    
    
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    
    qint32 id;
    bool m_id_isSet;
    bool m_id_isValid;
    
    QString title;
    bool m_title_isSet;
    bool m_title_isValid;
    
    OAINumber calories;
    bool m_calories_isSet;
    bool m_calories_isValid;
    
    QString carbs;
    bool m_carbs_isSet;
    bool m_carbs_isValid;
    
    QString fat;
    bool m_fat_isSet;
    bool m_fat_isValid;
    
    QString image;
    bool m_image_isSet;
    bool m_image_isValid;
    
    QString image_type;
    bool m_image_type_isSet;
    bool m_image_type_isValid;
    
    QString protein;
    bool m_protein_isSet;
    bool m_protein_isValid;
    
    };

}

#endif // OAIInline_response_200_results_H
