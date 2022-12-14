# Rust API client for spoonacular

The spoonacular Nutrition, Recipe, and Food API allows you to access over 380,000 recipes, thousands of ingredients, 800,000 food products, and 100,000 menu items. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.

## Overview

This API client was generated by the [OpenAPI Generator](https://openapi-generator.tech) project.  By using the [openapi-spec](https://openapis.org) from a remote server, you can easily generate an API client.

- API version: 1.0
- Package version: 1.0.0
- Build package: org.openapitools.codegen.languages.RustClientCodegen
For more information, please visit [https://spoonacular.com/contact](https://spoonacular.com/contact)

## Installation

Put the package under your project folder and add the following in import:

```
    "./spoonacular"
```

## Documentation for API Endpoints

All URIs are relative to *https://api.spoonacular.com*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*IngredientsApi* | [**autocomplete_ingredient_search**](docs/IngredientsApi.md#autocomplete_ingredient_search) | **Get** /food/ingredients/autocomplete | Autocomplete Ingredient Search
*IngredientsApi* | [**compute_ingredient_amount**](docs/IngredientsApi.md#compute_ingredient_amount) | **Get** /food/ingredients/{id}/amount | Compute Ingredient Amount
*IngredientsApi* | [**get_ingredient_information**](docs/IngredientsApi.md#get_ingredient_information) | **Get** /food/ingredients/{id}/information | Get Ingredient Information
*IngredientsApi* | [**get_ingredient_substitutes**](docs/IngredientsApi.md#get_ingredient_substitutes) | **Get** /food/ingredients/substitutes | Get Ingredient Substitutes
*IngredientsApi* | [**get_ingredient_substitutes_by_id**](docs/IngredientsApi.md#get_ingredient_substitutes_by_id) | **Get** /food/ingredients/{id}/substitutes | Get Ingredient Substitutes by ID
*IngredientsApi* | [**ingredient_search**](docs/IngredientsApi.md#ingredient_search) | **Get** /food/ingredients/search | Ingredient Search
*IngredientsApi* | [**ingredients_by_id_image**](docs/IngredientsApi.md#ingredients_by_id_image) | **Get** /recipes/{id}/ingredientWidget.png | Ingredients by ID Image
*IngredientsApi* | [**map_ingredients_to_grocery_products**](docs/IngredientsApi.md#map_ingredients_to_grocery_products) | **Post** /food/ingredients/map | Map Ingredients to Grocery Products
*IngredientsApi* | [**visualize_ingredients**](docs/IngredientsApi.md#visualize_ingredients) | **Post** /recipes/visualizeIngredients | Ingredients Widget
*MealPlanningApi* | [**add_meal_plan_template**](docs/MealPlanningApi.md#add_meal_plan_template) | **Post** /mealplanner/{username}/templates | Add Meal Plan Template
*MealPlanningApi* | [**add_to_meal_plan**](docs/MealPlanningApi.md#add_to_meal_plan) | **Post** /mealplanner/{username}/items | Add to Meal Plan
*MealPlanningApi* | [**add_to_shopping_list**](docs/MealPlanningApi.md#add_to_shopping_list) | **Post** /mealplanner/{username}/shopping-list/items | Add to Shopping List
*MealPlanningApi* | [**clear_meal_plan_day**](docs/MealPlanningApi.md#clear_meal_plan_day) | **Delete** /mealplanner/{username}/day/{date} | Clear Meal Plan Day
*MealPlanningApi* | [**connect_user**](docs/MealPlanningApi.md#connect_user) | **Post** /users/connect | Connect User
*MealPlanningApi* | [**delete_from_meal_plan**](docs/MealPlanningApi.md#delete_from_meal_plan) | **Delete** /mealplanner/{username}/items/{id} | Delete from Meal Plan
*MealPlanningApi* | [**delete_from_shopping_list**](docs/MealPlanningApi.md#delete_from_shopping_list) | **Delete** /mealplanner/{username}/shopping-list/items/{id} | Delete from Shopping List
*MealPlanningApi* | [**delete_meal_plan_template**](docs/MealPlanningApi.md#delete_meal_plan_template) | **Delete** /mealplanner/{username}/templates/{id} | Delete Meal Plan Template
*MealPlanningApi* | [**generate_meal_plan**](docs/MealPlanningApi.md#generate_meal_plan) | **Get** /mealplanner/generate | Generate Meal Plan
*MealPlanningApi* | [**generate_shopping_list**](docs/MealPlanningApi.md#generate_shopping_list) | **Post** /mealplanner/{username}/shopping-list/{start-date}/{end-date} | Generate Shopping List
*MealPlanningApi* | [**get_meal_plan_template**](docs/MealPlanningApi.md#get_meal_plan_template) | **Get** /mealplanner/{username}/templates/{id} | Get Meal Plan Template
*MealPlanningApi* | [**get_meal_plan_templates**](docs/MealPlanningApi.md#get_meal_plan_templates) | **Get** /mealplanner/{username}/templates | Get Meal Plan Templates
*MealPlanningApi* | [**get_meal_plan_week**](docs/MealPlanningApi.md#get_meal_plan_week) | **Get** /mealplanner/{username}/week/{start-date} | Get Meal Plan Week
*MealPlanningApi* | [**get_shopping_list**](docs/MealPlanningApi.md#get_shopping_list) | **Get** /mealplanner/{username}/shopping-list | Get Shopping List
*MenuItemsApi* | [**autocomplete_menu_item_search**](docs/MenuItemsApi.md#autocomplete_menu_item_search) | **Get** /food/menuItems/suggest | Autocomplete Menu Item Search
*MenuItemsApi* | [**get_menu_item_information**](docs/MenuItemsApi.md#get_menu_item_information) | **Get** /food/menuItems/{id} | Get Menu Item Information
*MenuItemsApi* | [**menu_item_nutrition_by_id_image**](docs/MenuItemsApi.md#menu_item_nutrition_by_id_image) | **Get** /food/menuItems/{id}/nutritionWidget.png | Menu Item Nutrition by ID Image
*MenuItemsApi* | [**menu_item_nutrition_label_image**](docs/MenuItemsApi.md#menu_item_nutrition_label_image) | **Get** /food/menuItems/{id}/nutritionLabel.png | Menu Item Nutrition Label Image
*MenuItemsApi* | [**menu_item_nutrition_label_widget**](docs/MenuItemsApi.md#menu_item_nutrition_label_widget) | **Get** /food/menuItems/{id}/nutritionLabel | Menu Item Nutrition Label Widget
*MenuItemsApi* | [**search_menu_items**](docs/MenuItemsApi.md#search_menu_items) | **Get** /food/menuItems/search | Search Menu Items
*MenuItemsApi* | [**visualize_menu_item_nutrition_by_id**](docs/MenuItemsApi.md#visualize_menu_item_nutrition_by_id) | **Get** /food/menuItems/{id}/nutritionWidget | Menu Item Nutrition by ID Widget
*MiscApi* | [**detect_food_in_text**](docs/MiscApi.md#detect_food_in_text) | **Post** /food/detect | Detect Food in Text
*MiscApi* | [**get_a_random_food_joke**](docs/MiscApi.md#get_a_random_food_joke) | **Get** /food/jokes/random | Random Food Joke
*MiscApi* | [**get_conversation_suggests**](docs/MiscApi.md#get_conversation_suggests) | **Get** /food/converse/suggest | Conversation Suggests
*MiscApi* | [**get_random_food_trivia**](docs/MiscApi.md#get_random_food_trivia) | **Get** /food/trivia/random | Random Food Trivia
*MiscApi* | [**image_analysis_by_url**](docs/MiscApi.md#image_analysis_by_url) | **Get** /food/images/analyze | Image Analysis by URL
*MiscApi* | [**image_classification_by_url**](docs/MiscApi.md#image_classification_by_url) | **Get** /food/images/classify | Image Classification by URL
*MiscApi* | [**search_all_food**](docs/MiscApi.md#search_all_food) | **Get** /food/search | Search All Food
*MiscApi* | [**search_custom_foods**](docs/MiscApi.md#search_custom_foods) | **Get** /food/customFoods/search | Search Custom Foods
*MiscApi* | [**search_food_videos**](docs/MiscApi.md#search_food_videos) | **Get** /food/videos/search | Search Food Videos
*MiscApi* | [**search_site_content**](docs/MiscApi.md#search_site_content) | **Get** /food/site/search | Search Site Content
*MiscApi* | [**talk_to_chatbot**](docs/MiscApi.md#talk_to_chatbot) | **Get** /food/converse | Talk to Chatbot
*ProductsApi* | [**autocomplete_product_search**](docs/ProductsApi.md#autocomplete_product_search) | **Get** /food/products/suggest | Autocomplete Product Search
*ProductsApi* | [**classify_grocery_product**](docs/ProductsApi.md#classify_grocery_product) | **Post** /food/products/classify | Classify Grocery Product
*ProductsApi* | [**classify_grocery_product_bulk**](docs/ProductsApi.md#classify_grocery_product_bulk) | **Post** /food/products/classifyBatch | Classify Grocery Product Bulk
*ProductsApi* | [**get_comparable_products**](docs/ProductsApi.md#get_comparable_products) | **Get** /food/products/upc/{upc}/comparable | Get Comparable Products
*ProductsApi* | [**get_product_information**](docs/ProductsApi.md#get_product_information) | **Get** /food/products/{id} | Get Product Information
*ProductsApi* | [**product_nutrition_by_id_image**](docs/ProductsApi.md#product_nutrition_by_id_image) | **Get** /food/products/{id}/nutritionWidget.png | Product Nutrition by ID Image
*ProductsApi* | [**product_nutrition_label_image**](docs/ProductsApi.md#product_nutrition_label_image) | **Get** /food/products/{id}/nutritionLabel.png | Product Nutrition Label Image
*ProductsApi* | [**product_nutrition_label_widget**](docs/ProductsApi.md#product_nutrition_label_widget) | **Get** /food/products/{id}/nutritionLabel | Product Nutrition Label Widget
*ProductsApi* | [**search_grocery_products**](docs/ProductsApi.md#search_grocery_products) | **Get** /food/products/search | Search Grocery Products
*ProductsApi* | [**search_grocery_products_by_upc**](docs/ProductsApi.md#search_grocery_products_by_upc) | **Get** /food/products/upc/{upc} | Search Grocery Products by UPC
*ProductsApi* | [**visualize_product_nutrition_by_id**](docs/ProductsApi.md#visualize_product_nutrition_by_id) | **Get** /food/products/{id}/nutritionWidget | Product Nutrition by ID Widget
*RecipesApi* | [**analyze_a_recipe_search_query**](docs/RecipesApi.md#analyze_a_recipe_search_query) | **Get** /recipes/queries/analyze | Analyze a Recipe Search Query
*RecipesApi* | [**analyze_recipe_instructions**](docs/RecipesApi.md#analyze_recipe_instructions) | **Post** /recipes/analyzeInstructions | Analyze Recipe Instructions
*RecipesApi* | [**autocomplete_recipe_search**](docs/RecipesApi.md#autocomplete_recipe_search) | **Get** /recipes/autocomplete | Autocomplete Recipe Search
*RecipesApi* | [**classify_cuisine**](docs/RecipesApi.md#classify_cuisine) | **Post** /recipes/cuisine | Classify Cuisine
*RecipesApi* | [**compute_glycemic_load**](docs/RecipesApi.md#compute_glycemic_load) | **Post** /food/ingredients/glycemicLoad | Compute Glycemic Load
*RecipesApi* | [**convert_amounts**](docs/RecipesApi.md#convert_amounts) | **Get** /recipes/convert | Convert Amounts
*RecipesApi* | [**create_recipe_card**](docs/RecipesApi.md#create_recipe_card) | **Post** /recipes/visualizeRecipe | Create Recipe Card
*RecipesApi* | [**equipment_by_id_image**](docs/RecipesApi.md#equipment_by_id_image) | **Get** /recipes/{id}/equipmentWidget.png | Equipment by ID Image
*RecipesApi* | [**extract_recipe_from_website**](docs/RecipesApi.md#extract_recipe_from_website) | **Get** /recipes/extract | Extract Recipe from Website
*RecipesApi* | [**get_analyzed_recipe_instructions**](docs/RecipesApi.md#get_analyzed_recipe_instructions) | **Get** /recipes/{id}/analyzedInstructions | Get Analyzed Recipe Instructions
*RecipesApi* | [**get_random_recipes**](docs/RecipesApi.md#get_random_recipes) | **Get** /recipes/random | Get Random Recipes
*RecipesApi* | [**get_recipe_equipment_by_id**](docs/RecipesApi.md#get_recipe_equipment_by_id) | **Get** /recipes/{id}/equipmentWidget.json | Equipment by ID
*RecipesApi* | [**get_recipe_information**](docs/RecipesApi.md#get_recipe_information) | **Get** /recipes/{id}/information | Get Recipe Information
*RecipesApi* | [**get_recipe_information_bulk**](docs/RecipesApi.md#get_recipe_information_bulk) | **Get** /recipes/informationBulk | Get Recipe Information Bulk
*RecipesApi* | [**get_recipe_ingredients_by_id**](docs/RecipesApi.md#get_recipe_ingredients_by_id) | **Get** /recipes/{id}/ingredientWidget.json | Ingredients by ID
*RecipesApi* | [**get_recipe_nutrition_widget_by_id**](docs/RecipesApi.md#get_recipe_nutrition_widget_by_id) | **Get** /recipes/{id}/nutritionWidget.json | Nutrition by ID
*RecipesApi* | [**get_recipe_price_breakdown_by_id**](docs/RecipesApi.md#get_recipe_price_breakdown_by_id) | **Get** /recipes/{id}/priceBreakdownWidget.json | Price Breakdown by ID
*RecipesApi* | [**get_recipe_taste_by_id**](docs/RecipesApi.md#get_recipe_taste_by_id) | **Get** /recipes/{id}/tasteWidget.json | Taste by ID
*RecipesApi* | [**get_similar_recipes**](docs/RecipesApi.md#get_similar_recipes) | **Get** /recipes/{id}/similar | Get Similar Recipes
*RecipesApi* | [**guess_nutrition_by_dish_name**](docs/RecipesApi.md#guess_nutrition_by_dish_name) | **Get** /recipes/guessNutrition | Guess Nutrition by Dish Name
*RecipesApi* | [**ingredients_by_id_image**](docs/RecipesApi.md#ingredients_by_id_image) | **Get** /recipes/{id}/ingredientWidget.png | Ingredients by ID Image
*RecipesApi* | [**parse_ingredients**](docs/RecipesApi.md#parse_ingredients) | **Post** /recipes/parseIngredients | Parse Ingredients
*RecipesApi* | [**price_breakdown_by_id_image**](docs/RecipesApi.md#price_breakdown_by_id_image) | **Get** /recipes/{id}/priceBreakdownWidget.png | Price Breakdown by ID Image
*RecipesApi* | [**quick_answer**](docs/RecipesApi.md#quick_answer) | **Get** /recipes/quickAnswer | Quick Answer
*RecipesApi* | [**recipe_nutrition_by_id_image**](docs/RecipesApi.md#recipe_nutrition_by_id_image) | **Get** /recipes/{id}/nutritionWidget.png | Recipe Nutrition by ID Image
*RecipesApi* | [**recipe_nutrition_label_image**](docs/RecipesApi.md#recipe_nutrition_label_image) | **Get** /recipes/{id}/nutritionLabel.png | Recipe Nutrition Label Image
*RecipesApi* | [**recipe_nutrition_label_widget**](docs/RecipesApi.md#recipe_nutrition_label_widget) | **Get** /recipes/{id}/nutritionLabel | Recipe Nutrition Label Widget
*RecipesApi* | [**recipe_taste_by_id_image**](docs/RecipesApi.md#recipe_taste_by_id_image) | **Get** /recipes/{id}/tasteWidget.png | Recipe Taste by ID Image
*RecipesApi* | [**search_recipes**](docs/RecipesApi.md#search_recipes) | **Get** /recipes/complexSearch | Search Recipes
*RecipesApi* | [**search_recipes_by_ingredients**](docs/RecipesApi.md#search_recipes_by_ingredients) | **Get** /recipes/findByIngredients | Search Recipes by Ingredients
*RecipesApi* | [**search_recipes_by_nutrients**](docs/RecipesApi.md#search_recipes_by_nutrients) | **Get** /recipes/findByNutrients | Search Recipes by Nutrients
*RecipesApi* | [**summarize_recipe**](docs/RecipesApi.md#summarize_recipe) | **Get** /recipes/{id}/summary | Summarize Recipe
*RecipesApi* | [**visualize_equipment**](docs/RecipesApi.md#visualize_equipment) | **Post** /recipes/visualizeEquipment | Equipment Widget
*RecipesApi* | [**visualize_price_breakdown**](docs/RecipesApi.md#visualize_price_breakdown) | **Post** /recipes/visualizePriceEstimator | Price Breakdown Widget
*RecipesApi* | [**visualize_recipe_equipment_by_id**](docs/RecipesApi.md#visualize_recipe_equipment_by_id) | **Get** /recipes/{id}/equipmentWidget | Equipment by ID Widget
*RecipesApi* | [**visualize_recipe_ingredients_by_id**](docs/RecipesApi.md#visualize_recipe_ingredients_by_id) | **Get** /recipes/{id}/ingredientWidget | Ingredients by ID Widget
*RecipesApi* | [**visualize_recipe_nutrition**](docs/RecipesApi.md#visualize_recipe_nutrition) | **Post** /recipes/visualizeNutrition | Recipe Nutrition Widget
*RecipesApi* | [**visualize_recipe_nutrition_by_id**](docs/RecipesApi.md#visualize_recipe_nutrition_by_id) | **Get** /recipes/{id}/nutritionWidget | Recipe Nutrition by ID Widget
*RecipesApi* | [**visualize_recipe_price_breakdown_by_id**](docs/RecipesApi.md#visualize_recipe_price_breakdown_by_id) | **Get** /recipes/{id}/priceBreakdownWidget | Price Breakdown by ID Widget
*RecipesApi* | [**visualize_recipe_taste**](docs/RecipesApi.md#visualize_recipe_taste) | **Post** /recipes/visualizeTaste | Recipe Taste Widget
*RecipesApi* | [**visualize_recipe_taste_by_id**](docs/RecipesApi.md#visualize_recipe_taste_by_id) | **Get** /recipes/{id}/tasteWidget | Recipe Taste by ID Widget
*WineApi* | [**get_dish_pairing_for_wine**](docs/WineApi.md#get_dish_pairing_for_wine) | **Get** /food/wine/dishes | Dish Pairing for Wine
*WineApi* | [**get_wine_description**](docs/WineApi.md#get_wine_description) | **Get** /food/wine/description | Wine Description
*WineApi* | [**get_wine_pairing**](docs/WineApi.md#get_wine_pairing) | **Get** /food/wine/pairing | Wine Pairing
*WineApi* | [**get_wine_recommendation**](docs/WineApi.md#get_wine_recommendation) | **Get** /food/wine/recommendation | Wine Recommendation


## Documentation For Models

 - [FoodIngredientsMapProducts](docs/FoodIngredientsMapProducts.md)
 - [InlineObject](docs/InlineObject.md)
 - [InlineObject1](docs/InlineObject1.md)
 - [InlineObject10](docs/InlineObject10.md)
 - [InlineObject2](docs/InlineObject2.md)
 - [InlineObject3](docs/InlineObject3.md)
 - [InlineObject4](docs/InlineObject4.md)
 - [InlineObject5](docs/InlineObject5.md)
 - [InlineObject6](docs/InlineObject6.md)
 - [InlineObject7](docs/InlineObject7.md)
 - [InlineObject8](docs/InlineObject8.md)
 - [InlineObject9](docs/InlineObject9.md)
 - [InlineResponse200](docs/InlineResponse200.md)
 - [InlineResponse2001](docs/InlineResponse2001.md)
 - [InlineResponse20010](docs/InlineResponse20010.md)
 - [InlineResponse20010Amount](docs/InlineResponse20010Amount.md)
 - [InlineResponse20010AmountMetric](docs/InlineResponse20010AmountMetric.md)
 - [InlineResponse20010Ingredients](docs/InlineResponse20010Ingredients.md)
 - [InlineResponse20011](docs/InlineResponse20011.md)
 - [InlineResponse20011Ingredients](docs/InlineResponse20011Ingredients.md)
 - [InlineResponse20012](docs/InlineResponse20012.md)
 - [InlineResponse20013](docs/InlineResponse20013.md)
 - [InlineResponse20013Ingredients](docs/InlineResponse20013Ingredients.md)
 - [InlineResponse20013Ingredients1](docs/InlineResponse20013Ingredients1.md)
 - [InlineResponse20013ParsedInstructions](docs/InlineResponse20013ParsedInstructions.md)
 - [InlineResponse20013Steps](docs/InlineResponse20013Steps.md)
 - [InlineResponse20014](docs/InlineResponse20014.md)
 - [InlineResponse20015](docs/InlineResponse20015.md)
 - [InlineResponse20016](docs/InlineResponse20016.md)
 - [InlineResponse20017](docs/InlineResponse20017.md)
 - [InlineResponse20018](docs/InlineResponse20018.md)
 - [InlineResponse20018Dishes](docs/InlineResponse20018Dishes.md)
 - [InlineResponse20018Ingredients](docs/InlineResponse20018Ingredients.md)
 - [InlineResponse20019](docs/InlineResponse20019.md)
 - [InlineResponse2002](docs/InlineResponse2002.md)
 - [InlineResponse20020](docs/InlineResponse20020.md)
 - [InlineResponse20021](docs/InlineResponse20021.md)
 - [InlineResponse20021Calories](docs/InlineResponse20021Calories.md)
 - [InlineResponse20021CaloriesConfidenceRange95Percent](docs/InlineResponse20021CaloriesConfidenceRange95Percent.md)
 - [InlineResponse20022](docs/InlineResponse20022.md)
 - [InlineResponse20022Nutrition](docs/InlineResponse20022Nutrition.md)
 - [InlineResponse20023](docs/InlineResponse20023.md)
 - [InlineResponse20023Ingredients](docs/InlineResponse20023Ingredients.md)
 - [InlineResponse20024](docs/InlineResponse20024.md)
 - [InlineResponse20025](docs/InlineResponse20025.md)
 - [InlineResponse20025Results](docs/InlineResponse20025Results.md)
 - [InlineResponse20026](docs/InlineResponse20026.md)
 - [InlineResponse20027](docs/InlineResponse20027.md)
 - [InlineResponse20028](docs/InlineResponse20028.md)
 - [InlineResponse20028Ingredients](docs/InlineResponse20028Ingredients.md)
 - [InlineResponse20028Nutrition](docs/InlineResponse20028Nutrition.md)
 - [InlineResponse20028Servings](docs/InlineResponse20028Servings.md)
 - [InlineResponse20029](docs/InlineResponse20029.md)
 - [InlineResponse20029CustomFoods](docs/InlineResponse20029CustomFoods.md)
 - [InlineResponse2003](docs/InlineResponse2003.md)
 - [InlineResponse20030](docs/InlineResponse20030.md)
 - [InlineResponse20030Ingredients](docs/InlineResponse20030Ingredients.md)
 - [InlineResponse20031](docs/InlineResponse20031.md)
 - [InlineResponse20031ComparableProducts](docs/InlineResponse20031ComparableProducts.md)
 - [InlineResponse20031ComparableProductsProtein](docs/InlineResponse20031ComparableProductsProtein.md)
 - [InlineResponse20032](docs/InlineResponse20032.md)
 - [InlineResponse20032Results](docs/InlineResponse20032Results.md)
 - [InlineResponse20033](docs/InlineResponse20033.md)
 - [InlineResponse20034](docs/InlineResponse20034.md)
 - [InlineResponse20035](docs/InlineResponse20035.md)
 - [InlineResponse20035MenuItems](docs/InlineResponse20035MenuItems.md)
 - [InlineResponse20036](docs/InlineResponse20036.md)
 - [InlineResponse20037](docs/InlineResponse20037.md)
 - [InlineResponse20037Nutrients](docs/InlineResponse20037Nutrients.md)
 - [InlineResponse20038](docs/InlineResponse20038.md)
 - [InlineResponse20038Days](docs/InlineResponse20038Days.md)
 - [InlineResponse20038Items](docs/InlineResponse20038Items.md)
 - [InlineResponse20038NutritionSummary](docs/InlineResponse20038NutritionSummary.md)
 - [InlineResponse20038NutritionSummaryNutrients](docs/InlineResponse20038NutritionSummaryNutrients.md)
 - [InlineResponse20038Value](docs/InlineResponse20038Value.md)
 - [InlineResponse20039](docs/InlineResponse20039.md)
 - [InlineResponse2003ExtendedIngredients](docs/InlineResponse2003ExtendedIngredients.md)
 - [InlineResponse2003Measures](docs/InlineResponse2003Measures.md)
 - [InlineResponse2003MeasuresMetric](docs/InlineResponse2003MeasuresMetric.md)
 - [InlineResponse2003WinePairing](docs/InlineResponse2003WinePairing.md)
 - [InlineResponse2003WinePairingProductMatches](docs/InlineResponse2003WinePairingProductMatches.md)
 - [InlineResponse2004](docs/InlineResponse2004.md)
 - [InlineResponse20040](docs/InlineResponse20040.md)
 - [InlineResponse20040Items](docs/InlineResponse20040Items.md)
 - [InlineResponse20040Value](docs/InlineResponse20040Value.md)
 - [InlineResponse20041](docs/InlineResponse20041.md)
 - [InlineResponse20041Days](docs/InlineResponse20041Days.md)
 - [InlineResponse20041Items](docs/InlineResponse20041Items.md)
 - [InlineResponse20041Value](docs/InlineResponse20041Value.md)
 - [InlineResponse20042](docs/InlineResponse20042.md)
 - [InlineResponse20042Aisles](docs/InlineResponse20042Aisles.md)
 - [InlineResponse20042Items](docs/InlineResponse20042Items.md)
 - [InlineResponse20042Measures](docs/InlineResponse20042Measures.md)
 - [InlineResponse20043](docs/InlineResponse20043.md)
 - [InlineResponse20044](docs/InlineResponse20044.md)
 - [InlineResponse20045](docs/InlineResponse20045.md)
 - [InlineResponse20045ProductMatches](docs/InlineResponse20045ProductMatches.md)
 - [InlineResponse20046](docs/InlineResponse20046.md)
 - [InlineResponse20047](docs/InlineResponse20047.md)
 - [InlineResponse20047RecommendedWines](docs/InlineResponse20047RecommendedWines.md)
 - [InlineResponse20048](docs/InlineResponse20048.md)
 - [InlineResponse20049](docs/InlineResponse20049.md)
 - [InlineResponse20049Category](docs/InlineResponse20049Category.md)
 - [InlineResponse20049Nutrition](docs/InlineResponse20049Nutrition.md)
 - [InlineResponse20049NutritionCalories](docs/InlineResponse20049NutritionCalories.md)
 - [InlineResponse20049NutritionCaloriesConfidenceRange95Percent](docs/InlineResponse20049NutritionCaloriesConfidenceRange95Percent.md)
 - [InlineResponse20049Recipes](docs/InlineResponse20049Recipes.md)
 - [InlineResponse2005](docs/InlineResponse2005.md)
 - [InlineResponse20050](docs/InlineResponse20050.md)
 - [InlineResponse20051](docs/InlineResponse20051.md)
 - [InlineResponse20052](docs/InlineResponse20052.md)
 - [InlineResponse20053](docs/InlineResponse20053.md)
 - [InlineResponse20053Results](docs/InlineResponse20053Results.md)
 - [InlineResponse20053SearchResults](docs/InlineResponse20053SearchResults.md)
 - [InlineResponse20054](docs/InlineResponse20054.md)
 - [InlineResponse20054Videos](docs/InlineResponse20054Videos.md)
 - [InlineResponse20055](docs/InlineResponse20055.md)
 - [InlineResponse20056](docs/InlineResponse20056.md)
 - [InlineResponse20057](docs/InlineResponse20057.md)
 - [InlineResponse20057Suggests](docs/InlineResponse20057Suggests.md)
 - [InlineResponse2006](docs/InlineResponse2006.md)
 - [InlineResponse2006Recipes](docs/InlineResponse2006Recipes.md)
 - [InlineResponse2007](docs/InlineResponse2007.md)
 - [InlineResponse2008](docs/InlineResponse2008.md)
 - [InlineResponse2009](docs/InlineResponse2009.md)
 - [InlineResponse200Results](docs/InlineResponse200Results.md)
 - [RecipesFindByIngredientsMissedIngredients](docs/RecipesFindByIngredientsMissedIngredients.md)
 - [RecipesParseIngredientsEstimatedCost](docs/RecipesParseIngredientsEstimatedCost.md)
 - [RecipesParseIngredientsNutrition](docs/RecipesParseIngredientsNutrition.md)
 - [RecipesParseIngredientsNutritionCaloricBreakdown](docs/RecipesParseIngredientsNutritionCaloricBreakdown.md)
 - [RecipesParseIngredientsNutritionNutrients](docs/RecipesParseIngredientsNutritionNutrients.md)
 - [RecipesParseIngredientsNutritionProperties](docs/RecipesParseIngredientsNutritionProperties.md)
 - [RecipesParseIngredientsNutritionWeightPerServing](docs/RecipesParseIngredientsNutritionWeightPerServing.md)


## Documentation For Authorization



## apiKeyScheme

- **Type**: API key

Example
```
    auth := context.WithValue(context.TODO(), sw.ContextAPIKey, sw.APIKey{
      Key: "APIKEY",
      Prefix: "Bearer", // Omit if not necessary.
    })
    r, err := client.Service.Operation(auth, args)
```

## Author

mail@spoonacular.com

