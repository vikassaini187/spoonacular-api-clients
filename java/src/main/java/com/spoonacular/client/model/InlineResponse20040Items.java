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
import com.spoonacular.client.model.InlineResponse20040Value;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;

/**
 * InlineResponse20040Items
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2021-10-03T15:10:59.332+02:00[Europe/Berlin]")
public class InlineResponse20040Items {
  public static final String SERIALIZED_NAME_DAY = "day";
  @SerializedName(SERIALIZED_NAME_DAY)
  private Integer day;

  public static final String SERIALIZED_NAME_SLOT = "slot";
  @SerializedName(SERIALIZED_NAME_SLOT)
  private Integer slot;

  public static final String SERIALIZED_NAME_POSITION = "position";
  @SerializedName(SERIALIZED_NAME_POSITION)
  private Integer position;

  public static final String SERIALIZED_NAME_TYPE = "type";
  @SerializedName(SERIALIZED_NAME_TYPE)
  private String type;

  public static final String SERIALIZED_NAME_VALUE = "value";
  @SerializedName(SERIALIZED_NAME_VALUE)
  private InlineResponse20040Value value = null;

  public InlineResponse20040Items day(Integer day) {
    this.day = day;
    return this;
  }

   /**
   * Get day
   * @return day
  **/
  @ApiModelProperty(required = true, value = "")
  public Integer getDay() {
    return day;
  }

  public void setDay(Integer day) {
    this.day = day;
  }

  public InlineResponse20040Items slot(Integer slot) {
    this.slot = slot;
    return this;
  }

   /**
   * Get slot
   * @return slot
  **/
  @ApiModelProperty(required = true, value = "")
  public Integer getSlot() {
    return slot;
  }

  public void setSlot(Integer slot) {
    this.slot = slot;
  }

  public InlineResponse20040Items position(Integer position) {
    this.position = position;
    return this;
  }

   /**
   * Get position
   * @return position
  **/
  @ApiModelProperty(required = true, value = "")
  public Integer getPosition() {
    return position;
  }

  public void setPosition(Integer position) {
    this.position = position;
  }

  public InlineResponse20040Items type(String type) {
    this.type = type;
    return this;
  }

   /**
   * Get type
   * @return type
  **/
  @ApiModelProperty(required = true, value = "")
  public String getType() {
    return type;
  }

  public void setType(String type) {
    this.type = type;
  }

  public InlineResponse20040Items value(InlineResponse20040Value value) {
    this.value = value;
    return this;
  }

   /**
   * Get value
   * @return value
  **/
  @ApiModelProperty(value = "")
  public InlineResponse20040Value getValue() {
    return value;
  }

  public void setValue(InlineResponse20040Value value) {
    this.value = value;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse20040Items inlineResponse20040Items = (InlineResponse20040Items) o;
    return Objects.equals(this.day, inlineResponse20040Items.day) &&
        Objects.equals(this.slot, inlineResponse20040Items.slot) &&
        Objects.equals(this.position, inlineResponse20040Items.position) &&
        Objects.equals(this.type, inlineResponse20040Items.type) &&
        Objects.equals(this.value, inlineResponse20040Items.value);
  }

  @Override
  public int hashCode() {
    return Objects.hash(day, slot, position, type, value);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse20040Items {\n");
    sb.append("    day: ").append(toIndentedString(day)).append("\n");
    sb.append("    slot: ").append(toIndentedString(slot)).append("\n");
    sb.append("    position: ").append(toIndentedString(position)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    value: ").append(toIndentedString(value)).append("\n");
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

