#pragma once
// MESSAGE ASCL_TELEMETRY_NAV_STATE_ATT PACKING

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT 55298


typedef struct __mavlink_ascl_telemetry_nav_state_att_t {
 uint32_t timems; /*< [ms] FC time in ms*/
 float pqr[3]; /*< [rad/s] Angular rate in rad/s*/
 float euler[3]; /*< [deg] Euler angle in deg*/
 float quat[4]; /*< [none] Quaternion*/
 float covQuat[10]; /*<  Covariance of Quaternion*/
 uint8_t fused; /*<  Flags whether sensor(s) data is fused*/
} mavlink_ascl_telemetry_nav_state_att_t;

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_LEN 85
#define MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_MIN_LEN 85
#define MAVLINK_MSG_ID_55298_LEN 85
#define MAVLINK_MSG_ID_55298_MIN_LEN 85

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_CRC 3
#define MAVLINK_MSG_ID_55298_CRC 3

#define MAVLINK_MSG_ASCL_TELEMETRY_NAV_STATE_ATT_FIELD_PQR_LEN 3
#define MAVLINK_MSG_ASCL_TELEMETRY_NAV_STATE_ATT_FIELD_EULER_LEN 3
#define MAVLINK_MSG_ASCL_TELEMETRY_NAV_STATE_ATT_FIELD_QUAT_LEN 4
#define MAVLINK_MSG_ASCL_TELEMETRY_NAV_STATE_ATT_FIELD_COVQUAT_LEN 10

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_NAV_STATE_ATT { \
    55298, \
    "ASCL_TELEMETRY_NAV_STATE_ATT", \
    6, \
    {  { "timems", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ascl_telemetry_nav_state_att_t, timems) }, \
         { "pqr", NULL, MAVLINK_TYPE_FLOAT, 3, 4, offsetof(mavlink_ascl_telemetry_nav_state_att_t, pqr) }, \
         { "euler", NULL, MAVLINK_TYPE_FLOAT, 3, 16, offsetof(mavlink_ascl_telemetry_nav_state_att_t, euler) }, \
         { "quat", NULL, MAVLINK_TYPE_FLOAT, 4, 28, offsetof(mavlink_ascl_telemetry_nav_state_att_t, quat) }, \
         { "covQuat", NULL, MAVLINK_TYPE_FLOAT, 10, 44, offsetof(mavlink_ascl_telemetry_nav_state_att_t, covQuat) }, \
         { "fused", NULL, MAVLINK_TYPE_UINT8_T, 0, 84, offsetof(mavlink_ascl_telemetry_nav_state_att_t, fused) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_NAV_STATE_ATT { \
    "ASCL_TELEMETRY_NAV_STATE_ATT", \
    6, \
    {  { "timems", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ascl_telemetry_nav_state_att_t, timems) }, \
         { "pqr", NULL, MAVLINK_TYPE_FLOAT, 3, 4, offsetof(mavlink_ascl_telemetry_nav_state_att_t, pqr) }, \
         { "euler", NULL, MAVLINK_TYPE_FLOAT, 3, 16, offsetof(mavlink_ascl_telemetry_nav_state_att_t, euler) }, \
         { "quat", NULL, MAVLINK_TYPE_FLOAT, 4, 28, offsetof(mavlink_ascl_telemetry_nav_state_att_t, quat) }, \
         { "covQuat", NULL, MAVLINK_TYPE_FLOAT, 10, 44, offsetof(mavlink_ascl_telemetry_nav_state_att_t, covQuat) }, \
         { "fused", NULL, MAVLINK_TYPE_UINT8_T, 0, 84, offsetof(mavlink_ascl_telemetry_nav_state_att_t, fused) }, \
         } \
}
#endif

/**
 * @brief Pack a ascl_telemetry_nav_state_att message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timems [ms] FC time in ms
 * @param pqr [rad/s] Angular rate in rad/s
 * @param euler [deg] Euler angle in deg
 * @param quat [none] Quaternion
 * @param covQuat  Covariance of Quaternion
 * @param fused  Flags whether sensor(s) data is fused
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_att_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t timems, const float *pqr, const float *euler, const float *quat, const float *covQuat, uint8_t fused)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_uint8_t(buf, 84, fused);
    _mav_put_float_array(buf, 4, pqr, 3);
    _mav_put_float_array(buf, 16, euler, 3);
    _mav_put_float_array(buf, 28, quat, 4);
    _mav_put_float_array(buf, 44, covQuat, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_LEN);
#else
    mavlink_ascl_telemetry_nav_state_att_t packet;
    packet.timems = timems;
    packet.fused = fused;
    mav_array_memcpy(packet.pqr, pqr, sizeof(float)*3);
    mav_array_memcpy(packet.euler, euler, sizeof(float)*3);
    mav_array_memcpy(packet.quat, quat, sizeof(float)*4);
    mav_array_memcpy(packet.covQuat, covQuat, sizeof(float)*10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_CRC);
}

/**
 * @brief Pack a ascl_telemetry_nav_state_att message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timems [ms] FC time in ms
 * @param pqr [rad/s] Angular rate in rad/s
 * @param euler [deg] Euler angle in deg
 * @param quat [none] Quaternion
 * @param covQuat  Covariance of Quaternion
 * @param fused  Flags whether sensor(s) data is fused
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_att_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t timems,const float *pqr,const float *euler,const float *quat,const float *covQuat,uint8_t fused)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_uint8_t(buf, 84, fused);
    _mav_put_float_array(buf, 4, pqr, 3);
    _mav_put_float_array(buf, 16, euler, 3);
    _mav_put_float_array(buf, 28, quat, 4);
    _mav_put_float_array(buf, 44, covQuat, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_LEN);
#else
    mavlink_ascl_telemetry_nav_state_att_t packet;
    packet.timems = timems;
    packet.fused = fused;
    mav_array_memcpy(packet.pqr, pqr, sizeof(float)*3);
    mav_array_memcpy(packet.euler, euler, sizeof(float)*3);
    mav_array_memcpy(packet.quat, quat, sizeof(float)*4);
    mav_array_memcpy(packet.covQuat, covQuat, sizeof(float)*10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_CRC);
}

/**
 * @brief Encode a ascl_telemetry_nav_state_att struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ascl_telemetry_nav_state_att C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_att_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ascl_telemetry_nav_state_att_t* ascl_telemetry_nav_state_att)
{
    return mavlink_msg_ascl_telemetry_nav_state_att_pack(system_id, component_id, msg, ascl_telemetry_nav_state_att->timems, ascl_telemetry_nav_state_att->pqr, ascl_telemetry_nav_state_att->euler, ascl_telemetry_nav_state_att->quat, ascl_telemetry_nav_state_att->covQuat, ascl_telemetry_nav_state_att->fused);
}

/**
 * @brief Encode a ascl_telemetry_nav_state_att struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ascl_telemetry_nav_state_att C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_att_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ascl_telemetry_nav_state_att_t* ascl_telemetry_nav_state_att)
{
    return mavlink_msg_ascl_telemetry_nav_state_att_pack_chan(system_id, component_id, chan, msg, ascl_telemetry_nav_state_att->timems, ascl_telemetry_nav_state_att->pqr, ascl_telemetry_nav_state_att->euler, ascl_telemetry_nav_state_att->quat, ascl_telemetry_nav_state_att->covQuat, ascl_telemetry_nav_state_att->fused);
}

/**
 * @brief Send a ascl_telemetry_nav_state_att message
 * @param chan MAVLink channel to send the message
 *
 * @param timems [ms] FC time in ms
 * @param pqr [rad/s] Angular rate in rad/s
 * @param euler [deg] Euler angle in deg
 * @param quat [none] Quaternion
 * @param covQuat  Covariance of Quaternion
 * @param fused  Flags whether sensor(s) data is fused
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ascl_telemetry_nav_state_att_send(mavlink_channel_t chan, uint32_t timems, const float *pqr, const float *euler, const float *quat, const float *covQuat, uint8_t fused)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_uint8_t(buf, 84, fused);
    _mav_put_float_array(buf, 4, pqr, 3);
    _mav_put_float_array(buf, 16, euler, 3);
    _mav_put_float_array(buf, 28, quat, 4);
    _mav_put_float_array(buf, 44, covQuat, 10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT, buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_CRC);
#else
    mavlink_ascl_telemetry_nav_state_att_t packet;
    packet.timems = timems;
    packet.fused = fused;
    mav_array_memcpy(packet.pqr, pqr, sizeof(float)*3);
    mav_array_memcpy(packet.euler, euler, sizeof(float)*3);
    mav_array_memcpy(packet.quat, quat, sizeof(float)*4);
    mav_array_memcpy(packet.covQuat, covQuat, sizeof(float)*10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT, (const char *)&packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_CRC);
#endif
}

/**
 * @brief Send a ascl_telemetry_nav_state_att message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ascl_telemetry_nav_state_att_send_struct(mavlink_channel_t chan, const mavlink_ascl_telemetry_nav_state_att_t* ascl_telemetry_nav_state_att)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ascl_telemetry_nav_state_att_send(chan, ascl_telemetry_nav_state_att->timems, ascl_telemetry_nav_state_att->pqr, ascl_telemetry_nav_state_att->euler, ascl_telemetry_nav_state_att->quat, ascl_telemetry_nav_state_att->covQuat, ascl_telemetry_nav_state_att->fused);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT, (const char *)ascl_telemetry_nav_state_att, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_CRC);
#endif
}

#if MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ascl_telemetry_nav_state_att_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t timems, const float *pqr, const float *euler, const float *quat, const float *covQuat, uint8_t fused)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_uint8_t(buf, 84, fused);
    _mav_put_float_array(buf, 4, pqr, 3);
    _mav_put_float_array(buf, 16, euler, 3);
    _mav_put_float_array(buf, 28, quat, 4);
    _mav_put_float_array(buf, 44, covQuat, 10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT, buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_CRC);
#else
    mavlink_ascl_telemetry_nav_state_att_t *packet = (mavlink_ascl_telemetry_nav_state_att_t *)msgbuf;
    packet->timems = timems;
    packet->fused = fused;
    mav_array_memcpy(packet->pqr, pqr, sizeof(float)*3);
    mav_array_memcpy(packet->euler, euler, sizeof(float)*3);
    mav_array_memcpy(packet->quat, quat, sizeof(float)*4);
    mav_array_memcpy(packet->covQuat, covQuat, sizeof(float)*10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT, (const char *)packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_CRC);
#endif
}
#endif

#endif

// MESSAGE ASCL_TELEMETRY_NAV_STATE_ATT UNPACKING


/**
 * @brief Get field timems from ascl_telemetry_nav_state_att message
 *
 * @return [ms] FC time in ms
 */
static inline uint32_t mavlink_msg_ascl_telemetry_nav_state_att_get_timems(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field pqr from ascl_telemetry_nav_state_att message
 *
 * @return [rad/s] Angular rate in rad/s
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_att_get_pqr(const mavlink_message_t* msg, float *pqr)
{
    return _MAV_RETURN_float_array(msg, pqr, 3,  4);
}

/**
 * @brief Get field euler from ascl_telemetry_nav_state_att message
 *
 * @return [deg] Euler angle in deg
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_att_get_euler(const mavlink_message_t* msg, float *euler)
{
    return _MAV_RETURN_float_array(msg, euler, 3,  16);
}

/**
 * @brief Get field quat from ascl_telemetry_nav_state_att message
 *
 * @return [none] Quaternion
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_att_get_quat(const mavlink_message_t* msg, float *quat)
{
    return _MAV_RETURN_float_array(msg, quat, 4,  28);
}

/**
 * @brief Get field covQuat from ascl_telemetry_nav_state_att message
 *
 * @return  Covariance of Quaternion
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_att_get_covQuat(const mavlink_message_t* msg, float *covQuat)
{
    return _MAV_RETURN_float_array(msg, covQuat, 10,  44);
}

/**
 * @brief Get field fused from ascl_telemetry_nav_state_att message
 *
 * @return  Flags whether sensor(s) data is fused
 */
static inline uint8_t mavlink_msg_ascl_telemetry_nav_state_att_get_fused(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  84);
}

/**
 * @brief Decode a ascl_telemetry_nav_state_att message into a struct
 *
 * @param msg The message to decode
 * @param ascl_telemetry_nav_state_att C-struct to decode the message contents into
 */
static inline void mavlink_msg_ascl_telemetry_nav_state_att_decode(const mavlink_message_t* msg, mavlink_ascl_telemetry_nav_state_att_t* ascl_telemetry_nav_state_att)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ascl_telemetry_nav_state_att->timems = mavlink_msg_ascl_telemetry_nav_state_att_get_timems(msg);
    mavlink_msg_ascl_telemetry_nav_state_att_get_pqr(msg, ascl_telemetry_nav_state_att->pqr);
    mavlink_msg_ascl_telemetry_nav_state_att_get_euler(msg, ascl_telemetry_nav_state_att->euler);
    mavlink_msg_ascl_telemetry_nav_state_att_get_quat(msg, ascl_telemetry_nav_state_att->quat);
    mavlink_msg_ascl_telemetry_nav_state_att_get_covQuat(msg, ascl_telemetry_nav_state_att->covQuat);
    ascl_telemetry_nav_state_att->fused = mavlink_msg_ascl_telemetry_nav_state_att_get_fused(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_LEN? msg->len : MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_LEN;
        memset(ascl_telemetry_nav_state_att, 0, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_LEN);
    memcpy(ascl_telemetry_nav_state_att, _MAV_PAYLOAD(msg), len);
#endif
}
