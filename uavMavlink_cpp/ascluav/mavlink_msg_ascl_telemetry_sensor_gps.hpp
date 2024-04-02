// MESSAGE ASCL_TELEMETRY_SENSOR_GPS support class

#pragma once

namespace mavlink {
namespace ascluav {
namespace msg {

/**
 * @brief ASCL_TELEMETRY_SENSOR_GPS message
 *
 * Message encoding GPS data
 */
struct ASCL_TELEMETRY_SENSOR_GPS : mavlink::Message {
    static constexpr msgid_t MSG_ID = 55402;
    static constexpr size_t LENGTH = 30;
    static constexpr size_t MIN_LENGTH = 30;
    static constexpr uint8_t CRC_EXTRA = 249;
    static constexpr auto NAME = "ASCL_TELEMETRY_SENSOR_GPS";


    uint32_t timems; /*< [ms] FC time in ms */
    uint32_t lat; /*< [degE7] Latitude in deg* 10^7 as integer */
    uint32_t lon; /*< [degE7] Longitude in deg* 10^7 as integer */
    uint32_t height; /*< [mm] Height in mm as integer */
    std::array<uint32_t, 3> velNed; /*< [mm/s] Velocity of a vehicle in NED frame in mm/s as integer */
    uint8_t numSats; /*<  Number of valid satellites */
    uint8_t fixType; /*<  GPS Position fix type. 2D fix, 3D fix, etc. */


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
        ss << "  numSats: " << +numSats << std::endl;
        ss << "  fixType: " << +fixType << std::endl;

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
        map << numSats;                       // offset: 28
        map << fixType;                       // offset: 29
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> timems;                        // offset: 0
        map >> lat;                           // offset: 4
        map >> lon;                           // offset: 8
        map >> height;                        // offset: 12
        map >> velNed;                        // offset: 16
        map >> numSats;                       // offset: 28
        map >> fixType;                       // offset: 29
    }
};

} // namespace msg
} // namespace ascluav
} // namespace mavlink
