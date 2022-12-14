package com.spoonacular.client.model

import io.circe._
import io.finch.circe._
import io.circe.generic.semiauto._
import io.circe.java8.time._
import spoonacular._
import scala.collection.immutable.Seq

/**
 * 
 * @param annotations 
 */
case class InlineResponse20051(annotations: Seq[Object]
                )

object InlineResponse20051 {
    /**
     * Creates the codec for converting InlineResponse20051 from and to JSON.
     */
    implicit val decoder: Decoder[InlineResponse20051] = deriveDecoder
    implicit val encoder: ObjectEncoder[InlineResponse20051] = deriveEncoder
}
