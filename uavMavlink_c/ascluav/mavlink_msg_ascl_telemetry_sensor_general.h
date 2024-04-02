#pragma once
// MESSAGE ASCL_TELEMETRY_SENSOR_GENERAL PACKING

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL 53410

MAVPACKED(
typedef struct __mavlink_ascl_telemetry_sensor_general_t {
 uint32_t timems; /*< [ms] FC time in ms*/
 float ned[3]; /*< [m] NED position in m*/
 uint32_t llh[3]; /*< [degE7,mm] latitude/longitude/height in degE7/degE7/mm as integer*/
 float velNed[3]; /*< [m/s] Velocity of a vehicle in NED frame in m/s*/
 float euler[3]; /*< [deg] Euler angle in deg*/
 float mag[3]; /*<  Magnetic field in body frame in gauss*/
 float gyro[3]; /*< [rad/s] Angular rate in rad/s*/
 float acc[3]; /*< [m/s] Linear acceleration in m/s2*/
 float reserved1[3]; /*< [TBD] Reserved space for flexible operation*/
 float reserved2[3]; /*< [TBD] Reserved space for flexible operation*/
 float reserved3[3]; /*< [TBD] Reserved space for flexible operation*/
 float reserved4[3]; /*< [TBD] Reserved space for flexible operation*/
}) mavlink_ascl_telemetry_sensor_general_t;

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL_LEN 136
#define MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL_MIN_LEN 136
#define MAVLINK_MSG_ID_53410_LEN 136
#define MAVLINK_MSG_ID_53410_MIN_LEN 136

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL_CRC 214
#define MAVLINK_MSG_ID_53410_CRC 214

