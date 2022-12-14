=begin comment

spoonacular API

The spoonacular Nutrition, Recipe, and Food API allows you to access over 380,000 recipes, thousands of ingredients, 800,000 food products, and 100,000 menu items. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.

The version of the OpenAPI document: 1.0
Contact: mail@spoonacular.com
Generated by: https://openapi-generator.tech

=end comment

=cut

#
# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# Do not edit the class manually.
# Ref: https://openapi-generator.tech
#
package WWW::OpenAPIClient::MiscApi;

require 5.6.0;
use strict;
use warnings;
use utf8; 
use Exporter;
use Carp qw( croak );
use Log::Any qw($log);

use WWW::OpenAPIClient::ApiClient;

use base "Class::Data::Inheritable";

__PACKAGE__->mk_classdata('method_documentation' => {});

sub new {
    my $class = shift;
    my $api_client;

    if ($_[0] && ref $_[0] && ref $_[0] eq 'WWW::OpenAPIClient::ApiClient' ) {
        $api_client = $_[0];
    } else {
        $api_client = WWW::OpenAPIClient::ApiClient->new(@_);
    }

    bless { api_client => $api_client }, $class;

}


#
# detect_food_in_text
#
# Detect Food in Text
# 
# @param string $content_type The content type. (optional)
{
    my $params = {
    'content_type' => {
        data_type => 'string',
        description => 'The content type.',
        required => '0',
    },
    };
    __PACKAGE__->method_documentation->{ 'detect_food_in_text' } = { 
        summary => 'Detect Food in Text',
        params => $params,
        returns => 'InlineResponse20051',
        };
}
# @return InlineResponse20051
#
sub detect_food_in_text {
    my ($self, %args) = @_;

    # parse inputs
    my $_resource_path = '/food/detect';

    my $_method = 'POST';
    my $query_params = {};
    my $header_params = {};
    my $form_params = {};

    # 'Accept' and 'Content-Type' header
    my $_header_accept = $self->{api_client}->select_header_accept('application/json');
    if ($_header_accept) {
        $header_params->{'Accept'} = $_header_accept;
    }
    $header_params->{'Content-Type'} = $self->{api_client}->select_header_content_type('application/x-www-form-urlencoded');

    # header params
    if ( exists $args{'content_type'}) {
        $header_params->{'Content-Type'} = $self->{api_client}->to_header_value($args{'content_type'});
    }

    my $_body_data;
    # authentication setting, if any
    my $auth_settings = [qw(apiKeyScheme )];

    # make the API Call
    my $response = $self->{api_client}->call_api($_resource_path, $_method,
                                           $query_params, $form_params,
                                           $header_params, $_body_data, $auth_settings);
    if (!$response) {
        return;
    }
    my $_response_object = $self->{api_client}->deserialize('InlineResponse20051', $response);
    return $_response_object;
}

#
# get_a_random_food_joke
#
# Random Food Joke
# 
{
    my $params = {
    };
    __PACKAGE__->method_documentation->{ 'get_a_random_food_joke' } = { 
        summary => 'Random Food Joke',
        params => $params,
        returns => 'InlineResponse20055',
        };
}
# @return InlineResponse20055
#
sub get_a_random_food_joke {
    my ($self, %args) = @_;

    # parse inputs
    my $_resource_path = '/food/jokes/random';

    my $_method = 'GET';
    my $query_params = {};
    my $header_params = {};
    my $form_params = {};

    # 'Accept' and 'Content-Type' header
    my $_header_accept = $self->{api_client}->select_header_accept('application/json');
    if ($_header_accept) {
        $header_params->{'Accept'} = $_header_accept;
    }
    $header_params->{'Content-Type'} = $self->{api_client}->select_header_content_type();

    my $_body_data;
    # authentication setting, if any
    my $auth_settings = [qw(apiKeyScheme )];

    # make the API Call
    my $response = $self->{api_client}->call_api($_resource_path, $_method,
                                           $query_params, $form_params,
                                           $header_params, $_body_data, $auth_settings);
    if (!$response) {
        return;
    }
    my $_response_object = $self->{api_client}->deserialize('InlineResponse20055', $response);
    return $_response_object;
}

