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

package com.spoonacular;

import com.spoonacular.client.ApiException;
import com.spoonacular.client.ApiInvoker;
import com.spoonacular.client.Pair;

import com.spoonacular.client.model.*;

import java.util.*;

import java.math.BigDecimal;
import com.spoonacular.client.model.InlineResponse20032;
import com.spoonacular.client.model.InlineResponse20035;
import com.spoonacular.client.model.InlineResponse20036;

import org.apache.http.entity.mime.MultipartEntityBuilder;

import java.util.Map;
import java.util.HashMap;
import java.io.File;

public class MenuItemsApi {
  String basePath = "https://api.spoonacular.com";
  ApiInvoker apiInvoker = ApiInvoker.getInstance();

  public void addHeader(String key, String value) {
    getInvoker().addDefaultHeader(key, value);
  }

  public ApiInvoker getInvoker() {
    return apiInvoker;
  }

  public void setBasePath(String basePath) {
    this.basePath = basePath;
  }

  public String getBasePath() {
    return basePath;
  }

  /**
   * Autocomplete Menu Item Search
   * Generate suggestions for menu items based on a (partial) query. The matches will be found by looking in the title only.
   * @param query The (partial) search query.
   * @param number The number of results to return (between 1 and 25).
   * @return InlineResponse20032
   */
  public InlineResponse20032  autocompleteMenuItemSearch (String query, BigDecimal number) throws ApiException {
    Object localVarPostBody = null;
    // verify the required parameter 'query' is set
    if (query == null) {
       throw new ApiException(400, "Missing the required parameter 'query' when calling autocompleteMenuItemSearch");
    }

    // create path and map variables
    String localVarPath = "/food/menuItems/suggest".replaceAll("\\{format\\}","json");

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    // form params
    Map<String, String> localVarFormParams = new HashMap<String, String>();

    localVarQueryParams.addAll(ApiInvoker.parameterToPairs("", "query", query));
    localVarQueryParams.addAll(ApiInvoker.parameterToPairs("", "number", number));


    String[] localVarContentTypes = {
      
    };
    String localVarContentType = localVarContentTypes.length > 0 ? localVarContentTypes[0] : "application/json";

    if (localVarContentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      

      localVarPostBody = localVarBuilder.build();
    } else {
      // normal form params
          }

    try {
      String localVarResponse = apiInvoker.invokeAPI(basePath, localVarPath, "GET", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarContentType);
      if(localVarResponse != null){
        return (InlineResponse20032) ApiInvoker.deserialize(localVarResponse, "", InlineResponse20032.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  /**
   * Get Menu Item Information
   * Use a menu item id to get all available information about a menu item, such as nutrition.
   * @param id The item&#39;s id.
   * @return InlineResponse20036
   */
  public InlineResponse20036  getMenuItemInformation (Integer id) throws ApiException {
    Object localVarPostBody = null;
    // verify the required parameter 'id' is set
    if (id == null) {
       throw new ApiException(400, "Missing the required parameter 'id' when calling getMenuItemInformation");
    }

    // create path and map variables
    String localVarPath = "/food/menuItems/{id}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "id" + "\\}", apiInvoker.escapeString(id.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    // form params
    Map<String, String> localVarFormParams = new HashMap<String, String>();



    String[] localVarContentTypes = {
      
    };
    String localVarContentType = localVarContentTypes.length > 0 ? localVarContentTypes[0] : "application/json";

    if (localVarContentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      

      localVarPostBody = localVarBuilder.build();
    } else {
      // normal form params
          }

    try {
      String localVarResponse = apiInvoker.invokeAPI(basePath, localVarPath, "GET", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarContentType);
      if(localVarResponse != null){
        return (InlineResponse20036) ApiInvoker.deserialize(localVarResponse, "", InlineResponse20036.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  /**
   * Menu Item Nutrition by ID Image
   * Visualize a menu item&#39;s nutritional information as HTML including CSS.
   * @param id The menu item id.
   * @return Object
   */
  public Object  menuItemNutritionByIDImage (BigDecimal id) throws ApiException {
    Object localVarPostBody = null;
    // verify the required parameter 'id' is set
    if (id == null) {
       throw new ApiException(400, "Missing the required parameter 'id' when calling menuItemNutritionByIDImage");
    }

    // create path and map variables
    String localVarPath = "/food/menuItems/{id}/nutritionWidget.png".replaceAll("\\{format\\}","json").replaceAll("\\{" + "id" + "\\}", apiInvoker.escapeString(id.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    // form params
    Map<String, String> localVarFormParams = new HashMap<String, String>();



    String[] localVarContentTypes = {
      
    };
    String localVarContentType = localVarContentTypes.length > 0 ? localVarContentTypes[0] : "application/json";

    if (localVarContentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      

      localVarPostBody = localVarBuilder.build();
    } else {
      // normal form params
          }

    try {
      String localVarResponse = apiInvoker.invokeAPI(basePath, localVarPath, "GET", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarContentType);
      if(localVarResponse != null){
        return (Object) ApiInvoker.deserialize(localVarResponse, "", Object.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  /**
   * Menu Item Nutrition Label Image
   * Visualize a menu item&#39;s nutritional label information as an image.
   * @param id The menu item id.
   * @param showOptionalNutrients Whether to show optional nutrients.
   * @param showZeroValues Whether to show zero values.
   * @param showIngredients Whether to show a list of ingredients.
   * @return Object
   */
  public Object  menuItemNutritionLabelImage (BigDecimal id, Boolean showOptionalNutrients, Boolean showZeroValues, Boolean showIngredients) throws ApiException {
    Object localVarPostBody = null;
    // verify the required parameter 'id' is set
    if (id == null) {
       throw new ApiException(400, "Missing the required parameter 'id' when calling menuItemNutritionLabelImage");
    }

    // create path and map variables
    String localVarPath = "/food/menuItems/{id}/nutritionLabel.png".replaceAll("\\{format\\}","json").replaceAll("\\{" + "id" + "\\}", apiInvoker.escapeString(id.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    // form params
    Map<String, String> localVarFormParams = new HashMap<String, String>();

    localVarQueryParams.addAll(ApiInvoker.parameterToPairs("", "showOptionalNutrients", showOptionalNutrients));
    localVarQueryParams.addAll(ApiInvoker.parameterToPairs("", "showZeroValues", showZeroValues));
    localVarQueryParams.addAll(ApiInvoker.parameterToPairs("", "showIngredients", showIngredients));


    String[] localVarContentTypes = {
      
    };
    String localVarContentType = localVarContentTypes.length > 0 ? localVarContentTypes[0] : "application/json";

    if (localVarContentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      

      localVarPostBody = localVarBuilder.build();
    } else {
      // normal form params
          }

    try {
      String localVarResponse = apiInvoker.invokeAPI(basePath, localVarPath, "GET", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarContentType);
      if(localVarResponse != null){
        return (Object) ApiInvoker.deserialize(localVarResponse, "", Object.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  /**
   * Menu Item Nutrition Label Widget
   * Visualize a menu item&#39;s nutritional label information as HTML including CSS.
   * @param id The menu item id.
   * @param defaultCss Whether the default CSS should be added to the response.
   * @param showOptionalNutrients Whether to show optional nutrients.
   * @param showZeroValues Whether to show zero values.
   * @param showIngredients Whether to show a list of ingredients.
   * @return String
   */
  public String  menuItemNutritionLabelWidget (BigDecimal id, Boolean defaultCss, Boolean showOptionalNutrients, Boolean showZeroValues, Boolean showIngredients) throws ApiException {
    Object localVarPostBody = null;
    // verify the required parameter 'id' is set
    if (id == null) {
       throw new ApiException(400, "Missing the required parameter 'id' when calling menuItemNutritionLabelWidget");
    }

    // create path and map variables
    String localVarPath = "/food/menuItems/{id}/nutritionLabel".replaceAll("\\{format\\}","json").replaceAll("\\{" + "id" + "\\}", apiInvoker.escapeString(id.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    // form params
    Map<String, String> localVarFormParams = new HashMap<String, String>();

    localVarQueryParams.addAll(ApiInvoker.parameterToPairs("", "defaultCss", defaultCss));
    localVarQueryParams.addAll(ApiInvoker.parameterToPairs("", "showOptionalNutrients", showOptionalNutrients));
    localVarQueryParams.addAll(ApiInvoker.parameterToPairs("", "showZeroValues", showZeroValues));
    localVarQueryParams.addAll(ApiInvoker.parameterToPairs("", "showIngredients", showIngredients));


    String[] localVarContentTypes = {
      
    };
    String localVarContentType = localVarContentTypes.length > 0 ? localVarContentTypes[0] : "application/json";

    if (localVarContentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      

      localVarPostBody = localVarBuilder.build();
    } else {
      // normal form params
          }

    try {
      String localVarResponse = apiInvoker.invokeAPI(basePath, localVarPath, "GET", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarContentType);
      if(localVarResponse != null){
        return (String) ApiInvoker.deserialize(localVarResponse, "", String.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  /**
   * Search Menu Items
   * Search over 115,000 menu items from over 800 fast food and chain restaurants. For example, McDonald&#39;s Big Mac or Starbucks Mocha.
   * @param query The (natural language) search query.
   * @param minCalories The minimum amount of calories the menu item must have.
   * @param maxCalories The maximum amount of calories the menu item can have.
   * @param minCarbs The minimum amount of carbohydrates in grams the menu item must have.
   * @param maxCarbs The maximum amount of carbohydrates in grams the menu item can have.
   * @param minProtein The minimum amount of protein in grams the menu item must have.
   * @param maxProtein The maximum amount of protein in grams the menu item can have.
   * @param minFat The minimum amount of fat in grams the menu item must have.
   * @param maxFat The maximum amount of fat in grams the menu item can have.
   * @param addMenuItemInformation If set to true, you get more information about the menu items returned.
   * @param offset The number of results to skip (between 0 and 900).
   * @param number The maximum number of items to return (between 1 and 100). Defaults to 10.
   * @return InlineResponse20035
   */
  public InlineResponse20035  searchMenuItems (String query, BigDecimal minCalories, BigDecimal maxCalories, BigDecimal minCarbs, BigDecimal maxCarbs, BigDecimal minProtein, BigDecimal maxProtein, BigDecimal minFat, BigDecimal maxFat, Boolean addMenuItemInformation, Integer offset, Integer number) throws ApiException {
    Object localVarPostBody = null;

    // create path and map variables
    String localVarPath = "/food/menuItems/search".replaceAll("\\{format\\}","json");

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    // form params
    Map<String, String> localVarFormParams = new HashMap<String, String>();

    localVarQueryParams.addAll(ApiInvoker.parameterToPairs("", "query", query));
    localVarQueryParams.addAll(ApiInvoker.parameterToPairs("", "minCalories", minCalories));
    localVarQueryParams.addAll(ApiInvoker.parameterToPairs("", "maxCalories", maxCalories));
    localVarQueryParams.addAll(ApiInvoker.parameterToPairs("", "minCarbs", minCarbs));
    localVarQueryParams.addAll(ApiInvoker.parameterToPairs("", "maxCarbs", maxCarbs));
    localVarQueryParams.addAll(ApiInvoker.parameterToPairs("", "minProtein", minProtein));
    localVarQueryParams.addAll(ApiInvoker.parameterToPairs("", "maxProtein", maxProtein));
    localVarQueryParams.addAll(ApiInvoker.parameterToPairs("", "minFat", minFat));
    localVarQueryParams.addAll(ApiInvoker.parameterToPairs("", "maxFat", maxFat));
    localVarQueryParams.addAll(ApiInvoker.parameterToPairs("", "addMenuItemInformation", addMenuItemInformation));
    localVarQueryParams.addAll(ApiInvoker.parameterToPairs("", "offset", offset));
    localVarQueryParams.addAll(ApiInvoker.parameterToPairs("", "number", number));


    String[] localVarContentTypes = {
      
    };
    String localVarContentType = localVarContentTypes.length > 0 ? localVarContentTypes[0] : "application/json";

    if (localVarContentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      

      localVarPostBody = localVarBuilder.build();
    } else {
      // normal form params
          }

    try {
      String localVarResponse = apiInvoker.invokeAPI(basePath, localVarPath, "GET", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarContentType);
      if(localVarResponse != null){
        return (InlineResponse20035) ApiInvoker.deserialize(localVarResponse, "", InlineResponse20035.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  /**
   * Menu Item Nutrition by ID Widget
   * Visualize a menu item&#39;s nutritional information as HTML including CSS.
   * @param id The item&#39;s id.
   * @param defaultCss Whether the default CSS should be added to the response.
   * @param accept Accept header.
   * @return String
   */
  public String  visualizeMenuItemNutritionByID (Integer id, Boolean defaultCss, String accept) throws ApiException {
    Object localVarPostBody = null;
    // verify the required parameter 'id' is set
    if (id == null) {
       throw new ApiException(400, "Missing the required parameter 'id' when calling visualizeMenuItemNutritionByID");
    }

    // create path and map variables
    String localVarPath = "/food/menuItems/{id}/nutritionWidget".replaceAll("\\{format\\}","json").replaceAll("\\{" + "id" + "\\}", apiInvoker.escapeString(id.toString()));

    // query params
    List<Pair> localVarQueryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> localVarHeaderParams = new HashMap<String, String>();
    // form params
    Map<String, String> localVarFormParams = new HashMap<String, String>();

    localVarQueryParams.addAll(ApiInvoker.parameterToPairs("", "defaultCss", defaultCss));

    localVarHeaderParams.put("Accept", ApiInvoker.parameterToString(accept));

    String[] localVarContentTypes = {
      
    };
    String localVarContentType = localVarContentTypes.length > 0 ? localVarContentTypes[0] : "application/json";

    if (localVarContentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      

      localVarPostBody = localVarBuilder.build();
    } else {
      // normal form params
          }

    try {
      String localVarResponse = apiInvoker.invokeAPI(basePath, localVarPath, "GET", localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarContentType);
      if(localVarResponse != null){
        return (String) ApiInvoker.deserialize(localVarResponse, "", String.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
}
