/** @file
 *  @brief MAVLink comm protocol generated from ascluav.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_ASCLUAV_H
#define MAVLINK_ASCLUAV_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_ASCLUAV.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 0

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{53232, 117, 7, 7, 0, 0, 0}, {53233, 50, 2, 2, 0, 0, 0}, {53234, 197, 8, 8, 0, 0, 0}, {53248, 145, 28, 28, 0, 0, 0}, {53249, 216, 28, 28, 0, 0, 0}, {53250, 123, 3, 3, 0, 0, 0}, {53400, 122, 16, 16, 0, 0, 0}, {53401, 124, 28, 28, 0, 0, 0}, {53402, 249, 30, 30, 0, 0, 0}, {53403, 193, 16, 16, 0, 0, 0}, {53404, 238, 64, 64, 0, 0, 0}, {53410, 214, 136, 136, 0, 0, 0}, {53500, 194, 32, 32, 0, 0, 0}, {53501, 75, 32, 32, 0, 0, 0}, {53502, 167, 32, 32, 0, 0, 0}, {55296, 141, 96, 96, 0, 0, 0}, {55297, 188, 132, 132, 0, 0, 0}, {55298, 3, 85, 85, 0, 0, 0}, {55299, 114, 137, 137, 0, 0, 0}, {55300, 181, 40, 40, 0, 0, 0}, {55301, 128, 17, 17, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_ASCLUAV

// ENUM DEFINITIONS


/** @brief Category a certain parameter/command is categorized. Mapping is as follows; 0: Navigation, 1: Control, 2: Guidance, 3: Mission, 4 and above: To be added. */
#ifndef HAVE_ENUM_ASCL_CATEGORY
#define HAVE_ENUM_ASCL_CATEGORY
typedef enum ASCL_CATEGORY
{
   ASCL_CATEGORY_NAVIGATION=0, /* Category Navigation | */
   ASCL_CATEGORY_CONTROL=1, /* Category Control | */
   ASCL_CATEGORY_GUIDANCE=2, /* Category Guidance | */
   ASCL_CATEGORY_MISSION=3, /* Category Mission | */
   ASCL_CATEGORY_RESERVED1=4, /* Category reserved | */
   ASCL_CATEGORY_RESERVED2=5, /* Category reserved | */
   ASCL_CATEGORY_RESERVED3=6, /* Category reserved | */
   ASCL_CATEGORY_ENUM_END=7, /*  | */
} ASCL_CATEGORY;
#endif

