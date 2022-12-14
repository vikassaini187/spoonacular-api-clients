# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule com.spoonacular.client.Model.InlineResponse20049NutritionCalories do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"value",
    :"unit",
    :"confidenceRange95Percent",
    :"standardDeviation"
  ]

  @type t :: %__MODULE__{
    :"value" => float(),
    :"unit" => String.t,
    :"confidenceRange95Percent" => InlineResponse20049NutritionCaloriesConfidenceRange95Percent,
    :"standardDeviation" => float()
  }
end

defimpl Poison.Decoder, for: com.spoonacular.client.Model.InlineResponse20049NutritionCalories do
  import com.spoonacular.client.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"confidenceRange95Percent", :struct, com.spoonacular.client.Model.InlineResponse20049NutritionCaloriesConfidenceRange95Percent, options)
  end
end

