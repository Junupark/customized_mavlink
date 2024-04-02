// MESSAGE ASCL_COMMAND_ACK support class

#pragma once

namespace mavlink {
namespace ascluav {
namespace msg {

/**
 * @brief ASCL_COMMAND_ACK message
 *
 * Message encoding an acknoledgment of subscribed command
 */
struct ASCL_COMMAND_ACK : mavlink::Message {
    static constexpr msgid_t MSG_ID = 53250;
    static constexpr size_t LENGTH = 3;
    static constexpr size_t MIN_LENGTH = 3;
    static constexpr uint8_t CRC_EXTRA = 123;
    static constexpr auto NAME = "ASCL_COMMAND_ACK";


    uint16_t command_id; /*<  Command ID */
    uint8_t result; /*<  Result of Command designated by Command ID */


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
        ss << "  command_id: " << command_id << std::endl;
        ss << "  result: " << +result << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << command_id;                    // offset: 0
        map << result;                        // offset: 2
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> command_id;                    // offset: 0
        map >> result;                        // offset: 2
    }
};

} // namespace msg
} // namespace ascluav
} // namespace mavlink
