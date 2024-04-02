// MESSAGE ASCL_RL_RESET_COMMAND_LANDING support class

#pragma once

namespace mavlink {
namespace ascluav {
namespace msg {

/**
 * @brief ASCL_RL_RESET_COMMAND_LANDING message
 *
 *  Reset command to dynamic server for 'ADD_LANDING' problem 
 */
struct ASCL_RL_RESET_COMMAND_LANDING : mavlink::Message {
    static constexpr msgid_t MSG_ID = 55600;
    static constexpr size_t LENGTH = 48;
    static constexpr size_t MIN_LENGTH = 48;
    static constexpr uint8_t CRC_EXTRA = 110;
    static constexpr auto NAME = "ASCL_RL_RESET_COMMAND_LANDING";


    float x; /*< [m]  multirotor reset position x(inertial)  */
    float y; /*< [m]  multirotor reset position y(inertial)  */
    float z; /*< [m]  multirotor reset position h(inertial)  */
    float dx; /*< [m/s]  multirotor reset velocity x(inertial)  */
    float dy; /*< [m/s]  multirotor reset velocity y(inertial)  */
    float dz; /*< [m/s]  multirotor reset velocity z(inertial)  */
    float roll; /*< [rad]  multirotor reset attitude roll */
    float pitch; /*< [rad]  multirotor reset attitude pitch */
    float yaw; /*< [rad]  multirotor reset attitude yaw */
    float p; /*< [rad/s]  multirotor reset body angular rate p */
    float q; /*< [rad/s]  multirotor reset body angular rate q */
    float r; /*< [rad/s]  multirotor reset body angular rate r */


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
        ss << "  x: " << x << std::endl;
        ss << "  y: " << y << std::endl;
        ss << "  z: " << z << std::endl;
        ss << "  dx: " << dx << std::endl;
        ss << "  dy: " << dy << std::endl;
        ss << "  dz: " << dz << std::endl;
        ss << "  roll: " << roll << std::endl;
        ss << "  pitch: " << pitch << std::endl;
        ss << "  yaw: " << yaw << std::endl;
        ss << "  p: " << p << std::endl;
        ss << "  q: " << q << std::endl;
        ss << "  r: " << r << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << x;                             // offset: 0
        map << y;                             // offset: 4
        map << z;                             // offset: 8
        map << dx;                            // offset: 12
        map << dy;                            // offset: 16
        map << dz;                            // offset: 20
        map << roll;                          // offset: 24
        map << pitch;                         // offset: 28
        map << yaw;                           // offset: 32
        map << p;                             // offset: 36
        map << q;                             // offset: 40
        map << r;                             // offset: 44
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> x;                             // offset: 0
        map >> y;                             // offset: 4
        map >> z;                             // offset: 8
        map >> dx;                            // offset: 12
        map >> dy;                            // offset: 16
        map >> dz;                            // offset: 20
        map >> roll;                          // offset: 24
        map >> pitch;                         // offset: 28
        map >> yaw;                           // offset: 32
        map >> p;                             // offset: 36
        map >> q;                             // offset: 40
        map >> r;                             // offset: 44
    }
};

} // namespace msg
} // namespace ascluav
} // namespace mavlink
