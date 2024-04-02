// MESSAGE ASCL_COMMAND_SEND_F support class

#pragma once

namespace mavlink {
namespace ascluav {
namespace msg {

/**
 * @brief ASCL_COMMAND_SEND_F message
 *
 * Message encoding a command with parameters
 */
struct ASCL_COMMAND_SEND_F : mavlink::Message {
    static constexpr msgid_t MSG_ID = 53249;
    static constexpr size_t LENGTH = 28;
    static constexpr size_t MIN_LENGTH = 28;
    static constexpr uint8_t CRC_EXTRA = 216;
    static constexpr auto NAME = "ASCL_COMMAND_SEND_F";


    uint16_t command_id; /*<  Command ID */
    uint16_t option; /*<  command option, see ASCL_COMMAND enum */
    float paramf1; /*<  PARAM1, float, see ASCL_COMMAND enum */
    float paramf2; /*<  PARAM2, float, see ASCL_COMMAND enum */
    float paramf3; /*<  PARAM3, float, see ASCL_COMMAND enum */
    float paramf4; /*<  PARAM4, float, see ASCL_COMMAND enum */
    float paramf5; /*<  PARAM5, float, see ASCL_COMMAND enum */
    float paramf6; /*<  PARAM6, float, see ASCL_COMMAND enum */


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
        ss << "  option: " << option << std::endl;
        ss << "  paramf1: " << paramf1 << std::endl;
        ss << "  paramf2: " << paramf2 << std::endl;
        ss << "  paramf3: " << paramf3 << std::endl;
        ss << "  paramf4: " << paramf4 << std::endl;
        ss << "  paramf5: " << paramf5 << std::endl;
        ss << "  paramf6: " << paramf6 << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << paramf1;                       // offset: 0
        map << paramf2;                       // offset: 4
        map << paramf3;                       // offset: 8
        map << paramf4;                       // offset: 12
        map << paramf5;                       // offset: 16
        map << paramf6;                       // offset: 20
        map << command_id;                    // offset: 24
        map << option;                        // offset: 26
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> paramf1;                       // offset: 0
        map >> paramf2;                       // offset: 4
        map >> paramf3;                       // offset: 8
        map >> paramf4;                       // offset: 12
        map >> paramf5;                       // offset: 16
        map >> paramf6;                       // offset: 20
        map >> command_id;                    // offset: 24
        map >> option;                        // offset: 26
    }
};

} // namespace msg
} // namespace ascluav
} // namespace mavlink