#
# get_conversation_suggests
#
# Conversation Suggests
# 
# @param string $query A (partial) query from the user. The endpoint will return if it matches topics it can talk about. (required)
# @param double $number The number of suggestions to return (between 1 and 25). (optional)
{
    my $params = {
    'query' => {
        data_type => 'string',
        description => 'A (partial) query from the user. The endpoint will return if it matches topics it can talk about.',
        required => '1',
    },
    'number' => {
        data_type => 'double',
        description => 'The number of suggestions to return (between 1 and 25).',
        required => '0',
    },
    };
    __PACKAGE__->method_documentation->{ 'get_conversation_suggests' } = { 
        summary => 'Conversation Suggests',
        params => $params,
        returns => 'InlineResponse20057',
        };
}
# @return InlineResponse20057
#
sub get_conversation_suggests {
    my ($self, %args) = @_;

    # verify the required parameter 'query' is set
    unless (exists $args{'query'}) {
      croak("Missing the required parameter 'query' when calling get_conversation_suggests");
    }

    # parse inputs
    my $_resource_path = '/food/converse/suggest';

    my $_method = 'GET';
    my $query_params = {};
    my $header_params = {};
    my $form_params = {};

    # 'Accept' and 'Content-Type' header
    my $_header_accept = $self->{api_client}->select_header_accept('application/json');
    if ($_header_accept) {
        $header_params->{'Accept'} = $_header_accept;
    }
    $header_params->{'Content-Type'} = $self->{api_client}->select_header_content_type();

    # query params
    if ( exists $args{'query'}) {
        $query_params->{'query'} = $self->{api_client}->to_query_value($args{'query'});
    }

    # query params
    if ( exists $args{'number'}) {
        $query_params->{'number'} = $self->{api_client}->to_query_value($args{'number'});
    }

    my $_body_data;
    # authentication setting, if any
    my $auth_settings = [qw(apiKeyScheme )];

    # make the API Call
    my $response = $self->{api_client}->call_api($_resource_path, $_method,
                                           $query_params, $form_params,
                                           $header_params, $_body_data, $auth_settings);
    if (!$response) {
        return;
    }
    my $_response_object = $self->{api_client}->deserialize('InlineResponse20057', $response);
    return $_response_object;
}

#
# get_random_food_trivia
#
# Random Food Trivia
# 
{
    my $params = {
    };
    __PACKAGE__->method_documentation->{ 'get_random_food_trivia' } = { 
        summary => 'Random Food Trivia',
        params => $params,
        returns => 'InlineResponse20055',
        };
}
# @return InlineResponse20055
#
sub get_random_food_trivia {
    my ($self, %args) = @_;

    # parse inputs
    my $_resource_path = '/food/trivia/random';

    my $_method = 'GET';
    my $query_params = {};
    my $header_params = {};
    my $form_params = {};

    # 'Accept' and 'Content-Type' header
    my $_header_accept = $self->{api_client}->select_header_accept('application/json');
    if ($_header_accept) {
        $header_params->{'Accept'} = $_header_accept;
    }
    $header_params->{'Content-Type'} = $self->{api_client}->select_header_content_type();

    my $_body_data;
    # authentication setting, if any
    my $auth_settings = [qw(apiKeyScheme )];

    # make the API Call
    my $response = $self->{api_client}->call_api($_resource_path, $_method,
                                           $query_params, $form_params,
                                           $header_params, $_body_data, $auth_settings);
    if (!$response) {
        return;
    }
    my $_response_object = $self->{api_client}->deserialize('InlineResponse20055', $response);
    return $_response_object;
}

#
# image_analysis_by_url
#
# Image Analysis by URL
# 
# @param string $image_url The URL of the image to be analyzed. (required)
{
    my $params = {
    'image_url' => {
        data_type => 'string',
        description => 'The URL of the image to be analyzed.',
        required => '1',
    },
    };
    __PACKAGE__->method_documentation->{ 'image_analysis_by_url' } = { 
        summary => 'Image Analysis by URL',
        params => $params,
        returns => 'InlineResponse20049',
        };
}
# @return InlineResponse20049
#
sub image_analysis_by_url {
    my ($self, %args) = @_;

    # verify the required parameter 'image_url' is set
    unless (exists $args{'image_url'}) {
      croak("Missing the required parameter 'image_url' when calling image_analysis_by_url");
    }

    # parse inputs
    my $_resource_path = '/food/images/analyze';

    my $_method = 'GET';
    my $query_params = {};
    my $header_params = {};
    my $form_params = {};

    # 'Accept' and 'Content-Type' header
    my $_header_accept = $self->{api_client}->select_header_accept('application/json');
    if ($_header_accept) {
        $header_params->{'Accept'} = $_header_accept;
    }
    $header_params->{'Content-Type'} = $self->{api_client}->select_header_content_type();

    # query params
    if ( exists $args{'image_url'}) {
        $query_params->{'imageUrl'} = $self->{api_client}->to_query_value($args{'image_url'});
    }

    my $_body_data;
    # authentication setting, if any
    my $auth_settings = [qw(apiKeyScheme )];

    # make the API Call
    my $response = $self->{api_client}->call_api($_resource_path, $_method,
                                           $query_params, $form_params,
                                           $header_params, $_body_data, $auth_settings);
    if (!$response) {
        return;
    }
    my $_response_object = $self->{api_client}->deserialize('InlineResponse20049', $response);
    return $_response_object;
}

