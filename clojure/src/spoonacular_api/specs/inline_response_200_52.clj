(ns spoonacular-api.specs.inline-response-200-52
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def inline-response-200-52-data
  {
   (ds/req :Articles) (s/coll-of any?)
   (ds/req :GroceryProducts) (s/coll-of any?)
   (ds/req :MenuItems) (s/coll-of any?)
   (ds/req :Recipes) (s/coll-of any?)
   })

(def inline-response-200-52-spec
  (ds/spec
    {:name ::inline-response-200-52
     :spec inline-response-200-52-data}))