/** @brief Parameter ID. N=2^8, {0~N-1}: Navigation, {N~2N-1}: Control, {2N~3N-1}: Guidnance, {3N~4N-1}: Mission, and many more */
#ifndef HAVE_ENUM_ASCL_PARAM_ID
#define HAVE_ENUM_ASCL_PARAM_ID
typedef enum ASCL_PARAM_ID
{
   ASCL_PARAM_ID_NAV_COV_P0_QUAT=0, /* Covariance P0 for quaternions | */
   ASCL_PARAM_ID_NAV_COV_P0_EULER_TILT=1, /* Covariance P0 for roll,pitch | */
   ASCL_PARAM_ID_NAV_COV_P0_EULER_HEADING=2, /* Covariance P0 for heading | */
   ASCL_PARAM_ID_NAV_COV_P0_HOR_VEL=3, /* Covariance P0 for horizontal velocity | */
   ASCL_PARAM_ID_NAV_COV_P0_VER_VEL=4, /* Covariance P0 for vertical velocity | */
   ASCL_PARAM_ID_NAV_COV_P0_HOR_POS=5, /* Covariance P0 for horizontal position | */
   ASCL_PARAM_ID_NAV_COV_P0_VER_POS=6, /* Covariance P0 for altitude | */
   ASCL_PARAM_ID_NAV_COV_P0_GYRO_BIAS=7, /* Covariance P0 for gyro bias | */
   ASCL_PARAM_ID_NAV_COV_P0_ACC_BIAS=8, /* Covariance P0 for acc bias | */
   ASCL_PARAM_ID_NAV_COV_P0_MAG_NED=9, /* Covariance P0 for NED magnetic flux | */
   ASCL_PARAM_ID_NAV_COV_P0_MAG_BIAS=10, /* Covariance P0 for mag bias | */
   ASCL_PARAM_ID_NAV_COV_Q_GYRO=16, /* Covariance Q for delta angle | */
   ASCL_PARAM_ID_NAV_COV_Q_GYRO_BIAS=17, /* Covariance Q for gyro bias | */
   ASCL_PARAM_ID_NAV_COV_Q_ACC=18, /* Covariance Q for delta velocity | */
   ASCL_PARAM_ID_NAV_COV_Q_ACC_BIAS=19, /* Covariance Q for acc bias | */
   ASCL_PARAM_ID_NAV_COV_Q_MAG_NED=20, /* Covariance Q for NED magnetic flux | */
   ASCL_PARAM_ID_NAV_COV_Q_MAG_BIAS=21, /* Covariance Q for mag bias | */
   ASCL_PARAM_ID_NAV_COV_R_GPS_HOR_POS=32, /* Covariance R for NE position of GPS lat, long, height converted into NED | */
   ASCL_PARAM_ID_NAV_COV_R_GPS_VER_POS=33, /* Covariance R for D position of GPS lat, long, height converted into NED | */
   ASCL_PARAM_ID_NAV_COV_R_GPS_VEL=34, /* Covariance R for GPS velocity_ned | */
   ASCL_PARAM_ID_NAV_COV_R_BARO_ALT=35, /* Covariance R for barometric altitude | */
   ASCL_PARAM_ID_NAV_COV_R_MAG_BODY=36, /* Covariance R for magnetometer measurement | */
   ASCL_PARAM_ID_NAV_COV_R_MAG_DECLINATION=37, /* Covariance R for magnetic declination | */
   ASCL_PARAM_ID_NAV_COV_R_AHRS=38, /* Covariance R for AHRS | */
   ASCL_PARAM_ID_CTRL_GAIN_P_RATE_P=4096, /*  | */
   ASCL_PARAM_ID_CTRL_GAIN_I_RATE_P=4097, /*  | */
   ASCL_PARAM_ID_CTRL_GAIN_D_RATE_P=4098, /*  | */
   ASCL_PARAM_ID_CTRL_GAIN_P_RATE_Q=4099, /*  | */
   ASCL_PARAM_ID_CTRL_GAIN_I_RATE_Q=4100, /*  | */
   ASCL_PARAM_ID_CTRL_GAIN_D_RATE_Q=4101, /*  | */
   ASCL_PARAM_ID_CTRL_GAIN_P_RATE_R=4102, /*  | */
   ASCL_PARAM_ID_CTRL_GAIN_I_RATE_R=4103, /*  | */
   ASCL_PARAM_ID_CTRL_GAIN_D_RATE_R=4104, /*  | */
   ASCL_PARAM_ID_CTRL_GAIN_P_ATT_ROLL=4105, /*  | */
   ASCL_PARAM_ID_CTRL_GAIN_I_ATT_ROLL=4106, /*  | */
   ASCL_PARAM_ID_CTRL_GAIN_D_ATT_ROLL=4107, /*  | */
   ASCL_PARAM_ID_CTRL_GAIN_P_ATT_PITCH=4108, /*  | */
   ASCL_PARAM_ID_CTRL_GAIN_I_ATT_PITCH=4109, /*  | */
   ASCL_PARAM_ID_CTRL_GAIN_D_ATT_PITCH=4110, /*  | */
   ASCL_PARAM_ID_CTRL_GAIN_P_ATT_YAW=4111, /*  | */
   ASCL_PARAM_ID_CTRL_GAIN_I_ATT_YAW=4112, /*  | */
   ASCL_PARAM_ID_CTRL_GAIN_D_ATT_YAW=4113, /*  | */
   ASCL_PARAM_ID_GUID_PN_CONSTANT=8192, /* Proportional constant of PN guidance, 3~5 | */
   ASCL_PARAM_ID_GUID_MAXIMUM_PULLUP_G=8193, /* Constraint on maximum acceleration represented in "g" | */
   ASCL_PARAM_ID_MISSION_BATTERY_RTB=12288, /* Vehicle should perform RTB when battery level is below this | */
   ASCL_PARAM_ID_ENUM_END=12289, /*  | */
} ASCL_PARAM_ID;
#endif