#define MAVLINK_MSG_ASCL_TELEMETRY_SENSOR_GENERAL_FIELD_NED_LEN 3
#define MAVLINK_MSG_ASCL_TELEMETRY_SENSOR_GENERAL_FIELD_LLH_LEN 3
#define MAVLINK_MSG_ASCL_TELEMETRY_SENSOR_GENERAL_FIELD_VELNED_LEN 3
#define MAVLINK_MSG_ASCL_TELEMETRY_SENSOR_GENERAL_FIELD_EULER_LEN 3
#define MAVLINK_MSG_ASCL_TELEMETRY_SENSOR_GENERAL_FIELD_MAG_LEN 3
#define MAVLINK_MSG_ASCL_TELEMETRY_SENSOR_GENERAL_FIELD_GYRO_LEN 3
#define MAVLINK_MSG_ASCL_TELEMETRY_SENSOR_GENERAL_FIELD_ACC_LEN 3
#define MAVLINK_MSG_ASCL_TELEMETRY_SENSOR_GENERAL_FIELD_RESERVED1_LEN 3
#define MAVLINK_MSG_ASCL_TELEMETRY_SENSOR_GENERAL_FIELD_RESERVED2_LEN 3
#define MAVLINK_MSG_ASCL_TELEMETRY_SENSOR_GENERAL_FIELD_RESERVED3_LEN 3
#define MAVLINK_MSG_ASCL_TELEMETRY_SENSOR_GENERAL_FIELD_RESERVED4_LEN 3

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_SENSOR_GENERAL { \
    53410, \
    "ASCL_TELEMETRY_SENSOR_GENERAL", \
    12, \
    {  { "timems", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ascl_telemetry_sensor_general_t, timems) }, \
         { "ned", NULL, MAVLINK_TYPE_FLOAT, 3, 4, offsetof(mavlink_ascl_telemetry_sensor_general_t, ned) }, \
         { "llh", NULL, MAVLINK_TYPE_UINT32_T, 3, 16, offsetof(mavlink_ascl_telemetry_sensor_general_t, llh) }, \
         { "velNed", NULL, MAVLINK_TYPE_FLOAT, 3, 28, offsetof(mavlink_ascl_telemetry_sensor_general_t, velNed) }, \
         { "euler", NULL, MAVLINK_TYPE_FLOAT, 3, 40, offsetof(mavlink_ascl_telemetry_sensor_general_t, euler) }, \
         { "mag", NULL, MAVLINK_TYPE_FLOAT, 3, 52, offsetof(mavlink_ascl_telemetry_sensor_general_t, mag) }, \
         { "gyro", NULL, MAVLINK_TYPE_FLOAT, 3, 64, offsetof(mavlink_ascl_telemetry_sensor_general_t, gyro) }, \
         { "acc", NULL, MAVLINK_TYPE_FLOAT, 3, 76, offsetof(mavlink_ascl_telemetry_sensor_general_t, acc) }, \
         { "reserved1", NULL, MAVLINK_TYPE_FLOAT, 3, 88, offsetof(mavlink_ascl_telemetry_sensor_general_t, reserved1) }, \
         { "reserved2", NULL, MAVLINK_TYPE_FLOAT, 3, 100, offsetof(mavlink_ascl_telemetry_sensor_general_t, reserved2) }, \
         { "reserved3", NULL, MAVLINK_TYPE_FLOAT, 3, 112, offsetof(mavlink_ascl_telemetry_sensor_general_t, reserved3) }, \
         { "reserved4", NULL, MAVLINK_TYPE_FLOAT, 3, 124, offsetof(mavlink_ascl_telemetry_sensor_general_t, reserved4) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_SENSOR_GENERAL { \
    "ASCL_TELEMETRY_SENSOR_GENERAL", \
    12, \
    {  { "timems", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ascl_telemetry_sensor_general_t, timems) }, \
         { "ned", NULL, MAVLINK_TYPE_FLOAT, 3, 4, offsetof(mavlink_ascl_telemetry_sensor_general_t, ned) }, \
         { "llh", NULL, MAVLINK_TYPE_UINT32_T, 3, 16, offsetof(mavlink_ascl_telemetry_sensor_general_t, llh) }, \
         { "velNed", NULL, MAVLINK_TYPE_FLOAT, 3, 28, offsetof(mavlink_ascl_telemetry_sensor_general_t, velNed) }, \
         { "euler", NULL, MAVLINK_TYPE_FLOAT, 3, 40, offsetof(mavlink_ascl_telemetry_sensor_general_t, euler) }, \
         { "mag", NULL, MAVLINK_TYPE_FLOAT, 3, 52, offsetof(mavlink_ascl_telemetry_sensor_general_t, mag) }, \
         { "gyro", NULL, MAVLINK_TYPE_FLOAT, 3, 64, offsetof(mavlink_ascl_telemetry_sensor_general_t, gyro) }, \
         { "acc", NULL, MAVLINK_TYPE_FLOAT, 3, 76, offsetof(mavlink_ascl_telemetry_sensor_general_t, acc) }, \
         { "reserved1", NULL, MAVLINK_TYPE_FLOAT, 3, 88, offsetof(mavlink_ascl_telemetry_sensor_general_t, reserved1) }, \
         { "reserved2", NULL, MAVLINK_TYPE_FLOAT, 3, 100, offsetof(mavlink_ascl_telemetry_sensor_general_t, reserved2) }, \
         { "reserved3", NULL, MAVLINK_TYPE_FLOAT, 3, 112, offsetof(mavlink_ascl_telemetry_sensor_general_t, reserved3) }, \
         { "reserved4", NULL, MAVLINK_TYPE_FLOAT, 3, 124, offsetof(mavlink_ascl_telemetry_sensor_general_t, reserved4) }, \
         } \
}
#endif

/**
 * @brief Pack a ascl_telemetry_sensor_general message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timems [ms] FC time in ms
 * @param ned [m] NED position in m
 * @param llh [degE7,mm] latitude/longitude/height in degE7/degE7/mm as integer
 * @param velNed [m/s] Velocity of a vehicle in NED frame in m/s
 * @param euler [deg] Euler angle in deg
 * @param mag  Magnetic field in body frame in gauss
 * @param gyro [rad/s] Angular rate in rad/s
 * @param acc [m/s] Linear acceleration in m/s2
 * @param reserved1 [TBD] Reserved space for flexible operation
 * @param reserved2 [TBD] Reserved space for flexible operation
 * @param reserved3 [TBD] Reserved space for flexible operation
 * @param reserved4 [TBD] Reserved space for flexible operation
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_general_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t timems, const float *ned, const uint32_t *llh, const float *velNed, const float *euler, const float *mag, const float *gyro, const float *acc, const float *reserved1, const float *reserved2, const float *reserved3, const float *reserved4)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_float_array(buf, 4, ned, 3);
    _mav_put_uint32_t_array(buf, 16, llh, 3);
    _mav_put_float_array(buf, 28, velNed, 3);
    _mav_put_float_array(buf, 40, euler, 3);
    _mav_put_float_array(buf, 52, mag, 3);
    _mav_put_float_array(buf, 64, gyro, 3);
    _mav_put_float_array(buf, 76, acc, 3);
    _mav_put_float_array(buf, 88, reserved1, 3);
    _mav_put_float_array(buf, 100, reserved2, 3);
    _mav_put_float_array(buf, 112, reserved3, 3);
    _mav_put_float_array(buf, 124, reserved4, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL_LEN);
#else
    mavlink_ascl_telemetry_sensor_general_t packet;
    packet.timems = timems;
    mav_array_memcpy(packet.ned, ned, sizeof(float)*3);
    mav_array_memcpy(packet.llh, llh, sizeof(uint32_t)*3);
    mav_array_memcpy(packet.velNed, velNed, sizeof(float)*3);
    mav_array_memcpy(packet.euler, euler, sizeof(float)*3);
    mav_array_memcpy(packet.mag, mag, sizeof(float)*3);
    mav_array_memcpy(packet.gyro, gyro, sizeof(float)*3);
    mav_array_memcpy(packet.acc, acc, sizeof(float)*3);
    mav_array_memcpy(packet.reserved1, reserved1, sizeof(float)*3);
    mav_array_memcpy(packet.reserved2, reserved2, sizeof(float)*3);
    mav_array_memcpy(packet.reserved3, reserved3, sizeof(float)*3);
    mav_array_memcpy(packet.reserved4, reserved4, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL_CRC);
}

/**
 * @brief Pack a ascl_telemetry_sensor_general message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timems [ms] FC time in ms
 * @param ned [m] NED position in m
 * @param llh [degE7,mm] latitude/longitude/height in degE7/degE7/mm as integer
 * @param velNed [m/s] Velocity of a vehicle in NED frame in m/s
 * @param euler [deg] Euler angle in deg
 * @param mag  Magnetic field in body frame in gauss
 * @param gyro [rad/s] Angular rate in rad/s
 * @param acc [m/s] Linear acceleration in m/s2
 * @param reserved1 [TBD] Reserved space for flexible operation
 * @param reserved2 [TBD] Reserved space for flexible operation
 * @param reserved3 [TBD] Reserved space for flexible operation
 * @param reserved4 [TBD] Reserved space for flexible operation
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_general_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t timems,const float *ned,const uint32_t *llh,const float *velNed,const float *euler,const float *mag,const float *gyro,const float *acc,const float *reserved1,const float *reserved2,const float *reserved3,const float *reserved4)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_float_array(buf, 4, ned, 3);
    _mav_put_uint32_t_array(buf, 16, llh, 3);
    _mav_put_float_array(buf, 28, velNed, 3);
    _mav_put_float_array(buf, 40, euler, 3);
    _mav_put_float_array(buf, 52, mag, 3);
    _mav_put_float_array(buf, 64, gyro, 3);
    _mav_put_float_array(buf, 76, acc, 3);
    _mav_put_float_array(buf, 88, reserved1, 3);
    _mav_put_float_array(buf, 100, reserved2, 3);
    _mav_put_float_array(buf, 112, reserved3, 3);
    _mav_put_float_array(buf, 124, reserved4, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL_LEN);
#else
    mavlink_ascl_telemetry_sensor_general_t packet;
    packet.timems = timems;
    mav_array_memcpy(packet.ned, ned, sizeof(float)*3);
    mav_array_memcpy(packet.llh, llh, sizeof(uint32_t)*3);
    mav_array_memcpy(packet.velNed, velNed, sizeof(float)*3);
    mav_array_memcpy(packet.euler, euler, sizeof(float)*3);
    mav_array_memcpy(packet.mag, mag, sizeof(float)*3);
    mav_array_memcpy(packet.gyro, gyro, sizeof(float)*3);
    mav_array_memcpy(packet.acc, acc, sizeof(float)*3);
    mav_array_memcpy(packet.reserved1, reserved1, sizeof(float)*3);
    mav_array_memcpy(packet.reserved2, reserved2, sizeof(float)*3);
    mav_array_memcpy(packet.reserved3, reserved3, sizeof(float)*3);
    mav_array_memcpy(packet.reserved4, reserved4, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL_CRC);
}

/**
 * @brief Encode a ascl_telemetry_sensor_general struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ascl_telemetry_sensor_general C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_general_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ascl_telemetry_sensor_general_t* ascl_telemetry_sensor_general)
{
    return mavlink_msg_ascl_telemetry_sensor_general_pack(system_id, component_id, msg, ascl_telemetry_sensor_general->timems, ascl_telemetry_sensor_general->ned, ascl_telemetry_sensor_general->llh, ascl_telemetry_sensor_general->velNed, ascl_telemetry_sensor_general->euler, ascl_telemetry_sensor_general->mag, ascl_telemetry_sensor_general->gyro, ascl_telemetry_sensor_general->acc, ascl_telemetry_sensor_general->reserved1, ascl_telemetry_sensor_general->reserved2, ascl_telemetry_sensor_general->reserved3, ascl_telemetry_sensor_general->reserved4);
}

/**
 * @brief Encode a ascl_telemetry_sensor_general struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ascl_telemetry_sensor_general C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_general_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ascl_telemetry_sensor_general_t* ascl_telemetry_sensor_general)
{
    return mavlink_msg_ascl_telemetry_sensor_general_pack_chan(system_id, component_id, chan, msg, ascl_telemetry_sensor_general->timems, ascl_telemetry_sensor_general->ned, ascl_telemetry_sensor_general->llh, ascl_telemetry_sensor_general->velNed, ascl_telemetry_sensor_general->euler, ascl_telemetry_sensor_general->mag, ascl_telemetry_sensor_general->gyro, ascl_telemetry_sensor_general->acc, ascl_telemetry_sensor_general->reserved1, ascl_telemetry_sensor_general->reserved2, ascl_telemetry_sensor_general->reserved3, ascl_telemetry_sensor_general->reserved4);
}

/**
 * @brief Send a ascl_telemetry_sensor_general message
 * @param chan MAVLink channel to send the message
 *
 * @param timems [ms] FC time in ms
 * @param ned [m] NED position in m
 * @param llh [degE7,mm] latitude/longitude/height in degE7/degE7/mm as integer
 * @param velNed [m/s] Velocity of a vehicle in NED frame in m/s
 * @param euler [deg] Euler angle in deg
 * @param mag  Magnetic field in body frame in gauss
 * @param gyro [rad/s] Angular rate in rad/s
 * @param acc [m/s] Linear acceleration in m/s2
 * @param reserved1 [TBD] Reserved space for flexible operation
 * @param reserved2 [TBD] Reserved space for flexible operation
 * @param reserved3 [TBD] Reserved space for flexible operation
 * @param reserved4 [TBD] Reserved space for flexible operation
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ascl_telemetry_sensor_general_send(mavlink_channel_t chan, uint32_t timems, const float *ned, const uint32_t *llh, const float *velNed, const float *euler, const float *mag, const float *gyro, const float *acc, const float *reserved1, const float *reserved2, const float *reserved3, const float *reserved4)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_float_array(buf, 4, ned, 3);
    _mav_put_uint32_t_array(buf, 16, llh, 3);
    _mav_put_float_array(buf, 28, velNed, 3);
    _mav_put_float_array(buf, 40, euler, 3);
    _mav_put_float_array(buf, 52, mag, 3);
    _mav_put_float_array(buf, 64, gyro, 3);
    _mav_put_float_array(buf, 76, acc, 3);
    _mav_put_float_array(buf, 88, reserved1, 3);
    _mav_put_float_array(buf, 100, reserved2, 3);
    _mav_put_float_array(buf, 112, reserved3, 3);
    _mav_put_float_array(buf, 124, reserved4, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL, buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL_CRC);
#else
    mavlink_ascl_telemetry_sensor_general_t packet;
    packet.timems = timems;
    mav_array_memcpy(packet.ned, ned, sizeof(float)*3);
    mav_array_memcpy(packet.llh, llh, sizeof(uint32_t)*3);
    mav_array_memcpy(packet.velNed, velNed, sizeof(float)*3);
    mav_array_memcpy(packet.euler, euler, sizeof(float)*3);
    mav_array_memcpy(packet.mag, mag, sizeof(float)*3);
    mav_array_memcpy(packet.gyro, gyro, sizeof(float)*3);
    mav_array_memcpy(packet.acc, acc, sizeof(float)*3);
    mav_array_memcpy(packet.reserved1, reserved1, sizeof(float)*3);
    mav_array_memcpy(packet.reserved2, reserved2, sizeof(float)*3);
    mav_array_memcpy(packet.reserved3, reserved3, sizeof(float)*3);
    mav_array_memcpy(packet.reserved4, reserved4, sizeof(float)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL, (const char *)&packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL_CRC);
#endif
}

/**
 * @brief Send a ascl_telemetry_sensor_general message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ascl_telemetry_sensor_general_send_struct(mavlink_channel_t chan, const mavlink_ascl_telemetry_sensor_general_t* ascl_telemetry_sensor_general)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ascl_telemetry_sensor_general_send(chan, ascl_telemetry_sensor_general->timems, ascl_telemetry_sensor_general->ned, ascl_telemetry_sensor_general->llh, ascl_telemetry_sensor_general->velNed, ascl_telemetry_sensor_general->euler, ascl_telemetry_sensor_general->mag, ascl_telemetry_sensor_general->gyro, ascl_telemetry_sensor_general->acc, ascl_telemetry_sensor_general->reserved1, ascl_telemetry_sensor_general->reserved2, ascl_telemetry_sensor_general->reserved3, ascl_telemetry_sensor_general->reserved4);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL, (const char *)ascl_telemetry_sensor_general, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL_CRC);
#endif
}

#if MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ascl_telemetry_sensor_general_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t timems, const float *ned, const uint32_t *llh, const float *velNed, const float *euler, const float *mag, const float *gyro, const float *acc, const float *reserved1, const float *reserved2, const float *reserved3, const float *reserved4)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_float_array(buf, 4, ned, 3);
    _mav_put_uint32_t_array(buf, 16, llh, 3);
    _mav_put_float_array(buf, 28, velNed, 3);
    _mav_put_float_array(buf, 40, euler, 3);
    _mav_put_float_array(buf, 52, mag, 3);
    _mav_put_float_array(buf, 64, gyro, 3);
    _mav_put_float_array(buf, 76, acc, 3);
    _mav_put_float_array(buf, 88, reserved1, 3);
    _mav_put_float_array(buf, 100, reserved2, 3);
    _mav_put_float_array(buf, 112, reserved3, 3);
    _mav_put_float_array(buf, 124, reserved4, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL, buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL_CRC);
#else
    mavlink_ascl_telemetry_sensor_general_t *packet = (mavlink_ascl_telemetry_sensor_general_t *)msgbuf;
    packet->timems = timems;
    mav_array_memcpy(packet->ned, ned, sizeof(float)*3);
    mav_array_memcpy(packet->llh, llh, sizeof(uint32_t)*3);
    mav_array_memcpy(packet->velNed, velNed, sizeof(float)*3);
    mav_array_memcpy(packet->euler, euler, sizeof(float)*3);
    mav_array_memcpy(packet->mag, mag, sizeof(float)*3);
    mav_array_memcpy(packet->gyro, gyro, sizeof(float)*3);
    mav_array_memcpy(packet->acc, acc, sizeof(float)*3);
    mav_array_memcpy(packet->reserved1, reserved1, sizeof(float)*3);
    mav_array_memcpy(packet->reserved2, reserved2, sizeof(float)*3);
    mav_array_memcpy(packet->reserved3, reserved3, sizeof(float)*3);
    mav_array_memcpy(packet->reserved4, reserved4, sizeof(float)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL, (const char *)packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL_CRC);
#endif
}
#endif

#endif

// MESSAGE ASCL_TELEMETRY_SENSOR_GENERAL UNPACKING


/**
 * @brief Get field timems from ascl_telemetry_sensor_general message
 *
 * @return [ms] FC time in ms
 */
static inline uint32_t mavlink_msg_ascl_telemetry_sensor_general_get_timems(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field ned from ascl_telemetry_sensor_general message
 *
 * @return [m] NED position in m
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_general_get_ned(const mavlink_message_t* msg, float *ned)
{
    return _MAV_RETURN_float_array(msg, ned, 3,  4);
}

/**
 * @brief Get field llh from ascl_telemetry_sensor_general message
 *
 * @return [degE7,mm] latitude/longitude/height in degE7/degE7/mm as integer
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_general_get_llh(const mavlink_message_t* msg, uint32_t *llh)
{
    return _MAV_RETURN_uint32_t_array(msg, llh, 3,  16);
}

/**
 * @brief Get field velNed from ascl_telemetry_sensor_general message
 *
 * @return [m/s] Velocity of a vehicle in NED frame in m/s
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_general_get_velNed(const mavlink_message_t* msg, float *velNed)
{
    return _MAV_RETURN_float_array(msg, velNed, 3,  28);
}

/**
 * @brief Get field euler from ascl_telemetry_sensor_general message
 *
 * @return [deg] Euler angle in deg
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_general_get_euler(const mavlink_message_t* msg, float *euler)
{
    return _MAV_RETURN_float_array(msg, euler, 3,  40);
}

/**
 * @brief Get field mag from ascl_telemetry_sensor_general message
 *
 * @return  Magnetic field in body frame in gauss
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_general_get_mag(const mavlink_message_t* msg, float *mag)
{
    return _MAV_RETURN_float_array(msg, mag, 3,  52);
}

/**
 * @brief Get field gyro from ascl_telemetry_sensor_general message
 *
 * @return [rad/s] Angular rate in rad/s
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_general_get_gyro(const mavlink_message_t* msg, float *gyro)
{
    return _MAV_RETURN_float_array(msg, gyro, 3,  64);
}

/**
 * @brief Get field acc from ascl_telemetry_sensor_general message
 *
 * @return [m/s] Linear acceleration in m/s2
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_general_get_acc(const mavlink_message_t* msg, float *acc)
{
    return _MAV_RETURN_float_array(msg, acc, 3,  76);
}

/**
 * @brief Get field reserved1 from ascl_telemetry_sensor_general message
 *
 * @return [TBD] Reserved space for flexible operation
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_general_get_reserved1(const mavlink_message_t* msg, float *reserved1)
{
    return _MAV_RETURN_float_array(msg, reserved1, 3,  88);
}

/**
 * @brief Get field reserved2 from ascl_telemetry_sensor_general message
 *
 * @return [TBD] Reserved space for flexible operation
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_general_get_reserved2(const mavlink_message_t* msg, float *reserved2)
{
    return _MAV_RETURN_float_array(msg, reserved2, 3,  100);
}

/**
 * @brief Get field reserved3 from ascl_telemetry_sensor_general message
 *
 * @return [TBD] Reserved space for flexible operation
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_general_get_reserved3(const mavlink_message_t* msg, float *reserved3)
{
    return _MAV_RETURN_float_array(msg, reserved3, 3,  112);
}

/**
 * @brief Get field reserved4 from ascl_telemetry_sensor_general message
 *
 * @return [TBD] Reserved space for flexible operation
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_general_get_reserved4(const mavlink_message_t* msg, float *reserved4)
{
    return _MAV_RETURN_float_array(msg, reserved4, 3,  124);
}

/**
 * @brief Decode a ascl_telemetry_sensor_general message into a struct
 *
 * @param msg The message to decode
 * @param ascl_telemetry_sensor_general C-struct to decode the message contents into
 */
static inline void mavlink_msg_ascl_telemetry_sensor_general_decode(const mavlink_message_t* msg, mavlink_ascl_telemetry_sensor_general_t* ascl_telemetry_sensor_general)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ascl_telemetry_sensor_general->timems = mavlink_msg_ascl_telemetry_sensor_general_get_timems(msg);
    mavlink_msg_ascl_telemetry_sensor_general_get_ned(msg, ascl_telemetry_sensor_general->ned);
    mavlink_msg_ascl_telemetry_sensor_general_get_llh(msg, ascl_telemetry_sensor_general->llh);
    mavlink_msg_ascl_telemetry_sensor_general_get_velNed(msg, ascl_telemetry_sensor_general->velNed);
    mavlink_msg_ascl_telemetry_sensor_general_get_euler(msg, ascl_telemetry_sensor_general->euler);
    mavlink_msg_ascl_telemetry_sensor_general_get_mag(msg, ascl_telemetry_sensor_general->mag);
    mavlink_msg_ascl_telemetry_sensor_general_get_gyro(msg, ascl_telemetry_sensor_general->gyro);
    mavlink_msg_ascl_telemetry_sensor_general_get_acc(msg, ascl_telemetry_sensor_general->acc);
    mavlink_msg_ascl_telemetry_sensor_general_get_reserved1(msg, ascl_telemetry_sensor_general->reserved1);
    mavlink_msg_ascl_telemetry_sensor_general_get_reserved2(msg, ascl_telemetry_sensor_general->reserved2);
    mavlink_msg_ascl_telemetry_sensor_general_get_reserved3(msg, ascl_telemetry_sensor_general->reserved3);
    mavlink_msg_ascl_telemetry_sensor_general_get_reserved4(msg, ascl_telemetry_sensor_general->reserved4);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL_LEN? msg->len : MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL_LEN;
        memset(ascl_telemetry_sensor_general, 0, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GENERAL_LEN);
    memcpy(ascl_telemetry_sensor_general, _MAV_PAYLOAD(msg), len);
#endif
}
