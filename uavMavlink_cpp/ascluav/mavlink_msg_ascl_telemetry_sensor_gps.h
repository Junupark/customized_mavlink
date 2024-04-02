#pragma once
// MESSAGE ASCL_TELEMETRY_SENSOR_GPS PACKING

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS 55402


typedef struct __mavlink_ascl_telemetry_sensor_gps_t {
 uint32_t timems; /*< [ms] FC time in ms*/
 uint32_t lat; /*< [degE7] Latitude in deg* 10^7 as integer*/
 uint32_t lon; /*< [degE7] Longitude in deg* 10^7 as integer*/
 uint32_t height; /*< [mm] Height in mm as integer*/
 uint32_t velNed[3]; /*< [mm/s] Velocity of a vehicle in NED frame in mm/s as integer*/
 uint8_t numSats; /*<  Number of valid satellites*/
 uint8_t fixType; /*<  GPS Position fix type. 2D fix, 3D fix, etc.*/
} mavlink_ascl_telemetry_sensor_gps_t;

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_LEN 30
#define MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_MIN_LEN 30
#define MAVLINK_MSG_ID_55402_LEN 30
#define MAVLINK_MSG_ID_55402_MIN_LEN 30

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_CRC 249
#define MAVLINK_MSG_ID_55402_CRC 249

#define MAVLINK_MSG_ASCL_TELEMETRY_SENSOR_GPS_FIELD_VELNED_LEN 3

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_SENSOR_GPS { \
    55402, \
    "ASCL_TELEMETRY_SENSOR_GPS", \
    7, \
    {  { "timems", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ascl_telemetry_sensor_gps_t, timems) }, \
         { "lat", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_ascl_telemetry_sensor_gps_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_ascl_telemetry_sensor_gps_t, lon) }, \
         { "height", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_ascl_telemetry_sensor_gps_t, height) }, \
         { "velNed", NULL, MAVLINK_TYPE_UINT32_T, 3, 16, offsetof(mavlink_ascl_telemetry_sensor_gps_t, velNed) }, \
         { "numSats", NULL, MAVLINK_TYPE_UINT8_T, 0, 28, offsetof(mavlink_ascl_telemetry_sensor_gps_t, numSats) }, \
         { "fixType", NULL, MAVLINK_TYPE_UINT8_T, 0, 29, offsetof(mavlink_ascl_telemetry_sensor_gps_t, fixType) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_SENSOR_GPS { \
    "ASCL_TELEMETRY_SENSOR_GPS", \
    7, \
    {  { "timems", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ascl_telemetry_sensor_gps_t, timems) }, \
         { "lat", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_ascl_telemetry_sensor_gps_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_ascl_telemetry_sensor_gps_t, lon) }, \
         { "height", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_ascl_telemetry_sensor_gps_t, height) }, \
         { "velNed", NULL, MAVLINK_TYPE_UINT32_T, 3, 16, offsetof(mavlink_ascl_telemetry_sensor_gps_t, velNed) }, \
         { "numSats", NULL, MAVLINK_TYPE_UINT8_T, 0, 28, offsetof(mavlink_ascl_telemetry_sensor_gps_t, numSats) }, \
         { "fixType", NULL, MAVLINK_TYPE_UINT8_T, 0, 29, offsetof(mavlink_ascl_telemetry_sensor_gps_t, fixType) }, \
         } \
}
#endif

