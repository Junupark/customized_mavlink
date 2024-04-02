#pragma once
// MESSAGE ASCL_TELEMETRY_SENSOR_MAG PACKING

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG 53400

MAVPACKED(
typedef struct __mavlink_ascl_telemetry_sensor_mag_t {
 uint32_t timems; /*< [ms] FC time in ms*/
 float mag[3]; /*<  Magnetic field in body frame in gauss*/
}) mavlink_ascl_telemetry_sensor_mag_t;

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_LEN 16
#define MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_MIN_LEN 16
#define MAVLINK_MSG_ID_53400_LEN 16
#define MAVLINK_MSG_ID_53400_MIN_LEN 16

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_CRC 122
#define MAVLINK_MSG_ID_53400_CRC 122

#define MAVLINK_MSG_ASCL_TELEMETRY_SENSOR_MAG_FIELD_MAG_LEN 3

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_SENSOR_MAG { \
    53400, \
    "ASCL_TELEMETRY_SENSOR_MAG", \
    2, \
    {  { "timems", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ascl_telemetry_sensor_mag_t, timems) }, \
         { "mag", NULL, MAVLINK_TYPE_FLOAT, 3, 4, offsetof(mavlink_ascl_telemetry_sensor_mag_t, mag) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_SENSOR_MAG { \
    "ASCL_TELEMETRY_SENSOR_MAG", \
    2, \
    {  { "timems", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ascl_telemetry_sensor_mag_t, timems) }, \
         { "mag", NULL, MAVLINK_TYPE_FLOAT, 3, 4, offsetof(mavlink_ascl_telemetry_sensor_mag_t, mag) }, \
         } \
}
#endif

/**
 * @brief Pack a ascl_telemetry_sensor_mag message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timems [ms] FC time in ms
 * @param mag  Magnetic field in body frame in gauss
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_mag_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t timems, const float *mag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_float_array(buf, 4, mag, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_LEN);
#else
    mavlink_ascl_telemetry_sensor_mag_t packet;
    packet.timems = timems;
    mav_array_memcpy(packet.mag, mag, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_CRC);
}

/**
 * @brief Pack a ascl_telemetry_sensor_mag message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timems [ms] FC time in ms
 * @param mag  Magnetic field in body frame in gauss
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_mag_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t timems,const float *mag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_float_array(buf, 4, mag, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_LEN);
#else
    mavlink_ascl_telemetry_sensor_mag_t packet;
    packet.timems = timems;
    mav_array_memcpy(packet.mag, mag, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_CRC);
}

/**
 * @brief Encode a ascl_telemetry_sensor_mag struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ascl_telemetry_sensor_mag C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_mag_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ascl_telemetry_sensor_mag_t* ascl_telemetry_sensor_mag)
{
    return mavlink_msg_ascl_telemetry_sensor_mag_pack(system_id, component_id, msg, ascl_telemetry_sensor_mag->timems, ascl_telemetry_sensor_mag->mag);
}

/**
 * @brief Encode a ascl_telemetry_sensor_mag struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ascl_telemetry_sensor_mag C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_mag_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ascl_telemetry_sensor_mag_t* ascl_telemetry_sensor_mag)
{
    return mavlink_msg_ascl_telemetry_sensor_mag_pack_chan(system_id, component_id, chan, msg, ascl_telemetry_sensor_mag->timems, ascl_telemetry_sensor_mag->mag);
}

/**
 * @brief Send a ascl_telemetry_sensor_mag message
 * @param chan MAVLink channel to send the message
 *
 * @param timems [ms] FC time in ms
 * @param mag  Magnetic field in body frame in gauss
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ascl_telemetry_sensor_mag_send(mavlink_channel_t chan, uint32_t timems, const float *mag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_float_array(buf, 4, mag, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG, buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_CRC);
#else
    mavlink_ascl_telemetry_sensor_mag_t packet;
    packet.timems = timems;
    mav_array_memcpy(packet.mag, mag, sizeof(float)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG, (const char *)&packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_CRC);
#endif
}

/**
 * @brief Send a ascl_telemetry_sensor_mag message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ascl_telemetry_sensor_mag_send_struct(mavlink_channel_t chan, const mavlink_ascl_telemetry_sensor_mag_t* ascl_telemetry_sensor_mag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ascl_telemetry_sensor_mag_send(chan, ascl_telemetry_sensor_mag->timems, ascl_telemetry_sensor_mag->mag);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG, (const char *)ascl_telemetry_sensor_mag, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_CRC);
#endif
}

#if MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ascl_telemetry_sensor_mag_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t timems, const float *mag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_float_array(buf, 4, mag, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG, buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_CRC);
#else
    mavlink_ascl_telemetry_sensor_mag_t *packet = (mavlink_ascl_telemetry_sensor_mag_t *)msgbuf;
    packet->timems = timems;
    mav_array_memcpy(packet->mag, mag, sizeof(float)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG, (const char *)packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_CRC);
#endif
}
#endif

#endif

// MESSAGE ASCL_TELEMETRY_SENSOR_MAG UNPACKING


/**
 * @brief Get field timems from ascl_telemetry_sensor_mag message
 *
 * @return [ms] FC time in ms
 */
static inline uint32_t mavlink_msg_ascl_telemetry_sensor_mag_get_timems(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field mag from ascl_telemetry_sensor_mag message
 *
 * @return  Magnetic field in body frame in gauss
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_mag_get_mag(const mavlink_message_t* msg, float *mag)
{
    return _MAV_RETURN_float_array(msg, mag, 3,  4);
}

/**
 * @brief Decode a ascl_telemetry_sensor_mag message into a struct
 *
 * @param msg The message to decode
 * @param ascl_telemetry_sensor_mag C-struct to decode the message contents into
 */
static inline void mavlink_msg_ascl_telemetry_sensor_mag_decode(const mavlink_message_t* msg, mavlink_ascl_telemetry_sensor_mag_t* ascl_telemetry_sensor_mag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ascl_telemetry_sensor_mag->timems = mavlink_msg_ascl_telemetry_sensor_mag_get_timems(msg);
    mavlink_msg_ascl_telemetry_sensor_mag_get_mag(msg, ascl_telemetry_sensor_mag->mag);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_LEN? msg->len : MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_LEN;
        memset(ascl_telemetry_sensor_mag, 0, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_LEN);
    memcpy(ascl_telemetry_sensor_mag, _MAV_PAYLOAD(msg), len);
#endif
}
