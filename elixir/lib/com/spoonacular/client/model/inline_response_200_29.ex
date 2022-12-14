# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule com.spoonacular.client.Model.InlineResponse20029 do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"customFoods",
    :"type",
    :"offset",
    :"number"
  ]

  @type t :: %__MODULE__{
    :"customFoods" => [InlineResponse20029CustomFoods],
    :"type" => String.t,
    :"offset" => integer(),
    :"number" => integer()
  }
end

defimpl Poison.Decoder, for: com.spoonacular.client.Model.InlineResponse20029 do
  import com.spoonacular.client.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"customFoods", :list, com.spoonacular.client.Model.InlineResponse20029CustomFoods, options)
  end
end

