# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule com.spoonacular.client.Model.InlineResponse20024 do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"name",
    :"image",
    :"id",
    :"aisle",
    :"possibleUnits"
  ]

  @type t :: %__MODULE__{
    :"name" => String.t,
    :"image" => String.t,
    :"id" => integer(),
    :"aisle" => String.t,
    :"possibleUnits" => [String.t]
  }
end

defimpl Poison.Decoder, for: com.spoonacular.client.Model.InlineResponse20024 do
  def decode(value, _options) do
    value
  end
end

