part of openapi.api;

class InlineResponse20042 {
  
  List<InlineResponse20042Aisles> aisles = [];
  
  num cost = null;
  
  num startDate = null;
  
  num endDate = null;
  InlineResponse20042();

  @override
  String toString() {
    return 'InlineResponse20042[aisles=$aisles, cost=$cost, startDate=$startDate, endDate=$endDate, ]';
  }

  InlineResponse20042.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    if (json['aisles'] == null) {
      aisles = null;
    } else {
      aisles = InlineResponse20042Aisles.listFromJson(json['aisles']);
    }
    if (json['cost'] == null) {
      cost = null;
    } else {
          cost = json['cost'];
    }
    if (json['startDate'] == null) {
      startDate = null;
    } else {
          startDate = json['startDate'];
    }
    if (json['endDate'] == null) {
      endDate = null;
    } else {
          endDate = json['endDate'];
    }
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (aisles != null)
      json['aisles'] = aisles;
    if (cost != null)
      json['cost'] = cost;
    if (startDate != null)
      json['startDate'] = startDate;
    if (endDate != null)
      json['endDate'] = endDate;
    return json;
  }

  static List<InlineResponse20042> listFromJson(List<dynamic> json) {
    return json == null ? new List<InlineResponse20042>() : json.map((value) => new InlineResponse20042.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20042> mapFromJson(Map<String, dynamic> json) {
    var map = new Map<String, InlineResponse20042>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = new InlineResponse20042.fromJson(value));
    }
    return map;
  }
}

