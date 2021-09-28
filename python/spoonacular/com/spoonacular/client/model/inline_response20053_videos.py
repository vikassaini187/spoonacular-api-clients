# coding: utf-8

"""
    spoonacular API

    The spoonacular Nutrition, Recipe, and Food API allows you to access over 380,000 recipes, thousands of ingredients, 800,000 food products, and 100,000 menu items. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.  # noqa: E501

    The version of the OpenAPI document: 1.0
    Contact: mail@spoonacular.com
    Generated by: https://openapi-generator.tech
"""


import pprint
import re  # noqa: F401

import six


class InlineResponse20053Videos(object):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """

    """
    Attributes:
      openapi_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    openapi_types = {
        'title': 'str',
        'length': 'int',
        'rating': 'float',
        'short_title': 'str',
        'thumbnail': 'str',
        'views': 'int',
        'you_tube_id': 'str'
    }

    attribute_map = {
        'title': 'title',
        'length': 'length',
        'rating': 'rating',
        'short_title': 'shortTitle',
        'thumbnail': 'thumbnail',
        'views': 'views',
        'you_tube_id': 'youTubeId'
    }

    def __init__(self, title=None, length=None, rating=None, short_title=None, thumbnail=None, views=None, you_tube_id=None):  # noqa: E501
        """InlineResponse20053Videos - a model defined in OpenAPI"""  # noqa: E501

        self._title = None
        self._length = None
        self._rating = None
        self._short_title = None
        self._thumbnail = None
        self._views = None
        self._you_tube_id = None
        self.discriminator = None

        self.title = title
        self.length = length
        self.rating = rating
        self.short_title = short_title
        self.thumbnail = thumbnail
        self.views = views
        self.you_tube_id = you_tube_id

    @property
    def title(self):
        """Gets the title of this InlineResponse20053Videos.  # noqa: E501


        :return: The title of this InlineResponse20053Videos.  # noqa: E501
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title):
        """Sets the title of this InlineResponse20053Videos.


        :param title: The title of this InlineResponse20053Videos.  # noqa: E501
        :type: str
        """
        if title is None:
            raise ValueError("Invalid value for `title`, must not be `None`")  # noqa: E501
        if title is not None and len(title) < 1:
            raise ValueError("Invalid value for `title`, length must be greater than or equal to `1`")  # noqa: E501

        self._title = title

    @property
    def length(self):
        """Gets the length of this InlineResponse20053Videos.  # noqa: E501


        :return: The length of this InlineResponse20053Videos.  # noqa: E501
        :rtype: int
        """
        return self._length

    @length.setter
    def length(self, length):
        """Sets the length of this InlineResponse20053Videos.


        :param length: The length of this InlineResponse20053Videos.  # noqa: E501
        :type: int
        """
        if length is None:
            raise ValueError("Invalid value for `length`, must not be `None`")  # noqa: E501

        self._length = length

    @property
    def rating(self):
        """Gets the rating of this InlineResponse20053Videos.  # noqa: E501


        :return: The rating of this InlineResponse20053Videos.  # noqa: E501
        :rtype: float
        """
        return self._rating

    @rating.setter
    def rating(self, rating):
        """Sets the rating of this InlineResponse20053Videos.


        :param rating: The rating of this InlineResponse20053Videos.  # noqa: E501
        :type: float
        """
        if rating is None:
            raise ValueError("Invalid value for `rating`, must not be `None`")  # noqa: E501

        self._rating = rating

    @property
    def short_title(self):
        """Gets the short_title of this InlineResponse20053Videos.  # noqa: E501


        :return: The short_title of this InlineResponse20053Videos.  # noqa: E501
        :rtype: str
        """
        return self._short_title

    @short_title.setter
    def short_title(self, short_title):
        """Sets the short_title of this InlineResponse20053Videos.


        :param short_title: The short_title of this InlineResponse20053Videos.  # noqa: E501
        :type: str
        """
        if short_title is None:
            raise ValueError("Invalid value for `short_title`, must not be `None`")  # noqa: E501
        if short_title is not None and len(short_title) < 1:
            raise ValueError("Invalid value for `short_title`, length must be greater than or equal to `1`")  # noqa: E501

        self._short_title = short_title

    @property
    def thumbnail(self):
        """Gets the thumbnail of this InlineResponse20053Videos.  # noqa: E501


        :return: The thumbnail of this InlineResponse20053Videos.  # noqa: E501
        :rtype: str
        """
        return self._thumbnail

    @thumbnail.setter
    def thumbnail(self, thumbnail):
        """Sets the thumbnail of this InlineResponse20053Videos.


        :param thumbnail: The thumbnail of this InlineResponse20053Videos.  # noqa: E501
        :type: str
        """
        if thumbnail is None:
            raise ValueError("Invalid value for `thumbnail`, must not be `None`")  # noqa: E501
        if thumbnail is not None and len(thumbnail) < 1:
            raise ValueError("Invalid value for `thumbnail`, length must be greater than or equal to `1`")  # noqa: E501

        self._thumbnail = thumbnail

    @property
    def views(self):
        """Gets the views of this InlineResponse20053Videos.  # noqa: E501


        :return: The views of this InlineResponse20053Videos.  # noqa: E501
        :rtype: int
        """
        return self._views

    @views.setter
    def views(self, views):
        """Sets the views of this InlineResponse20053Videos.


        :param views: The views of this InlineResponse20053Videos.  # noqa: E501
        :type: int
        """
        if views is None:
            raise ValueError("Invalid value for `views`, must not be `None`")  # noqa: E501

        self._views = views

    @property
    def you_tube_id(self):
        """Gets the you_tube_id of this InlineResponse20053Videos.  # noqa: E501


        :return: The you_tube_id of this InlineResponse20053Videos.  # noqa: E501
        :rtype: str
        """
        return self._you_tube_id

    @you_tube_id.setter
    def you_tube_id(self, you_tube_id):
        """Sets the you_tube_id of this InlineResponse20053Videos.


        :param you_tube_id: The you_tube_id of this InlineResponse20053Videos.  # noqa: E501
        :type: str
        """
        if you_tube_id is None:
            raise ValueError("Invalid value for `you_tube_id`, must not be `None`")  # noqa: E501
        if you_tube_id is not None and len(you_tube_id) < 1:
            raise ValueError("Invalid value for `you_tube_id`, length must be greater than or equal to `1`")  # noqa: E501

        self._you_tube_id = you_tube_id

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.openapi_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, InlineResponse20053Videos):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other