/**
 * @brief Pack a ascl_telemetry_sensor_gps message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timems [ms] FC time in ms
 * @param lat [degE7] Latitude in deg* 10^7 as integer
 * @param lon [degE7] Longitude in deg* 10^7 as integer
 * @param height [mm] Height in mm as integer
 * @param velNed [mm/s] Velocity of a vehicle in NED frame in mm/s as integer
 * @param numSats  Number of valid satellites
 * @param fixType  GPS Position fix type. 2D fix, 3D fix, etc.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_gps_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t timems, uint32_t lat, uint32_t lon, uint32_t height, const uint32_t *velNed, uint8_t numSats, uint8_t fixType)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_uint32_t(buf, 4, lat);
    _mav_put_uint32_t(buf, 8, lon);
    _mav_put_uint32_t(buf, 12, height);
    _mav_put_uint8_t(buf, 28, numSats);
    _mav_put_uint8_t(buf, 29, fixType);
    _mav_put_uint32_t_array(buf, 16, velNed, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_LEN);
#else
    mavlink_ascl_telemetry_sensor_gps_t packet;
    packet.timems = timems;
    packet.lat = lat;
    packet.lon = lon;
    packet.height = height;
    packet.numSats = numSats;
    packet.fixType = fixType;
    mav_array_memcpy(packet.velNed, velNed, sizeof(uint32_t)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_CRC);
}

/**
 * @brief Pack a ascl_telemetry_sensor_gps message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timems [ms] FC time in ms
 * @param lat [degE7] Latitude in deg* 10^7 as integer
 * @param lon [degE7] Longitude in deg* 10^7 as integer
 * @param height [mm] Height in mm as integer
 * @param velNed [mm/s] Velocity of a vehicle in NED frame in mm/s as integer
 * @param numSats  Number of valid satellites
 * @param fixType  GPS Position fix type. 2D fix, 3D fix, etc.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_gps_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t timems,uint32_t lat,uint32_t lon,uint32_t height,const uint32_t *velNed,uint8_t numSats,uint8_t fixType)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_uint32_t(buf, 4, lat);
    _mav_put_uint32_t(buf, 8, lon);
    _mav_put_uint32_t(buf, 12, height);
    _mav_put_uint8_t(buf, 28, numSats);
    _mav_put_uint8_t(buf, 29, fixType);
    _mav_put_uint32_t_array(buf, 16, velNed, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_LEN);
#else
    mavlink_ascl_telemetry_sensor_gps_t packet;
    packet.timems = timems;
    packet.lat = lat;
    packet.lon = lon;
    packet.height = height;
    packet.numSats = numSats;
    packet.fixType = fixType;
    mav_array_memcpy(packet.velNed, velNed, sizeof(uint32_t)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_CRC);
}

/**
 * @brief Encode a ascl_telemetry_sensor_gps struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ascl_telemetry_sensor_gps C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_gps_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ascl_telemetry_sensor_gps_t* ascl_telemetry_sensor_gps)
{
    return mavlink_msg_ascl_telemetry_sensor_gps_pack(system_id, component_id, msg, ascl_telemetry_sensor_gps->timems, ascl_telemetry_sensor_gps->lat, ascl_telemetry_sensor_gps->lon, ascl_telemetry_sensor_gps->height, ascl_telemetry_sensor_gps->velNed, ascl_telemetry_sensor_gps->numSats, ascl_telemetry_sensor_gps->fixType);
}

/**
 * @brief Encode a ascl_telemetry_sensor_gps struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ascl_telemetry_sensor_gps C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_gps_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ascl_telemetry_sensor_gps_t* ascl_telemetry_sensor_gps)
{
    return mavlink_msg_ascl_telemetry_sensor_gps_pack_chan(system_id, component_id, chan, msg, ascl_telemetry_sensor_gps->timems, ascl_telemetry_sensor_gps->lat, ascl_telemetry_sensor_gps->lon, ascl_telemetry_sensor_gps->height, ascl_telemetry_sensor_gps->velNed, ascl_telemetry_sensor_gps->numSats, ascl_telemetry_sensor_gps->fixType);
}

/**
 * @brief Send a ascl_telemetry_sensor_gps message
 * @param chan MAVLink channel to send the message
 *
 * @param timems [ms] FC time in ms
 * @param lat [degE7] Latitude in deg* 10^7 as integer
 * @param lon [degE7] Longitude in deg* 10^7 as integer
 * @param height [mm] Height in mm as integer
 * @param velNed [mm/s] Velocity of a vehicle in NED frame in mm/s as integer
 * @param numSats  Number of valid satellites
 * @param fixType  GPS Position fix type. 2D fix, 3D fix, etc.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ascl_telemetry_sensor_gps_send(mavlink_channel_t chan, uint32_t timems, uint32_t lat, uint32_t lon, uint32_t height, const uint32_t *velNed, uint8_t numSats, uint8_t fixType)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_uint32_t(buf, 4, lat);
    _mav_put_uint32_t(buf, 8, lon);
    _mav_put_uint32_t(buf, 12, height);
    _mav_put_uint8_t(buf, 28, numSats);
    _mav_put_uint8_t(buf, 29, fixType);
    _mav_put_uint32_t_array(buf, 16, velNed, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS, buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_CRC);
#else
    mavlink_ascl_telemetry_sensor_gps_t packet;
    packet.timems = timems;
    packet.lat = lat;
    packet.lon = lon;
    packet.height = height;
    packet.numSats = numSats;
    packet.fixType = fixType;
    mav_array_memcpy(packet.velNed, velNed, sizeof(uint32_t)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS, (const char *)&packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_CRC);
#endif
}

/**
 * @brief Send a ascl_telemetry_sensor_gps message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ascl_telemetry_sensor_gps_send_struct(mavlink_channel_t chan, const mavlink_ascl_telemetry_sensor_gps_t* ascl_telemetry_sensor_gps)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ascl_telemetry_sensor_gps_send(chan, ascl_telemetry_sensor_gps->timems, ascl_telemetry_sensor_gps->lat, ascl_telemetry_sensor_gps->lon, ascl_telemetry_sensor_gps->height, ascl_telemetry_sensor_gps->velNed, ascl_telemetry_sensor_gps->numSats, ascl_telemetry_sensor_gps->fixType);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS, (const char *)ascl_telemetry_sensor_gps, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_CRC);
#endif
}

#if MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ascl_telemetry_sensor_gps_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t timems, uint32_t lat, uint32_t lon, uint32_t height, const uint32_t *velNed, uint8_t numSats, uint8_t fixType)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_uint32_t(buf, 4, lat);
    _mav_put_uint32_t(buf, 8, lon);
    _mav_put_uint32_t(buf, 12, height);
    _mav_put_uint8_t(buf, 28, numSats);
    _mav_put_uint8_t(buf, 29, fixType);
    _mav_put_uint32_t_array(buf, 16, velNed, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS, buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_CRC);
#else
    mavlink_ascl_telemetry_sensor_gps_t *packet = (mavlink_ascl_telemetry_sensor_gps_t *)msgbuf;
    packet->timems = timems;
    packet->lat = lat;
    packet->lon = lon;
    packet->height = height;
    packet->numSats = numSats;
    packet->fixType = fixType;
    mav_array_memcpy(packet->velNed, velNed, sizeof(uint32_t)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS, (const char *)packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_CRC);
#endif
}
#endif

#endif

// MESSAGE ASCL_TELEMETRY_SENSOR_GPS UNPACKING


/**
 * @brief Get field timems from ascl_telemetry_sensor_gps message
 *
 * @return [ms] FC time in ms
 */
