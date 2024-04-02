#pragma once
// MESSAGE ASCL_TELEMETRY_HOME PACKING

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME 55301

MAVPACKED(
typedef struct __mavlink_ascl_telemetry_home_t {
 uint32_t timems; /*< [ms] FC time in ms*/
 uint32_t lat; /*< [degE7] Latitude in deg* 10^7 as integer*/
 uint32_t lon; /*< [degE7] Longitude in deg* 10^7 as integer*/
 uint32_t height; /*< [mm] Height in mm as integer*/
 uint8_t state; /*<  Home set state. Altitude only, 3D set*/
}) mavlink_ascl_telemetry_home_t;

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_LEN 17
#define MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_MIN_LEN 17
#define MAVLINK_MSG_ID_55301_LEN 17
#define MAVLINK_MSG_ID_55301_MIN_LEN 17

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_CRC 128
#define MAVLINK_MSG_ID_55301_CRC 128



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_HOME { \
    55301, \
    "ASCL_TELEMETRY_HOME", \
    5, \
    {  { "timems", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ascl_telemetry_home_t, timems) }, \
         { "lat", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_ascl_telemetry_home_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_ascl_telemetry_home_t, lon) }, \
         { "height", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_ascl_telemetry_home_t, height) }, \
         { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_ascl_telemetry_home_t, state) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_HOME { \
    "ASCL_TELEMETRY_HOME", \
    5, \
    {  { "timems", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ascl_telemetry_home_t, timems) }, \
         { "lat", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_ascl_telemetry_home_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_ascl_telemetry_home_t, lon) }, \
         { "height", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_ascl_telemetry_home_t, height) }, \
         { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_ascl_telemetry_home_t, state) }, \
         } \
}
#endif

/**
 * @brief Pack a ascl_telemetry_home message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timems [ms] FC time in ms
 * @param lat [degE7] Latitude in deg* 10^7 as integer
 * @param lon [degE7] Longitude in deg* 10^7 as integer
 * @param height [mm] Height in mm as integer
 * @param state  Home set state. Altitude only, 3D set
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_telemetry_home_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t timems, uint32_t lat, uint32_t lon, uint32_t height, uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_uint32_t(buf, 4, lat);
    _mav_put_uint32_t(buf, 8, lon);
    _mav_put_uint32_t(buf, 12, height);
    _mav_put_uint8_t(buf, 16, state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_LEN);
#else
    mavlink_ascl_telemetry_home_t packet;
    packet.timems = timems;
    packet.lat = lat;
    packet.lon = lon;
    packet.height = height;
    packet.state = state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_CRC);
}

/**
 * @brief Pack a ascl_telemetry_home message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timems [ms] FC time in ms
 * @param lat [degE7] Latitude in deg* 10^7 as integer
 * @param lon [degE7] Longitude in deg* 10^7 as integer
 * @param height [mm] Height in mm as integer
 * @param state  Home set state. Altitude only, 3D set
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_telemetry_home_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t timems,uint32_t lat,uint32_t lon,uint32_t height,uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_uint32_t(buf, 4, lat);
    _mav_put_uint32_t(buf, 8, lon);
    _mav_put_uint32_t(buf, 12, height);
    _mav_put_uint8_t(buf, 16, state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_LEN);
#else
    mavlink_ascl_telemetry_home_t packet;
    packet.timems = timems;
    packet.lat = lat;
    packet.lon = lon;
    packet.height = height;
    packet.state = state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_CRC);
}

/**
 * @brief Encode a ascl_telemetry_home struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ascl_telemetry_home C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_telemetry_home_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ascl_telemetry_home_t* ascl_telemetry_home)
{
    return mavlink_msg_ascl_telemetry_home_pack(system_id, component_id, msg, ascl_telemetry_home->timems, ascl_telemetry_home->lat, ascl_telemetry_home->lon, ascl_telemetry_home->height, ascl_telemetry_home->state);
}

/**
 * @brief Encode a ascl_telemetry_home struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ascl_telemetry_home C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_telemetry_home_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ascl_telemetry_home_t* ascl_telemetry_home)
{
    return mavlink_msg_ascl_telemetry_home_pack_chan(system_id, component_id, chan, msg, ascl_telemetry_home->timems, ascl_telemetry_home->lat, ascl_telemetry_home->lon, ascl_telemetry_home->height, ascl_telemetry_home->state);
}

/**
 * @brief Send a ascl_telemetry_home message
 * @param chan MAVLink channel to send the message
 *
 * @param timems [ms] FC time in ms
 * @param lat [degE7] Latitude in deg* 10^7 as integer
 * @param lon [degE7] Longitude in deg* 10^7 as integer
 * @param height [mm] Height in mm as integer
 * @param state  Home set state. Altitude only, 3D set
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ascl_telemetry_home_send(mavlink_channel_t chan, uint32_t timems, uint32_t lat, uint32_t lon, uint32_t height, uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_uint32_t(buf, 4, lat);
    _mav_put_uint32_t(buf, 8, lon);
    _mav_put_uint32_t(buf, 12, height);
    _mav_put_uint8_t(buf, 16, state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME, buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_CRC);
#else
    mavlink_ascl_telemetry_home_t packet;
    packet.timems = timems;
    packet.lat = lat;
    packet.lon = lon;
    packet.height = height;
    packet.state = state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME, (const char *)&packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_CRC);
#endif
}

/**
 * @brief Send a ascl_telemetry_home message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ascl_telemetry_home_send_struct(mavlink_channel_t chan, const mavlink_ascl_telemetry_home_t* ascl_telemetry_home)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ascl_telemetry_home_send(chan, ascl_telemetry_home->timems, ascl_telemetry_home->lat, ascl_telemetry_home->lon, ascl_telemetry_home->height, ascl_telemetry_home->state);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME, (const char *)ascl_telemetry_home, MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_CRC);
#endif
}

#if MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ascl_telemetry_home_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t timems, uint32_t lat, uint32_t lon, uint32_t height, uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_uint32_t(buf, 4, lat);
    _mav_put_uint32_t(buf, 8, lon);
    _mav_put_uint32_t(buf, 12, height);
    _mav_put_uint8_t(buf, 16, state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME, buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_CRC);
#else
    mavlink_ascl_telemetry_home_t *packet = (mavlink_ascl_telemetry_home_t *)msgbuf;
    packet->timems = timems;
    packet->lat = lat;
    packet->lon = lon;
    packet->height = height;
    packet->state = state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME, (const char *)packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_CRC);
#endif
}
#endif

#endif

// MESSAGE ASCL_TELEMETRY_HOME UNPACKING


/**
 * @brief Get field timems from ascl_telemetry_home message
 *
 * @return [ms] FC time in ms
 */
