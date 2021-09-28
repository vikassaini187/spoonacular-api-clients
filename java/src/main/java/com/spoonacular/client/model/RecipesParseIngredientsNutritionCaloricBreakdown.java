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
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;
import java.math.BigDecimal;

/**
 * RecipesParseIngredientsNutritionCaloricBreakdown
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2021-09-28T20:40:32.759+02:00[Europe/Berlin]")
public class RecipesParseIngredientsNutritionCaloricBreakdown {
  public static final String SERIALIZED_NAME_PERCENT_PROTEIN = "percentProtein";
  @SerializedName(SERIALIZED_NAME_PERCENT_PROTEIN)
  private BigDecimal percentProtein;

  public static final String SERIALIZED_NAME_PERCENT_FAT = "percentFat";
  @SerializedName(SERIALIZED_NAME_PERCENT_FAT)
  private BigDecimal percentFat;

  public static final String SERIALIZED_NAME_PERCENT_CARBS = "percentCarbs";
  @SerializedName(SERIALIZED_NAME_PERCENT_CARBS)
  private BigDecimal percentCarbs;

  public RecipesParseIngredientsNutritionCaloricBreakdown percentProtein(BigDecimal percentProtein) {
    this.percentProtein = percentProtein;
    return this;
  }

   /**
   * Get percentProtein
   * @return percentProtein
  **/
  @ApiModelProperty(required = true, value = "")
  public BigDecimal getPercentProtein() {
    return percentProtein;
  }

  public void setPercentProtein(BigDecimal percentProtein) {
    this.percentProtein = percentProtein;
  }

  public RecipesParseIngredientsNutritionCaloricBreakdown percentFat(BigDecimal percentFat) {
    this.percentFat = percentFat;
    return this;
  }

   /**
   * Get percentFat
   * @return percentFat
  **/
  @ApiModelProperty(required = true, value = "")
  public BigDecimal getPercentFat() {
    return percentFat;
  }

  public void setPercentFat(BigDecimal percentFat) {
    this.percentFat = percentFat;
  }

  public RecipesParseIngredientsNutritionCaloricBreakdown percentCarbs(BigDecimal percentCarbs) {
    this.percentCarbs = percentCarbs;
    return this;
  }

   /**
   * Get percentCarbs
   * @return percentCarbs
  **/
  @ApiModelProperty(required = true, value = "")
  public BigDecimal getPercentCarbs() {
    return percentCarbs;
  }

  public void setPercentCarbs(BigDecimal percentCarbs) {
    this.percentCarbs = percentCarbs;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    RecipesParseIngredientsNutritionCaloricBreakdown recipesParseIngredientsNutritionCaloricBreakdown = (RecipesParseIngredientsNutritionCaloricBreakdown) o;
    return Objects.equals(this.percentProtein, recipesParseIngredientsNutritionCaloricBreakdown.percentProtein) &&
        Objects.equals(this.percentFat, recipesParseIngredientsNutritionCaloricBreakdown.percentFat) &&
        Objects.equals(this.percentCarbs, recipesParseIngredientsNutritionCaloricBreakdown.percentCarbs);
  }

  @Override
  public int hashCode() {
    return Objects.hash(percentProtein, percentFat, percentCarbs);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class RecipesParseIngredientsNutritionCaloricBreakdown {\n");
    sb.append("    percentProtein: ").append(toIndentedString(percentProtein)).append("\n");
    sb.append("    percentFat: ").append(toIndentedString(percentFat)).append("\n");
    sb.append("    percentCarbs: ").append(toIndentedString(percentCarbs)).append("\n");
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
