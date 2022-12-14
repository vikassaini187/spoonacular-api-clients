# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule com.spoonacular.client.Model.InlineResponse20030 do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"id",
    :"title",
    :"breadcrumbs",
    :"imageType",
    :"badges",
    :"importantBadges",
    :"ingredientCount",
    :"generatedText",
    :"ingredientList",
    :"ingredients",
    :"likes",
    :"aisle",
    :"nutrition",
    :"price",
    :"servings",
    :"spoonacularScore"
  ]

  @type t :: %__MODULE__{
    :"id" => integer(),
    :"title" => String.t,
    :"breadcrumbs" => [String.t],
    :"imageType" => String.t,
    :"badges" => [String.t],
    :"importantBadges" => [String.t],
    :"ingredientCount" => integer(),
    :"generatedText" => Map | nil,
    :"ingredientList" => String.t,
    :"ingredients" => [InlineResponse20030Ingredients],
    :"likes" => float(),
    :"aisle" => String.t,
    :"nutrition" => InlineResponse20028Nutrition,
    :"price" => float(),
    :"servings" => InlineResponse20028Servings,
    :"spoonacularScore" => float()
  }
end

defimpl Poison.Decoder, for: com.spoonacular.client.Model.InlineResponse20030 do
  import com.spoonacular.client.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"ingredients", :list, com.spoonacular.client.Model.InlineResponse20030Ingredients, options)
    |> deserialize(:"nutrition", :struct, com.spoonacular.client.Model.InlineResponse20028Nutrition, options)
    |> deserialize(:"servings", :struct, com.spoonacular.client.Model.InlineResponse20028Servings, options)
  end
end

