// MESSAGE ASCL_TELEMETRY_NAV_STATE_REGULAR_COV support class

#pragma once

namespace mavlink {
namespace ascluav {
namespace msg {

/**
 * @brief ASCL_TELEMETRY_NAV_STATE_REGULAR_COV message
 *
 * Message encoding regular telemetry set
 */
struct ASCL_TELEMETRY_NAV_STATE_REGULAR_COV : mavlink::Message {
    static constexpr msgid_t MSG_ID = 55297;
    static constexpr size_t LENGTH = 132;
    static constexpr size_t MIN_LENGTH = 132;
    static constexpr uint8_t CRC_EXTRA = 188;
    static constexpr auto NAME = "ASCL_TELEMETRY_NAV_STATE_REGULAR_COV";


    uint32_t timems; /*< [ms] FC time in ms */
    std::array<float, 10> covQuat; /*<  Upper triangle of P(IDX_QUAT:IDX_QUAT+3, IDX_QUAT:IDX_QUAT+3) */
    std::array<float, 22> covDiag; /*<  Diagonal element of P(IDX_GYRO_BIAS:end, IDX_GYRO_BIAS:end) */


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
        ss << "  covQuat: [" << to_string(covQuat) << "]" << std::endl;
        ss << "  covDiag: [" << to_string(covDiag) << "]" << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << timems;                        // offset: 0
        map << covQuat;                       // offset: 4
        map << covDiag;                       // offset: 44
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> timems;                        // offset: 0
        map >> covQuat;                       // offset: 4
        map >> covDiag;                       // offset: 44
    }
};

} // namespace msg
} // namespace ascluav
} // namespace mavlink
