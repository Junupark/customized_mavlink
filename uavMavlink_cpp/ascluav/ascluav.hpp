/** @file
 *	@brief MAVLink comm protocol generated from ascluav.xml
 *	@see http://mavlink.org
 */

#pragma once

#include <array>
#include <cstdint>
#include <sstream>

#ifndef MAVLINK_STX
#define MAVLINK_STX 253
#endif

#include "../message.hpp"

namespace mavlink {
namespace ascluav {

/**
 * Array of msg_entry needed for @p mavlink_parse_char() (trought @p mavlink_get_msg_entry())
 */
constexpr std::array<mavlink_msg_entry_t, 241> MESSAGE_ENTRIES {{ {0, 50, 9, 9, 0, 0, 0}, {1, 124, 31, 31, 0, 0, 0}, {2, 137, 12, 12, 0, 0, 0}, {4, 237, 14, 14, 3, 12, 13}, {5, 217, 28, 28, 1, 0, 0}, {6, 104, 3, 3, 0, 0, 0}, {7, 119, 32, 32, 0, 0, 0}, {8, 117, 36, 36, 0, 0, 0}, {11, 89, 6, 6, 1, 4, 0}, {19, 137, 24, 24, 3, 4, 5}, {20, 214, 20, 20, 3, 2, 3}, {21, 159, 2, 2, 3, 0, 1}, {22, 220, 25, 25, 0, 0, 0}, {23, 168, 23, 23, 3, 4, 5}, {24, 24, 30, 52, 0, 0, 0}, {25, 23, 101, 101, 0, 0, 0}, {26, 170, 22, 24, 0, 0, 0}, {27, 144, 26, 29, 0, 0, 0}, {28, 67, 16, 16, 0, 0, 0}, {29, 115, 14, 16, 0, 0, 0}, {30, 39, 28, 28, 0, 0, 0}, {31, 246, 32, 48, 0, 0, 0}, {32, 185, 28, 28, 0, 0, 0}, {33, 104, 28, 28, 0, 0, 0}, {34, 237, 22, 22, 0, 0, 0}, {35, 244, 22, 22, 0, 0, 0}, {36, 222, 21, 37, 0, 0, 0}, {37, 212, 6, 7, 3, 4, 5}, {38, 9, 6, 7, 3, 4, 5}, {39, 254, 37, 38, 3, 32, 33}, {40, 230, 4, 5, 3, 2, 3}, {41, 28, 4, 4, 3, 2, 3}, {42, 28, 2, 2, 0, 0, 0}, {43, 132, 2, 3, 3, 0, 1}, {44, 221, 4, 5, 3, 2, 3}, {45, 232, 2, 3, 3, 0, 1}, {46, 11, 2, 2, 0, 0, 0}, {47, 153, 3, 4, 3, 0, 1}, {48, 41, 13, 21, 1, 12, 0}, {49, 39, 12, 20, 0, 0, 0}, {50, 78, 37, 37, 3, 18, 19}, {51, 196, 4, 5, 3, 2, 3}, {52, 132, 7, 7, 0, 0, 0}, {54, 15, 27, 27, 3, 24, 25}, {55, 3, 25, 25, 0, 0, 0}, {61, 167, 72, 72, 0, 0, 0}, {62, 183, 26, 26, 0, 0, 0}, {63, 119, 181, 181, 0, 0, 0}, {64, 191, 225, 225, 0, 0, 0}, {65, 118, 42, 42, 0, 0, 0}, {66, 148, 6, 6, 3, 2, 3}, {67, 21, 4, 4, 0, 0, 0}, {69, 243, 11, 11, 1, 10, 0}, {70, 124, 18, 38, 3, 16, 17}, {73, 38, 37, 38, 3, 32, 33}, {74, 20, 20, 20, 0, 0, 0}, {75, 158, 35, 35, 3, 30, 31}, {76, 152, 33, 33, 3, 30, 31}, {77, 143, 3, 10, 3, 8, 9}, {80, 14, 4, 4, 3, 2, 3}, {81, 106, 22, 22, 0, 0, 0}, {82, 49, 39, 51, 3, 36, 37}, {83, 22, 37, 37, 0, 0, 0}, {84, 143, 53, 53, 3, 50, 51}, {85, 140, 51, 51, 0, 0, 0}, {86, 5, 53, 53, 3, 50, 51}, {87, 150, 51, 51, 0, 0, 0}, {89, 231, 28, 28, 0, 0, 0}, {90, 183, 56, 56, 0, 0, 0}, {91, 63, 42, 42, 0, 0, 0}, {92, 54, 33, 33, 0, 0, 0}, {93, 47, 81, 81, 0, 0, 0}, {100, 175, 26, 34, 0, 0, 0}, {101, 102, 32, 117, 0, 0, 0}, {102, 158, 32, 117, 0, 0, 0}, {103, 208, 20, 57, 0, 0, 0}, {104, 56, 32, 116, 0, 0, 0}, {105, 93, 62, 63, 0, 0, 0}, {106, 138, 44, 44, 0, 0, 0}, {107, 108, 64, 65, 0, 0, 0}, {108, 32, 84, 84, 0, 0, 0}, {109, 185, 9, 9, 0, 0, 0}, {110, 84, 254, 254, 3, 1, 2}, {111, 34, 16, 16, 0, 0, 0}, {112, 174, 12, 12, 0, 0, 0}, {113, 124, 36, 39, 0, 0, 0}, {114, 237, 44, 44, 0, 0, 0}, {115, 4, 64, 64, 0, 0, 0}, {116, 76, 22, 24, 0, 0, 0}, {117, 128, 6, 6, 3, 4, 5}, {118, 56, 14, 14, 0, 0, 0}, {119, 116, 12, 12, 3, 10, 11}, {120, 134, 97, 97, 0, 0, 0}, {121, 237, 2, 2, 3, 0, 1}, {122, 203, 2, 2, 3, 0, 1}, {123, 250, 113, 113, 3, 0, 1}, {124, 87, 35, 57, 0, 0, 0}, {125, 203, 6, 6, 0, 0, 0}, {126, 220, 79, 79, 0, 0, 0}, {127, 25, 35, 35, 0, 0, 0}, {128, 226, 35, 35, 0, 0, 0}, {129, 46, 22, 24, 0, 0, 0}, {130, 29, 13, 13, 0, 0, 0}, {131, 223, 255, 255, 0, 0, 0}, {132, 85, 14, 39, 0, 0, 0}, {133, 6, 18, 18, 0, 0, 0}, {134, 229, 43, 43, 0, 0, 0}, {135, 203, 8, 8, 0, 0, 0}, {136, 1, 22, 22, 0, 0, 0}, {137, 195, 14, 16, 0, 0, 0}, {138, 109, 36, 120, 0, 0, 0}, {139, 168, 43, 43, 3, 41, 42}, {140, 181, 41, 41, 0, 0, 0}, {141, 47, 32, 32, 0, 0, 0}, {142, 72, 243, 243, 0, 0, 0}, {143, 131, 14, 16, 0, 0, 0}, {144, 127, 93, 93, 0, 0, 0}, {146, 103, 100, 100, 0, 0, 0}, {147, 154, 36, 54, 0, 0, 0}, {148, 178, 60, 78, 0, 0, 0}, {149, 200, 30, 60, 0, 0, 0}, {162, 189, 8, 9, 0, 0, 0}, {192, 36, 44, 54, 0, 0, 0}, {225, 208, 65, 65, 0, 0, 0}, {230, 163, 42, 42, 0, 0, 0}, {231, 105, 40, 40, 0, 0, 0}, {232, 151, 63, 65, 0, 0, 0}, {233, 35, 182, 182, 0, 0, 0}, {234, 150, 40, 40, 0, 0, 0}, {235, 179, 42, 42, 0, 0, 0}, {241, 90, 32, 32, 0, 0, 0}, {242, 104, 52, 60, 0, 0, 0}, {243, 85, 53, 61, 1, 52, 0}, {244, 95, 6, 6, 0, 0, 0}, {245, 130, 2, 2, 0, 0, 0}, {246, 184, 38, 38, 0, 0, 0}, {247, 81, 19, 19, 0, 0, 0}, {248, 8, 254, 254, 3, 3, 4}, {249, 204, 36, 36, 0, 0, 0}, {250, 49, 30, 30, 0, 0, 0}, {251, 170, 18, 18, 0, 0, 0}, {252, 44, 18, 18, 0, 0, 0}, {253, 83, 51, 54, 0, 0, 0}, {254, 46, 9, 9, 0, 0, 0}, {256, 71, 42, 42, 3, 8, 9}, {257, 131, 9, 9, 0, 0, 0}, {258, 187, 32, 232, 3, 0, 1}, {259, 92, 235, 235, 0, 0, 0}, {260, 146, 5, 13, 0, 0, 0}, {261, 179, 27, 60, 0, 0, 0}, {262, 12, 18, 22, 0, 0, 0}, {263, 133, 255, 255, 0, 0, 0}, {264, 49, 28, 28, 0, 0, 0}, {265, 26, 16, 20, 0, 0, 0}, {266, 193, 255, 255, 3, 2, 3}, {267, 35, 255, 255, 3, 2, 3}, {268, 14, 4, 4, 3, 2, 3}, {269, 109, 213, 213, 0, 0, 0}, {270, 59, 19, 19, 0, 0, 0}, {271, 22, 52, 52, 0, 0, 0}, {275, 126, 31, 31, 0, 0, 0}, {276, 18, 49, 49, 0, 0, 0}, {280, 70, 33, 33, 0, 0, 0}, {281, 48, 13, 13, 0, 0, 0}, {282, 123, 35, 35, 3, 32, 33}, {283, 74, 144, 144, 0, 0, 0}, {284, 99, 32, 32, 3, 30, 31}, {285, 137, 40, 40, 3, 38, 39}, {286, 210, 53, 53, 3, 50, 51}, {287, 1, 23, 23, 3, 20, 21}, {288, 20, 23, 23, 3, 20, 21}, {290, 221, 42, 42, 0, 0, 0}, {291, 10, 57, 57, 0, 0, 0}, {299, 19, 96, 98, 0, 0, 0}, {300, 217, 22, 22, 0, 0, 0}, {301, 243, 58, 58, 0, 0, 0}, {310, 28, 17, 17, 0, 0, 0}, {311, 95, 116, 116, 0, 0, 0}, {320, 243, 20, 20, 3, 2, 3}, {321, 88, 2, 2, 3, 0, 1}, {322, 243, 149, 149, 0, 0, 0}, {323, 78, 147, 147, 3, 0, 1}, {324, 132, 146, 146, 0, 0, 0}, {330, 23, 158, 167, 0, 0, 0}, {331, 91, 230, 232, 0, 0, 0}, {332, 236, 239, 239, 0, 0, 0}, {333, 231, 109, 109, 0, 0, 0}, {334, 72, 10, 10, 0, 0, 0}, {335, 225, 24, 24, 0, 0, 0}, {336, 245, 84, 84, 0, 0, 0}, {339, 199, 5, 5, 0, 0, 0}, {340, 99, 70, 70, 0, 0, 0}, {350, 232, 20, 252, 0, 0, 0}, {360, 11, 25, 25, 0, 0, 0}, {370, 75, 87, 109, 0, 0, 0}, {373, 117, 42, 42, 0, 0, 0}, {375, 251, 140, 140, 0, 0, 0}, {380, 232, 20, 20, 0, 0, 0}, {385, 147, 133, 133, 3, 2, 3}, {390, 156, 238, 238, 0, 0, 0}, {395, 0, 212, 212, 0, 0, 0}, {400, 110, 254, 254, 3, 4, 5}, {401, 183, 6, 6, 3, 4, 5}, {410, 160, 53, 53, 0, 0, 0}, {411, 106, 3, 3, 0, 0, 0}, {412, 33, 6, 6, 3, 4, 5}, {413, 77, 7, 7, 3, 4, 5}, {9000, 113, 137, 137, 0, 0, 0}, {9005, 117, 34, 34, 0, 0, 0}, {12900, 114, 44, 44, 3, 0, 1}, {12901, 254, 59, 59, 3, 30, 31}, {12902, 49, 53, 53, 3, 4, 5}, {12903, 249, 46, 46, 3, 0, 1}, {12904, 203, 46, 46, 3, 20, 21}, {12905, 49, 43, 43, 3, 0, 1}, {12915, 62, 254, 254, 3, 0, 1}, {53232, 117, 7, 7, 0, 0, 0}, {53233, 50, 2, 2, 0, 0, 0}, {53234, 197, 8, 8, 0, 0, 0}, {53248, 145, 28, 28, 0, 0, 0}, {53249, 216, 28, 28, 0, 0, 0}, {53250, 123, 3, 3, 0, 0, 0}, {55296, 141, 96, 96, 0, 0, 0}, {55297, 188, 132, 132, 0, 0, 0}, {55298, 3, 85, 85, 0, 0, 0}, {55299, 114, 137, 137, 0, 0, 0}, {55300, 181, 40, 40, 0, 0, 0}, {55301, 128, 17, 17, 0, 0, 0}, {55400, 122, 16, 16, 0, 0, 0}, {55401, 124, 28, 28, 0, 0, 0}, {55402, 249, 30, 30, 0, 0, 0}, {55403, 193, 16, 16, 0, 0, 0}, {55404, 238, 64, 64, 0, 0, 0}, {55410, 214, 136, 136, 0, 0, 0}, {55500, 194, 32, 32, 0, 0, 0}, {55501, 75, 32, 32, 0, 0, 0}, {55502, 167, 32, 32, 0, 0, 0}, {55600, 110, 48, 48, 0, 0, 0}, {55610, 139, 80, 80, 0, 0, 0}, {55611, 234, 40, 40, 0, 0, 0}, {55620, 118, 8, 8, 0, 0, 0} }};

//! MAVLINK VERSION
constexpr auto MAVLINK_VERSION = 1;


// ENUM DEFINITIONS


/** @brief Category a certain parameter/command is categorized. Mapping is as follows; 0: Navigation, 1: Control, 2: Guidance, 3: Mission, 4 and above: To be added. */
enum class ASCL_CATEGORY
{
    NAVIGATION=0, /* Category Navigation | */
    CONTROL=1, /* Category Control | */
    GUIDANCE=2, /* Category Guidance | */
    MISSION=3, /* Category Mission | */
    RESERVED1=4, /* Category reserved | */
    RESERVED2=5, /* Category reserved | */
    RESERVED3=6, /* Category reserved | */
};

//! ASCL_CATEGORY ENUM_END
constexpr auto ASCL_CATEGORY_ENUM_END = 7;

/** @brief Parameter ID. N=2^8, {0~N-1}: Navigation, {N~2N-1}: Control, {2N~3N-1}: Guidnance, {3N~4N-1}: Mission, and many more */
enum class ASCL_PARAM_ID : uint16_t
{
    NAV_COV_P0_QUAT=0, /* Covariance P0 for quaternions | */
    NAV_COV_P0_EULER_TILT=1, /* Covariance P0 for roll,pitch | */
    NAV_COV_P0_EULER_HEADING=2, /* Covariance P0 for heading | */
    NAV_COV_P0_HOR_VEL=3, /* Covariance P0 for horizontal velocity | */
    NAV_COV_P0_VER_VEL=4, /* Covariance P0 for vertical velocity | */
    NAV_COV_P0_HOR_POS=5, /* Covariance P0 for horizontal position | */
    NAV_COV_P0_VER_POS=6, /* Covariance P0 for altitude | */
    NAV_COV_P0_GYRO_BIAS=7, /* Covariance P0 for gyro bias | */
    NAV_COV_P0_ACC_BIAS=8, /* Covariance P0 for acc bias | */
    NAV_COV_P0_MAG_NED=9, /* Covariance P0 for NED magnetic flux | */
    NAV_COV_P0_MAG_BIAS=10, /* Covariance P0 for mag bias | */
    NAV_COV_Q_GYRO=16, /* Covariance Q for delta angle | */
    NAV_COV_Q_GYRO_BIAS=17, /* Covariance Q for gyro bias | */
    NAV_COV_Q_ACC=18, /* Covariance Q for delta velocity | */
    NAV_COV_Q_ACC_BIAS=19, /* Covariance Q for acc bias | */
    NAV_COV_Q_MAG_NED=20, /* Covariance Q for NED magnetic flux | */
    NAV_COV_Q_MAG_BIAS=21, /* Covariance Q for mag bias | */
    NAV_COV_R_GPS_HOR_POS=32, /* Covariance R for NE position of GPS lat, long, height converted into NED | */
    NAV_COV_R_GPS_VER_POS=33, /* Covariance R for D position of GPS lat, long, height converted into NED | */
    NAV_COV_R_GPS_VEL=34, /* Covariance R for GPS velocity_ned | */
    NAV_COV_R_BARO_ALT=35, /* Covariance R for barometric altitude | */
    NAV_COV_R_MAG_BODY=36, /* Covariance R for magnetometer measurement | */
    NAV_COV_R_MAG_DECLINATION=37, /* Covariance R for magnetic declination | */
    NAV_COV_R_AHRS=38, /* Covariance R for AHRS | */
    CTRL_GAIN_P_RATE_P=4096, /*  | */
    CTRL_GAIN_I_RATE_P=4097, /*  | */
    CTRL_GAIN_D_RATE_P=4098, /*  | */
    CTRL_GAIN_P_RATE_Q=4099, /*  | */
    CTRL_GAIN_I_RATE_Q=4100, /*  | */
    CTRL_GAIN_D_RATE_Q=4101, /*  | */
    CTRL_GAIN_P_RATE_R=4102, /*  | */
    CTRL_GAIN_I_RATE_R=4103, /*  | */
    CTRL_GAIN_D_RATE_R=4104, /*  | */
    CTRL_GAIN_P_ATT_ROLL=4105, /*  | */
    CTRL_GAIN_I_ATT_ROLL=4106, /*  | */
    CTRL_GAIN_D_ATT_ROLL=4107, /*  | */
    CTRL_GAIN_P_ATT_PITCH=4108, /*  | */
    CTRL_GAIN_I_ATT_PITCH=4109, /*  | */
    CTRL_GAIN_D_ATT_PITCH=4110, /*  | */
    CTRL_GAIN_P_ATT_YAW=4111, /*  | */
    CTRL_GAIN_I_ATT_YAW=4112, /*  | */
    CTRL_GAIN_D_ATT_YAW=4113, /*  | */
    GUID_PN_CONSTANT=8192, /* Proportional constant of PN guidance, 3~5 | */
    GUID_MAXIMUM_PULLUP_G=8193, /* Constraint on maximum acceleration represented in "g" | */
    MISSION_BATTERY_RTB=12288, /* Vehicle should perform RTB when battery level is below this | */
};

//! ASCL_PARAM_ID ENUM_END
constexpr auto ASCL_PARAM_ID_ENUM_END = 12289;

/** @brief Specifies the datatype of a ASCL parameter. */
enum class ASCL_PARAM_TYPE : uint8_t
{
    UINT8=1, /* 8-bit unsigned integer | */
    INT8=2, /* 8-bit signed integer | */
    UINT16=3, /* 16-bit unsigned integer | */
    INT16=4, /* 16-bit signed integer | */
    UINT32=5, /* 32-bit unsigned integer | */
    INT32=6, /* 32-bit signed integer | */
    UINT64=7, /* 64-bit unsigned integer | */
    INT64=8, /* 64-bit signed integer | */
    REAL32=9, /* 32-bit floating-point | */
    REAL64=10, /* 64-bit floating-point | */
};

//! ASCL_PARAM_TYPE ENUM_END
constexpr auto ASCL_PARAM_TYPE_ENUM_END = 11;

/** @brief Status of a parameter. in response of ASCL_PARAM_SET/ASCL_PARAM_REQUEST */
enum class ASCL_PARAM_RESULT : uint8_t
{
    ACCEPTED=1, /* Parameter published through ASCL_PARAM_SET is accepted | */
    REJECTED=2, /* Parameter published through ASCL_PARAM_SET is rejected since it's invalid | */
    INVALID_ID=3, /* Parameter identified through both ASCL_PARAM_SET/ASCL_PARAM_REQUEST is not accessible | */
    RESPONSE=4, /* Parameter is correctly returned in response of ASCL_PARAM_REQUEST | */
};

//! ASCL_PARAM_RESULT ENUM_END
constexpr auto ASCL_PARAM_RESULT_ENUM_END = 5;

/** @brief Specifies fusion type */
enum class ASCL_EKF_FUSION
{
    EFK_FUSION_NONE=0, /*  | */
    EFK_FUSION_RESERVED2=1, /*  | */
    EFK_FUSION_RESERVED1=2, /*  | */
    EFK_FUSION_AHRS=4, /*  | */
    EFK_FUSION_MAG_DECL=8, /*  | */
    EFK_FUSION_MAG_XYZ=16, /*  | */
    EFK_FUSION_BARO_ALT=32, /*  | */
    EFK_FUSION_GPS_VEL=64, /*  | */
    EFK_FUSION_GPS_POS=128, /*  | */
    ALL=255, /*  | */
};

//! ASCL_EKF_FUSION ENUM_END
constexpr auto ASCL_EKF_FUSION_ENUM_END = 256;

/** @brief Specified sensor calibration type */
enum class ASCL_SENSOR_CALIBRATION
{
    NONE=0, /* no designated calibration | */
    MAG=1, /*  | */
    HEIGHT=2, /*  | */
    ACC=4, /*  | */
    GYRO=8, /*  | */
    RESERVED4=16, /*  | */
    RESERVED3=32, /*  | */
    RESERVED2=64, /*  | */
    RESERVED1=128, /*  | */
    ALL=255, /*  | */
};

//! ASCL_SENSOR_CALIBRATION ENUM_END
constexpr auto ASCL_SENSOR_CALIBRATION_ENUM_END = 256;

/** @brief Enumeration(s) encoding command (GCS>FC) */
enum class ASCL_COMMAND : uint16_t
{
    NAV_RESET_COVARIANCE_FROM_TO=0, /* Reset Covariance P of EKF within designated indexes. |0: maintain current, otherwise reset to P0| Empty| Empty| Empty| from idx| to idx| Empty|  */
    NAV_RESET_COVARIANCE_ALL=1, /* Reset covariance of EKF22 |0: maintain current, otherwise reset to P0| Empty| Empty| Empty| Empty| Empty| Empty|  */
    NAV_RESET_STATE_FROM_TO=2, /* Reset selected navigation state of EKF22 |0: maintain current, otherwise reset to zero(zero-ables)| Empty| Empty| Empty| from idx| to idx| Empty|  */
    NAV_RESET_STATE_ALL=3, /* Reset navigation state of EKF22 |0: maintain current, otherwise reset to zero(zero-ables)| Empty| Empty| Empty| Empty| Empty| Empty|  */
    NAV_SET_FUSION=4, /* Turn on/off fusion flag of fusible data |0: reset(no fusion), otherwise set(do fusion)| Empty| Empty| Empty| Indicate which fusion| Empty| Empty|  */
    NAV_CALIBRATE_SENSORS=5, /* Calibrate designated sensor(s) |Empty| Gyro Calibration 0:off, otherwise:on| Acc Calibration 0:off, otherwise:on| Height(Baro-Gps-etc) Calibration 0:off, otherwise:on| Mag Calibration 0:off, otherwise:on| Reserved1| Reserved2|  */
    NAV_USE_CALIBRATED=6, /* Flag whether or not to use FC's calibration data |Empty| Use Calibrated Gyro 0:off, otherwise:on| Use Calibrated Acc 0:off, otherwise:on| Use Calibrated Height(Baro-Gps-etc) 0:off, otherwise:on| Use Calibrated Mag 0:off, otherwise:on| Reserved1| Reserved2|  */
    NAV_OVERRIDE_CALIBRATED=7, /* Override FC's calibration data into offline calibrated value || bias x-axis| bias y-axis| bias z-axis| scale factor x-axis| scale factor y-axis| scale factor z-axis|  */
    NAV_SET_HOME=8, /* Set home position of FC as command || Empty| Empty| Empty| latitude in degrees * 10^7| longitude in degrees * 10^7| altitude in mm|  */
    NAV_GET_HOME=9, /* Request for home position of FC || Empty| Empty| Empty| Empty| Empty| Empty|  */
};

//! ASCL_COMMAND ENUM_END
constexpr auto ASCL_COMMAND_ENUM_END = 10;

/** @brief  */
enum class ASCL_COMMAND_RESULT : uint8_t
{
    OK=1, /* Command is OK/applied | */
    ERR=2, /* Generic Error | */
    ERR_REJECTED=3, /* Command is refused by subscriber as it's not applicable at the moment | */
    ERR_UNKNOWN=4, /* Command is refused by subscriber as it's unknown command | */
};

//! ASCL_COMMAND_RESULT ENUM_END
constexpr auto ASCL_COMMAND_RESULT_ENUM_END = 5;


} // namespace ascluav
} // namespace mavlink

