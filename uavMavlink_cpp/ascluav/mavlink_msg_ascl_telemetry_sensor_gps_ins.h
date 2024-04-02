#pragma once
// MESSAGE ASCL_TELEMETRY_SENSOR_GPS_INS PACKING

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS 55404


typedef struct __mavlink_ascl_telemetry_sensor_gps_ins_t {
 uint32_t timems; /*< [ms] FC time in ms*/
 uint32_t lat; /*< [degE7] Latitude in deg* 10^7 as integer*/
 uint32_t lon; /*< [degE7] Longitude in deg* 10^7 as integer*/
 uint32_t height; /*< [mm] Height in mm as integer*/
 uint32_t velNed[3]; /*< [mm/s] Velocity of a vehicle in NED frame in mm/s as integer*/
 float euler[3]; /*< [deg] Euler angle in deg*/
 float gyro[3]; /*< [rad/s] Angular rate in rad/s*/
 float acc[3]; /*< [m/s] Linear acceleration in m/s2*/
} mavlink_ascl_telemetry_sensor_gps_ins_t;

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_LEN 64
#define MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_MIN_LEN 64
#define MAVLINK_MSG_ID_55404_LEN 64
#define MAVLINK_MSG_ID_55404_MIN_LEN 64

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_CRC 238
#define MAVLINK_MSG_ID_55404_CRC 238

#define MAVLINK_MSG_ASCL_TELEMETRY_SENSOR_GPS_INS_FIELD_VELNED_LEN 3
#define MAVLINK_MSG_ASCL_TELEMETRY_SENSOR_GPS_INS_FIELD_EULER_LEN 3
#define MAVLINK_MSG_ASCL_TELEMETRY_SENSOR_GPS_INS_FIELD_GYRO_LEN 3
#define MAVLINK_MSG_ASCL_TELEMETRY_SENSOR_GPS_INS_FIELD_ACC_LEN 3

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_SENSOR_GPS_INS { \
    55404, \
    "ASCL_TELEMETRY_SENSOR_GPS_INS", \
    8, \
    {  { "timems", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ascl_telemetry_sensor_gps_ins_t, timems) }, \
         { "lat", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_ascl_telemetry_sensor_gps_ins_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_ascl_telemetry_sensor_gps_ins_t, lon) }, \
         { "height", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_ascl_telemetry_sensor_gps_ins_t, height) }, \
         { "velNed", NULL, MAVLINK_TYPE_UINT32_T, 3, 16, offsetof(mavlink_ascl_telemetry_sensor_gps_ins_t, velNed) }, \
         { "euler", NULL, MAVLINK_TYPE_FLOAT, 3, 28, offsetof(mavlink_ascl_telemetry_sensor_gps_ins_t, euler) }, \
         { "gyro", NULL, MAVLINK_TYPE_FLOAT, 3, 40, offsetof(mavlink_ascl_telemetry_sensor_gps_ins_t, gyro) }, \
         { "acc", NULL, MAVLINK_TYPE_FLOAT, 3, 52, offsetof(mavlink_ascl_telemetry_sensor_gps_ins_t, acc) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_SENSOR_GPS_INS { \
    "ASCL_TELEMETRY_SENSOR_GPS_INS", \
    8, \
    {  { "timems", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ascl_telemetry_sensor_gps_ins_t, timems) }, \
         { "lat", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_ascl_telemetry_sensor_gps_ins_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_ascl_telemetry_sensor_gps_ins_t, lon) }, \
         { "height", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_ascl_telemetry_sensor_gps_ins_t, height) }, \
         { "velNed", NULL, MAVLINK_TYPE_UINT32_T, 3, 16, offsetof(mavlink_ascl_telemetry_sensor_gps_ins_t, velNed) }, \
         { "euler", NULL, MAVLINK_TYPE_FLOAT, 3, 28, offsetof(mavlink_ascl_telemetry_sensor_gps_ins_t, euler) }, \
         { "gyro", NULL, MAVLINK_TYPE_FLOAT, 3, 40, offsetof(mavlink_ascl_telemetry_sensor_gps_ins_t, gyro) }, \
         { "acc", NULL, MAVLINK_TYPE_FLOAT, 3, 52, offsetof(mavlink_ascl_telemetry_sensor_gps_ins_t, acc) }, \
         } \
}
#endif

