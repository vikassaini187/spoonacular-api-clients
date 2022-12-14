package com.spoonacular.client.model;

import groovy.transform.Canonical
import com.spoonacular.client.model.InlineResponse20049NutritionCaloriesConfidenceRange95Percent;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.math.BigDecimal;

@Canonical
class InlineResponse20049NutritionCalories {
    
    BigDecimal value
    
    String unit
    
    InlineResponse20049NutritionCaloriesConfidenceRange95Percent confidenceRange95Percent = null
    
    BigDecimal standardDeviation
}
