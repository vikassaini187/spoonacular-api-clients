/*
 * spoonacular API
 *
 * The spoonacular Nutrition, Recipe, and Food API allows you to access over 380,000 recipes, thousands of ingredients, 800,000 food products, and 100,000 menu items. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.
 *
 * The version of the OpenAPI document: 1.0
 * Contact: mail@spoonacular.com
 * Generated by: https://openapi-generator.tech
 */


#[allow(unused_imports)]
use serde_json::Value;

#[derive(Debug, Serialize, Deserialize)]
pub struct InlineResponse20020 {
    #[serde(rename = "id")]
    pub id: i32,
    #[serde(rename = "original")]
    pub original: String,
    #[serde(rename = "originalName")]
    pub original_name: String,
    #[serde(rename = "name")]
    pub name: String,
    #[serde(rename = "nameClean")]
    pub name_clean: String,
    #[serde(rename = "amount")]
    pub amount: f32,
    #[serde(rename = "unit")]
    pub unit: String,
    #[serde(rename = "unitShort")]
    pub unit_short: String,
    #[serde(rename = "unitLong")]
    pub unit_long: String,
    #[serde(rename = "possibleUnits")]
    pub possible_units: Vec<String>,
    #[serde(rename = "estimatedCost")]
    pub estimated_cost: ::models::RecipesParseIngredientsEstimatedCost,
    #[serde(rename = "consistency")]
    pub consistency: String,
    #[serde(rename = "aisle")]
    pub aisle: String,
    #[serde(rename = "image")]
    pub image: String,
    #[serde(rename = "meta")]
    pub meta: Vec<String>,
    #[serde(rename = "nutrition")]
    pub nutrition: ::models::RecipesParseIngredientsNutrition,
}

impl InlineResponse20020 {
    pub fn new(id: i32, original: String, original_name: String, name: String, name_clean: String, amount: f32, unit: String, unit_short: String, unit_long: String, possible_units: Vec<String>, estimated_cost: ::models::RecipesParseIngredientsEstimatedCost, consistency: String, aisle: String, image: String, meta: Vec<String>, nutrition: ::models::RecipesParseIngredientsNutrition) -> InlineResponse20020 {
        InlineResponse20020 {
            id: id,
            original: original,
            original_name: original_name,
            name: name,
            name_clean: name_clean,
            amount: amount,
            unit: unit,
            unit_short: unit_short,
            unit_long: unit_long,
            possible_units: possible_units,
            estimated_cost: estimated_cost,
            consistency: consistency,
            aisle: aisle,
            image: image,
            meta: meta,
            nutrition: nutrition,
        }
    }
}
