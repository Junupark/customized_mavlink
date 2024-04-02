// MESSAGE ASCL_RL_FULL_STATE_LANDING support class

#pragma once

namespace mavlink {
namespace ascluav {
namespace msg {

/**
 * @brief ASCL_RL_FULL_STATE_LANDING message
 *
 *  State that fully describes 'ADD_LANDING' problem 
 */
struct ASCL_RL_FULL_STATE_LANDING : mavlink::Message {
    static constexpr msgid_t MSG_ID = 55610;
    static constexpr size_t LENGTH = 80;
    static constexpr size_t MIN_LENGTH = 80;
    static constexpr uint8_t CRC_EXTRA = 139;
    static constexpr auto NAME = "ASCL_RL_FULL_STATE_LANDING";


    std::array<float, 3> x; /*< [m]  multirotor position(inertial)  */
    std::array<float, 3> dx; /*< [m/s]  multirotor velocity(inertial)  */
    std::array<float, 3> euler; /*< [rad]  multirotor attitude  */
    std::array<float, 3> pqr; /*< [rad/s]  multirotor body angular rate  */
    std::array<float, 3> tgtX; /*< [m]  target position(inertial), normally origin  */
    std::array<float, 3> tgtdX; /*< [m/s]  target velocity(inertial), normally zeros  */
    std::array<uint16_t, 4> cmdLB; /*< [none]  previous command(s) loopback  */


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
        ss << "  x: [" << to_string(x) << "]" << std::endl;
        ss << "  dx: [" << to_string(dx) << "]" << std::endl;
        ss << "  euler: [" << to_string(euler) << "]" << std::endl;
        ss << "  pqr: [" << to_string(pqr) << "]" << std::endl;
        ss << "  tgtX: [" << to_string(tgtX) << "]" << std::endl;
        ss << "  tgtdX: [" << to_string(tgtdX) << "]" << std::endl;
        ss << "  cmdLB: [" << to_string(cmdLB) << "]" << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << x;                             // offset: 0
        map << dx;                            // offset: 12
        map << euler;                         // offset: 24
        map << pqr;                           // offset: 36
        map << tgtX;                          // offset: 48
        map << tgtdX;                         // offset: 60
        map << cmdLB;                         // offset: 72
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> x;                             // offset: 0
        map >> dx;                            // offset: 12
        map >> euler;                         // offset: 24
        map >> pqr;                           // offset: 36
        map >> tgtX;                          // offset: 48
        map >> tgtdX;                         // offset: 60
        map >> cmdLB;                         // offset: 72
    }
};

} // namespace msg
} // namespace ascluav
} // namespace mavlink