/**
 * @brief Pack a ascl_telemetry_sensor_gps_ins message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timems [ms] FC time in ms
 * @param lat [degE7] Latitude in deg* 10^7 as integer
 * @param lon [degE7] Longitude in deg* 10^7 as integer
 * @param height [mm] Height in mm as integer
 * @param velNed [mm/s] Velocity of a vehicle in NED frame in mm/s as integer
 * @param euler [deg] Euler angle in deg
 * @param gyro [rad/s] Angular rate in rad/s
 * @param acc [m/s] Linear acceleration in m/s2
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_gps_ins_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t timems, uint32_t lat, uint32_t lon, uint32_t height, const uint32_t *velNed, const float *euler, const float *gyro, const float *acc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_uint32_t(buf, 4, lat);
    _mav_put_uint32_t(buf, 8, lon);
    _mav_put_uint32_t(buf, 12, height);
    _mav_put_uint32_t_array(buf, 16, velNed, 3);
    _mav_put_float_array(buf, 28, euler, 3);
    _mav_put_float_array(buf, 40, gyro, 3);
    _mav_put_float_array(buf, 52, acc, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_LEN);
#else
    mavlink_ascl_telemetry_sensor_gps_ins_t packet;
    packet.timems = timems;
    packet.lat = lat;
    packet.lon = lon;
    packet.height = height;
    mav_array_memcpy(packet.velNed, velNed, sizeof(uint32_t)*3);
    mav_array_memcpy(packet.euler, euler, sizeof(float)*3);
    mav_array_memcpy(packet.gyro, gyro, sizeof(float)*3);
    mav_array_memcpy(packet.acc, acc, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_CRC);
}

/**
 * @brief Pack a ascl_telemetry_sensor_gps_ins message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timems [ms] FC time in ms
 * @param lat [degE7] Latitude in deg* 10^7 as integer
 * @param lon [degE7] Longitude in deg* 10^7 as integer
 * @param height [mm] Height in mm as integer
 * @param velNed [mm/s] Velocity of a vehicle in NED frame in mm/s as integer
 * @param euler [deg] Euler angle in deg
 * @param gyro [rad/s] Angular rate in rad/s
 * @param acc [m/s] Linear acceleration in m/s2
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_gps_ins_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t timems,uint32_t lat,uint32_t lon,uint32_t height,const uint32_t *velNed,const float *euler,const float *gyro,const float *acc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_uint32_t(buf, 4, lat);
    _mav_put_uint32_t(buf, 8, lon);
    _mav_put_uint32_t(buf, 12, height);
    _mav_put_uint32_t_array(buf, 16, velNed, 3);
    _mav_put_float_array(buf, 28, euler, 3);
    _mav_put_float_array(buf, 40, gyro, 3);
    _mav_put_float_array(buf, 52, acc, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_LEN);
#else
    mavlink_ascl_telemetry_sensor_gps_ins_t packet;
    packet.timems = timems;
    packet.lat = lat;
    packet.lon = lon;
    packet.height = height;
    mav_array_memcpy(packet.velNed, velNed, sizeof(uint32_t)*3);
    mav_array_memcpy(packet.euler, euler, sizeof(float)*3);
    mav_array_memcpy(packet.gyro, gyro, sizeof(float)*3);
    mav_array_memcpy(packet.acc, acc, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_CRC);
}

/**
 * @brief Encode a ascl_telemetry_sensor_gps_ins struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ascl_telemetry_sensor_gps_ins C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_gps_ins_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ascl_telemetry_sensor_gps_ins_t* ascl_telemetry_sensor_gps_ins)
{
    return mavlink_msg_ascl_telemetry_sensor_gps_ins_pack(system_id, component_id, msg, ascl_telemetry_sensor_gps_ins->timems, ascl_telemetry_sensor_gps_ins->lat, ascl_telemetry_sensor_gps_ins->lon, ascl_telemetry_sensor_gps_ins->height, ascl_telemetry_sensor_gps_ins->velNed, ascl_telemetry_sensor_gps_ins->euler, ascl_telemetry_sensor_gps_ins->gyro, ascl_telemetry_sensor_gps_ins->acc);
}

/**
 * @brief Encode a ascl_telemetry_sensor_gps_ins struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ascl_telemetry_sensor_gps_ins C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_gps_ins_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ascl_telemetry_sensor_gps_ins_t* ascl_telemetry_sensor_gps_ins)
{
    return mavlink_msg_ascl_telemetry_sensor_gps_ins_pack_chan(system_id, component_id, chan, msg, ascl_telemetry_sensor_gps_ins->timems, ascl_telemetry_sensor_gps_ins->lat, ascl_telemetry_sensor_gps_ins->lon, ascl_telemetry_sensor_gps_ins->height, ascl_telemetry_sensor_gps_ins->velNed, ascl_telemetry_sensor_gps_ins->euler, ascl_telemetry_sensor_gps_ins->gyro, ascl_telemetry_sensor_gps_ins->acc);
}

/**
 * @brief Send a ascl_telemetry_sensor_gps_ins message
 * @param chan MAVLink channel to send the message
 *
 * @param timems [ms] FC time in ms
 * @param lat [degE7] Latitude in deg* 10^7 as integer
 * @param lon [degE7] Longitude in deg* 10^7 as integer
 * @param height [mm] Height in mm as integer
 * @param velNed [mm/s] Velocity of a vehicle in NED frame in mm/s as integer
 * @param euler [deg] Euler angle in deg
 * @param gyro [rad/s] Angular rate in rad/s
 * @param acc [m/s] Linear acceleration in m/s2
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ascl_telemetry_sensor_gps_ins_send(mavlink_channel_t chan, uint32_t timems, uint32_t lat, uint32_t lon, uint32_t height, const uint32_t *velNed, const float *euler, const float *gyro, const float *acc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_uint32_t(buf, 4, lat);
    _mav_put_uint32_t(buf, 8, lon);
    _mav_put_uint32_t(buf, 12, height);
    _mav_put_uint32_t_array(buf, 16, velNed, 3);
    _mav_put_float_array(buf, 28, euler, 3);
    _mav_put_float_array(buf, 40, gyro, 3);
    _mav_put_float_array(buf, 52, acc, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS, buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_CRC);
#else
    mavlink_ascl_telemetry_sensor_gps_ins_t packet;
    packet.timems = timems;
    packet.lat = lat;
    packet.lon = lon;
    packet.height = height;
    mav_array_memcpy(packet.velNed, velNed, sizeof(uint32_t)*3);
    mav_array_memcpy(packet.euler, euler, sizeof(float)*3);
    mav_array_memcpy(packet.gyro, gyro, sizeof(float)*3);
    mav_array_memcpy(packet.acc, acc, sizeof(float)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS, (const char *)&packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_CRC);
#endif
}

/**
 * @brief Send a ascl_telemetry_sensor_gps_ins message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ascl_telemetry_sensor_gps_ins_send_struct(mavlink_channel_t chan, const mavlink_ascl_telemetry_sensor_gps_ins_t* ascl_telemetry_sensor_gps_ins)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ascl_telemetry_sensor_gps_ins_send(chan, ascl_telemetry_sensor_gps_ins->timems, ascl_telemetry_sensor_gps_ins->lat, ascl_telemetry_sensor_gps_ins->lon, ascl_telemetry_sensor_gps_ins->height, ascl_telemetry_sensor_gps_ins->velNed, ascl_telemetry_sensor_gps_ins->euler, ascl_telemetry_sensor_gps_ins->gyro, ascl_telemetry_sensor_gps_ins->acc);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS, (const char *)ascl_telemetry_sensor_gps_ins, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_CRC);
#endif
}

#if MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ascl_telemetry_sensor_gps_ins_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t timems, uint32_t lat, uint32_t lon, uint32_t height, const uint32_t *velNed, const float *euler, const float *gyro, const float *acc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_uint32_t(buf, 4, lat);
    _mav_put_uint32_t(buf, 8, lon);
    _mav_put_uint32_t(buf, 12, height);
    _mav_put_uint32_t_array(buf, 16, velNed, 3);
    _mav_put_float_array(buf, 28, euler, 3);
    _mav_put_float_array(buf, 40, gyro, 3);
    _mav_put_float_array(buf, 52, acc, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS, buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_CRC);
#else
    mavlink_ascl_telemetry_sensor_gps_ins_t *packet = (mavlink_ascl_telemetry_sensor_gps_ins_t *)msgbuf;
    packet->timems = timems;
    packet->lat = lat;
    packet->lon = lon;
    packet->height = height;
    mav_array_memcpy(packet->velNed, velNed, sizeof(uint32_t)*3);
    mav_array_memcpy(packet->euler, euler, sizeof(float)*3);
    mav_array_memcpy(packet->gyro, gyro, sizeof(float)*3);
    mav_array_memcpy(packet->acc, acc, sizeof(float)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS, (const char *)packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_CRC);
#endif
}
#endif

#endif

// MESSAGE ASCL_TELEMETRY_SENSOR_GPS_INS UNPACKING


/**
 * @brief Get field timems from ascl_telemetry_sensor_gps_ins message
 *
 * @return [ms] FC time in ms
 */
