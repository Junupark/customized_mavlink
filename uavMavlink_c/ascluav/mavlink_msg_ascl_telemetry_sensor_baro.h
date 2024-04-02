#pragma once
// MESSAGE ASCL_TELEMETRY_SENSOR_BARO PACKING

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO 53403

MAVPACKED(
typedef struct __mavlink_ascl_telemetry_sensor_baro_t {
 uint32_t timems; /*< [ms] FC time in ms*/
 float pressure; /*< [bar] Atmospheric pressure in bar*/
 float temperature; /*< [degC] Ambient temperature in degree celsius*/
 uint32_t alt; /*< [mm] Barometric altitude in mm as integer*/
}) mavlink_ascl_telemetry_sensor_baro_t;

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_LEN 16
#define MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_MIN_LEN 16
#define MAVLINK_MSG_ID_53403_LEN 16
#define MAVLINK_MSG_ID_53403_MIN_LEN 16

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_CRC 193
#define MAVLINK_MSG_ID_53403_CRC 193



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_SENSOR_BARO { \
    53403, \
    "ASCL_TELEMETRY_SENSOR_BARO", \
    4, \
    {  { "timems", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ascl_telemetry_sensor_baro_t, timems) }, \
         { "pressure", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ascl_telemetry_sensor_baro_t, pressure) }, \
         { "temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ascl_telemetry_sensor_baro_t, temperature) }, \
         { "alt", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_ascl_telemetry_sensor_baro_t, alt) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_SENSOR_BARO { \
    "ASCL_TELEMETRY_SENSOR_BARO", \
    4, \
    {  { "timems", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ascl_telemetry_sensor_baro_t, timems) }, \
         { "pressure", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ascl_telemetry_sensor_baro_t, pressure) }, \
         { "temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ascl_telemetry_sensor_baro_t, temperature) }, \
         { "alt", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_ascl_telemetry_sensor_baro_t, alt) }, \
         } \
}
#endif

