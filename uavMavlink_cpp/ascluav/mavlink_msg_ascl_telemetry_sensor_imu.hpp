// MESSAGE ASCL_TELEMETRY_SENSOR_IMU support class

#pragma once

namespace mavlink {
namespace ascluav {
namespace msg {

/**
 * @brief ASCL_TELEMETRY_SENSOR_IMU message
 *
 * Message encoding imu(gyro,acc) data
 */
struct ASCL_TELEMETRY_SENSOR_IMU : mavlink::Message {
    static constexpr msgid_t MSG_ID = 55401;
    static constexpr size_t LENGTH = 28;
    static constexpr size_t MIN_LENGTH = 28;
    static constexpr uint8_t CRC_EXTRA = 124;
    static constexpr auto NAME = "ASCL_TELEMETRY_SENSOR_IMU";


    uint32_t timems; /*< [ms] FC time in ms */
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
        ss << "  gyro: [" << to_string(gyro) << "]" << std::endl;
        ss << "  acc: [" << to_string(acc) << "]" << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << timems;                        // offset: 0
        map << gyro;                          // offset: 4
        map << acc;                           // offset: 16
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> timems;                        // offset: 0
        map >> gyro;                          // offset: 4
        map >> acc;                           // offset: 16
    }
};

} // namespace msg
} // namespace ascluav
} // namespace mavlink