/** @brief Specifies the datatype of a ASCL parameter. */
#ifndef HAVE_ENUM_ASCL_PARAM_TYPE
#define HAVE_ENUM_ASCL_PARAM_TYPE
typedef enum ASCL_PARAM_TYPE
{
   ASCL_PARAM_TYPE_UINT8=1, /* 8-bit unsigned integer | */
   ASCL_PARAM_TYPE_INT8=2, /* 8-bit signed integer | */
   ASCL_PARAM_TYPE_UINT16=3, /* 16-bit unsigned integer | */
   ASCL_PARAM_TYPE_INT16=4, /* 16-bit signed integer | */
   ASCL_PARAM_TYPE_UINT32=5, /* 32-bit unsigned integer | */
   ASCL_PARAM_TYPE_INT32=6, /* 32-bit signed integer | */
   ASCL_PARAM_TYPE_UINT64=7, /* 64-bit unsigned integer | */
   ASCL_PARAM_TYPE_INT64=8, /* 64-bit signed integer | */
   ASCL_PARAM_TYPE_REAL32=9, /* 32-bit floating-point | */
   ASCL_PARAM_TYPE_REAL64=10, /* 64-bit floating-point | */
   ASCL_PARAM_TYPE_ENUM_END=11, /*  | */
} ASCL_PARAM_TYPE;
#endif

/** @brief Status of a parameter. in response of ASCL_PARAM_SET/ASCL_PARAM_REQUEST */
#ifndef HAVE_ENUM_ASCL_PARAM_RESULT
#define HAVE_ENUM_ASCL_PARAM_RESULT
typedef enum ASCL_PARAM_RESULT
{
   ASCL_PARAM_RESULT_ACCEPTED=1, /* Parameter published through ASCL_PARAM_SET is accepted | */
   ASCL_PARAM_RESULT_REJECTED=2, /* Parameter published through ASCL_PARAM_SET is rejected since it's invalid | */
   ASCL_PARAM_RESULT_INVALID_ID=3, /* Parameter identified through both ASCL_PARAM_SET/ASCL_PARAM_REQUEST is not accessible | */
   ASCL_PARAM_RESULT_RESPONSE=4, /* Parameter is correctly returned in response of ASCL_PARAM_REQUEST | */
   ASCL_PARAM_RESULT_ENUM_END=5, /*  | */
} ASCL_PARAM_RESULT;
#endif

/** @brief Specifies fusion type */
#ifndef HAVE_ENUM_ASCL_EKF_FUSION
#define HAVE_ENUM_ASCL_EKF_FUSION
typedef enum ASCL_EKF_FUSION
{
   ASCL_EFK_FUSION_NONE=0, /*  | */
   ASCL_EFK_FUSION_RESERVED2=1, /*  | */
   ASCL_EFK_FUSION_RESERVED1=2, /*  | */
   ASCL_EFK_FUSION_AHRS=4, /*  | */
   ASCL_EFK_FUSION_MAG_DECL=8, /*  | */
   ASCL_EFK_FUSION_MAG_XYZ=16, /*  | */
   ASCL_EFK_FUSION_BARO_ALT=32, /*  | */
   ASCL_EFK_FUSION_GPS_VEL=64, /*  | */
   ASCL_EFK_FUSION_GPS_POS=128, /*  | */
   ASCL_EKF_FUSION_ALL=255, /*  | */
   ASCL_EKF_FUSION_ENUM_END=256, /*  | */
} ASCL_EKF_FUSION;
#endif

/** @brief Specified sensor calibration type */
#ifndef HAVE_ENUM_ASCL_SENSOR_CALIBRATION
#define HAVE_ENUM_ASCL_SENSOR_CALIBRATION
typedef enum ASCL_SENSOR_CALIBRATION
{
   ASCL_SENSOR_CALIBRATION_NONE=0, /* no designated calibration | */
   ASCL_SENSOR_CALIBRATION_MAG=1, /*  | */
   ASCL_SENSOR_CALIBRATION_HEIGHT=2, /*  | */
   ASCL_SENSOR_CALIBRATION_ACC=4, /*  | */
   ASCL_SENSOR_CALIBRATION_GYRO=8, /*  | */
   ASCL_SENSOR_CALIBRATION_RESERVED4=16, /*  | */
   ASCL_SENSOR_CALIBRATION_RESERVED3=32, /*  | */
   ASCL_SENSOR_CALIBRATION_RESERVED2=64, /*  | */
   ASCL_SENSOR_CALIBRATION_RESERVED1=128, /*  | */
   ASCL_SENSOR_CALIBRATION_ALL=129, /*  | */
   ASCL_SENSOR_CALIBRATION_ENUM_END=130, /*  | */
} ASCL_SENSOR_CALIBRATION;
#endif

