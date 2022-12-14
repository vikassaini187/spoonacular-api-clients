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
pub struct InlineResponse20042 {
    #[serde(rename = "aisles")]
    pub aisles: Vec<::models::InlineResponse20042Aisles>,
    #[serde(rename = "cost")]
    pub cost: f32,
    #[serde(rename = "startDate")]
    pub start_date: f32,
    #[serde(rename = "endDate")]
    pub end_date: f32,
}

impl InlineResponse20042 {
    pub fn new(aisles: Vec<::models::InlineResponse20042Aisles>, cost: f32, start_date: f32, end_date: f32) -> InlineResponse20042 {
        InlineResponse20042 {
            aisles: aisles,
            cost: cost,
            start_date: start_date,
            end_date: end_date,
        }
    }
}