static inline uint32_t mavlink_msg_ascl_telemetry_sensor_gps_get_timems(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field lat from ascl_telemetry_sensor_gps message
 *
 * @return [degE7] Latitude in deg* 10^7 as integer
 */
static inline uint32_t mavlink_msg_ascl_telemetry_sensor_gps_get_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field lon from ascl_telemetry_sensor_gps message
 *
 * @return [degE7] Longitude in deg* 10^7 as integer
 */
static inline uint32_t mavlink_msg_ascl_telemetry_sensor_gps_get_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field height from ascl_telemetry_sensor_gps message
 *
 * @return [mm] Height in mm as integer
 */
static inline uint32_t mavlink_msg_ascl_telemetry_sensor_gps_get_height(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  12);
}

/**
 * @brief Get field velNed from ascl_telemetry_sensor_gps message
 *
 * @return [mm/s] Velocity of a vehicle in NED frame in mm/s as integer
 */
static inline uint16_t mavlink_msg_ascl_telemetry_sensor_gps_get_velNed(const mavlink_message_t* msg, uint32_t *velNed)
{
    return _MAV_RETURN_uint32_t_array(msg, velNed, 3,  16);
}

/**
 * @brief Get field numSats from ascl_telemetry_sensor_gps message
 *
 * @return  Number of valid satellites
 */
static inline uint8_t mavlink_msg_ascl_telemetry_sensor_gps_get_numSats(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  28);
}

/**
 * @brief Get field fixType from ascl_telemetry_sensor_gps message
 *
 * @return  GPS Position fix type. 2D fix, 3D fix, etc.
 */
static inline uint8_t mavlink_msg_ascl_telemetry_sensor_gps_get_fixType(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  29);
}

/**
 * @brief Decode a ascl_telemetry_sensor_gps message into a struct
 *
 * @param msg The message to decode
 * @param ascl_telemetry_sensor_gps C-struct to decode the message contents into
 */
static inline void mavlink_msg_ascl_telemetry_sensor_gps_decode(const mavlink_message_t* msg, mavlink_ascl_telemetry_sensor_gps_t* ascl_telemetry_sensor_gps)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ascl_telemetry_sensor_gps->timems = mavlink_msg_ascl_telemetry_sensor_gps_get_timems(msg);
    ascl_telemetry_sensor_gps->lat = mavlink_msg_ascl_telemetry_sensor_gps_get_lat(msg);
    ascl_telemetry_sensor_gps->lon = mavlink_msg_ascl_telemetry_sensor_gps_get_lon(msg);
    ascl_telemetry_sensor_gps->height = mavlink_msg_ascl_telemetry_sensor_gps_get_height(msg);
    mavlink_msg_ascl_telemetry_sensor_gps_get_velNed(msg, ascl_telemetry_sensor_gps->velNed);
    ascl_telemetry_sensor_gps->numSats = mavlink_msg_ascl_telemetry_sensor_gps_get_numSats(msg);
    ascl_telemetry_sensor_gps->fixType = mavlink_msg_ascl_telemetry_sensor_gps_get_fixType(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_LEN? msg->len : MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_LEN;
        memset(ascl_telemetry_sensor_gps, 0, MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_LEN);
    memcpy(ascl_telemetry_sensor_gps, _MAV_PAYLOAD(msg), len);
#endif
}
