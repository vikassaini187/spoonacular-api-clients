# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule com.spoonacular.client.Model.InlineResponse20031ComparableProducts do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"calories",
    :"likes",
    :"price",
    :"protein",
    :"spoonacularScore",
    :"sugar"
  ]

  @type t :: %__MODULE__{
    :"calories" => [Map],
    :"likes" => [Map],
    :"price" => [Map],
    :"protein" => [InlineResponse20031ComparableProductsProtein],
    :"spoonacularScore" => [InlineResponse20031ComparableProductsProtein],
    :"sugar" => [Map]
  }
end

defimpl Poison.Decoder, for: com.spoonacular.client.Model.InlineResponse20031ComparableProducts do
  import com.spoonacular.client.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"protein", :list, com.spoonacular.client.Model.InlineResponse20031ComparableProductsProtein, options)
    |> deserialize(:"spoonacularScore", :list, com.spoonacular.client.Model.InlineResponse20031ComparableProductsProtein, options)
  end
end

