// MESSAGE ASCL_PARAM_REQUEST support class

#pragma once

namespace mavlink {
namespace ascluav {
namespace msg {

/**
 * @brief ASCL_PARAM_REQUEST message
 *
 * Requesting a parameter using ID of it
 */
struct ASCL_PARAM_REQUEST : mavlink::Message {
    static constexpr msgid_t MSG_ID = 53233;
    static constexpr size_t LENGTH = 2;
    static constexpr size_t MIN_LENGTH = 2;
    static constexpr uint8_t CRC_EXTRA = 50;
    static constexpr auto NAME = "ASCL_PARAM_REQUEST";


    uint16_t param_id; /*<  ID of a parameter */


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

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << param_id;                      // offset: 0
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> param_id;                      // offset: 0
    }
};

} // namespace msg
} // namespace ascluav
} // namespace mavlink
