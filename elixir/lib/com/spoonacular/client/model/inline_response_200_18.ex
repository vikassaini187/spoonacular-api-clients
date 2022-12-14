# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule com.spoonacular.client.Model.InlineResponse20018 do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"dishes",
    :"ingredients",
    :"cuisines",
    :"modifiers"
  ]

  @type t :: %__MODULE__{
    :"dishes" => [InlineResponse20018Dishes],
    :"ingredients" => [InlineResponse20018Ingredients],
    :"cuisines" => [String.t],
    :"modifiers" => [String.t]
  }
end

defimpl Poison.Decoder, for: com.spoonacular.client.Model.InlineResponse20018 do
  import com.spoonacular.client.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"dishes", :list, com.spoonacular.client.Model.InlineResponse20018Dishes, options)
    |> deserialize(:"ingredients", :list, com.spoonacular.client.Model.InlineResponse20018Ingredients, options)
  end
end