static inline uint32_t mavlink_msg_ascl_telemetry_sensor_gps_ins_get_timems(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field lat from ascl_telemetry_sensor_gps_ins message
 *
 * @return [degE7] Latitude in deg* 10^7 as integer
 */
static inline uint32_t mavlink_msg_ascl_telemetry_sensor_gps_ins_get_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field lon from ascl_telemetry_sensor_gps_ins message
 *
 * @return [degE7] Longitude in deg* 10^7 as integer
 */
static inline uint32_t mavlink_msg_ascl_telemetry_sensor_gps_ins_get_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field height from ascl_telemetry_sensor_gps_ins message
 *
 * @return [mm] Height in mm as integer
 */
static inline uint32_t mavlink_msg_ascl_telemetry_sensor_gps_ins_get_height(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  12);
}

/**
 * @brief Get field velNed from ascl_telemetry_sensor_gps_ins message
 *
 * @return [mm/s] Velocity of a vehicle in NED frame in mm/s as integer
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_gps_ins_get_velNed(const mavlink_message_t* msg, uint32_t *velNed)
{
    return _MAV_RETURN_uint32_t_array(msg, velNed, 3,  16);
}

/**
 * @brief Get field euler from ascl_telemetry_sensor_gps_ins message
 *
 * @return [deg] Euler angle in deg
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_gps_ins_get_euler(const mavlink_message_t* msg, float *euler)
{
    return _MAV_RETURN_float_array(msg, euler, 3,  28);
}

/**
 * @brief Get field gyro from ascl_telemetry_sensor_gps_ins message
 *
 * @return [rad/s] Angular rate in rad/s
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_gps_ins_get_gyro(const mavlink_message_t* msg, float *gyro)
{
    return _MAV_RETURN_float_array(msg, gyro, 3,  40);
}

/**
 * @brief Get field acc from ascl_telemetry_sensor_gps_ins message
 *
 * @return [m/s] Linear acceleration in m/s2
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_gps_ins_get_acc(const mavlink_message_t* msg, float *acc)
{
    return _MAV_RETURN_float_array(msg, acc, 3,  52);
}

/**
 * @brief Decode a ascl_telemetry_sensor_gps_ins message into a struct
 *
 * @param msg The message to decode
 * @param ascl_telemetry_sensor_gps_ins C-struct to decode the message contents into
 */
