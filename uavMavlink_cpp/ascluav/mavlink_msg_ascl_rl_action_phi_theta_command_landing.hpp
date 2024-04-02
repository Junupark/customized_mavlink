// MESSAGE ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING support class

#pragma once

namespace mavlink {
namespace ascluav {
namespace msg {

/**
 * @brief ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING message
 *
 *  phi and theta command 
 */
struct ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING : mavlink::Message {
    static constexpr msgid_t MSG_ID = 55620;
    static constexpr size_t LENGTH = 8;
    static constexpr size_t MIN_LENGTH = 8;
    static constexpr uint8_t CRC_EXTRA = 118;
    static constexpr auto NAME = "ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING";


    float phi; /*< [none]  roll command  */
    float theta; /*< [none]  pitch command  */


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
        ss << "  phi: " << phi << std::endl;
        ss << "  theta: " << theta << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << phi;                           // offset: 0
        map << theta;                         // offset: 4
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> phi;                           // offset: 0
        map >> theta;                         // offset: 4
    }
};

} // namespace msg
} // namespace ascluav
} // namespace mavlink