#
# image_classification_by_url
#
# Image Classification by URL
# 
# @param string $image_url The URL of the image to be classified. (required)
{
    my $params = {
    'image_url' => {
        data_type => 'string',
        description => 'The URL of the image to be classified.',
        required => '1',
    },
    };
    __PACKAGE__->method_documentation->{ 'image_classification_by_url' } = { 
        summary => 'Image Classification by URL',
        params => $params,
        returns => 'InlineResponse20048',
        };
}
# @return InlineResponse20048
#
sub image_classification_by_url {
    my ($self, %args) = @_;

    # verify the required parameter 'image_url' is set
    unless (exists $args{'image_url'}) {
      croak("Missing the required parameter 'image_url' when calling image_classification_by_url");
    }

    # parse inputs
    my $_resource_path = '/food/images/classify';

    my $_method = 'GET';
    my $query_params = {};
    my $header_params = {};
    my $form_params = {};

    # 'Accept' and 'Content-Type' header
    my $_header_accept = $self->{api_client}->select_header_accept('application/json');
    if ($_header_accept) {
        $header_params->{'Accept'} = $_header_accept;
    }
    $header_params->{'Content-Type'} = $self->{api_client}->select_header_content_type();

    # query params
    if ( exists $args{'image_url'}) {
        $query_params->{'imageUrl'} = $self->{api_client}->to_query_value($args{'image_url'});
    }

    my $_body_data;
    # authentication setting, if any
    my $auth_settings = [qw(apiKeyScheme )];

    # make the API Call
    my $response = $self->{api_client}->call_api($_resource_path, $_method,
                                           $query_params, $form_params,
                                           $header_params, $_body_data, $auth_settings);
    if (!$response) {
        return;
    }
    my $_response_object = $self->{api_client}->deserialize('InlineResponse20048', $response);
    return $_response_object;
}

#
# search_all_food
#
# Search All Food
# 
# @param string $query The search query. (required)
# @param int $offset The number of results to skip (between 0 and 900). (optional)
# @param int $number The maximum number of items to return (between 1 and 100). Defaults to 10. (optional, default to 10)
{
    my $params = {
    'query' => {
        data_type => 'string',
        description => 'The search query.',
        required => '1',
    },
    'offset' => {
        data_type => 'int',
        description => 'The number of results to skip (between 0 and 900).',
        required => '0',
    },
    'number' => {
        data_type => 'int',
        description => 'The maximum number of items to return (between 1 and 100). Defaults to 10.',
        required => '0',
    },
    };
    __PACKAGE__->method_documentation->{ 'search_all_food' } = { 
        summary => 'Search All Food',
        params => $params,
        returns => 'InlineResponse20053',
        };
}
# @return InlineResponse20053
#
sub search_all_food {
    my ($self, %args) = @_;

    # verify the required parameter 'query' is set
    unless (exists $args{'query'}) {
      croak("Missing the required parameter 'query' when calling search_all_food");
    }

    # parse inputs
    my $_resource_path = '/food/search';

    my $_method = 'GET';
    my $query_params = {};
    my $header_params = {};
    my $form_params = {};

    # 'Accept' and 'Content-Type' header
    my $_header_accept = $self->{api_client}->select_header_accept('application/json');
    if ($_header_accept) {
        $header_params->{'Accept'} = $_header_accept;
    }
    $header_params->{'Content-Type'} = $self->{api_client}->select_header_content_type();

    # query params
    if ( exists $args{'query'}) {
        $query_params->{'query'} = $self->{api_client}->to_query_value($args{'query'});
    }

    # query params
    if ( exists $args{'offset'}) {
        $query_params->{'offset'} = $self->{api_client}->to_query_value($args{'offset'});
    }

    # query params
    if ( exists $args{'number'}) {
        $query_params->{'number'} = $self->{api_client}->to_query_value($args{'number'});
    }

    my $_body_data;
    # authentication setting, if any
    my $auth_settings = [qw(apiKeyScheme )];

    # make the API Call
    my $response = $self->{api_client}->call_api($_resource_path, $_method,
                                           $query_params, $form_params,
                                           $header_params, $_body_data, $auth_settings);
    if (!$response) {
        return;
    }
    my $_response_object = $self->{api_client}->deserialize('InlineResponse20053', $response);
    return $_response_object;
}