static inline void mavlink_msg_ascl_telemetry_sensor_gps_ins_decode(const mavlink_message_t* msg, mavlink_ascl_telemetry_sensor_gps_ins_t* ascl_telemetry_sensor_gps_ins)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ascl_telemetry_sensor_gps_ins->timems = mavlink_msg_ascl_telemetry_sensor_gps_ins_get_timems(msg);
    ascl_telemetry_sensor_gps_ins->lat = mavlink_msg_ascl_telemetry_sensor_gps_ins_get_lat(msg);
    ascl_telemetry_sensor_gps_ins->lon = mavlink_msg_ascl_telemetry_sensor_gps_ins_get_lon(msg);
    ascl_telemetry_sensor_gps_ins->height = mavlink_msg_ascl_telemetry_sensor_gps_ins_get_height(msg);
    mavlink_msg_ascl_telemetry_sensor_gps_ins_get_velNed(msg, ascl_telemetry_sensor_gps_ins->velNed);
    mavlink_msg_ascl_telemetry_sensor_gps_ins_get_euler(msg, ascl_telemetry_sensor_gps_ins->euler);
    mavlink_msg_ascl_telemetry_sensor_gps_ins_get_gyro(msg, ascl_telemetry_sensor_gps_ins->gyro);
    mavlink_msg_ascl_telemetry_sensor_gps_ins_get_acc(msg, ascl_telemetry_sensor_gps_ins->acc);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_LEN? msg->len : MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_LEN;
        memset(ascl_telemetry_sensor_gps_ins, 0, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_LEN);
    memcpy(ascl_telemetry_sensor_gps_ins, _MAV_PAYLOAD(msg), len);
#endif
}
