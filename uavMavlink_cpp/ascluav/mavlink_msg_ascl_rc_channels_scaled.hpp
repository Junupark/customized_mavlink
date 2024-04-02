// MESSAGE ASCL_RC_CHANNELS_SCALED support class

#pragma once

namespace mavlink {
namespace ascluav {
namespace msg {

/**
 * @brief ASCL_RC_CHANNELS_SCALED message
 *
 * Scaled values of RC input. -10,000(-100%) ~ 10,000(100%)
 */
struct ASCL_RC_CHANNELS_SCALED : mavlink::Message {
    static constexpr msgid_t MSG_ID = 55501;
    static constexpr size_t LENGTH = 32;
    static constexpr size_t MIN_LENGTH = 32;
    static constexpr uint8_t CRC_EXTRA = 75;
    static constexpr auto NAME = "ASCL_RC_CHANNELS_SCALED";


    int16_t chan1; /*<  RC Channel 1 Scaled Value */
    int16_t chan2; /*<  RC Channel 2 Scaled Value */
    int16_t chan3; /*<  RC Channel 3 Scaled Value */
    int16_t chan4; /*<  RC Channel 4 Scaled Value */
    int16_t chan5; /*<  RC Channel 5 Scaled Value */
    int16_t chan6; /*<  RC Channel 6 Scaled Value */
    int16_t chan7; /*<  RC Channel 7 Scaled Value */
    int16_t chan8; /*<  RC Channel 8 Scaled Value */
    int16_t chan9; /*<  RC Channel 9 Scaled Value */
    int16_t chan10; /*<  RC Channel 10 Scaled Value */
    int16_t chan11; /*<  RC Channel 11 Scaled Value */
    int16_t chan12; /*<  RC Channel 12 Scaled Value */
    int16_t chan13; /*<  RC Channel 13 Scaled Value */
    int16_t chan14; /*<  RC Channel 14 Scaled Value */
    int16_t chan15; /*<  RC Channel 15 Scaled Value */
    int16_t chan16; /*<  RC Channel 16 Scaled Value */


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
        ss << "  chan1: " << chan1 << std::endl;
        ss << "  chan2: " << chan2 << std::endl;
        ss << "  chan3: " << chan3 << std::endl;
        ss << "  chan4: " << chan4 << std::endl;
        ss << "  chan5: " << chan5 << std::endl;
        ss << "  chan6: " << chan6 << std::endl;
        ss << "  chan7: " << chan7 << std::endl;
        ss << "  chan8: " << chan8 << std::endl;
        ss << "  chan9: " << chan9 << std::endl;
        ss << "  chan10: " << chan10 << std::endl;
        ss << "  chan11: " << chan11 << std::endl;
        ss << "  chan12: " << chan12 << std::endl;
        ss << "  chan13: " << chan13 << std::endl;
        ss << "  chan14: " << chan14 << std::endl;
        ss << "  chan15: " << chan15 << std::endl;
        ss << "  chan16: " << chan16 << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << chan1;                         // offset: 0
        map << chan2;                         // offset: 2
        map << chan3;                         // offset: 4
        map << chan4;                         // offset: 6
        map << chan5;                         // offset: 8
        map << chan6;                         // offset: 10
        map << chan7;                         // offset: 12
        map << chan8;                         // offset: 14
        map << chan9;                         // offset: 16
        map << chan10;                        // offset: 18
        map << chan11;                        // offset: 20
        map << chan12;                        // offset: 22
        map << chan13;                        // offset: 24
        map << chan14;                        // offset: 26
        map << chan15;                        // offset: 28
        map << chan16;                        // offset: 30
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> chan1;                         // offset: 0
        map >> chan2;                         // offset: 2
        map >> chan3;                         // offset: 4
        map >> chan4;                         // offset: 6
        map >> chan5;                         // offset: 8
        map >> chan6;                         // offset: 10
        map >> chan7;                         // offset: 12
        map >> chan8;                         // offset: 14
        map >> chan9;                         // offset: 16
        map >> chan10;                        // offset: 18
        map >> chan11;                        // offset: 20
        map >> chan12;                        // offset: 22
        map >> chan13;                        // offset: 24
        map >> chan14;                        // offset: 26
        map >> chan15;                        // offset: 28
        map >> chan16;                        // offset: 30
    }
};

} // namespace msg
} // namespace ascluav
} // namespace mavlink
