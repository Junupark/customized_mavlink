// MESSAGE ASCL_TELEMETRY_NAV_STATE_VEL_POS support class

#pragma once

namespace mavlink {
namespace ascluav {
namespace msg {

/**
 * @brief ASCL_TELEMETRY_NAV_STATE_VEL_POS message
 *
 * Message encoding position-related estimation
 */
struct ASCL_TELEMETRY_NAV_STATE_VEL_POS : mavlink::Message {
    static constexpr msgid_t MSG_ID = 55299;
    static constexpr size_t LENGTH = 137;
    static constexpr size_t MIN_LENGTH = 137;
    static constexpr uint8_t CRC_EXTRA = 114;
    static constexpr auto NAME = "ASCL_TELEMETRY_NAV_STATE_VEL_POS";


    uint32_t timems; /*< [ms] FC time in ms */
    std::array<float, 3> acc; /*< [m/s] Linear acceleration in m/s2 */
    std::array<float, 3> velNed; /*< [m/s] Velocity of a vehicle in NED frame in m/s */
    std::array<float, 3> ned; /*< [m] NED position in m */
    std::array<uint32_t, 3> llh; /*< [degE7,mm] latitude/longitude/height in degE7/degE7/mm as integer */
    std::array<float, 21> covVelPos; /*<  Covariance of ned velocity and ned position */
    uint8_t fused; /*<  Flags whether sensor(s) data is fused */


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
        ss << "  acc: [" << to_string(acc) << "]" << std::endl;
        ss << "  velNed: [" << to_string(velNed) << "]" << std::endl;
        ss << "  ned: [" << to_string(ned) << "]" << std::endl;
        ss << "  llh: [" << to_string(llh) << "]" << std::endl;
        ss << "  covVelPos: [" << to_string(covVelPos) << "]" << std::endl;
        ss << "  fused: " << +fused << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << timems;                        // offset: 0
        map << acc;                           // offset: 4
        map << velNed;                        // offset: 16
        map << ned;                           // offset: 28
        map << llh;                           // offset: 40
        map << covVelPos;                     // offset: 52
        map << fused;                         // offset: 136
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> timems;                        // offset: 0
        map >> acc;                           // offset: 4
        map >> velNed;                        // offset: 16
        map >> ned;                           // offset: 28
        map >> llh;                           // offset: 40
        map >> covVelPos;                     // offset: 52
        map >> fused;                         // offset: 136
    }
};

} // namespace msg
} // namespace ascluav
} // namespace mavlink
