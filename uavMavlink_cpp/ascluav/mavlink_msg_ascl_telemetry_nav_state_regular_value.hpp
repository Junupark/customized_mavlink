// MESSAGE ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE support class

#pragma once

namespace mavlink {
namespace ascluav {
namespace msg {

/**
 * @brief ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE message
 *
 * Message encoding regular telemetry set
 */
struct ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE : mavlink::Message {
    static constexpr msgid_t MSG_ID = 55296;
    static constexpr size_t LENGTH = 96;
    static constexpr size_t MIN_LENGTH = 96;
    static constexpr uint8_t CRC_EXTRA = 141;
    static constexpr auto NAME = "ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE";


    uint32_t timems; /*< [ms] FC time in ms */
    std::array<float, 3> pqr; /*< [rad/s] Angular rate in rad/s */
    std::array<float, 3> euler; /*< [deg] Euler angle in deg */
    std::array<float, 4> quat; /*< [none] Quaternion */
    std::array<float, 3> acc; /*< [m/s] Linear acceleration in m/s2 */
    std::array<float, 3> velNed; /*< [m/s] Velocity of a vehicle in NED frame in m/s */
    std::array<float, 3> ned; /*< [m] NED position in m */
    std::array<uint32_t, 3> llh; /*< [degE7,mm] latitude/longitude/height in degE7/degE7/mm as integer */
    uint16_t navStatus; /*< [none] navigational status. Filter validity/Sensor validity */
    uint16_t filterStatus; /*< [none] filter status. msB: calibrated sensors on hot, lsB: fused */


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
        ss << "  acc: [" << to_string(acc) << "]" << std::endl;
        ss << "  velNed: [" << to_string(velNed) << "]" << std::endl;
        ss << "  ned: [" << to_string(ned) << "]" << std::endl;
        ss << "  llh: [" << to_string(llh) << "]" << std::endl;
        ss << "  navStatus: " << navStatus << std::endl;
        ss << "  filterStatus: " << filterStatus << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << timems;                        // offset: 0
        map << pqr;                           // offset: 4
        map << euler;                         // offset: 16
        map << quat;                          // offset: 28
        map << acc;                           // offset: 44
        map << velNed;                        // offset: 56
        map << ned;                           // offset: 68
        map << llh;                           // offset: 80
        map << navStatus;                     // offset: 92
        map << filterStatus;                  // offset: 94
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> timems;                        // offset: 0
        map >> pqr;                           // offset: 4
        map >> euler;                         // offset: 16
        map >> quat;                          // offset: 28
        map >> acc;                           // offset: 44
        map >> velNed;                        // offset: 56
        map >> ned;                           // offset: 68
        map >> llh;                           // offset: 80
        map >> navStatus;                     // offset: 92
        map >> filterStatus;                  // offset: 94
    }
};

} // namespace msg
} // namespace ascluav
} // namespace mavlink
