#pragma once
// MESSAGE ASCL_TELEMETRY_SENSOR_IMU PACKING

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU 55401


typedef struct __mavlink_ascl_telemetry_sensor_imu_t {
 uint32_t timems; /*< [ms] FC time in ms*/
 float gyro[3]; /*< [rad/s] Angular rate in rad/s*/
 float acc[3]; /*< [m/s] Linear acceleration in m/s2*/
} mavlink_ascl_telemetry_sensor_imu_t;

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_LEN 28
#define MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_MIN_LEN 28
#define MAVLINK_MSG_ID_55401_LEN 28
#define MAVLINK_MSG_ID_55401_MIN_LEN 28

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_CRC 124
#define MAVLINK_MSG_ID_55401_CRC 124

#define MAVLINK_MSG_ASCL_TELEMETRY_SENSOR_IMU_FIELD_GYRO_LEN 3
#define MAVLINK_MSG_ASCL_TELEMETRY_SENSOR_IMU_FIELD_ACC_LEN 3

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_SENSOR_IMU { \
    55401, \
    "ASCL_TELEMETRY_SENSOR_IMU", \
    3, \
    {  { "timems", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ascl_telemetry_sensor_imu_t, timems) }, \
         { "gyro", NULL, MAVLINK_TYPE_FLOAT, 3, 4, offsetof(mavlink_ascl_telemetry_sensor_imu_t, gyro) }, \
         { "acc", NULL, MAVLINK_TYPE_FLOAT, 3, 16, offsetof(mavlink_ascl_telemetry_sensor_imu_t, acc) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_SENSOR_IMU { \
    "ASCL_TELEMETRY_SENSOR_IMU", \
    3, \
    {  { "timems", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ascl_telemetry_sensor_imu_t, timems) }, \
         { "gyro", NULL, MAVLINK_TYPE_FLOAT, 3, 4, offsetof(mavlink_ascl_telemetry_sensor_imu_t, gyro) }, \
         { "acc", NULL, MAVLINK_TYPE_FLOAT, 3, 16, offsetof(mavlink_ascl_telemetry_sensor_imu_t, acc) }, \
         } \
}
#endif

/**
 * @brief Pack a ascl_telemetry_sensor_imu message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timems [ms] FC time in ms
 * @param gyro [rad/s] Angular rate in rad/s
 * @param acc [m/s] Linear acceleration in m/s2
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_imu_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t timems, const float *gyro, const float *acc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_float_array(buf, 4, gyro, 3);
    _mav_put_float_array(buf, 16, acc, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_LEN);
#else
    mavlink_ascl_telemetry_sensor_imu_t packet;
    packet.timems = timems;
    mav_array_memcpy(packet.gyro, gyro, sizeof(float)*3);
    mav_array_memcpy(packet.acc, acc, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_CRC);
}

/**
 * @brief Pack a ascl_telemetry_sensor_imu message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timems [ms] FC time in ms
 * @param gyro [rad/s] Angular rate in rad/s
 * @param acc [m/s] Linear acceleration in m/s2
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_imu_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t timems,const float *gyro,const float *acc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_float_array(buf, 4, gyro, 3);
    _mav_put_float_array(buf, 16, acc, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_LEN);
#else
    mavlink_ascl_telemetry_sensor_imu_t packet;
    packet.timems = timems;
    mav_array_memcpy(packet.gyro, gyro, sizeof(float)*3);
    mav_array_memcpy(packet.acc, acc, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_CRC);
}

/**
 * @brief Encode a ascl_telemetry_sensor_imu struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ascl_telemetry_sensor_imu C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_imu_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ascl_telemetry_sensor_imu_t* ascl_telemetry_sensor_imu)
{
    return mavlink_msg_ascl_telemetry_sensor_imu_pack(system_id, component_id, msg, ascl_telemetry_sensor_imu->timems, ascl_telemetry_sensor_imu->gyro, ascl_telemetry_sensor_imu->acc);
}

/**
 * @brief Encode a ascl_telemetry_sensor_imu struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ascl_telemetry_sensor_imu C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_imu_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ascl_telemetry_sensor_imu_t* ascl_telemetry_sensor_imu)
{
    return mavlink_msg_ascl_telemetry_sensor_imu_pack_chan(system_id, component_id, chan, msg, ascl_telemetry_sensor_imu->timems, ascl_telemetry_sensor_imu->gyro, ascl_telemetry_sensor_imu->acc);
}

/**
 * @brief Send a ascl_telemetry_sensor_imu message
 * @param chan MAVLink channel to send the message
 *
 * @param timems [ms] FC time in ms
 * @param gyro [rad/s] Angular rate in rad/s
 * @param acc [m/s] Linear acceleration in m/s2
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ascl_telemetry_sensor_imu_send(mavlink_channel_t chan, uint32_t timems, const float *gyro, const float *acc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_float_array(buf, 4, gyro, 3);
    _mav_put_float_array(buf, 16, acc, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU, buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_CRC);
#else
    mavlink_ascl_telemetry_sensor_imu_t packet;
    packet.timems = timems;
    mav_array_memcpy(packet.gyro, gyro, sizeof(float)*3);
    mav_array_memcpy(packet.acc, acc, sizeof(float)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU, (const char *)&packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_CRC);
#endif
}

/**
 * @brief Send a ascl_telemetry_sensor_imu message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ascl_telemetry_sensor_imu_send_struct(mavlink_channel_t chan, const mavlink_ascl_telemetry_sensor_imu_t* ascl_telemetry_sensor_imu)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ascl_telemetry_sensor_imu_send(chan, ascl_telemetry_sensor_imu->timems, ascl_telemetry_sensor_imu->gyro, ascl_telemetry_sensor_imu->acc);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU, (const char *)ascl_telemetry_sensor_imu, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_CRC);
#endif
}

#if MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ascl_telemetry_sensor_imu_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t timems, const float *gyro, const float *acc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_float_array(buf, 4, gyro, 3);
    _mav_put_float_array(buf, 16, acc, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU, buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_CRC);
#else
    mavlink_ascl_telemetry_sensor_imu_t *packet = (mavlink_ascl_telemetry_sensor_imu_t *)msgbuf;
    packet->timems = timems;
    mav_array_memcpy(packet->gyro, gyro, sizeof(float)*3);
    mav_array_memcpy(packet->acc, acc, sizeof(float)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU, (const char *)packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_CRC);
#endif
}
#endif

#endif

// MESSAGE ASCL_TELEMETRY_SENSOR_IMU UNPACKING


/**
 * @brief Get field timems from ascl_telemetry_sensor_imu message
 *
 * @return [ms] FC time in ms
 */
static inline uint32_t mavlink_msg_ascl_telemetry_sensor_imu_get_timems(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field gyro from ascl_telemetry_sensor_imu message
 *
 * @return [rad/s] Angular rate in rad/s
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_imu_get_gyro(const mavlink_message_t* msg, float *gyro)
{
    return _MAV_RETURN_float_array(msg, gyro, 3,  4);
}

/**
 * @brief Get field acc from ascl_telemetry_sensor_imu message
 *
 * @return [m/s] Linear acceleration in m/s2
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_imu_get_acc(const mavlink_message_t* msg, float *acc)
{
    return _MAV_RETURN_float_array(msg, acc, 3,  16);
}

/**
 * @brief Decode a ascl_telemetry_sensor_imu message into a struct
 *
 * @param msg The message to decode
 * @param ascl_telemetry_sensor_imu C-struct to decode the message contents into
 */
static inline void mavlink_msg_ascl_telemetry_sensor_imu_decode(const mavlink_message_t* msg, mavlink_ascl_telemetry_sensor_imu_t* ascl_telemetry_sensor_imu)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ascl_telemetry_sensor_imu->timems = mavlink_msg_ascl_telemetry_sensor_imu_get_timems(msg);
    mavlink_msg_ascl_telemetry_sensor_imu_get_gyro(msg, ascl_telemetry_sensor_imu->gyro);
    mavlink_msg_ascl_telemetry_sensor_imu_get_acc(msg, ascl_telemetry_sensor_imu->acc);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_LEN? msg->len : MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_LEN;
        memset(ascl_telemetry_sensor_imu, 0, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_LEN);
    memcpy(ascl_telemetry_sensor_imu, _MAV_PAYLOAD(msg), len);
#endif
}
