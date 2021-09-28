/**
 * spoonacular API
 * The spoonacular Nutrition, Recipe, and Food API allows you to access over 380,000 recipes, thousands of ingredients, 800,000 food products, and 100,000 menu items. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.
 *
 * The version of the OpenAPI document: 1.0
 * Contact: mail@spoonacular.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIProductsApi.h"
#include "OAIHelpers.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

OAIProductsApi::OAIProductsApi() {

}

OAIProductsApi::~OAIProductsApi() {

}

OAIProductsApi::OAIProductsApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
OAIProductsApi::autocompleteProductSearch(const QString& query, const qint32& number) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/food/products/suggest");
    
    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("query"))
        .append("=")
        .append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(query)));
    
    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("number"))
        .append("=")
        .append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(number)));
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");


    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIProductsApi::autocompleteProductSearchCallback);

    worker->execute(&input);
}

void
OAIProductsApi::autocompleteProductSearchCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }
    OAIInline_response_200_32 output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit autocompleteProductSearchSignal(output);
        emit autocompleteProductSearchSignalFull(worker, output);
    } else {
        emit autocompleteProductSearchSignalE(output, error_type, error_str);
        emit autocompleteProductSearchSignalEFull(worker, error_type, error_str);
    }
}

void
OAIProductsApi::classifyGroceryProduct(const OAIInline_object_1& oai_inline_object_1, const QString& locale) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/food/products/classify");
    
    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("locale"))
        .append("=")
        .append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(locale)));
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "POST");

    
    QString output = oai_inline_object_1.asJson();
    input.request_body.append(output);
    

    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIProductsApi::classifyGroceryProductCallback);

    worker->execute(&input);
}

void
OAIProductsApi::classifyGroceryProductCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }
    OAIInline_response_200_33 output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit classifyGroceryProductSignal(output);
        emit classifyGroceryProductSignalFull(worker, output);
    } else {
        emit classifyGroceryProductSignalE(output, error_type, error_str);
        emit classifyGroceryProductSignalEFull(worker, error_type, error_str);
    }
}

void
OAIProductsApi::classifyGroceryProductBulk(const QList<OAIInlineObject>& oai_inline_object, const QString& locale) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/food/products/classifyBatch");
    
    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("locale"))
        .append("=")
        .append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(locale)));
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "POST");

    
    QJsonDocument doc(::OpenAPI::toJsonValue(oai_inline_object).toArray());
    QByteArray bytes = doc.toJson();
    input.request_body.append(bytes);
    

    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIProductsApi::classifyGroceryProductBulkCallback);

    worker->execute(&input);
}

void
OAIProductsApi::classifyGroceryProductBulkCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }
    QList<OAIInline_response_200_33> output;
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();
    foreach(QJsonValue obj, jsonArray) {
        OAIInline_response_200_33 val;
        ::OpenAPI::fromJsonValue(val, obj);
        output.append(val);
    }
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit classifyGroceryProductBulkSignal(output);
        emit classifyGroceryProductBulkSignalFull(worker, output);
    } else {
        emit classifyGroceryProductBulkSignalE(output, error_type, error_str);
        emit classifyGroceryProductBulkSignalEFull(worker, error_type, error_str);
    }
}

void
OAIProductsApi::getComparableProducts(const OAINumber& upc) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/food/products/upc/{upc}/comparable");
    QString upcPathParam("{"); 
    upcPathParam.append("upc").append("}");
    fullPath.replace(upcPathParam, QUrl::toPercentEncoding(::OpenAPI::toStringValue(upc)));
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");


    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIProductsApi::getComparableProductsCallback);

    worker->execute(&input);
}

void
OAIProductsApi::getComparableProductsCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }
    OAIInline_response_200_31 output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit getComparableProductsSignal(output);
        emit getComparableProductsSignalFull(worker, output);
    } else {
        emit getComparableProductsSignalE(output, error_type, error_str);
        emit getComparableProductsSignalEFull(worker, error_type, error_str);
    }
}

void
OAIProductsApi::getProductInformation(const qint32& id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/food/products/{id}");
    QString idPathParam("{"); 
    idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, QUrl::toPercentEncoding(::OpenAPI::toStringValue(id)));
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");


    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIProductsApi::getProductInformationCallback);

    worker->execute(&input);
}

void
OAIProductsApi::getProductInformationCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }
    OAIInline_response_200_30 output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit getProductInformationSignal(output);
        emit getProductInformationSignalFull(worker, output);
    } else {
        emit getProductInformationSignalE(output, error_type, error_str);
        emit getProductInformationSignalEFull(worker, error_type, error_str);
    }
}

void
OAIProductsApi::productNutritionByIDImage(const OAINumber& id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/food/products/{id}/nutritionWidget.png");
    QString idPathParam("{"); 
    idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, QUrl::toPercentEncoding(::OpenAPI::toStringValue(id)));
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");


    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIProductsApi::productNutritionByIDImageCallback);

    worker->execute(&input);
}

void
OAIProductsApi::productNutritionByIDImageCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }
    OAIObject output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit productNutritionByIDImageSignal(output);
        emit productNutritionByIDImageSignalFull(worker, output);
    } else {
        emit productNutritionByIDImageSignalE(output, error_type, error_str);
        emit productNutritionByIDImageSignalEFull(worker, error_type, error_str);
    }
}

void
OAIProductsApi::productNutritionLabelImage(const OAINumber& id, const bool& show_optional_nutrients, const bool& show_zero_values, const bool& show_ingredients) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/food/products/{id}/nutritionLabel.png");
    QString idPathParam("{"); 
    idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, QUrl::toPercentEncoding(::OpenAPI::toStringValue(id)));
    
    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("showOptionalNutrients"))
        .append("=")
        .append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(show_optional_nutrients)));
    
    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("showZeroValues"))
        .append("=")
        .append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(show_zero_values)));
    
    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("showIngredients"))
        .append("=")
        .append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(show_ingredients)));
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");


    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIProductsApi::productNutritionLabelImageCallback);

    worker->execute(&input);
}

void
OAIProductsApi::productNutritionLabelImageCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }
    OAIObject output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit productNutritionLabelImageSignal(output);
        emit productNutritionLabelImageSignalFull(worker, output);
    } else {
        emit productNutritionLabelImageSignalE(output, error_type, error_str);
        emit productNutritionLabelImageSignalEFull(worker, error_type, error_str);
    }
}

void
OAIProductsApi::productNutritionLabelWidget(const OAINumber& id, const bool& default_css, const bool& show_optional_nutrients, const bool& show_zero_values, const bool& show_ingredients) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/food/products/{id}/nutritionLabel");
    QString idPathParam("{"); 
    idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, QUrl::toPercentEncoding(::OpenAPI::toStringValue(id)));
    
    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("defaultCss"))
        .append("=")
        .append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(default_css)));
    
    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("showOptionalNutrients"))
        .append("=")
        .append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(show_optional_nutrients)));
    
    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("showZeroValues"))
        .append("=")
        .append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(show_zero_values)));
    
    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("showIngredients"))
        .append("=")
        .append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(show_ingredients)));
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");


    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIProductsApi::productNutritionLabelWidgetCallback);

    worker->execute(&input);
}

void
OAIProductsApi::productNutritionLabelWidgetCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }
    QString output;  
    ::OpenAPI::fromStringValue(QString(worker->response), output);
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit productNutritionLabelWidgetSignal(output);
        emit productNutritionLabelWidgetSignalFull(worker, output);
    } else {
        emit productNutritionLabelWidgetSignalE(output, error_type, error_str);
        emit productNutritionLabelWidgetSignalEFull(worker, error_type, error_str);
    }
}

void
OAIProductsApi::searchGroceryProducts(const QString& query, const OAINumber& min_calories, const OAINumber& max_calories, const OAINumber& min_carbs, const OAINumber& max_carbs, const OAINumber& min_protein, const OAINumber& max_protein, const OAINumber& min_fat, const OAINumber& max_fat, const qint32& offset, const qint32& number) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/food/products/search");
    
    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("query"))
        .append("=")
        .append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(query)));
    
    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("minCalories"))
        .append("=")
        .append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(min_calories)));
    
    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("maxCalories"))
        .append("=")
        .append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(max_calories)));
    
    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("minCarbs"))
        .append("=")
        .append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(min_carbs)));
    
    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("maxCarbs"))
        .append("=")
        .append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(max_carbs)));
    
    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("minProtein"))
        .append("=")
        .append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(min_protein)));
    
    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("maxProtein"))
        .append("=")
        .append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(max_protein)));
    
    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("minFat"))
        .append("=")
        .append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(min_fat)));
    
    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("maxFat"))
        .append("=")
        .append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(max_fat)));
    
    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("offset"))
        .append("=")
        .append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(offset)));
    
    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("number"))
        .append("=")
        .append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(number)));
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");


    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIProductsApi::searchGroceryProductsCallback);

    worker->execute(&input);
}

void
OAIProductsApi::searchGroceryProductsCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }
    OAIInline_response_200_27 output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit searchGroceryProductsSignal(output);
        emit searchGroceryProductsSignalFull(worker, output);
    } else {
        emit searchGroceryProductsSignalE(output, error_type, error_str);
        emit searchGroceryProductsSignalEFull(worker, error_type, error_str);
    }
}

void
OAIProductsApi::searchGroceryProductsByUPC(const OAINumber& upc) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/food/products/upc/{upc}");
    QString upcPathParam("{"); 
    upcPathParam.append("upc").append("}");
    fullPath.replace(upcPathParam, QUrl::toPercentEncoding(::OpenAPI::toStringValue(upc)));
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");


    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIProductsApi::searchGroceryProductsByUPCCallback);

    worker->execute(&input);
}

void
OAIProductsApi::searchGroceryProductsByUPCCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }
    OAIInline_response_200_28 output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit searchGroceryProductsByUPCSignal(output);
        emit searchGroceryProductsByUPCSignalFull(worker, output);
    } else {
        emit searchGroceryProductsByUPCSignalE(output, error_type, error_str);
        emit searchGroceryProductsByUPCSignalEFull(worker, error_type, error_str);
    }
}

void
OAIProductsApi::visualizeProductNutritionByID(const qint32& id, const bool& default_css, const QString& accept) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/food/products/{id}/nutritionWidget");
    QString idPathParam("{"); 
    idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, QUrl::toPercentEncoding(::OpenAPI::toStringValue(id)));
    
    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("defaultCss"))
        .append("=")
        .append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(default_css)));
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");

    if (accept != nullptr) {
        input.headers.insert("Accept", accept);
    }

    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIProductsApi::visualizeProductNutritionByIDCallback);

    worker->execute(&input);
}

void
OAIProductsApi::visualizeProductNutritionByIDCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }
    QString output;  
    ::OpenAPI::fromStringValue(QString(worker->response), output);
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit visualizeProductNutritionByIDSignal(output);
        emit visualizeProductNutritionByIDSignalFull(worker, output);
    } else {
        emit visualizeProductNutritionByIDSignalE(output, error_type, error_str);
        emit visualizeProductNutritionByIDSignalEFull(worker, error_type, error_str);
    }
}


}