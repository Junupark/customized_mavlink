#pragma once
// MESSAGE ASCL_TELEMETRY_NAV_STATE_REGULAR_COV PACKING

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV 55297

MAVPACKED(
typedef struct __mavlink_ascl_telemetry_nav_state_regular_cov_t {
 uint32_t timems; /*< [ms] FC time in ms*/
 float covQuat[10]; /*<  Upper triangle of P(IDX_QUAT:IDX_QUAT+3, IDX_QUAT:IDX_QUAT+3)*/
 float covDiag[22]; /*<  Diagonal element of P(IDX_GYRO_BIAS:end, IDX_GYRO_BIAS:end)*/
}) mavlink_ascl_telemetry_nav_state_regular_cov_t;

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_LEN 132
#define MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_MIN_LEN 132
#define MAVLINK_MSG_ID_55297_LEN 132
#define MAVLINK_MSG_ID_55297_MIN_LEN 132

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_CRC 188
#define MAVLINK_MSG_ID_55297_CRC 188

#define MAVLINK_MSG_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_FIELD_COVQUAT_LEN 10
#define MAVLINK_MSG_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_FIELD_COVDIAG_LEN 22

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV { \
    55297, \
    "ASCL_TELEMETRY_NAV_STATE_REGULAR_COV", \
    3, \
    {  { "timems", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ascl_telemetry_nav_state_regular_cov_t, timems) }, \
         { "covQuat", NULL, MAVLINK_TYPE_FLOAT, 10, 4, offsetof(mavlink_ascl_telemetry_nav_state_regular_cov_t, covQuat) }, \
         { "covDiag", NULL, MAVLINK_TYPE_FLOAT, 22, 44, offsetof(mavlink_ascl_telemetry_nav_state_regular_cov_t, covDiag) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV { \
    "ASCL_TELEMETRY_NAV_STATE_REGULAR_COV", \
    3, \
    {  { "timems", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ascl_telemetry_nav_state_regular_cov_t, timems) }, \
         { "covQuat", NULL, MAVLINK_TYPE_FLOAT, 10, 4, offsetof(mavlink_ascl_telemetry_nav_state_regular_cov_t, covQuat) }, \
         { "covDiag", NULL, MAVLINK_TYPE_FLOAT, 22, 44, offsetof(mavlink_ascl_telemetry_nav_state_regular_cov_t, covDiag) }, \
         } \
}
#endif

/**
 * @brief Pack a ascl_telemetry_nav_state_regular_cov message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timems [ms] FC time in ms
 * @param covQuat  Upper triangle of P(IDX_QUAT:IDX_QUAT+3, IDX_QUAT:IDX_QUAT+3)
 * @param covDiag  Diagonal element of P(IDX_GYRO_BIAS:end, IDX_GYRO_BIAS:end)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_regular_cov_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t timems, const float *covQuat, const float *covDiag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_float_array(buf, 4, covQuat, 10);
    _mav_put_float_array(buf, 44, covDiag, 22);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_LEN);
#else
    mavlink_ascl_telemetry_nav_state_regular_cov_t packet;
    packet.timems = timems;
    mav_array_memcpy(packet.covQuat, covQuat, sizeof(float)*10);
    mav_array_memcpy(packet.covDiag, covDiag, sizeof(float)*22);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_CRC);
}

/**
 * @brief Pack a ascl_telemetry_nav_state_regular_cov message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timems [ms] FC time in ms
 * @param covQuat  Upper triangle of P(IDX_QUAT:IDX_QUAT+3, IDX_QUAT:IDX_QUAT+3)
 * @param covDiag  Diagonal element of P(IDX_GYRO_BIAS:end, IDX_GYRO_BIAS:end)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_regular_cov_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t timems,const float *covQuat,const float *covDiag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_float_array(buf, 4, covQuat, 10);
    _mav_put_float_array(buf, 44, covDiag, 22);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_LEN);
#else
    mavlink_ascl_telemetry_nav_state_regular_cov_t packet;
    packet.timems = timems;
    mav_array_memcpy(packet.covQuat, covQuat, sizeof(float)*10);
    mav_array_memcpy(packet.covDiag, covDiag, sizeof(float)*22);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_CRC);
}

/**
 * @brief Encode a ascl_telemetry_nav_state_regular_cov struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ascl_telemetry_nav_state_regular_cov C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_regular_cov_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ascl_telemetry_nav_state_regular_cov_t* ascl_telemetry_nav_state_regular_cov)
{
    return mavlink_msg_ascl_telemetry_nav_state_regular_cov_pack(system_id, component_id, msg, ascl_telemetry_nav_state_regular_cov->timems, ascl_telemetry_nav_state_regular_cov->covQuat, ascl_telemetry_nav_state_regular_cov->covDiag);
}

/**
 * @brief Encode a ascl_telemetry_nav_state_regular_cov struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ascl_telemetry_nav_state_regular_cov C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_regular_cov_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ascl_telemetry_nav_state_regular_cov_t* ascl_telemetry_nav_state_regular_cov)
{
    return mavlink_msg_ascl_telemetry_nav_state_regular_cov_pack_chan(system_id, component_id, chan, msg, ascl_telemetry_nav_state_regular_cov->timems, ascl_telemetry_nav_state_regular_cov->covQuat, ascl_telemetry_nav_state_regular_cov->covDiag);
}

/**
 * @brief Send a ascl_telemetry_nav_state_regular_cov message
 * @param chan MAVLink channel to send the message
 *
 * @param timems [ms] FC time in ms
 * @param covQuat  Upper triangle of P(IDX_QUAT:IDX_QUAT+3, IDX_QUAT:IDX_QUAT+3)
 * @param covDiag  Diagonal element of P(IDX_GYRO_BIAS:end, IDX_GYRO_BIAS:end)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ascl_telemetry_nav_state_regular_cov_send(mavlink_channel_t chan, uint32_t timems, const float *covQuat, const float *covDiag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_float_array(buf, 4, covQuat, 10);
    _mav_put_float_array(buf, 44, covDiag, 22);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV, buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_CRC);
#else
    mavlink_ascl_telemetry_nav_state_regular_cov_t packet;
    packet.timems = timems;
    mav_array_memcpy(packet.covQuat, covQuat, sizeof(float)*10);
    mav_array_memcpy(packet.covDiag, covDiag, sizeof(float)*22);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV, (const char *)&packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_CRC);
#endif
}

/**
 * @brief Send a ascl_telemetry_nav_state_regular_cov message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ascl_telemetry_nav_state_regular_cov_send_struct(mavlink_channel_t chan, const mavlink_ascl_telemetry_nav_state_regular_cov_t* ascl_telemetry_nav_state_regular_cov)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ascl_telemetry_nav_state_regular_cov_send(chan, ascl_telemetry_nav_state_regular_cov->timems, ascl_telemetry_nav_state_regular_cov->covQuat, ascl_telemetry_nav_state_regular_cov->covDiag);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV, (const char *)ascl_telemetry_nav_state_regular_cov, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_CRC);
#endif
}

#if MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ascl_telemetry_nav_state_regular_cov_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t timems, const float *covQuat, const float *covDiag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_float_array(buf, 4, covQuat, 10);
    _mav_put_float_array(buf, 44, covDiag, 22);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV, buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_CRC);
#else
    mavlink_ascl_telemetry_nav_state_regular_cov_t *packet = (mavlink_ascl_telemetry_nav_state_regular_cov_t *)msgbuf;
    packet->timems = timems;
    mav_array_memcpy(packet->covQuat, covQuat, sizeof(float)*10);
    mav_array_memcpy(packet->covDiag, covDiag, sizeof(float)*22);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV, (const char *)packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_CRC);
#endif
}
#endif

#endif

// MESSAGE ASCL_TELEMETRY_NAV_STATE_REGULAR_COV UNPACKING


/**
 * @brief Get field timems from ascl_telemetry_nav_state_regular_cov message
 *
 * @return [ms] FC time in ms
 */
static inline uint32_t mavlink_msg_ascl_telemetry_nav_state_regular_cov_get_timems(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field covQuat from ascl_telemetry_nav_state_regular_cov message
 *
 * @return  Upper triangle of P(IDX_QUAT:IDX_QUAT+3, IDX_QUAT:IDX_QUAT+3)
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_regular_cov_get_covQuat(const mavlink_message_t* msg, float *covQuat)
{
    return _MAV_RETURN_float_array(msg, covQuat, 10,  4);
}

/**
 * @brief Get field covDiag from ascl_telemetry_nav_state_regular_cov message
 *
 * @return  Diagonal element of P(IDX_GYRO_BIAS:end, IDX_GYRO_BIAS:end)
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_regular_cov_get_covDiag(const mavlink_message_t* msg, float *covDiag)
{
    return _MAV_RETURN_float_array(msg, covDiag, 22,  44);
}

/**
 * @brief Decode a ascl_telemetry_nav_state_regular_cov message into a struct
 *
 * @param msg The message to decode
 * @param ascl_telemetry_nav_state_regular_cov C-struct to decode the message contents into
 */
static inline void mavlink_msg_ascl_telemetry_nav_state_regular_cov_decode(const mavlink_message_t* msg, mavlink_ascl_telemetry_nav_state_regular_cov_t* ascl_telemetry_nav_state_regular_cov)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ascl_telemetry_nav_state_regular_cov->timems = mavlink_msg_ascl_telemetry_nav_state_regular_cov_get_timems(msg);
    mavlink_msg_ascl_telemetry_nav_state_regular_cov_get_covQuat(msg, ascl_telemetry_nav_state_regular_cov->covQuat);
    mavlink_msg_ascl_telemetry_nav_state_regular_cov_get_covDiag(msg, ascl_telemetry_nav_state_regular_cov->covDiag);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_LEN? msg->len : MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_LEN;
        memset(ascl_telemetry_nav_state_regular_cov, 0, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_COV_LEN);
    memcpy(ascl_telemetry_nav_state_regular_cov, _MAV_PAYLOAD(msg), len);
#endif
}
