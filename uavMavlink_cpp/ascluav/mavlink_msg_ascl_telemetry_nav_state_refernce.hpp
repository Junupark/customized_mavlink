// MESSAGE ASCL_TELEMETRY_NAV_STATE_REFERNCE support class

#pragma once

namespace mavlink {
namespace ascluav {
namespace msg {

/**
 * @brief ASCL_TELEMETRY_NAV_STATE_REFERNCE message
 *
 * Message encoding navigational reference(believed to be true)
 */
struct ASCL_TELEMETRY_NAV_STATE_REFERNCE : mavlink::Message {
    static constexpr msgid_t MSG_ID = 55300;
    static constexpr size_t LENGTH = 40;
    static constexpr size_t MIN_LENGTH = 40;
    static constexpr uint8_t CRC_EXTRA = 181;
    static constexpr auto NAME = "ASCL_TELEMETRY_NAV_STATE_REFERNCE";


    uint32_t timems; /*< [ms] FC time in ms */
    std::array<float, 3> euler; /*< [deg] Euler angle in deg */
    std::array<uint32_t, 3> llh; /*< [degE7,mm] latitude/longitude/height in degE7/degE7/mm as integer */
    std::array<float, 3> velNed; /*< [m/s] Velocity of a vehicle in NED frame in m/s */


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
        ss << "  timems: " << timems << std::endl;
        ss << "  euler: [" << to_string(euler) << "]" << std::endl;
        ss << "  llh: [" << to_string(llh) << "]" << std::endl;
        ss << "  velNed: [" << to_string(velNed) << "]" << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << timems;                        // offset: 0
        map << euler;                         // offset: 4
        map << llh;                           // offset: 16
        map << velNed;                        // offset: 28
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> timems;                        // offset: 0
        map >> euler;                         // offset: 4
        map >> llh;                           // offset: 16
        map >> velNed;                        // offset: 28
    }
};

} // namespace msg
} // namespace ascluav
} // namespace mavlink
