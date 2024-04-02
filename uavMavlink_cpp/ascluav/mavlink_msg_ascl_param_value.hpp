// MESSAGE ASCL_PARAM_VALUE support class

#pragma once

namespace mavlink {
namespace ascluav {
namespace msg {

/**
 * @brief ASCL_PARAM_VALUE message
 *
 * Publish parameter value with corresponding status result @ either case. 1.ASCL_PARAM_SET > value + status: rejected/accepted, 2.ASCL_PARAM_REQUEST > value + response of request
 */
struct ASCL_PARAM_VALUE : mavlink::Message {
    static constexpr msgid_t MSG_ID = 53234;
    static constexpr size_t LENGTH = 8;
    static constexpr size_t MIN_LENGTH = 8;
    static constexpr uint8_t CRC_EXTRA = 197;
    static constexpr auto NAME = "ASCL_PARAM_VALUE";


    uint16_t param_id; /*<  ID of a parameter */
    float param_value; /*<  Value of a parameter */
    uint8_t param_type; /*<  Type of a parameter */
    uint8_t result; /*<  Status of a parameter */


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
        ss << "  result: " << +result << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << param_value;                   // offset: 0
        map << param_id;                      // offset: 4
        map << param_type;                    // offset: 6
        map << result;                        // offset: 7
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> param_value;                   // offset: 0
        map >> param_id;                      // offset: 4
        map >> param_type;                    // offset: 6
        map >> result;                        // offset: 7
    }
};

} // namespace msg
} // namespace ascluav
} // namespace mavlink
