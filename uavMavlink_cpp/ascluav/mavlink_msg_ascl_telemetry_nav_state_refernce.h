#pragma once
// MESSAGE ASCL_TELEMETRY_NAV_STATE_REFERNCE PACKING

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE 55300


typedef struct __mavlink_ascl_telemetry_nav_state_refernce_t {
 uint32_t timems; /*< [ms] FC time in ms*/
 float euler[3]; /*< [deg] Euler angle in deg*/
 uint32_t llh[3]; /*< [degE7,mm] latitude/longitude/height in degE7/degE7/mm as integer*/
 float velNed[3]; /*< [m/s] Velocity of a vehicle in NED frame in m/s*/
} mavlink_ascl_telemetry_nav_state_refernce_t;

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_LEN 40
#define MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_MIN_LEN 40
#define MAVLINK_MSG_ID_55300_LEN 40
#define MAVLINK_MSG_ID_55300_MIN_LEN 40

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_CRC 181
#define MAVLINK_MSG_ID_55300_CRC 181

#define MAVLINK_MSG_ASCL_TELEMETRY_NAV_STATE_REFERNCE_FIELD_EULER_LEN 3
#define MAVLINK_MSG_ASCL_TELEMETRY_NAV_STATE_REFERNCE_FIELD_LLH_LEN 3
#define MAVLINK_MSG_ASCL_TELEMETRY_NAV_STATE_REFERNCE_FIELD_VELNED_LEN 3

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_NAV_STATE_REFERNCE { \
    55300, \
    "ASCL_TELEMETRY_NAV_STATE_REFERNCE", \
    4, \
    {  { "timems", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ascl_telemetry_nav_state_refernce_t, timems) }, \
         { "euler", NULL, MAVLINK_TYPE_FLOAT, 3, 4, offsetof(mavlink_ascl_telemetry_nav_state_refernce_t, euler) }, \
         { "llh", NULL, MAVLINK_TYPE_UINT32_T, 3, 16, offsetof(mavlink_ascl_telemetry_nav_state_refernce_t, llh) }, \
         { "velNed", NULL, MAVLINK_TYPE_FLOAT, 3, 28, offsetof(mavlink_ascl_telemetry_nav_state_refernce_t, velNed) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_NAV_STATE_REFERNCE { \
    "ASCL_TELEMETRY_NAV_STATE_REFERNCE", \
    4, \
    {  { "timems", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ascl_telemetry_nav_state_refernce_t, timems) }, \
         { "euler", NULL, MAVLINK_TYPE_FLOAT, 3, 4, offsetof(mavlink_ascl_telemetry_nav_state_refernce_t, euler) }, \
         { "llh", NULL, MAVLINK_TYPE_UINT32_T, 3, 16, offsetof(mavlink_ascl_telemetry_nav_state_refernce_t, llh) }, \
         { "velNed", NULL, MAVLINK_TYPE_FLOAT, 3, 28, offsetof(mavlink_ascl_telemetry_nav_state_refernce_t, velNed) }, \
         } \
}
#endif

/**
 * @brief Pack a ascl_telemetry_nav_state_refernce message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timems [ms] FC time in ms
 * @param euler [deg] Euler angle in deg
 * @param llh [degE7,mm] latitude/longitude/height in degE7/degE7/mm as integer
 * @param velNed [m/s] Velocity of a vehicle in NED frame in m/s
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_refernce_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t timems, const float *euler, const uint32_t *llh, const float *velNed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_float_array(buf, 4, euler, 3);
    _mav_put_uint32_t_array(buf, 16, llh, 3);
    _mav_put_float_array(buf, 28, velNed, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_LEN);
#else
    mavlink_ascl_telemetry_nav_state_refernce_t packet;
    packet.timems = timems;
    mav_array_memcpy(packet.euler, euler, sizeof(float)*3);
    mav_array_memcpy(packet.llh, llh, sizeof(uint32_t)*3);
    mav_array_memcpy(packet.velNed, velNed, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_CRC);
}

/**
 * @brief Pack a ascl_telemetry_nav_state_refernce message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timems [ms] FC time in ms
 * @param euler [deg] Euler angle in deg
 * @param llh [degE7,mm] latitude/longitude/height in degE7/degE7/mm as integer
 * @param velNed [m/s] Velocity of a vehicle in NED frame in m/s
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_refernce_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t timems,const float *euler,const uint32_t *llh,const float *velNed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_float_array(buf, 4, euler, 3);
    _mav_put_uint32_t_array(buf, 16, llh, 3);
    _mav_put_float_array(buf, 28, velNed, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_LEN);
#else
    mavlink_ascl_telemetry_nav_state_refernce_t packet;
    packet.timems = timems;
    mav_array_memcpy(packet.euler, euler, sizeof(float)*3);
    mav_array_memcpy(packet.llh, llh, sizeof(uint32_t)*3);
    mav_array_memcpy(packet.velNed, velNed, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_CRC);
}

/**
 * @brief Encode a ascl_telemetry_nav_state_refernce struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ascl_telemetry_nav_state_refernce C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_refernce_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ascl_telemetry_nav_state_refernce_t* ascl_telemetry_nav_state_refernce)
{
    return mavlink_msg_ascl_telemetry_nav_state_refernce_pack(system_id, component_id, msg, ascl_telemetry_nav_state_refernce->timems, ascl_telemetry_nav_state_refernce->euler, ascl_telemetry_nav_state_refernce->llh, ascl_telemetry_nav_state_refernce->velNed);
}

/**
 * @brief Encode a ascl_telemetry_nav_state_refernce struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ascl_telemetry_nav_state_refernce C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_refernce_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ascl_telemetry_nav_state_refernce_t* ascl_telemetry_nav_state_refernce)
{
    return mavlink_msg_ascl_telemetry_nav_state_refernce_pack_chan(system_id, component_id, chan, msg, ascl_telemetry_nav_state_refernce->timems, ascl_telemetry_nav_state_refernce->euler, ascl_telemetry_nav_state_refernce->llh, ascl_telemetry_nav_state_refernce->velNed);
}

/**
 * @brief Send a ascl_telemetry_nav_state_refernce message
 * @param chan MAVLink channel to send the message
 *
 * @param timems [ms] FC time in ms
 * @param euler [deg] Euler angle in deg
 * @param llh [degE7,mm] latitude/longitude/height in degE7/degE7/mm as integer
 * @param velNed [m/s] Velocity of a vehicle in NED frame in m/s
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ascl_telemetry_nav_state_refernce_send(mavlink_channel_t chan, uint32_t timems, const float *euler, const uint32_t *llh, const float *velNed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_float_array(buf, 4, euler, 3);
    _mav_put_uint32_t_array(buf, 16, llh, 3);
    _mav_put_float_array(buf, 28, velNed, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE, buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_CRC);
#else
    mavlink_ascl_telemetry_nav_state_refernce_t packet;
    packet.timems = timems;
    mav_array_memcpy(packet.euler, euler, sizeof(float)*3);
    mav_array_memcpy(packet.llh, llh, sizeof(uint32_t)*3);
    mav_array_memcpy(packet.velNed, velNed, sizeof(float)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE, (const char *)&packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_CRC);
#endif
}

/**
 * @brief Send a ascl_telemetry_nav_state_refernce message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ascl_telemetry_nav_state_refernce_send_struct(mavlink_channel_t chan, const mavlink_ascl_telemetry_nav_state_refernce_t* ascl_telemetry_nav_state_refernce)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ascl_telemetry_nav_state_refernce_send(chan, ascl_telemetry_nav_state_refernce->timems, ascl_telemetry_nav_state_refernce->euler, ascl_telemetry_nav_state_refernce->llh, ascl_telemetry_nav_state_refernce->velNed);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE, (const char *)ascl_telemetry_nav_state_refernce, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_CRC);
#endif
}

#if MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ascl_telemetry_nav_state_refernce_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t timems, const float *euler, const uint32_t *llh, const float *velNed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_float_array(buf, 4, euler, 3);
    _mav_put_uint32_t_array(buf, 16, llh, 3);
    _mav_put_float_array(buf, 28, velNed, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE, buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_CRC);
#else
    mavlink_ascl_telemetry_nav_state_refernce_t *packet = (mavlink_ascl_telemetry_nav_state_refernce_t *)msgbuf;
    packet->timems = timems;
    mav_array_memcpy(packet->euler, euler, sizeof(float)*3);
    mav_array_memcpy(packet->llh, llh, sizeof(uint32_t)*3);
    mav_array_memcpy(packet->velNed, velNed, sizeof(float)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE, (const char *)packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_CRC);
#endif
}
#endif

#endif

// MESSAGE ASCL_TELEMETRY_NAV_STATE_REFERNCE UNPACKING


/**
 * @brief Get field timems from ascl_telemetry_nav_state_refernce message
 *
 * @return [ms] FC time in ms
 */
static inline uint32_t mavlink_msg_ascl_telemetry_nav_state_refernce_get_timems(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field euler from ascl_telemetry_nav_state_refernce message
 *
 * @return [deg] Euler angle in deg
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_refernce_get_euler(const mavlink_message_t* msg, float *euler)
{
    return _MAV_RETURN_float_array(msg, euler, 3,  4);
}

/**
 * @brief Get field llh from ascl_telemetry_nav_state_refernce message
 *
 * @return [degE7,mm] latitude/longitude/height in degE7/degE7/mm as integer
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_refernce_get_llh(const mavlink_message_t* msg, uint32_t *llh)
{
    return _MAV_RETURN_uint32_t_array(msg, llh, 3,  16);
}

/**
 * @brief Get field velNed from ascl_telemetry_nav_state_refernce message
 *
 * @return [m/s] Velocity of a vehicle in NED frame in m/s
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_refernce_get_velNed(const mavlink_message_t* msg, float *velNed)
{
    return _MAV_RETURN_float_array(msg, velNed, 3,  28);
}

/**
 * @brief Decode a ascl_telemetry_nav_state_refernce message into a struct
 *
 * @param msg The message to decode
 * @param ascl_telemetry_nav_state_refernce C-struct to decode the message contents into
 */
static inline void mavlink_msg_ascl_telemetry_nav_state_refernce_decode(const mavlink_message_t* msg, mavlink_ascl_telemetry_nav_state_refernce_t* ascl_telemetry_nav_state_refernce)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ascl_telemetry_nav_state_refernce->timems = mavlink_msg_ascl_telemetry_nav_state_refernce_get_timems(msg);
    mavlink_msg_ascl_telemetry_nav_state_refernce_get_euler(msg, ascl_telemetry_nav_state_refernce->euler);
    mavlink_msg_ascl_telemetry_nav_state_refernce_get_llh(msg, ascl_telemetry_nav_state_refernce->llh);
    mavlink_msg_ascl_telemetry_nav_state_refernce_get_velNed(msg, ascl_telemetry_nav_state_refernce->velNed);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_LEN? msg->len : MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_LEN;
        memset(ascl_telemetry_nav_state_refernce, 0, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_LEN);
    memcpy(ascl_telemetry_nav_state_refernce, _MAV_PAYLOAD(msg), len);
#endif
}
