/**
 * OEML - REST API
 * This section will provide necessary information about the `CoinAPI OEML REST API` protocol. This API is also available in the Postman application: <a href=\"https://postman.coinapi.io/\" target=\"_blank\">https://postman.coinapi.io/</a>       
 *
 * The version of the OpenAPI document: v1
 * Contact: support@coinapi.io
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Message.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Message_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Message_H_


#include "../ModelBase.h"

#include "Severity.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  Message
    : public ModelBase
{
public:
    Message();
    virtual ~Message();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Message members

    /// <summary>
    /// Type of message.
    /// </summary>
    utility::string_t getType() const;
    bool typeIsSet() const;
    void unsetType();

    void setType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Severity> getSeverity() const;
    bool severityIsSet() const;
    void unsetSeverity();

    void setSeverity(const std::shared_ptr<Severity>& value);

    /// <summary>
    /// If the message related to exchange, then the identifier of the exchange will be provided.
    /// </summary>
    utility::string_t getExchangeId() const;
    bool exchangeIdIsSet() const;
    void unsetExchange_id();

    void setExchangeId(const utility::string_t& value);

    /// <summary>
    /// Message text.
    /// </summary>
    utility::string_t getMessage() const;
    bool messageIsSet() const;
    void unsetMessage();

    void setMessage(const utility::string_t& value);


protected:
    utility::string_t m_Type;
    bool m_TypeIsSet;
    std::shared_ptr<Severity> m_Severity;
    bool m_SeverityIsSet;
    utility::string_t m_Exchange_id;
    bool m_Exchange_idIsSet;
    utility::string_t m_Message;
    bool m_MessageIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Message_H_ */
