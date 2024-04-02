// MESSAGE ASCL_TELEMETRY_NAV_STATE_ATT support class

#pragma once

namespace mavlink {
namespace ascluav {
namespace msg {

/**
 * @brief ASCL_TELEMETRY_NAV_STATE_ATT message
 *
 * Message encoding attitude-related estimation
 */
struct ASCL_TELEMETRY_NAV_STATE_ATT : mavlink::Message {
    static constexpr msgid_t MSG_ID = 55298;
    static constexpr size_t LENGTH = 85;
    static constexpr size_t MIN_LENGTH = 85;
    static constexpr uint8_t CRC_EXTRA = 3;
    static constexpr auto NAME = "ASCL_TELEMETRY_NAV_STATE_ATT";


    uint32_t timems; /*< [ms] FC time in ms */
    std::array<float, 3> pqr; /*< [rad/s] Angular rate in rad/s */
    std::array<float, 3> euler; /*< [deg] Euler angle in deg */
    std::array<float, 4> quat; /*< [none] Quaternion */
    std::array<float, 10> covQuat; /*<  Covariance of Quaternion */
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
        ss << "  pqr: [" << to_string(pqr) << "]" << std::endl;
        ss << "  euler: [" << to_string(euler) << "]" << std::endl;
        ss << "  quat: [" << to_string(quat) << "]" << std::endl;
        ss << "  covQuat: [" << to_string(covQuat) << "]" << std::endl;
        ss << "  fused: " << +fused << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << timems;                        // offset: 0
        map << pqr;                           // offset: 4
        map << euler;                         // offset: 16
        map << quat;                          // offset: 28
        map << covQuat;                       // offset: 44
        map << fused;                         // offset: 84
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> timems;                        // offset: 0
        map >> pqr;                           // offset: 4
        map >> euler;                         // offset: 16
        map >> quat;                          // offset: 28
        map >> covQuat;                       // offset: 44
        map >> fused;                         // offset: 84
    }
};

} // namespace msg
} // namespace ascluav
} // namespace mavlink