// MESSAGE DEFINITIONS
#include "./mavlink_msg_ascl_param_set.hpp"
#include "./mavlink_msg_ascl_param_request.hpp"
#include "./mavlink_msg_ascl_param_value.hpp"
#include "./mavlink_msg_ascl_command_send_fi.hpp"
#include "./mavlink_msg_ascl_command_send_f.hpp"
#include "./mavlink_msg_ascl_command_ack.hpp"
#include "./mavlink_msg_ascl_telemetry_nav_state_regular_value.hpp"
#include "./mavlink_msg_ascl_telemetry_nav_state_regular_cov.hpp"
#include "./mavlink_msg_ascl_telemetry_nav_state_att.hpp"
#include "./mavlink_msg_ascl_telemetry_nav_state_vel_pos.hpp"
#include "./mavlink_msg_ascl_telemetry_nav_state_refernce.hpp"
#include "./mavlink_msg_ascl_telemetry_home.hpp"
#include "./mavlink_msg_ascl_telemetry_sensor_mag.hpp"
#include "./mavlink_msg_ascl_telemetry_sensor_imu.hpp"
#include "./mavlink_msg_ascl_telemetry_sensor_gps.hpp"
#include "./mavlink_msg_ascl_telemetry_sensor_baro.hpp"
#include "./mavlink_msg_ascl_telemetry_sensor_gps_ins.hpp"
#include "./mavlink_msg_ascl_telemetry_sensor_general.hpp"
#include "./mavlink_msg_ascl_rc_channels_raw.hpp"
#include "./mavlink_msg_ascl_rc_channels_scaled.hpp"
#include "./mavlink_msg_ascl_pwm_out.hpp"
#include "./mavlink_msg_ascl_rl_reset_command_landing.hpp"
#include "./mavlink_msg_ascl_rl_full_state_landing.hpp"
#include "./mavlink_msg_ascl_rl_observation_landing.hpp"
#include "./mavlink_msg_ascl_rl_action_phi_theta_command_landing.hpp"

// base include
#include "../common/common.hpp"
