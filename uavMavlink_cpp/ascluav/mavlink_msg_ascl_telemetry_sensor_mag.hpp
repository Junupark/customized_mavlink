// MESSAGE ASCL_TELEMETRY_SENSOR_MAG support class

#pragma once

namespace mavlink {
namespace ascluav {
namespace msg {

/**
 * @brief ASCL_TELEMETRY_SENSOR_MAG message
 *
 * Message encoding magnetometer data
 */
struct ASCL_TELEMETRY_SENSOR_MAG : mavlink::Message {
    static constexpr msgid_t MSG_ID = 55400;
    static constexpr size_t LENGTH = 16;
    static constexpr size_t MIN_LENGTH = 16;
    static constexpr uint8_t CRC_EXTRA = 122;
    static constexpr auto NAME = "ASCL_TELEMETRY_SENSOR_MAG";


    uint32_t timems; /*< [ms] FC time in ms */
    std::array<float, 3> mag; /*<  Magnetic field in body frame in gauss */


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
        ss << "  mag: [" << to_string(mag) << "]" << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << timems;                        // offset: 0
        map << mag;                           // offset: 4
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> timems;                        // offset: 0
        map >> mag;                           // offset: 4
    }
};

} // namespace msg
} // namespace ascluav
} // namespace mavlink
