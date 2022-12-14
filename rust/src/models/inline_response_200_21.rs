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
pub struct InlineResponse20021 {
    #[serde(rename = "calories")]
    pub calories: ::models::InlineResponse20021Calories,
    #[serde(rename = "carbs")]
    pub carbs: ::models::InlineResponse20021Calories,
    #[serde(rename = "fat")]
    pub fat: ::models::InlineResponse20021Calories,
    #[serde(rename = "protein")]
    pub protein: ::models::InlineResponse20021Calories,
    #[serde(rename = "recipesUsed")]
    pub recipes_used: i32,
}

impl InlineResponse20021 {
    pub fn new(calories: ::models::InlineResponse20021Calories, carbs: ::models::InlineResponse20021Calories, fat: ::models::InlineResponse20021Calories, protein: ::models::InlineResponse20021Calories, recipes_used: i32) -> InlineResponse20021 {
        InlineResponse20021 {
            calories: calories,
            carbs: carbs,
            fat: fat,
            protein: protein,
            recipes_used: recipes_used,
        }
    }
}
