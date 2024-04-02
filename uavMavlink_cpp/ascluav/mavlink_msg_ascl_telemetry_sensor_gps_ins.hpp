// MESSAGE ASCL_TELEMETRY_SENSOR_GPS_INS support class

#pragma once

namespace mavlink {
namespace ascluav {
namespace msg {

/**
 * @brief ASCL_TELEMETRY_SENSOR_GPS_INS message
 *
 * Message encoding GPS/INS data. VN200 at the moment
 */
struct ASCL_TELEMETRY_SENSOR_GPS_INS : mavlink::Message {
    static constexpr msgid_t MSG_ID = 55404;
    static constexpr size_t LENGTH = 64;
    static constexpr size_t MIN_LENGTH = 64;
    static constexpr uint8_t CRC_EXTRA = 238;
    static constexpr auto NAME = "ASCL_TELEMETRY_SENSOR_GPS_INS";


    uint32_t timems; /*< [ms] FC time in ms */
    uint32_t lat; /*< [degE7] Latitude in deg* 10^7 as integer */
    uint32_t lon; /*< [degE7] Longitude in deg* 10^7 as integer */
    uint32_t height; /*< [mm] Height in mm as integer */
    std::array<uint32_t, 3> velNed; /*< [mm/s] Velocity of a vehicle in NED frame in mm/s as integer */
    std::array<float, 3> euler; /*< [deg] Euler angle in deg */
    std::array<float, 3> gyro; /*< [rad/s] Angular rate in rad/s */
    std::array<float, 3> acc; /*< [m/s] Linear acceleration in m/s2 */


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
        ss << "  lat: " << lat << std::endl;
        ss << "  lon: " << lon << std::endl;
        ss << "  height: " << height << std::endl;
        ss << "  velNed: [" << to_string(velNed) << "]" << std::endl;
        ss << "  euler: [" << to_string(euler) << "]" << std::endl;
        ss << "  gyro: [" << to_string(gyro) << "]" << std::endl;
        ss << "  acc: [" << to_string(acc) << "]" << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << timems;                        // offset: 0
        map << lat;                           // offset: 4
        map << lon;                           // offset: 8
        map << height;                        // offset: 12
        map << velNed;                        // offset: 16
        map << euler;                         // offset: 28
        map << gyro;                          // offset: 40
        map << acc;                           // offset: 52
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> timems;                        // offset: 0
        map >> lat;                           // offset: 4
        map >> lon;                           // offset: 8
        map >> height;                        // offset: 12
        map >> velNed;                        // offset: 16
        map >> euler;                         // offset: 28
        map >> gyro;                          // offset: 40
        map >> acc;                           // offset: 52
    }
};

} // namespace msg
} // namespace ascluav
} // namespace mavlink
