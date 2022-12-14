<?php
/**
 * InlineResponse20021
 *
 * PHP version 5
 *
 * @category Class
 * @package  com.spoonacular.client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */

/**
 * spoonacular API
 *
 * The spoonacular Nutrition, Recipe, and Food API allows you to access over 380,000 recipes, thousands of ingredients, 800,000 food products, and 100,000 menu items. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.
 *
 * The version of the OpenAPI document: 1.0
 * Contact: mail@spoonacular.com
 * Generated by: https://openapi-generator.tech
 * OpenAPI Generator version: 5.0.0-SNAPSHOT
 */

/**
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

namespace com.spoonacular.client\com.spoonacular.client.model;

use \ArrayAccess;
use \com.spoonacular.client\ObjectSerializer;

/**
 * InlineResponse20021 Class Doc Comment
 *
 * @category Class
 * @package  com.spoonacular.client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class InlineResponse20021 implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'inline_response_200_21';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'calories' => '\com.spoonacular.client\com.spoonacular.client.model\InlineResponse20021Calories',
        'carbs' => '\com.spoonacular.client\com.spoonacular.client.model\InlineResponse20021Calories',
        'fat' => '\com.spoonacular.client\com.spoonacular.client.model\InlineResponse20021Calories',
        'protein' => '\com.spoonacular.client\com.spoonacular.client.model\InlineResponse20021Calories',
        'recipes_used' => 'int'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'calories' => null,
        'carbs' => null,
        'fat' => null,
        'protein' => null,
        'recipes_used' => null
    ];

    /**
     * Array of property to type mappings. Used for (de)serialization
     *
     * @return array
     */
    public static function openAPITypes()
    {
        return self::$openAPITypes;
    }

    /**
     * Array of property to format mappings. Used for (de)serialization
     *
     * @return array
     */
    public static function openAPIFormats()
    {
        return self::$openAPIFormats;
    }

    /**
     * Array of attributes where the key is the local name,
     * and the value is the original name
     *
     * @var string[]
     */
    protected static $attributeMap = [
        'calories' => 'calories',
        'carbs' => 'carbs',
        'fat' => 'fat',
        'protein' => 'protein',
        'recipes_used' => 'recipesUsed'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'calories' => 'setCalories',
        'carbs' => 'setCarbs',
        'fat' => 'setFat',
        'protein' => 'setProtein',
        'recipes_used' => 'setRecipesUsed'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'calories' => 'getCalories',
        'carbs' => 'getCarbs',
        'fat' => 'getFat',
        'protein' => 'getProtein',
        'recipes_used' => 'getRecipesUsed'
    ];

    /**
     * Array of attributes where the key is the local name,
     * and the value is the original name
     *
     * @return array
     */
    public static function attributeMap()
    {
        return self::$attributeMap;
    }

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @return array
     */
    public static function setters()
    {
        return self::$setters;
    }

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @return array
     */
    public static function getters()
    {
        return self::$getters;
    }

    /**
     * The original name of the model.
     *
     * @return string
     */
    public function getModelName()
    {
        return self::$openAPIModelName;
    }

    

    

    /**
     * Associative array for storing property values
     *
     * @var mixed[]
     */
    protected $container = [];

    /**
     * Constructor
     *
     * @param mixed[] $data Associated array of property values
     *                      initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->container['calories'] = isset($data['calories']) ? $data['calories'] : null;
        $this->container['carbs'] = isset($data['carbs']) ? $data['carbs'] : null;
        $this->container['fat'] = isset($data['fat']) ? $data['fat'] : null;
        $this->container['protein'] = isset($data['protein']) ? $data['protein'] : null;
        $this->container['recipes_used'] = isset($data['recipes_used']) ? $data['recipes_used'] : null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        if ($this->container['calories'] === null) {
            $invalidProperties[] = "'calories' can't be null";
        }
        if ($this->container['carbs'] === null) {
            $invalidProperties[] = "'carbs' can't be null";
        }
        if ($this->container['fat'] === null) {
            $invalidProperties[] = "'fat' can't be null";
        }
        if ($this->container['protein'] === null) {
            $invalidProperties[] = "'protein' can't be null";
        }
        if ($this->container['recipes_used'] === null) {
            $invalidProperties[] = "'recipes_used' can't be null";
        }
        return $invalidProperties;
    }

    /**
     * Validate all the properties in the model
     * return true if all passed
     *
     * @return bool True if all properties are valid
     */
    public function valid()
    {
        return count($this->listInvalidProperties()) === 0;
    }


    /**
     * Gets calories
     *
     * @return \com.spoonacular.client\com.spoonacular.client.model\InlineResponse20021Calories
     */
    public function getCalories()
    {
        return $this->container['calories'];
    }

    /**
     * Sets calories
     *
     * @param \com.spoonacular.client\com.spoonacular.client.model\InlineResponse20021Calories $calories calories
     *
     * @return $this
     */
    public function setCalories($calories)
    {
        $this->container['calories'] = $calories;

        return $this;
    }

    /**
     * Gets carbs
     *
     * @return \com.spoonacular.client\com.spoonacular.client.model\InlineResponse20021Calories
     */
    public function getCarbs()
    {
        return $this->container['carbs'];
    }

    /**
     * Sets carbs
     *
     * @param \com.spoonacular.client\com.spoonacular.client.model\InlineResponse20021Calories $carbs carbs
     *
     * @return $this
     */
    public function setCarbs($carbs)
    {
        $this->container['carbs'] = $carbs;

        return $this;
    }

    /**
     * Gets fat
     *
     * @return \com.spoonacular.client\com.spoonacular.client.model\InlineResponse20021Calories
     */
    public function getFat()
    {
        return $this->container['fat'];
    }

    /**
     * Sets fat
     *
     * @param \com.spoonacular.client\com.spoonacular.client.model\InlineResponse20021Calories $fat fat
     *
     * @return $this
     */
    public function setFat($fat)
    {
        $this->container['fat'] = $fat;

        return $this;
    }

    /**
     * Gets protein
     *
     * @return \com.spoonacular.client\com.spoonacular.client.model\InlineResponse20021Calories
     */
    public function getProtein()
    {
        return $this->container['protein'];
    }

    /**
     * Sets protein
     *
     * @param \com.spoonacular.client\com.spoonacular.client.model\InlineResponse20021Calories $protein protein
     *
     * @return $this
     */
    public function setProtein($protein)
    {
        $this->container['protein'] = $protein;

        return $this;
    }

    /**
     * Gets recipes_used
     *
     * @return int
     */
    public function getRecipesUsed()
    {
        return $this->container['recipes_used'];
    }

    /**
     * Sets recipes_used
     *
     * @param int $recipes_used recipes_used
     *
     * @return $this
     */
    public function setRecipesUsed($recipes_used)
    {
        $this->container['recipes_used'] = $recipes_used;

        return $this;
    }
    /**
     * Returns true if offset exists. False otherwise.
     *
     * @param integer $offset Offset
     *
     * @return boolean
     */
    public function offsetExists($offset)
    {
        return isset($this->container[$offset]);
    }

    /**
     * Gets offset.
     *
     * @param integer $offset Offset
     *
     * @return mixed
     */
    public function offsetGet($offset)
    {
        return isset($this->container[$offset]) ? $this->container[$offset] : null;
    }

    /**
     * Sets value based on offset.
     *
     * @param integer $offset Offset
     * @param mixed   $value  Value to be set
     *
     * @return void
     */
    public function offsetSet($offset, $value)
    {
        if (is_null($offset)) {
            $this->container[] = $value;
        } else {
            $this->container[$offset] = $value;
        }
    }

    /**
     * Unsets offset.
     *
     * @param integer $offset Offset
     *
     * @return void
     */
    public function offsetUnset($offset)
    {
        unset($this->container[$offset]);
    }

    /**
     * Gets the string presentation of the object
     *
     * @return string
     */
    public function __toString()
    {
        return json_encode(
            ObjectSerializer::sanitizeForSerialization($this),
            JSON_PRETTY_PRINT
        );
    }
}


