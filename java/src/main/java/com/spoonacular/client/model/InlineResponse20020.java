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
import com.spoonacular.client.model.RecipesParseIngredientsEstimatedCost;
import com.spoonacular.client.model.RecipesParseIngredientsNutrition;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;
import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.List;

/**
 * InlineResponse20020
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2021-10-03T15:10:59.332+02:00[Europe/Berlin]")
public class InlineResponse20020 {
  public static final String SERIALIZED_NAME_ID = "id";
  @SerializedName(SERIALIZED_NAME_ID)
  private Integer id;

  public static final String SERIALIZED_NAME_ORIGINAL = "original";
  @SerializedName(SERIALIZED_NAME_ORIGINAL)
  private String original;

  public static final String SERIALIZED_NAME_ORIGINAL_NAME = "originalName";
  @SerializedName(SERIALIZED_NAME_ORIGINAL_NAME)
  private String originalName;

  public static final String SERIALIZED_NAME_NAME = "name";
  @SerializedName(SERIALIZED_NAME_NAME)
  private String name;

  public static final String SERIALIZED_NAME_NAME_CLEAN = "nameClean";
  @SerializedName(SERIALIZED_NAME_NAME_CLEAN)
  private String nameClean;

  public static final String SERIALIZED_NAME_AMOUNT = "amount";
  @SerializedName(SERIALIZED_NAME_AMOUNT)
  private BigDecimal amount;

  public static final String SERIALIZED_NAME_UNIT = "unit";
  @SerializedName(SERIALIZED_NAME_UNIT)
  private String unit;

  public static final String SERIALIZED_NAME_UNIT_SHORT = "unitShort";
  @SerializedName(SERIALIZED_NAME_UNIT_SHORT)
  private String unitShort;

  public static final String SERIALIZED_NAME_UNIT_LONG = "unitLong";
  @SerializedName(SERIALIZED_NAME_UNIT_LONG)
  private String unitLong;

  public static final String SERIALIZED_NAME_POSSIBLE_UNITS = "possibleUnits";
  @SerializedName(SERIALIZED_NAME_POSSIBLE_UNITS)
  private List<String> possibleUnits = new ArrayList<>();

  public static final String SERIALIZED_NAME_ESTIMATED_COST = "estimatedCost";
  @SerializedName(SERIALIZED_NAME_ESTIMATED_COST)
  private RecipesParseIngredientsEstimatedCost estimatedCost = null;

  public static final String SERIALIZED_NAME_CONSISTENCY = "consistency";
  @SerializedName(SERIALIZED_NAME_CONSISTENCY)
  private String consistency;

  public static final String SERIALIZED_NAME_AISLE = "aisle";
  @SerializedName(SERIALIZED_NAME_AISLE)
  private String aisle;

  public static final String SERIALIZED_NAME_IMAGE = "image";
  @SerializedName(SERIALIZED_NAME_IMAGE)
  private String image;

  public static final String SERIALIZED_NAME_META = "meta";
  @SerializedName(SERIALIZED_NAME_META)
  private List<String> meta = new ArrayList<>();

  public static final String SERIALIZED_NAME_NUTRITION = "nutrition";
  @SerializedName(SERIALIZED_NAME_NUTRITION)
  private RecipesParseIngredientsNutrition nutrition = null;

  public InlineResponse20020 id(Integer id) {
    this.id = id;
    return this;
  }

   /**
   * Get id
   * @return id
  **/
  @ApiModelProperty(required = true, value = "")
  public Integer getId() {
    return id;
  }

  public void setId(Integer id) {
    this.id = id;
  }

  public InlineResponse20020 original(String original) {
    this.original = original;
    return this;
  }

   /**
   * Get original
   * @return original
  **/
  @ApiModelProperty(required = true, value = "")
  public String getOriginal() {
    return original;
  }

  public void setOriginal(String original) {
    this.original = original;
  }

  public InlineResponse20020 originalName(String originalName) {
    this.originalName = originalName;
    return this;
  }

   /**
   * Get originalName
   * @return originalName
  **/
  @ApiModelProperty(required = true, value = "")
  public String getOriginalName() {
    return originalName;
  }

  public void setOriginalName(String originalName) {
    this.originalName = originalName;
  }

  public InlineResponse20020 name(String name) {
    this.name = name;
    return this;
  }

   /**
   * Get name
   * @return name
  **/
  @ApiModelProperty(required = true, value = "")
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public InlineResponse20020 nameClean(String nameClean) {
    this.nameClean = nameClean;
    return this;
  }

   /**
   * Get nameClean
   * @return nameClean
  **/
  @ApiModelProperty(required = true, value = "")
  public String getNameClean() {
    return nameClean;
  }

  public void setNameClean(String nameClean) {
    this.nameClean = nameClean;
  }

  public InlineResponse20020 amount(BigDecimal amount) {
    this.amount = amount;
    return this;
  }

   /**
   * Get amount
   * @return amount
  **/
  @ApiModelProperty(required = true, value = "")
  public BigDecimal getAmount() {
    return amount;
  }

  public void setAmount(BigDecimal amount) {
    this.amount = amount;
  }

  public InlineResponse20020 unit(String unit) {
    this.unit = unit;
    return this;
  }

   /**
   * Get unit
   * @return unit
  **/
  @ApiModelProperty(required = true, value = "")
  public String getUnit() {
    return unit;
  }

  public void setUnit(String unit) {
    this.unit = unit;
  }

  public InlineResponse20020 unitShort(String unitShort) {
    this.unitShort = unitShort;
    return this;
  }

   /**
   * Get unitShort
   * @return unitShort
  **/
  @ApiModelProperty(required = true, value = "")
  public String getUnitShort() {
    return unitShort;
  }

  public void setUnitShort(String unitShort) {
    this.unitShort = unitShort;
  }

  public InlineResponse20020 unitLong(String unitLong) {
    this.unitLong = unitLong;
    return this;
  }

   /**
   * Get unitLong
   * @return unitLong
  **/
  @ApiModelProperty(required = true, value = "")
  public String getUnitLong() {
    return unitLong;
  }

  public void setUnitLong(String unitLong) {
    this.unitLong = unitLong;
  }

  public InlineResponse20020 possibleUnits(List<String> possibleUnits) {
    this.possibleUnits = possibleUnits;
    return this;
  }

  public InlineResponse20020 addPossibleUnitsItem(String possibleUnitsItem) {
    this.possibleUnits.add(possibleUnitsItem);
    return this;
  }

   /**
   * Get possibleUnits
   * @return possibleUnits
  **/
  @ApiModelProperty(required = true, value = "")
  public List<String> getPossibleUnits() {
    return possibleUnits;
  }

  public void setPossibleUnits(List<String> possibleUnits) {
    this.possibleUnits = possibleUnits;
  }

  public InlineResponse20020 estimatedCost(RecipesParseIngredientsEstimatedCost estimatedCost) {
    this.estimatedCost = estimatedCost;
    return this;
  }

   /**
   * Get estimatedCost
   * @return estimatedCost
  **/
  @ApiModelProperty(required = true, value = "")
  public RecipesParseIngredientsEstimatedCost getEstimatedCost() {
    return estimatedCost;
  }

  public void setEstimatedCost(RecipesParseIngredientsEstimatedCost estimatedCost) {
    this.estimatedCost = estimatedCost;
  }

  public InlineResponse20020 consistency(String consistency) {
    this.consistency = consistency;
    return this;
  }

   /**
   * Get consistency
   * @return consistency
  **/
  @ApiModelProperty(required = true, value = "")
  public String getConsistency() {
    return consistency;
  }

  public void setConsistency(String consistency) {
    this.consistency = consistency;
  }

  public InlineResponse20020 aisle(String aisle) {
    this.aisle = aisle;
    return this;
  }

   /**
   * Get aisle
   * @return aisle
  **/
  @ApiModelProperty(required = true, value = "")
  public String getAisle() {
    return aisle;
  }

  public void setAisle(String aisle) {
    this.aisle = aisle;
  }

  public InlineResponse20020 image(String image) {
    this.image = image;
    return this;
  }

   /**
   * Get image
   * @return image
  **/
  @ApiModelProperty(required = true, value = "")
  public String getImage() {
    return image;
  }

  public void setImage(String image) {
    this.image = image;
  }

  public InlineResponse20020 meta(List<String> meta) {
    this.meta = meta;
    return this;
  }

  public InlineResponse20020 addMetaItem(String metaItem) {
    this.meta.add(metaItem);
    return this;
  }

   /**
   * Get meta
   * @return meta
  **/
  @ApiModelProperty(required = true, value = "")
  public List<String> getMeta() {
    return meta;
  }

  public void setMeta(List<String> meta) {
    this.meta = meta;
  }

  public InlineResponse20020 nutrition(RecipesParseIngredientsNutrition nutrition) {
    this.nutrition = nutrition;
    return this;
  }

   /**
   * Get nutrition
   * @return nutrition
  **/
  @ApiModelProperty(required = true, value = "")
  public RecipesParseIngredientsNutrition getNutrition() {
    return nutrition;
  }

  public void setNutrition(RecipesParseIngredientsNutrition nutrition) {
    this.nutrition = nutrition;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse20020 inlineResponse20020 = (InlineResponse20020) o;
    return Objects.equals(this.id, inlineResponse20020.id) &&
        Objects.equals(this.original, inlineResponse20020.original) &&
        Objects.equals(this.originalName, inlineResponse20020.originalName) &&
        Objects.equals(this.name, inlineResponse20020.name) &&
        Objects.equals(this.nameClean, inlineResponse20020.nameClean) &&
        Objects.equals(this.amount, inlineResponse20020.amount) &&
        Objects.equals(this.unit, inlineResponse20020.unit) &&
        Objects.equals(this.unitShort, inlineResponse20020.unitShort) &&
        Objects.equals(this.unitLong, inlineResponse20020.unitLong) &&
        Objects.equals(this.possibleUnits, inlineResponse20020.possibleUnits) &&
        Objects.equals(this.estimatedCost, inlineResponse20020.estimatedCost) &&
        Objects.equals(this.consistency, inlineResponse20020.consistency) &&
        Objects.equals(this.aisle, inlineResponse20020.aisle) &&
        Objects.equals(this.image, inlineResponse20020.image) &&
        Objects.equals(this.meta, inlineResponse20020.meta) &&
        Objects.equals(this.nutrition, inlineResponse20020.nutrition);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, original, originalName, name, nameClean, amount, unit, unitShort, unitLong, possibleUnits, estimatedCost, consistency, aisle, image, meta, nutrition);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse20020 {\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    original: ").append(toIndentedString(original)).append("\n");
    sb.append("    originalName: ").append(toIndentedString(originalName)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    nameClean: ").append(toIndentedString(nameClean)).append("\n");
    sb.append("    amount: ").append(toIndentedString(amount)).append("\n");
    sb.append("    unit: ").append(toIndentedString(unit)).append("\n");
    sb.append("    unitShort: ").append(toIndentedString(unitShort)).append("\n");
    sb.append("    unitLong: ").append(toIndentedString(unitLong)).append("\n");
    sb.append("    possibleUnits: ").append(toIndentedString(possibleUnits)).append("\n");
    sb.append("    estimatedCost: ").append(toIndentedString(estimatedCost)).append("\n");
    sb.append("    consistency: ").append(toIndentedString(consistency)).append("\n");
    sb.append("    aisle: ").append(toIndentedString(aisle)).append("\n");
    sb.append("    image: ").append(toIndentedString(image)).append("\n");
    sb.append("    meta: ").append(toIndentedString(meta)).append("\n");
    sb.append("    nutrition: ").append(toIndentedString(nutrition)).append("\n");
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