#
# search_custom_foods
#
# Search Custom Foods
# 
# @param string $username The username. (required)
# @param string $hash The private hash for the username. (required)
# @param string $query The (natural language) search query. (optional)
# @param int $offset The number of results to skip (between 0 and 900). (optional)
# @param int $number The maximum number of items to return (between 1 and 100). Defaults to 10. (optional, default to 10)
{
    my $params = {
    'username' => {
        data_type => 'string',
        description => 'The username.',
        required => '1',
    },
    'hash' => {
        data_type => 'string',
        description => 'The private hash for the username.',
        required => '1',
    },
    'query' => {
        data_type => 'string',
        description => 'The (natural language) search query.',
        required => '0',
    },
    'offset' => {
        data_type => 'int',
        description => 'The number of results to skip (between 0 and 900).',
        required => '0',
    },
    'number' => {
        data_type => 'int',
        description => 'The maximum number of items to return (between 1 and 100). Defaults to 10.',
        required => '0',
    },
    };
    __PACKAGE__->method_documentation->{ 'search_custom_foods' } = { 
        summary => 'Search Custom Foods',
        params => $params,
        returns => 'InlineResponse20029',
        };
}
# @return InlineResponse20029
#
sub search_custom_foods {
    my ($self, %args) = @_;

    # verify the required parameter 'username' is set
    unless (exists $args{'username'}) {
      croak("Missing the required parameter 'username' when calling search_custom_foods");
    }

    # verify the required parameter 'hash' is set
    unless (exists $args{'hash'}) {
      croak("Missing the required parameter 'hash' when calling search_custom_foods");
    }

    # parse inputs
    my $_resource_path = '/food/customFoods/search';

    my $_method = 'GET';
    my $query_params = {};
    my $header_params = {};
    my $form_params = {};

    # 'Accept' and 'Content-Type' header
    my $_header_accept = $self->{api_client}->select_header_accept('application/json');
    if ($_header_accept) {
        $header_params->{'Accept'} = $_header_accept;
    }
    $header_params->{'Content-Type'} = $self->{api_client}->select_header_content_type();

    # query params
    if ( exists $args{'query'}) {
        $query_params->{'query'} = $self->{api_client}->to_query_value($args{'query'});
    }

    # query params
    if ( exists $args{'username'}) {
        $query_params->{'username'} = $self->{api_client}->to_query_value($args{'username'});
    }

    # query params
    if ( exists $args{'hash'}) {
        $query_params->{'hash'} = $self->{api_client}->to_query_value($args{'hash'});
    }

    # query params
    if ( exists $args{'offset'}) {
        $query_params->{'offset'} = $self->{api_client}->to_query_value($args{'offset'});
    }

    # query params
    if ( exists $args{'number'}) {
        $query_params->{'number'} = $self->{api_client}->to_query_value($args{'number'});
    }

    my $_body_data;
    # authentication setting, if any
    my $auth_settings = [qw(apiKeyScheme )];

    # make the API Call
    my $response = $self->{api_client}->call_api($_resource_path, $_method,
                                           $query_params, $form_params,
                                           $header_params, $_body_data, $auth_settings);
    if (!$response) {
        return;
    }
    my $_response_object = $self->{api_client}->deserialize('InlineResponse20029', $response);
    return $_response_object;
}

