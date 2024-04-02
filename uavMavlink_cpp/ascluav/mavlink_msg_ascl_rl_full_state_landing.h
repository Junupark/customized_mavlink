#pragma once
// MESSAGE ASCL_RL_FULL_STATE_LANDING PACKING

#define MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING 55610


typedef struct __mavlink_ascl_rl_full_state_landing_t {
 float x[3]; /*< [m]  multirotor position(inertial) */
 float dx[3]; /*< [m/s]  multirotor velocity(inertial) */
 float euler[3]; /*< [rad]  multirotor attitude */
 float pqr[3]; /*< [rad/s]  multirotor body angular rate */
 float tgtX[3]; /*< [m]  target position(inertial), normally origin */
 float tgtdX[3]; /*< [m/s]  target velocity(inertial), normally zeros */
 uint16_t cmdLB[4]; /*< [none]  previous command(s) loopback */
} mavlink_ascl_rl_full_state_landing_t;

#define MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING_LEN 80
#define MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING_MIN_LEN 80
#define MAVLINK_MSG_ID_55610_LEN 80
#define MAVLINK_MSG_ID_55610_MIN_LEN 80

#define MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING_CRC 139
#define MAVLINK_MSG_ID_55610_CRC 139

#define MAVLINK_MSG_ASCL_RL_FULL_STATE_LANDING_FIELD_X_LEN 3
#define MAVLINK_MSG_ASCL_RL_FULL_STATE_LANDING_FIELD_DX_LEN 3
#define MAVLINK_MSG_ASCL_RL_FULL_STATE_LANDING_FIELD_EULER_LEN 3
#define MAVLINK_MSG_ASCL_RL_FULL_STATE_LANDING_FIELD_PQR_LEN 3
#define MAVLINK_MSG_ASCL_RL_FULL_STATE_LANDING_FIELD_TGTX_LEN 3
#define MAVLINK_MSG_ASCL_RL_FULL_STATE_LANDING_FIELD_TGTDX_LEN 3
#define MAVLINK_MSG_ASCL_RL_FULL_STATE_LANDING_FIELD_CMDLB_LEN 4

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ASCL_RL_FULL_STATE_LANDING { \
    55610, \
    "ASCL_RL_FULL_STATE_LANDING", \
    7, \
    {  { "x", NULL, MAVLINK_TYPE_FLOAT, 3, 0, offsetof(mavlink_ascl_rl_full_state_landing_t, x) }, \
         { "dx", NULL, MAVLINK_TYPE_FLOAT, 3, 12, offsetof(mavlink_ascl_rl_full_state_landing_t, dx) }, \
         { "euler", NULL, MAVLINK_TYPE_FLOAT, 3, 24, offsetof(mavlink_ascl_rl_full_state_landing_t, euler) }, \
         { "pqr", NULL, MAVLINK_TYPE_FLOAT, 3, 36, offsetof(mavlink_ascl_rl_full_state_landing_t, pqr) }, \
         { "tgtX", NULL, MAVLINK_TYPE_FLOAT, 3, 48, offsetof(mavlink_ascl_rl_full_state_landing_t, tgtX) }, \
         { "tgtdX", NULL, MAVLINK_TYPE_FLOAT, 3, 60, offsetof(mavlink_ascl_rl_full_state_landing_t, tgtdX) }, \
         { "cmdLB", NULL, MAVLINK_TYPE_UINT16_T, 4, 72, offsetof(mavlink_ascl_rl_full_state_landing_t, cmdLB) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ASCL_RL_FULL_STATE_LANDING { \
    "ASCL_RL_FULL_STATE_LANDING", \
    7, \
    {  { "x", NULL, MAVLINK_TYPE_FLOAT, 3, 0, offsetof(mavlink_ascl_rl_full_state_landing_t, x) }, \
         { "dx", NULL, MAVLINK_TYPE_FLOAT, 3, 12, offsetof(mavlink_ascl_rl_full_state_landing_t, dx) }, \
         { "euler", NULL, MAVLINK_TYPE_FLOAT, 3, 24, offsetof(mavlink_ascl_rl_full_state_landing_t, euler) }, \
         { "pqr", NULL, MAVLINK_TYPE_FLOAT, 3, 36, offsetof(mavlink_ascl_rl_full_state_landing_t, pqr) }, \
         { "tgtX", NULL, MAVLINK_TYPE_FLOAT, 3, 48, offsetof(mavlink_ascl_rl_full_state_landing_t, tgtX) }, \
         { "tgtdX", NULL, MAVLINK_TYPE_FLOAT, 3, 60, offsetof(mavlink_ascl_rl_full_state_landing_t, tgtdX) }, \
         { "cmdLB", NULL, MAVLINK_TYPE_UINT16_T, 4, 72, offsetof(mavlink_ascl_rl_full_state_landing_t, cmdLB) }, \
         } \
}
#endif

/**
 * @brief Pack a ascl_rl_full_state_landing message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param x [m]  multirotor position(inertial) 
 * @param dx [m/s]  multirotor velocity(inertial) 
 * @param euler [rad]  multirotor attitude 
 * @param pqr [rad/s]  multirotor body angular rate 
 * @param tgtX [m]  target position(inertial), normally origin 
 * @param tgtdX [m/s]  target velocity(inertial), normally zeros 
 * @param cmdLB [none]  previous command(s) loopback 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_rl_full_state_landing_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const float *x, const float *dx, const float *euler, const float *pqr, const float *tgtX, const float *tgtdX, const uint16_t *cmdLB)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING_LEN];

    _mav_put_float_array(buf, 0, x, 3);
    _mav_put_float_array(buf, 12, dx, 3);
    _mav_put_float_array(buf, 24, euler, 3);
    _mav_put_float_array(buf, 36, pqr, 3);
    _mav_put_float_array(buf, 48, tgtX, 3);
    _mav_put_float_array(buf, 60, tgtdX, 3);
    _mav_put_uint16_t_array(buf, 72, cmdLB, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING_LEN);
#else
    mavlink_ascl_rl_full_state_landing_t packet;

    mav_array_memcpy(packet.x, x, sizeof(float)*3);
    mav_array_memcpy(packet.dx, dx, sizeof(float)*3);
    mav_array_memcpy(packet.euler, euler, sizeof(float)*3);
    mav_array_memcpy(packet.pqr, pqr, sizeof(float)*3);
    mav_array_memcpy(packet.tgtX, tgtX, sizeof(float)*3);
    mav_array_memcpy(packet.tgtdX, tgtdX, sizeof(float)*3);
    mav_array_memcpy(packet.cmdLB, cmdLB, sizeof(uint16_t)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING_MIN_LEN, MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING_LEN, MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING_CRC);
}

/**
 * @brief Pack a ascl_rl_full_state_landing message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param x [m]  multirotor position(inertial) 
 * @param dx [m/s]  multirotor velocity(inertial) 
 * @param euler [rad]  multirotor attitude 
 * @param pqr [rad/s]  multirotor body angular rate 
 * @param tgtX [m]  target position(inertial), normally origin 
 * @param tgtdX [m/s]  target velocity(inertial), normally zeros 
 * @param cmdLB [none]  previous command(s) loopback 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_rl_full_state_landing_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const float *x,const float *dx,const float *euler,const float *pqr,const float *tgtX,const float *tgtdX,const uint16_t *cmdLB)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING_LEN];

    _mav_put_float_array(buf, 0, x, 3);
    _mav_put_float_array(buf, 12, dx, 3);
    _mav_put_float_array(buf, 24, euler, 3);
    _mav_put_float_array(buf, 36, pqr, 3);
    _mav_put_float_array(buf, 48, tgtX, 3);
    _mav_put_float_array(buf, 60, tgtdX, 3);
    _mav_put_uint16_t_array(buf, 72, cmdLB, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING_LEN);
#else
    mavlink_ascl_rl_full_state_landing_t packet;

    mav_array_memcpy(packet.x, x, sizeof(float)*3);
    mav_array_memcpy(packet.dx, dx, sizeof(float)*3);
    mav_array_memcpy(packet.euler, euler, sizeof(float)*3);
    mav_array_memcpy(packet.pqr, pqr, sizeof(float)*3);
    mav_array_memcpy(packet.tgtX, tgtX, sizeof(float)*3);
    mav_array_memcpy(packet.tgtdX, tgtdX, sizeof(float)*3);
    mav_array_memcpy(packet.cmdLB, cmdLB, sizeof(uint16_t)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING_MIN_LEN, MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING_LEN, MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING_CRC);
}

/**
 * @brief Encode a ascl_rl_full_state_landing struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ascl_rl_full_state_landing C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_rl_full_state_landing_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ascl_rl_full_state_landing_t* ascl_rl_full_state_landing)
{
    return mavlink_msg_ascl_rl_full_state_landing_pack(system_id, component_id, msg, ascl_rl_full_state_landing->x, ascl_rl_full_state_landing->dx, ascl_rl_full_state_landing->euler, ascl_rl_full_state_landing->pqr, ascl_rl_full_state_landing->tgtX, ascl_rl_full_state_landing->tgtdX, ascl_rl_full_state_landing->cmdLB);
}

/**
 * @brief Encode a ascl_rl_full_state_landing struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ascl_rl_full_state_landing C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_rl_full_state_landing_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ascl_rl_full_state_landing_t* ascl_rl_full_state_landing)
{
    return mavlink_msg_ascl_rl_full_state_landing_pack_chan(system_id, component_id, chan, msg, ascl_rl_full_state_landing->x, ascl_rl_full_state_landing->dx, ascl_rl_full_state_landing->euler, ascl_rl_full_state_landing->pqr, ascl_rl_full_state_landing->tgtX, ascl_rl_full_state_landing->tgtdX, ascl_rl_full_state_landing->cmdLB);
}

/**
 * @brief Send a ascl_rl_full_state_landing message
 * @param chan MAVLink channel to send the message
 *
 * @param x [m]  multirotor position(inertial) 
 * @param dx [m/s]  multirotor velocity(inertial) 
 * @param euler [rad]  multirotor attitude 
 * @param pqr [rad/s]  multirotor body angular rate 
 * @param tgtX [m]  target position(inertial), normally origin 
 * @param tgtdX [m/s]  target velocity(inertial), normally zeros 
 * @param cmdLB [none]  previous command(s) loopback 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ascl_rl_full_state_landing_send(mavlink_channel_t chan, const float *x, const float *dx, const float *euler, const float *pqr, const float *tgtX, const float *tgtdX, const uint16_t *cmdLB)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING_LEN];

    _mav_put_float_array(buf, 0, x, 3);
    _mav_put_float_array(buf, 12, dx, 3);
    _mav_put_float_array(buf, 24, euler, 3);
    _mav_put_float_array(buf, 36, pqr, 3);
    _mav_put_float_array(buf, 48, tgtX, 3);
    _mav_put_float_array(buf, 60, tgtdX, 3);
    _mav_put_uint16_t_array(buf, 72, cmdLB, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING, buf, MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING_MIN_LEN, MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING_LEN, MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING_CRC);
#else
    mavlink_ascl_rl_full_state_landing_t packet;

    mav_array_memcpy(packet.x, x, sizeof(float)*3);
    mav_array_memcpy(packet.dx, dx, sizeof(float)*3);
    mav_array_memcpy(packet.euler, euler, sizeof(float)*3);
    mav_array_memcpy(packet.pqr, pqr, sizeof(float)*3);
    mav_array_memcpy(packet.tgtX, tgtX, sizeof(float)*3);
    mav_array_memcpy(packet.tgtdX, tgtdX, sizeof(float)*3);
    mav_array_memcpy(packet.cmdLB, cmdLB, sizeof(uint16_t)*4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING, (const char *)&packet, MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING_MIN_LEN, MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING_LEN, MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING_CRC);
#endif
}

/**
 * @brief Send a ascl_rl_full_state_landing message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ascl_rl_full_state_landing_send_struct(mavlink_channel_t chan, const mavlink_ascl_rl_full_state_landing_t* ascl_rl_full_state_landing)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ascl_rl_full_state_landing_send(chan, ascl_rl_full_state_landing->x, ascl_rl_full_state_landing->dx, ascl_rl_full_state_landing->euler, ascl_rl_full_state_landing->pqr, ascl_rl_full_state_landing->tgtX, ascl_rl_full_state_landing->tgtdX, ascl_rl_full_state_landing->cmdLB);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING, (const char *)ascl_rl_full_state_landing, MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING_MIN_LEN, MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING_LEN, MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING_CRC);
#endif
}

#if MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ascl_rl_full_state_landing_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const float *x, const float *dx, const float *euler, const float *pqr, const float *tgtX, const float *tgtdX, const uint16_t *cmdLB)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;

    _mav_put_float_array(buf, 0, x, 3);
    _mav_put_float_array(buf, 12, dx, 3);
    _mav_put_float_array(buf, 24, euler, 3);
    _mav_put_float_array(buf, 36, pqr, 3);
    _mav_put_float_array(buf, 48, tgtX, 3);
    _mav_put_float_array(buf, 60, tgtdX, 3);
    _mav_put_uint16_t_array(buf, 72, cmdLB, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING, buf, MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING_MIN_LEN, MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING_LEN, MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING_CRC);
#else
    mavlink_ascl_rl_full_state_landing_t *packet = (mavlink_ascl_rl_full_state_landing_t *)msgbuf;

    mav_array_memcpy(packet->x, x, sizeof(float)*3);
    mav_array_memcpy(packet->dx, dx, sizeof(float)*3);
    mav_array_memcpy(packet->euler, euler, sizeof(float)*3);
    mav_array_memcpy(packet->pqr, pqr, sizeof(float)*3);
    mav_array_memcpy(packet->tgtX, tgtX, sizeof(float)*3);
    mav_array_memcpy(packet->tgtdX, tgtdX, sizeof(float)*3);
    mav_array_memcpy(packet->cmdLB, cmdLB, sizeof(uint16_t)*4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING, (const char *)packet, MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING_MIN_LEN, MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING_LEN, MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING_CRC);
#endif
}
#endif

#endif

// MESSAGE ASCL_RL_FULL_STATE_LANDING UNPACKING


/**
 * @brief Get field x from ascl_rl_full_state_landing message
 *
 * @return [m]  multirotor position(inertial) 
 */
static inline uint16_t mavlink_msg_ascl_rl_full_state_landing_get_x(const mavlink_message_t* msg, float *x)
{
    return _MAV_RETURN_float_array(msg, x, 3,  0);
}

/**
 * @brief Get field dx from ascl_rl_full_state_landing message
 *
 * @return [m/s]  multirotor velocity(inertial) 
 */
static inline uint16_t mavlink_msg_ascl_rl_full_state_landing_get_dx(const mavlink_message_t* msg, float *dx)
{
    return _MAV_RETURN_float_array(msg, dx, 3,  12);
}

/**
 * @brief Get field euler from ascl_rl_full_state_landing message
 *
 * @return [rad]  multirotor attitude 
 */
static inline uint16_t mavlink_msg_ascl_rl_full_state_landing_get_euler(const mavlink_message_t* msg, float *euler)
{
    return _MAV_RETURN_float_array(msg, euler, 3,  24);
}

/**
 * @brief Get field pqr from ascl_rl_full_state_landing message
 *
 * @return [rad/s]  multirotor body angular rate 
 */
static inline uint16_t mavlink_msg_ascl_rl_full_state_landing_get_pqr(const mavlink_message_t* msg, float *pqr)
{
    return _MAV_RETURN_float_array(msg, pqr, 3,  36);
}

/**
 * @brief Get field tgtX from ascl_rl_full_state_landing message
 *
 * @return [m]  target position(inertial), normally origin 
 */
static inline uint16_t mavlink_msg_ascl_rl_full_state_landing_get_tgtX(const mavlink_message_t* msg, float *tgtX)
{
    return _MAV_RETURN_float_array(msg, tgtX, 3,  48);
}

/**
 * @brief Get field tgtdX from ascl_rl_full_state_landing message
 *
 * @return [m/s]  target velocity(inertial), normally zeros 
 */
static inline uint16_t mavlink_msg_ascl_rl_full_state_landing_get_tgtdX(const mavlink_message_t* msg, float *tgtdX)
{
    return _MAV_RETURN_float_array(msg, tgtdX, 3,  60);
}

/**
 * @brief Get field cmdLB from ascl_rl_full_state_landing message
 *
 * @return [none]  previous command(s) loopback 
 */
static inline uint16_t mavlink_msg_ascl_rl_full_state_landing_get_cmdLB(const mavlink_message_t* msg, uint16_t *cmdLB)
{
    return _MAV_RETURN_uint16_t_array(msg, cmdLB, 4,  72);
}

/**
 * @brief Decode a ascl_rl_full_state_landing message into a struct
 *
 * @param msg The message to decode
 * @param ascl_rl_full_state_landing C-struct to decode the message contents into
 */
static inline void mavlink_msg_ascl_rl_full_state_landing_decode(const mavlink_message_t* msg, mavlink_ascl_rl_full_state_landing_t* ascl_rl_full_state_landing)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ascl_rl_full_state_landing_get_x(msg, ascl_rl_full_state_landing->x);
    mavlink_msg_ascl_rl_full_state_landing_get_dx(msg, ascl_rl_full_state_landing->dx);
    mavlink_msg_ascl_rl_full_state_landing_get_euler(msg, ascl_rl_full_state_landing->euler);
    mavlink_msg_ascl_rl_full_state_landing_get_pqr(msg, ascl_rl_full_state_landing->pqr);
    mavlink_msg_ascl_rl_full_state_landing_get_tgtX(msg, ascl_rl_full_state_landing->tgtX);
    mavlink_msg_ascl_rl_full_state_landing_get_tgtdX(msg, ascl_rl_full_state_landing->tgtdX);
    mavlink_msg_ascl_rl_full_state_landing_get_cmdLB(msg, ascl_rl_full_state_landing->cmdLB);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING_LEN? msg->len : MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING_LEN;
        memset(ascl_rl_full_state_landing, 0, MAVLINK_MSG_ID_ASCL_RL_FULL_STATE_LANDING_LEN);
    memcpy(ascl_rl_full_state_landing, _MAV_PAYLOAD(msg), len);
#endif
}
