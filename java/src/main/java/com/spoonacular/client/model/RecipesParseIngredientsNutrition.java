/*
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


package com.spoonacular.client.model;

import java.util.Objects;
import java.util.Arrays;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import com.spoonacular.client.model.RecipesParseIngredientsNutritionCaloricBreakdown;
import com.spoonacular.client.model.RecipesParseIngredientsNutritionNutrients;
import com.spoonacular.client.model.RecipesParseIngredientsNutritionProperties;
import com.spoonacular.client.model.RecipesParseIngredientsNutritionWeightPerServing;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

/**
 * RecipesParseIngredientsNutrition
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2021-10-03T15:10:59.332+02:00[Europe/Berlin]")
public class RecipesParseIngredientsNutrition {
  public static final String SERIALIZED_NAME_NUTRIENTS = "nutrients";
  @SerializedName(SERIALIZED_NAME_NUTRIENTS)
  private List<RecipesParseIngredientsNutritionNutrients> nutrients = new ArrayList<>();

  public static final String SERIALIZED_NAME_PROPERTIES = "properties";
  @SerializedName(SERIALIZED_NAME_PROPERTIES)
  private List<RecipesParseIngredientsNutritionProperties> properties = new ArrayList<>();

  public static final String SERIALIZED_NAME_FLAVONOIDS = "flavonoids";
  @SerializedName(SERIALIZED_NAME_FLAVONOIDS)
  private List<RecipesParseIngredientsNutritionProperties> flavonoids = new ArrayList<>();

  public static final String SERIALIZED_NAME_CALORIC_BREAKDOWN = "caloricBreakdown";
  @SerializedName(SERIALIZED_NAME_CALORIC_BREAKDOWN)
  private RecipesParseIngredientsNutritionCaloricBreakdown caloricBreakdown = null;

  public static final String SERIALIZED_NAME_WEIGHT_PER_SERVING = "weightPerServing";
  @SerializedName(SERIALIZED_NAME_WEIGHT_PER_SERVING)
  private RecipesParseIngredientsNutritionWeightPerServing weightPerServing = null;

  public RecipesParseIngredientsNutrition nutrients(List<RecipesParseIngredientsNutritionNutrients> nutrients) {
    this.nutrients = nutrients;
    return this;
  }

  public RecipesParseIngredientsNutrition addNutrientsItem(RecipesParseIngredientsNutritionNutrients nutrientsItem) {
    this.nutrients.add(nutrientsItem);
    return this;
  }

   /**
   * Get nutrients
   * @return nutrients
  **/
  @ApiModelProperty(required = true, value = "")
  public List<RecipesParseIngredientsNutritionNutrients> getNutrients() {
    return nutrients;
  }

  public void setNutrients(List<RecipesParseIngredientsNutritionNutrients> nutrients) {
    this.nutrients = nutrients;
  }

  public RecipesParseIngredientsNutrition properties(List<RecipesParseIngredientsNutritionProperties> properties) {
    this.properties = properties;
    return this;
  }

  public RecipesParseIngredientsNutrition addPropertiesItem(RecipesParseIngredientsNutritionProperties propertiesItem) {
    this.properties.add(propertiesItem);
    return this;
  }

   /**
   * Get properties
   * @return properties
  **/
  @ApiModelProperty(required = true, value = "")
  public List<RecipesParseIngredientsNutritionProperties> getProperties() {
    return properties;
  }

  public void setProperties(List<RecipesParseIngredientsNutritionProperties> properties) {
    this.properties = properties;
  }

  public RecipesParseIngredientsNutrition flavonoids(List<RecipesParseIngredientsNutritionProperties> flavonoids) {
    this.flavonoids = flavonoids;
    return this;
  }

  public RecipesParseIngredientsNutrition addFlavonoidsItem(RecipesParseIngredientsNutritionProperties flavonoidsItem) {
    this.flavonoids.add(flavonoidsItem);
    return this;
  }

   /**
   * Get flavonoids
   * @return flavonoids
  **/
  @ApiModelProperty(required = true, value = "")
  public List<RecipesParseIngredientsNutritionProperties> getFlavonoids() {
    return flavonoids;
  }

  public void setFlavonoids(List<RecipesParseIngredientsNutritionProperties> flavonoids) {
    this.flavonoids = flavonoids;
  }

  public RecipesParseIngredientsNutrition caloricBreakdown(RecipesParseIngredientsNutritionCaloricBreakdown caloricBreakdown) {
    this.caloricBreakdown = caloricBreakdown;
    return this;
  }

   /**
   * Get caloricBreakdown
   * @return caloricBreakdown
  **/
  @ApiModelProperty(required = true, value = "")
  public RecipesParseIngredientsNutritionCaloricBreakdown getCaloricBreakdown() {
    return caloricBreakdown;
  }

  public void setCaloricBreakdown(RecipesParseIngredientsNutritionCaloricBreakdown caloricBreakdown) {
    this.caloricBreakdown = caloricBreakdown;
  }

  public RecipesParseIngredientsNutrition weightPerServing(RecipesParseIngredientsNutritionWeightPerServing weightPerServing) {
    this.weightPerServing = weightPerServing;
    return this;
  }

   /**
   * Get weightPerServing
   * @return weightPerServing
  **/
  @ApiModelProperty(required = true, value = "")
  public RecipesParseIngredientsNutritionWeightPerServing getWeightPerServing() {
    return weightPerServing;
  }

  public void setWeightPerServing(RecipesParseIngredientsNutritionWeightPerServing weightPerServing) {
    this.weightPerServing = weightPerServing;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    RecipesParseIngredientsNutrition recipesParseIngredientsNutrition = (RecipesParseIngredientsNutrition) o;
    return Objects.equals(this.nutrients, recipesParseIngredientsNutrition.nutrients) &&
        Objects.equals(this.properties, recipesParseIngredientsNutrition.properties) &&
        Objects.equals(this.flavonoids, recipesParseIngredientsNutrition.flavonoids) &&
        Objects.equals(this.caloricBreakdown, recipesParseIngredientsNutrition.caloricBreakdown) &&
        Objects.equals(this.weightPerServing, recipesParseIngredientsNutrition.weightPerServing);
  }

  @Override
  public int hashCode() {
    return Objects.hash(nutrients, properties, flavonoids, caloricBreakdown, weightPerServing);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class RecipesParseIngredientsNutrition {\n");
    sb.append("    nutrients: ").append(toIndentedString(nutrients)).append("\n");
    sb.append("    properties: ").append(toIndentedString(properties)).append("\n");
    sb.append("    flavonoids: ").append(toIndentedString(flavonoids)).append("\n");
    sb.append("    caloricBreakdown: ").append(toIndentedString(caloricBreakdown)).append("\n");
    sb.append("    weightPerServing: ").append(toIndentedString(weightPerServing)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }

}

