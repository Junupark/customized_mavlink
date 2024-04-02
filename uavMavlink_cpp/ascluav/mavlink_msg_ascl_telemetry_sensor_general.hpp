// MESSAGE ASCL_TELEMETRY_SENSOR_GENERAL support class

#pragma once

namespace mavlink {
namespace ascluav {
namespace msg {

/**
 * @brief ASCL_TELEMETRY_SENSOR_GENERAL message
 *
 * Message encoding collection of general sensor(s) data. Each field can refer to any kind of sensor
 */
struct ASCL_TELEMETRY_SENSOR_GENERAL : mavlink::Message {
    static constexpr msgid_t MSG_ID = 55410;
    static constexpr size_t LENGTH = 136;
    static constexpr size_t MIN_LENGTH = 136;
    static constexpr uint8_t CRC_EXTRA = 214;
    static constexpr auto NAME = "ASCL_TELEMETRY_SENSOR_GENERAL";


    uint32_t timems; /*< [ms] FC time in ms */
    std::array<float, 3> ned; /*< [m] NED position in m */
    std::array<uint32_t, 3> llh; /*< [degE7,mm] latitude/longitude/height in degE7/degE7/mm as integer */
    std::array<float, 3> velNed; /*< [m/s] Velocity of a vehicle in NED frame in m/s */
    std::array<float, 3> euler; /*< [deg] Euler angle in deg */
    std::array<float, 3> mag; /*<  Magnetic field in body frame in gauss */
    std::array<float, 3> gyro; /*< [rad/s] Angular rate in rad/s */
    std::array<float, 3> acc; /*< [m/s] Linear acceleration in m/s2 */
    std::array<float, 3> reserved1; /*< [TBD] Reserved space for flexible operation */
    std::array<float, 3> reserved2; /*< [TBD] Reserved space for flexible operation */
    std::array<float, 3> reserved3; /*< [TBD] Reserved space for flexible operation */
    std::array<float, 3> reserved4; /*< [TBD] Reserved space for flexible operation */


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
        ss << "  ned: [" << to_string(ned) << "]" << std::endl;
        ss << "  llh: [" << to_string(llh) << "]" << std::endl;
        ss << "  velNed: [" << to_string(velNed) << "]" << std::endl;
        ss << "  euler: [" << to_string(euler) << "]" << std::endl;
        ss << "  mag: [" << to_string(mag) << "]" << std::endl;
        ss << "  gyro: [" << to_string(gyro) << "]" << std::endl;
        ss << "  acc: [" << to_string(acc) << "]" << std::endl;
        ss << "  reserved1: [" << to_string(reserved1) << "]" << std::endl;
        ss << "  reserved2: [" << to_string(reserved2) << "]" << std::endl;
        ss << "  reserved3: [" << to_string(reserved3) << "]" << std::endl;
        ss << "  reserved4: [" << to_string(reserved4) << "]" << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << timems;                        // offset: 0
        map << ned;                           // offset: 4
        map << llh;                           // offset: 16
        map << velNed;                        // offset: 28
        map << euler;                         // offset: 40
        map << mag;                           // offset: 52
        map << gyro;                          // offset: 64
        map << acc;                           // offset: 76
        map << reserved1;                     // offset: 88
        map << reserved2;                     // offset: 100
        map << reserved3;                     // offset: 112
        map << reserved4;                     // offset: 124
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> timems;                        // offset: 0
        map >> ned;                           // offset: 4
        map >> llh;                           // offset: 16
        map >> velNed;                        // offset: 28
        map >> euler;                         // offset: 40
        map >> mag;                           // offset: 52
        map >> gyro;                          // offset: 64
        map >> acc;                           // offset: 76
        map >> reserved1;                     // offset: 88
        map >> reserved2;                     // offset: 100
        map >> reserved3;                     // offset: 112
        map >> reserved4;                     // offset: 124
    }
};

} // namespace msg
} // namespace ascluav
} // namespace mavlink
