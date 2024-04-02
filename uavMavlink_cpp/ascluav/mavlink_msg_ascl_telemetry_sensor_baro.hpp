// MESSAGE ASCL_TELEMETRY_SENSOR_BARO support class

#pragma once

namespace mavlink {
namespace ascluav {
namespace msg {

/**
 * @brief ASCL_TELEMETRY_SENSOR_BARO message
 *
 * Message encoding barometer data
 */
struct ASCL_TELEMETRY_SENSOR_BARO : mavlink::Message {
    static constexpr msgid_t MSG_ID = 55403;
    static constexpr size_t LENGTH = 16;
    static constexpr size_t MIN_LENGTH = 16;
    static constexpr uint8_t CRC_EXTRA = 193;
    static constexpr auto NAME = "ASCL_TELEMETRY_SENSOR_BARO";


    uint32_t timems; /*< [ms] FC time in ms */
    float pressure; /*< [bar] Atmospheric pressure in bar */
    float temperature; /*< [degC] Ambient temperature in degree celsius */
    uint32_t alt; /*< [mm] Barometric altitude in mm as integer */


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
        ss << "  pressure: " << pressure << std::endl;
        ss << "  temperature: " << temperature << std::endl;
        ss << "  alt: " << alt << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << timems;                        // offset: 0
        map << pressure;                      // offset: 4
        map << temperature;                   // offset: 8
        map << alt;                           // offset: 12
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> timems;                        // offset: 0
        map >> pressure;                      // offset: 4
        map >> temperature;                   // offset: 8
        map >> alt;                           // offset: 12
    }
};

} // namespace msg
} // namespace ascluav
} // namespace mavlink