#
# search_food_videos
#
# Search Food Videos
# 
# @param string $query The (natural language) search query. (optional)
# @param string $type The type of the recipes. See a full list of supported meal types. (optional)
# @param string $cuisine The cuisine(s) of the recipes. One or more, comma separated. See a full list of supported cuisines. (optional)
# @param string $diet The diet for which the recipes must be suitable. See a full list of supported diets. (optional)
# @param string $include_ingredients A comma-separated list of ingredients that the recipes should contain. (optional)
# @param string $exclude_ingredients A comma-separated list of ingredients or ingredient types that the recipes must not contain. (optional)
# @param double $min_length Minimum video length in seconds. (optional)
# @param double $max_length Maximum video length in seconds. (optional)
# @param int $offset The number of results to skip (between 0 and 900). (optional)
# @param int $number The maximum number of items to return (between 1 and 100). Defaults to 10. (optional, default to 10)
{
    my $params = {
    'query' => {
        data_type => 'string',
        description => 'The (natural language) search query.',
        required => '0',
    },
    'type' => {
        data_type => 'string',
        description => 'The type of the recipes. See a full list of supported meal types.',
        required => '0',
    },
    'cuisine' => {
        data_type => 'string',
        description => 'The cuisine(s) of the recipes. One or more, comma separated. See a full list of supported cuisines.',
        required => '0',
    },
    'diet' => {
        data_type => 'string',
        description => 'The diet for which the recipes must be suitable. See a full list of supported diets.',
        required => '0',
    },
    'include_ingredients' => {
        data_type => 'string',
        description => 'A comma-separated list of ingredients that the recipes should contain.',
        required => '0',
    },
    'exclude_ingredients' => {
        data_type => 'string',
        description => 'A comma-separated list of ingredients or ingredient types that the recipes must not contain.',
        required => '0',
    },
    'min_length' => {
        data_type => 'double',
        description => 'Minimum video length in seconds.',
        required => '0',
    },
    'max_length' => {
        data_type => 'double',
        description => 'Maximum video length in seconds.',
        required => '0',
    },
    'offset' => {
        data_type => 'int',
        description => 'The number of results to skip (between 0 and 900).',
        required => '0',
    },
    'number' => {
        data_type => 'int',
        description => 'The maximum number of items to return (between 1 and 100). Defaults to 10.',
        required => '0',
    },
    };
    __PACKAGE__->method_documentation->{ 'search_food_videos' } = { 
        summary => 'Search Food Videos',
        params => $params,
        returns => 'InlineResponse20054',
        };
}
# @return InlineResponse20054
#
sub search_food_videos {
    my ($self, %args) = @_;

    # parse inputs
    my $_resource_path = '/food/videos/search';

    my $_method = 'GET';
    my $query_params = {};
    my $header_params = {};
    my $form_params = {};

    # 'Accept' and 'Content-Type' header
    my $_header_accept = $self->{api_client}->select_header_accept('application/json');
    if ($_header_accept) {
        $header_params->{'Accept'} = $_header_accept;
    }
    $header_params->{'Content-Type'} = $self->{api_client}->select_header_content_type();

    # query params
    if ( exists $args{'query'}) {
        $query_params->{'query'} = $self->{api_client}->to_query_value($args{'query'});
    }

    # query params
    if ( exists $args{'type'}) {
        $query_params->{'type'} = $self->{api_client}->to_query_value($args{'type'});
    }

    # query params
    if ( exists $args{'cuisine'}) {
        $query_params->{'cuisine'} = $self->{api_client}->to_query_value($args{'cuisine'});
    }

    # query params
    if ( exists $args{'diet'}) {
        $query_params->{'diet'} = $self->{api_client}->to_query_value($args{'diet'});
    }

    # query params
    if ( exists $args{'include_ingredients'}) {
        $query_params->{'includeIngredients'} = $self->{api_client}->to_query_value($args{'include_ingredients'});
    }

    # query params
    if ( exists $args{'exclude_ingredients'}) {
        $query_params->{'excludeIngredients'} = $self->{api_client}->to_query_value($args{'exclude_ingredients'});
    }

    # query params
    if ( exists $args{'min_length'}) {
        $query_params->{'minLength'} = $self->{api_client}->to_query_value($args{'min_length'});
    }

    # query params
    if ( exists $args{'max_length'}) {
        $query_params->{'maxLength'} = $self->{api_client}->to_query_value($args{'max_length'});
    }

    # query params
    if ( exists $args{'offset'}) {
        $query_params->{'offset'} = $self->{api_client}->to_query_value($args{'offset'});
    }

    # query params
    if ( exists $args{'number'}) {
        $query_params->{'number'} = $self->{api_client}->to_query_value($args{'number'});
    }

    my $_body_data;
    # authentication setting, if any
    my $auth_settings = [qw(apiKeyScheme )];

    # make the API Call
    my $response = $self->{api_client}->call_api($_resource_path, $_method,
                                           $query_params, $form_params,
                                           $header_params, $_body_data, $auth_settings);
    if (!$response) {
        return;
    }
    my $_response_object = $self->{api_client}->deserialize('InlineResponse20054', $response);
    return $_response_object;
}