/** @brief Enumeration(s) encoding command (GCS>FC) */
#ifndef HAVE_ENUM_ASCL_COMMAND
#define HAVE_ENUM_ASCL_COMMAND
typedef enum ASCL_COMMAND
{
   ASCL_COMMAND_NAV_RESET_COVARIANCE_FROM_TO=0, /* Reset Covariance P of EKF within designated indexes. |0: maintain current, otherwise reset to P0| Empty| Empty| Empty| from idx| to idx| Empty|  */
   ASCL_COMMAND_NAV_RESET_COVARIANCE_ALL=1, /* Reset covariance of EKF22 |0: maintain current, otherwise reset to P0| Empty| Empty| Empty| Empty| Empty| Empty|  */
   ASCL_COMMAND_NAV_RESET_STATE_FROM_TO=2, /* Reset selected navigation state of EKF22 |0: maintain current, otherwise reset to zero(zero-ables)| Empty| Empty| Empty| from idx| to idx| Empty|  */
   ASCL_COMMAND_NAV_RESET_STATE_ALL=3, /* Reset navigation state of EKF22 |0: maintain current, otherwise reset to zero(zero-ables)| Empty| Empty| Empty| Empty| Empty| Empty|  */
   ASCL_COMMAND_NAV_SET_FUSION=4, /* Turn on/off fusion flag of fusible data |0: reset(no fusion), otherwise set(do fusion)| Empty| Empty| Empty| Indicate which fusion| Empty| Empty|  */
   ASCL_COMMAND_NAV_CALIBRATE_SENSORS=5, /* Calibrate designated sensor(s) |Empty| Gyro Calibration 0:off, otherwise:on| Acc Calibration 0:off, otherwise:on| Height(Baro-Gps-etc) Calibration 0:off, otherwise:on| Mag Calibration 0:off, otherwise:on| Reserved1| Reserved2|  */
   ASCL_COMMAND_NAV_USE_CALIBRATED=6, /* Flag whether or not to use FC's calibration data |Empty| Use Calibrated Gyro 0:off, otherwise:on| Use Calibrated Acc 0:off, otherwise:on| Use Calibrated Height(Baro-Gps-etc) 0:off, otherwise:on| Use Calibrated Mag 0:off, otherwise:on| Reserved1| Reserved2|  */
   ASCL_COMMAND_NAV_OVERRIDE_CALIBRATED=7, /* Override FC's calibration data into offline calibrated value || bias x-axis| bias y-axis| bias z-axis| scale factor x-axis| scale factor y-axis| scale factor z-axis|  */
   ASCL_COMMAND_NAV_SET_HOME=8, /* Set home position of FC as command || Empty| Empty| Empty| latitude in degrees * 10^7| longitude in degrees * 10^7| altitude in mm|  */
   ASCL_COMMAND_NAV_GET_HOME=9, /* Request for home position of FC || Empty| Empty| Empty| Empty| Empty| Empty|  */
   ASCL_COMMAND_ENUM_END=10, /*  | */
} ASCL_COMMAND;
#endif

/** @brief  */
#ifndef HAVE_ENUM_ASCL_COMMAND_RESULT
#define HAVE_ENUM_ASCL_COMMAND_RESULT
typedef enum ASCL_COMMAND_RESULT
{
   ASCL_COMMAND_RESULT_OK=1, /* Command is OK/applied | */
   ASCL_COMMAND_RESULT_ERR=2, /* Generic Error | */
   ASCL_COMMAND_RESULT_ERR_REJECTED=3, /* Command is refused by subscriber as it's not applicable at the moment | */
   ASCL_COMMAND_RESULT_ERR_UNKNOWN=4, /* Command is refused by subscriber as it's unknown command | */
   ASCL_COMMAND_RESULT_ENUM_END=5, /*  | */
} ASCL_COMMAND_RESULT;
#endif

// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 1
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 1
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_ascl_param_set.h"
#include "./mavlink_msg_ascl_param_request.h"
#include "./mavlink_msg_ascl_param_value.h"
#include "./mavlink_msg_ascl_command_send_fi.h"
#include "./mavlink_msg_ascl_command_send_f.h"
#include "./mavlink_msg_ascl_command_ack.h"
#include "./mavlink_msg_ascl_telemetry_nav_state_regular_value.h"
#include "./mavlink_msg_ascl_telemetry_nav_state_regular_cov.h"
#include "./mavlink_msg_ascl_telemetry_nav_state_att.h"
#include "./mavlink_msg_ascl_telemetry_nav_state_vel_pos.h"
#include "./mavlink_msg_ascl_telemetry_nav_state_refernce.h"
#include "./mavlink_msg_ascl_telemetry_home.h"
#include "./mavlink_msg_ascl_telemetry_sensor_mag.h"
#include "./mavlink_msg_ascl_telemetry_sensor_imu.h"
#include "./mavlink_msg_ascl_telemetry_sensor_gps.h"
#include "./mavlink_msg_ascl_telemetry_sensor_baro.h"
#include "./mavlink_msg_ascl_telemetry_sensor_gps_ins.h"
#include "./mavlink_msg_ascl_telemetry_sensor_general.h"
#include "./mavlink_msg_ascl_rc_channels_raw.h"
#include "./mavlink_msg_ascl_rc_channels_scaled.h"
#include "./mavlink_msg_ascl_pwm_out.h"

// base include


#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 0

#if MAVLINK_THIS_XML_IDX == MAVLINK_PRIMARY_XML_IDX
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_ASCL_PARAM_SET, MAVLINK_MESSAGE_INFO_ASCL_PARAM_REQUEST, MAVLINK_MESSAGE_INFO_ASCL_PARAM_VALUE, MAVLINK_MESSAGE_INFO_ASCL_COMMAND_SEND_FI, MAVLINK_MESSAGE_INFO_ASCL_COMMAND_SEND_F, MAVLINK_MESSAGE_INFO_ASCL_COMMAND_ACK, MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_SENSOR_MAG, MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_SENSOR_IMU, MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_SENSOR_GPS, MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_SENSOR_BARO, MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_SENSOR_GPS_INS, MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_SENSOR_GENERAL, MAVLINK_MESSAGE_INFO_ASCL_RC_CHANNELS_RAW, MAVLINK_MESSAGE_INFO_ASCL_RC_CHANNELS_SCALED, MAVLINK_MESSAGE_INFO_ASCL_PWM_OUT, MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE, MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV, MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_NAV_STATE_ATT, MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_NAV_STATE_VEL_POS, MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_NAV_STATE_REFERNCE, MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_HOME}
# define MAVLINK_MESSAGE_NAMES {{ "ASCL_COMMAND_ACK", 53250 }, { "ASCL_COMMAND_SEND_F", 53249 }, { "ASCL_COMMAND_SEND_FI", 53248 }, { "ASCL_PARAM_REQUEST", 53233 }, { "ASCL_PARAM_SET", 53232 }, { "ASCL_PARAM_VALUE", 53234 }, { "ASCL_PWM_OUT", 53502 }, { "ASCL_RC_CHANNELS_RAW", 53500 }, { "ASCL_RC_CHANNELS_SCALED", 53501 }, { "ASCL_TELEMETRY_HOME", 55301 }, { "ASCL_TELEMETRY_NAV_STATE_ATT", 55298 }, { "ASCL_TELEMETRY_NAV_STATE_REFERNCE", 55300 }, { "ASCL_TELEMETRY_NAV_STATE_REGULAR_COV", 55297 }, { "ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE", 55296 }, { "ASCL_TELEMETRY_NAV_STATE_VEL_POS", 55299 }, { "ASCL_TELEMETRY_SENSOR_BARO", 53403 }, { "ASCL_TELEMETRY_SENSOR_GENERAL", 53410 }, { "ASCL_TELEMETRY_SENSOR_GPS", 53402 }, { "ASCL_TELEMETRY_SENSOR_GPS_INS", 53404 }, { "ASCL_TELEMETRY_SENSOR_IMU", 53401 }, { "ASCL_TELEMETRY_SENSOR_MAG", 53400 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_ASCLUAV_H
