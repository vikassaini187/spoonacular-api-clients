-module(spoonacular_inline_response_200_47).

-export([encode/1]).

-export_type([spoonacular_inline_response_200_47/0]).

-type spoonacular_inline_response_200_47() ::
    #{ 'recommendedWines' := list(),
       'totalFound' := integer()
     }.

encode(#{ 'recommendedWines' := RecommendedWines,
          'totalFound' := TotalFound
        }) ->
    #{ 'recommendedWines' => RecommendedWines,
       'totalFound' => TotalFound
     }.
