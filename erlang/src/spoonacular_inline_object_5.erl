-module(spoonacular_inline_object_5).

-export([encode/1]).

-export_type([spoonacular_inline_object_5/0]).

-type spoonacular_inline_object_5() ::
    #{ 'username' := binary(),
       'id' := integer(),
       'hash' := binary()
     }.

encode(#{ 'username' := Username,
          'id' := Id,
          'hash' := Hash
        }) ->
    #{ 'username' => Username,
       'id' => Id,
       'hash' => Hash
     }.