static inline uint32_t mavlink_msg_ascl_telemetry_home_get_timems(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field lat from ascl_telemetry_home message
 *
 * @return [degE7] Latitude in deg* 10^7 as integer
 */
static inline uint32_t mavlink_msg_ascl_telemetry_home_get_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field lon from ascl_telemetry_home message
 *
 * @return [degE7] Longitude in deg* 10^7 as integer
 */
static inline uint32_t mavlink_msg_ascl_telemetry_home_get_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field height from ascl_telemetry_home message
 *
 * @return [mm] Height in mm as integer
 */
static inline uint32_t mavlink_msg_ascl_telemetry_home_get_height(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  12);
}

/**
 * @brief Get field state from ascl_telemetry_home message
 *
 * @return  Home set state. Altitude only, 3D set
 */
static inline uint8_t mavlink_msg_ascl_telemetry_home_get_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Decode a ascl_telemetry_home message into a struct
 *
 * @param msg The message to decode
 * @param ascl_telemetry_home C-struct to decode the message contents into
 */
static inline void mavlink_msg_ascl_telemetry_home_decode(const mavlink_message_t* msg, mavlink_ascl_telemetry_home_t* ascl_telemetry_home)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ascl_telemetry_home->timems = mavlink_msg_ascl_telemetry_home_get_timems(msg);
    ascl_telemetry_home->lat = mavlink_msg_ascl_telemetry_home_get_lat(msg);
    ascl_telemetry_home->lon = mavlink_msg_ascl_telemetry_home_get_lon(msg);
    ascl_telemetry_home->height = mavlink_msg_ascl_telemetry_home_get_height(msg);
    ascl_telemetry_home->state = mavlink_msg_ascl_telemetry_home_get_state(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_LEN? msg->len : MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_LEN;
        memset(ascl_telemetry_home, 0, MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_LEN);
    memcpy(ascl_telemetry_home, _MAV_PAYLOAD(msg), len);
#endif
}