#
# search_site_content
#
# Search Site Content
# 
# @param string $query The query to search for. You can also use partial queries such as \&quot;spagh\&quot; to already find spaghetti recipes, articles, grocery products, and other content. (required)
{
    my $params = {
    'query' => {
        data_type => 'string',
        description => 'The query to search for. You can also use partial queries such as \&quot;spagh\&quot; to already find spaghetti recipes, articles, grocery products, and other content.',
        required => '1',
    },
    };
    __PACKAGE__->method_documentation->{ 'search_site_content' } = { 
        summary => 'Search Site Content',
        params => $params,
        returns => 'InlineResponse20052',
        };
}
# @return InlineResponse20052
#
sub search_site_content {
    my ($self, %args) = @_;

    # verify the required parameter 'query' is set
    unless (exists $args{'query'}) {
      croak("Missing the required parameter 'query' when calling search_site_content");
    }

    # parse inputs
    my $_resource_path = '/food/site/search';

    my $_method = 'GET';
    my $query_params = {};
    my $header_params = {};
    my $form_params = {};

    # 'Accept' and 'Content-Type' header
    my $_header_accept = $self->{api_client}->select_header_accept('application/json');
    if ($_header_accept) {
        $header_params->{'Accept'} = $_header_accept;
    }
    $header_params->{'Content-Type'} = $self->{api_client}->select_header_content_type();

    # query params
    if ( exists $args{'query'}) {
        $query_params->{'query'} = $self->{api_client}->to_query_value($args{'query'});
    }

    my $_body_data;
    # authentication setting, if any
    my $auth_settings = [qw(apiKeyScheme )];

    # make the API Call
    my $response = $self->{api_client}->call_api($_resource_path, $_method,
                                           $query_params, $form_params,
                                           $header_params, $_body_data, $auth_settings);
    if (!$response) {
        return;
    }
    my $_response_object = $self->{api_client}->deserialize('InlineResponse20052', $response);
    return $_response_object;
}

#
# talk_to_chatbot
#
# Talk to Chatbot
# 
# @param string $text The request / question / answer from the user to the chatbot. (required)
# @param string $context_id An arbitrary globally unique id for your conversation. The conversation can contain states so you should pass your context id if you want the bot to be able to remember the conversation. (optional)
{
    my $params = {
    'text' => {
        data_type => 'string',
        description => 'The request / question / answer from the user to the chatbot.',
        required => '1',
    },
    'context_id' => {
        data_type => 'string',
        description => 'An arbitrary globally unique id for your conversation. The conversation can contain states so you should pass your context id if you want the bot to be able to remember the conversation.',
        required => '0',
    },
    };
    __PACKAGE__->method_documentation->{ 'talk_to_chatbot' } = { 
        summary => 'Talk to Chatbot',
        params => $params,
        returns => 'InlineResponse20056',
        };
}
# @return InlineResponse20056
#
sub talk_to_chatbot {
    my ($self, %args) = @_;

    # verify the required parameter 'text' is set
    unless (exists $args{'text'}) {
      croak("Missing the required parameter 'text' when calling talk_to_chatbot");
    }

    # parse inputs
    my $_resource_path = '/food/converse';

    my $_method = 'GET';
    my $query_params = {};
    my $header_params = {};
    my $form_params = {};

    # 'Accept' and 'Content-Type' header
    my $_header_accept = $self->{api_client}->select_header_accept('application/json');
    if ($_header_accept) {
        $header_params->{'Accept'} = $_header_accept;
    }
    $header_params->{'Content-Type'} = $self->{api_client}->select_header_content_type();

    # query params
    if ( exists $args{'text'}) {
        $query_params->{'text'} = $self->{api_client}->to_query_value($args{'text'});
    }

    # query params
    if ( exists $args{'context_id'}) {
        $query_params->{'contextId'} = $self->{api_client}->to_query_value($args{'context_id'});
    }

    my $_body_data;
    # authentication setting, if any
    my $auth_settings = [qw(apiKeyScheme )];

    # make the API Call
    my $response = $self->{api_client}->call_api($_resource_path, $_method,
                                           $query_params, $form_params,
                                           $header_params, $_body_data, $auth_settings);
    if (!$response) {
        return;
    }
    my $_response_object = $self->{api_client}->deserialize('InlineResponse20056', $response);
    return $_response_object;
}

1;
