// MESSAGE ASCL_PARAM_SET support class

#pragma once

namespace mavlink {
namespace ascluav {
namespace msg {

/**
 * @brief ASCL_PARAM_SET message
 *
 * Set a Parameter that corresponds to ASCL_PARAM. SUBSCRIBER of this message should PUBLISH ASCL_PARAM_VALUE in order to let PUBLISHER know
 */
struct ASCL_PARAM_SET : mavlink::Message {
    static constexpr msgid_t MSG_ID = 53232;
    static constexpr size_t LENGTH = 7;
    static constexpr size_t MIN_LENGTH = 7;
    static constexpr uint8_t CRC_EXTRA = 117;
    static constexpr auto NAME = "ASCL_PARAM_SET";


    uint16_t param_id; /*<  ID of a parameter */
    float param_value; /*<  Value of a parameter */
    uint8_t param_type; /*<  Type of a parameter */


    inline std::string get_name(void) const override
    {
            return NAME;
    }

    inline Info get_message_info(void) const override
    {
            return { MSG_ID, LENGTH, MIN_LENGTH, CRC_EXTRA };
    }

    inline std::string to_yaml(void) const override
    {
        std::stringstream ss;

        ss << NAME << ":" << std::endl;
        ss << "  param_id: " << param_id << std::endl;
        ss << "  param_value: " << param_value << std::endl;
        ss << "  param_type: " << +param_type << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << param_value;                   // offset: 0
        map << param_id;                      // offset: 4
        map << param_type;                    // offset: 6
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> param_value;                   // offset: 0
        map >> param_id;                      // offset: 4
        map >> param_type;                    // offset: 6
    }
};

} // namespace msg
} // namespace ascluav
} // namespace mavlink