/**
 * @brief Pack a ascl_telemetry_sensor_baro message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timems [ms] FC time in ms
 * @param pressure [bar] Atmospheric pressure in bar
 * @param temperature [degC] Ambient temperature in degree celsius
 * @param alt [mm] Barometric altitude in mm as integer
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_baro_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t timems, float pressure, float temperature, uint32_t alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_float(buf, 4, pressure);
    _mav_put_float(buf, 8, temperature);
    _mav_put_uint32_t(buf, 12, alt);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_LEN);
#else
    mavlink_ascl_telemetry_sensor_baro_t packet;
    packet.timems = timems;
    packet.pressure = pressure;
    packet.temperature = temperature;
    packet.alt = alt;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_CRC);
}

/**
 * @brief Pack a ascl_telemetry_sensor_baro message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timems [ms] FC time in ms
 * @param pressure [bar] Atmospheric pressure in bar
 * @param temperature [degC] Ambient temperature in degree celsius
 * @param alt [mm] Barometric altitude in mm as integer
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_baro_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t timems,float pressure,float temperature,uint32_t alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_float(buf, 4, pressure);
    _mav_put_float(buf, 8, temperature);
    _mav_put_uint32_t(buf, 12, alt);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_LEN);
#else
    mavlink_ascl_telemetry_sensor_baro_t packet;
    packet.timems = timems;
    packet.pressure = pressure;
    packet.temperature = temperature;
    packet.alt = alt;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_CRC);
}

/**
 * @brief Encode a ascl_telemetry_sensor_baro struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ascl_telemetry_sensor_baro C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_baro_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ascl_telemetry_sensor_baro_t* ascl_telemetry_sensor_baro)
{
    return mavlink_msg_ascl_telemetry_sensor_baro_pack(system_id, component_id, msg, ascl_telemetry_sensor_baro->timems, ascl_telemetry_sensor_baro->pressure, ascl_telemetry_sensor_baro->temperature, ascl_telemetry_sensor_baro->alt);
}

/**
 * @brief Encode a ascl_telemetry_sensor_baro struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ascl_telemetry_sensor_baro C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_baro_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ascl_telemetry_sensor_baro_t* ascl_telemetry_sensor_baro)
{
    return mavlink_msg_ascl_telemetry_sensor_baro_pack_chan(system_id, component_id, chan, msg, ascl_telemetry_sensor_baro->timems, ascl_telemetry_sensor_baro->pressure, ascl_telemetry_sensor_baro->temperature, ascl_telemetry_sensor_baro->alt);
}

/**
 * @brief Send a ascl_telemetry_sensor_baro message
 * @param chan MAVLink channel to send the message
 *
 * @param timems [ms] FC time in ms
 * @param pressure [bar] Atmospheric pressure in bar
 * @param temperature [degC] Ambient temperature in degree celsius
 * @param alt [mm] Barometric altitude in mm as integer
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ascl_telemetry_sensor_baro_send(mavlink_channel_t chan, uint32_t timems, float pressure, float temperature, uint32_t alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_float(buf, 4, pressure);
    _mav_put_float(buf, 8, temperature);
    _mav_put_uint32_t(buf, 12, alt);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO, buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_CRC);
#else
    mavlink_ascl_telemetry_sensor_baro_t packet;
    packet.timems = timems;
    packet.pressure = pressure;
    packet.temperature = temperature;
    packet.alt = alt;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO, (const char *)&packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_CRC);
#endif
}

/**
 * @brief Send a ascl_telemetry_sensor_baro message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ascl_telemetry_sensor_baro_send_struct(mavlink_channel_t chan, const mavlink_ascl_telemetry_sensor_baro_t* ascl_telemetry_sensor_baro)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ascl_telemetry_sensor_baro_send(chan, ascl_telemetry_sensor_baro->timems, ascl_telemetry_sensor_baro->pressure, ascl_telemetry_sensor_baro->temperature, ascl_telemetry_sensor_baro->alt);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO, (const char *)ascl_telemetry_sensor_baro, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_CRC);
#endif
}

#if MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ascl_telemetry_sensor_baro_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t timems, float pressure, float temperature, uint32_t alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_float(buf, 4, pressure);
    _mav_put_float(buf, 8, temperature);
    _mav_put_uint32_t(buf, 12, alt);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO, buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_CRC);
#else
    mavlink_ascl_telemetry_sensor_baro_t *packet = (mavlink_ascl_telemetry_sensor_baro_t *)msgbuf;
    packet->timems = timems;
    packet->pressure = pressure;
    packet->temperature = temperature;
    packet->alt = alt;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO, (const char *)packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_CRC);
#endif
}
#endif

#endif

// MESSAGE ASCL_TELEMETRY_SENSOR_BARO UNPACKING


/**
 * @brief Get field timems from ascl_telemetry_sensor_baro message
 *
 * @return [ms] FC time in ms
 */
static inline uint32_t mavlink_msg_ascl_telemetry_sensor_baro_get_timems(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field pressure from ascl_telemetry_sensor_baro message
 *
 * @return [bar] Atmospheric pressure in bar
 */
static inline float mavlink_msg_ascl_telemetry_sensor_baro_get_pressure(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field temperature from ascl_telemetry_sensor_baro message
 *
 * @return [degC] Ambient temperature in degree celsius
 */
static inline float mavlink_msg_ascl_telemetry_sensor_baro_get_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field alt from ascl_telemetry_sensor_baro message
 *
 * @return [mm] Barometric altitude in mm as integer
 */
static inline uint32_t mavlink_msg_ascl_telemetry_sensor_baro_get_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  12);
}

/**
 * @brief Decode a ascl_telemetry_sensor_baro message into a struct
 *
 * @param msg The message to decode
 * @param ascl_telemetry_sensor_baro C-struct to decode the message contents into
 */
static inline void mavlink_msg_ascl_telemetry_sensor_baro_decode(const mavlink_message_t* msg, mavlink_ascl_telemetry_sensor_baro_t* ascl_telemetry_sensor_baro)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ascl_telemetry_sensor_baro->timems = mavlink_msg_ascl_telemetry_sensor_baro_get_timems(msg);
    ascl_telemetry_sensor_baro->pressure = mavlink_msg_ascl_telemetry_sensor_baro_get_pressure(msg);
    ascl_telemetry_sensor_baro->temperature = mavlink_msg_ascl_telemetry_sensor_baro_get_temperature(msg);
    ascl_telemetry_sensor_baro->alt = mavlink_msg_ascl_telemetry_sensor_baro_get_alt(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_LEN? msg->len : MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_LEN;
        memset(ascl_telemetry_sensor_baro, 0, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_LEN);
    memcpy(ascl_telemetry_sensor_baro, _MAV_PAYLOAD(msg), len);
#endif
}
