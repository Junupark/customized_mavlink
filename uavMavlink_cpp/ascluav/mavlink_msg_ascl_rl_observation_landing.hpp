// MESSAGE ASCL_RL_OBSERVATION_LANDING support class

#pragma once

namespace mavlink {
namespace ascluav {
namespace msg {

/**
 * @brief ASCL_RL_OBSERVATION_LANDING message
 *
 *  Observation that an agent will get about 'ADD_LANDING' problem 
 */
struct ASCL_RL_OBSERVATION_LANDING : mavlink::Message {
    static constexpr msgid_t MSG_ID = 55611;
    static constexpr size_t LENGTH = 40;
    static constexpr size_t MIN_LENGTH = 40;
    static constexpr uint8_t CRC_EXTRA = 234;
    static constexpr auto NAME = "ASCL_RL_OBSERVATION_LANDING";


    float h_bar; /*< [none]  normalized height  */
    float dImageX; /*< [none]  normalized position of target (x) w.r.t vehicle view point  */
    float dImageY; /*< [none]  normalized position of target (y) w.r.t vehicle view point  */
    float velBodyX; /*< [m/s]  body velocity X  */
    float velBodyY; /*< [m/s]  body velocity Y  */
    float dz; /*< [m/s]  descent rate  */
    float p; /*< [rad/s]  body angular rate (axis-1)  */
    float q; /*< [rad/s]  body angular rate (axis-2)  */
    float phi; /*< [rad]  roll angle  */
    float theta; /*< [rad]  pitch angle  */


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
        ss << "  h_bar: " << h_bar << std::endl;
        ss << "  dImageX: " << dImageX << std::endl;
        ss << "  dImageY: " << dImageY << std::endl;
        ss << "  velBodyX: " << velBodyX << std::endl;
        ss << "  velBodyY: " << velBodyY << std::endl;
        ss << "  dz: " << dz << std::endl;
        ss << "  p: " << p << std::endl;
        ss << "  q: " << q << std::endl;
        ss << "  phi: " << phi << std::endl;
        ss << "  theta: " << theta << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << h_bar;                         // offset: 0
        map << dImageX;                       // offset: 4
        map << dImageY;                       // offset: 8
        map << velBodyX;                      // offset: 12
        map << velBodyY;                      // offset: 16
        map << dz;                            // offset: 20
        map << p;                             // offset: 24
        map << q;                             // offset: 28
        map << phi;                           // offset: 32
        map << theta;                         // offset: 36
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> h_bar;                         // offset: 0
        map >> dImageX;                       // offset: 4
        map >> dImageY;                       // offset: 8
        map >> velBodyX;                      // offset: 12
        map >> velBodyY;                      // offset: 16
        map >> dz;                            // offset: 20
        map >> p;                             // offset: 24
        map >> q;                             // offset: 28
        map >> phi;                           // offset: 32
        map >> theta;                         // offset: 36
    }
};

} // namespace msg
} // namespace ascluav
} // namespace mavlink
