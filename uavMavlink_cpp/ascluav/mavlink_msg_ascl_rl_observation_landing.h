#pragma once
// MESSAGE ASCL_RL_OBSERVATION_LANDING PACKING

#define MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING 55611


typedef struct __mavlink_ascl_rl_observation_landing_t {
 float h_bar; /*< [none]  normalized height */
 float dImageX; /*< [none]  normalized position of target (x) w.r.t vehicle view point */
 float dImageY; /*< [none]  normalized position of target (y) w.r.t vehicle view point */
 float velBodyX; /*< [m/s]  body velocity X */
 float velBodyY; /*< [m/s]  body velocity Y */
 float dz; /*< [m/s]  descent rate */
 float p; /*< [rad/s]  body angular rate (axis-1) */
 float q; /*< [rad/s]  body angular rate (axis-2) */
 float phi; /*< [rad]  roll angle */
 float theta; /*< [rad]  pitch angle */
} mavlink_ascl_rl_observation_landing_t;

#define MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING_LEN 40
#define MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING_MIN_LEN 40
#define MAVLINK_MSG_ID_55611_LEN 40
#define MAVLINK_MSG_ID_55611_MIN_LEN 40

#define MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING_CRC 234
#define MAVLINK_MSG_ID_55611_CRC 234



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ASCL_RL_OBSERVATION_LANDING { \
    55611, \
    "ASCL_RL_OBSERVATION_LANDING", \
    10, \
    {  { "h_bar", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ascl_rl_observation_landing_t, h_bar) }, \
         { "dImageX", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ascl_rl_observation_landing_t, dImageX) }, \
         { "dImageY", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ascl_rl_observation_landing_t, dImageY) }, \
         { "velBodyX", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_ascl_rl_observation_landing_t, velBodyX) }, \
         { "velBodyY", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_ascl_rl_observation_landing_t, velBodyY) }, \
         { "dz", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_ascl_rl_observation_landing_t, dz) }, \
         { "p", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_ascl_rl_observation_landing_t, p) }, \
         { "q", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_ascl_rl_observation_landing_t, q) }, \
         { "phi", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_ascl_rl_observation_landing_t, phi) }, \
         { "theta", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_ascl_rl_observation_landing_t, theta) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ASCL_RL_OBSERVATION_LANDING { \
    "ASCL_RL_OBSERVATION_LANDING", \
    10, \
    {  { "h_bar", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ascl_rl_observation_landing_t, h_bar) }, \
         { "dImageX", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ascl_rl_observation_landing_t, dImageX) }, \
         { "dImageY", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ascl_rl_observation_landing_t, dImageY) }, \
         { "velBodyX", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_ascl_rl_observation_landing_t, velBodyX) }, \
         { "velBodyY", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_ascl_rl_observation_landing_t, velBodyY) }, \
         { "dz", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_ascl_rl_observation_landing_t, dz) }, \
         { "p", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_ascl_rl_observation_landing_t, p) }, \
         { "q", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_ascl_rl_observation_landing_t, q) }, \
         { "phi", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_ascl_rl_observation_landing_t, phi) }, \
         { "theta", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_ascl_rl_observation_landing_t, theta) }, \
         } \
}
#endif

/**
 * @brief Pack a ascl_rl_observation_landing message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param h_bar [none]  normalized height 
 * @param dImageX [none]  normalized position of target (x) w.r.t vehicle view point 
 * @param dImageY [none]  normalized position of target (y) w.r.t vehicle view point 
 * @param velBodyX [m/s]  body velocity X 
 * @param velBodyY [m/s]  body velocity Y 
 * @param dz [m/s]  descent rate 
 * @param p [rad/s]  body angular rate (axis-1) 
 * @param q [rad/s]  body angular rate (axis-2) 
 * @param phi [rad]  roll angle 
 * @param theta [rad]  pitch angle 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_rl_observation_landing_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float h_bar, float dImageX, float dImageY, float velBodyX, float velBodyY, float dz, float p, float q, float phi, float theta)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING_LEN];
    _mav_put_float(buf, 0, h_bar);
    _mav_put_float(buf, 4, dImageX);
    _mav_put_float(buf, 8, dImageY);
    _mav_put_float(buf, 12, velBodyX);
    _mav_put_float(buf, 16, velBodyY);
    _mav_put_float(buf, 20, dz);
    _mav_put_float(buf, 24, p);
    _mav_put_float(buf, 28, q);
    _mav_put_float(buf, 32, phi);
    _mav_put_float(buf, 36, theta);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING_LEN);
#else
    mavlink_ascl_rl_observation_landing_t packet;
    packet.h_bar = h_bar;
    packet.dImageX = dImageX;
    packet.dImageY = dImageY;
    packet.velBodyX = velBodyX;
    packet.velBodyY = velBodyY;
    packet.dz = dz;
    packet.p = p;
    packet.q = q;
    packet.phi = phi;
    packet.theta = theta;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING_MIN_LEN, MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING_LEN, MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING_CRC);
}

/**
 * @brief Pack a ascl_rl_observation_landing message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param h_bar [none]  normalized height 
 * @param dImageX [none]  normalized position of target (x) w.r.t vehicle view point 
 * @param dImageY [none]  normalized position of target (y) w.r.t vehicle view point 
 * @param velBodyX [m/s]  body velocity X 
 * @param velBodyY [m/s]  body velocity Y 
 * @param dz [m/s]  descent rate 
 * @param p [rad/s]  body angular rate (axis-1) 
 * @param q [rad/s]  body angular rate (axis-2) 
 * @param phi [rad]  roll angle 
 * @param theta [rad]  pitch angle 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_rl_observation_landing_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float h_bar,float dImageX,float dImageY,float velBodyX,float velBodyY,float dz,float p,float q,float phi,float theta)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING_LEN];
    _mav_put_float(buf, 0, h_bar);
    _mav_put_float(buf, 4, dImageX);
    _mav_put_float(buf, 8, dImageY);
    _mav_put_float(buf, 12, velBodyX);
    _mav_put_float(buf, 16, velBodyY);
    _mav_put_float(buf, 20, dz);
    _mav_put_float(buf, 24, p);
    _mav_put_float(buf, 28, q);
    _mav_put_float(buf, 32, phi);
    _mav_put_float(buf, 36, theta);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING_LEN);
#else
    mavlink_ascl_rl_observation_landing_t packet;
    packet.h_bar = h_bar;
    packet.dImageX = dImageX;
    packet.dImageY = dImageY;
    packet.velBodyX = velBodyX;
    packet.velBodyY = velBodyY;
    packet.dz = dz;
    packet.p = p;
    packet.q = q;
    packet.phi = phi;
    packet.theta = theta;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING_MIN_LEN, MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING_LEN, MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING_CRC);
}

/**
 * @brief Encode a ascl_rl_observation_landing struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ascl_rl_observation_landing C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_rl_observation_landing_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ascl_rl_observation_landing_t* ascl_rl_observation_landing)
{
    return mavlink_msg_ascl_rl_observation_landing_pack(system_id, component_id, msg, ascl_rl_observation_landing->h_bar, ascl_rl_observation_landing->dImageX, ascl_rl_observation_landing->dImageY, ascl_rl_observation_landing->velBodyX, ascl_rl_observation_landing->velBodyY, ascl_rl_observation_landing->dz, ascl_rl_observation_landing->p, ascl_rl_observation_landing->q, ascl_rl_observation_landing->phi, ascl_rl_observation_landing->theta);
}

/**
 * @brief Encode a ascl_rl_observation_landing struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ascl_rl_observation_landing C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_rl_observation_landing_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ascl_rl_observation_landing_t* ascl_rl_observation_landing)
{
    return mavlink_msg_ascl_rl_observation_landing_pack_chan(system_id, component_id, chan, msg, ascl_rl_observation_landing->h_bar, ascl_rl_observation_landing->dImageX, ascl_rl_observation_landing->dImageY, ascl_rl_observation_landing->velBodyX, ascl_rl_observation_landing->velBodyY, ascl_rl_observation_landing->dz, ascl_rl_observation_landing->p, ascl_rl_observation_landing->q, ascl_rl_observation_landing->phi, ascl_rl_observation_landing->theta);
}

/**
 * @brief Send a ascl_rl_observation_landing message
 * @param chan MAVLink channel to send the message
 *
 * @param h_bar [none]  normalized height 
 * @param dImageX [none]  normalized position of target (x) w.r.t vehicle view point 
 * @param dImageY [none]  normalized position of target (y) w.r.t vehicle view point 
 * @param velBodyX [m/s]  body velocity X 
 * @param velBodyY [m/s]  body velocity Y 
 * @param dz [m/s]  descent rate 
 * @param p [rad/s]  body angular rate (axis-1) 
 * @param q [rad/s]  body angular rate (axis-2) 
 * @param phi [rad]  roll angle 
 * @param theta [rad]  pitch angle 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ascl_rl_observation_landing_send(mavlink_channel_t chan, float h_bar, float dImageX, float dImageY, float velBodyX, float velBodyY, float dz, float p, float q, float phi, float theta)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING_LEN];
    _mav_put_float(buf, 0, h_bar);
    _mav_put_float(buf, 4, dImageX);
    _mav_put_float(buf, 8, dImageY);
    _mav_put_float(buf, 12, velBodyX);
    _mav_put_float(buf, 16, velBodyY);
    _mav_put_float(buf, 20, dz);
    _mav_put_float(buf, 24, p);
    _mav_put_float(buf, 28, q);
    _mav_put_float(buf, 32, phi);
    _mav_put_float(buf, 36, theta);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING, buf, MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING_MIN_LEN, MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING_LEN, MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING_CRC);
#else
    mavlink_ascl_rl_observation_landing_t packet;
    packet.h_bar = h_bar;
    packet.dImageX = dImageX;
    packet.dImageY = dImageY;
    packet.velBodyX = velBodyX;
    packet.velBodyY = velBodyY;
    packet.dz = dz;
    packet.p = p;
    packet.q = q;
    packet.phi = phi;
    packet.theta = theta;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING, (const char *)&packet, MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING_MIN_LEN, MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING_LEN, MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING_CRC);
#endif
}

/**
 * @brief Send a ascl_rl_observation_landing message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ascl_rl_observation_landing_send_struct(mavlink_channel_t chan, const mavlink_ascl_rl_observation_landing_t* ascl_rl_observation_landing)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ascl_rl_observation_landing_send(chan, ascl_rl_observation_landing->h_bar, ascl_rl_observation_landing->dImageX, ascl_rl_observation_landing->dImageY, ascl_rl_observation_landing->velBodyX, ascl_rl_observation_landing->velBodyY, ascl_rl_observation_landing->dz, ascl_rl_observation_landing->p, ascl_rl_observation_landing->q, ascl_rl_observation_landing->phi, ascl_rl_observation_landing->theta);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING, (const char *)ascl_rl_observation_landing, MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING_MIN_LEN, MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING_LEN, MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING_CRC);
#endif
}

#if MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ascl_rl_observation_landing_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float h_bar, float dImageX, float dImageY, float velBodyX, float velBodyY, float dz, float p, float q, float phi, float theta)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, h_bar);
    _mav_put_float(buf, 4, dImageX);
    _mav_put_float(buf, 8, dImageY);
    _mav_put_float(buf, 12, velBodyX);
    _mav_put_float(buf, 16, velBodyY);
    _mav_put_float(buf, 20, dz);
    _mav_put_float(buf, 24, p);
    _mav_put_float(buf, 28, q);
    _mav_put_float(buf, 32, phi);
    _mav_put_float(buf, 36, theta);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING, buf, MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING_MIN_LEN, MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING_LEN, MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING_CRC);
#else
    mavlink_ascl_rl_observation_landing_t *packet = (mavlink_ascl_rl_observation_landing_t *)msgbuf;
    packet->h_bar = h_bar;
    packet->dImageX = dImageX;
    packet->dImageY = dImageY;
    packet->velBodyX = velBodyX;
    packet->velBodyY = velBodyY;
    packet->dz = dz;
    packet->p = p;
    packet->q = q;
    packet->phi = phi;
    packet->theta = theta;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING, (const char *)packet, MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING_MIN_LEN, MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING_LEN, MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING_CRC);
#endif
}
#endif

#endif

// MESSAGE ASCL_RL_OBSERVATION_LANDING UNPACKING


/**
 * @brief Get field h_bar from ascl_rl_observation_landing message
 *
 * @return [none]  normalized height 
 */
static inline float mavlink_msg_ascl_rl_observation_landing_get_h_bar(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field dImageX from ascl_rl_observation_landing message
 *
 * @return [none]  normalized position of target (x) w.r.t vehicle view point 
 */
static inline float mavlink_msg_ascl_rl_observation_landing_get_dImageX(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field dImageY from ascl_rl_observation_landing message
 *
 * @return [none]  normalized position of target (y) w.r.t vehicle view point 
 */
static inline float mavlink_msg_ascl_rl_observation_landing_get_dImageY(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field velBodyX from ascl_rl_observation_landing message
 *
 * @return [m/s]  body velocity X 
 */
static inline float mavlink_msg_ascl_rl_observation_landing_get_velBodyX(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field velBodyY from ascl_rl_observation_landing message
 *
 * @return [m/s]  body velocity Y 
 */
static inline float mavlink_msg_ascl_rl_observation_landing_get_velBodyY(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field dz from ascl_rl_observation_landing message
 *
 * @return [m/s]  descent rate 
 */
static inline float mavlink_msg_ascl_rl_observation_landing_get_dz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field p from ascl_rl_observation_landing message
 *
 * @return [rad/s]  body angular rate (axis-1) 
 */
static inline float mavlink_msg_ascl_rl_observation_landing_get_p(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field q from ascl_rl_observation_landing message
 *
 * @return [rad/s]  body angular rate (axis-2) 
 */
static inline float mavlink_msg_ascl_rl_observation_landing_get_q(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field phi from ascl_rl_observation_landing message
 *
 * @return [rad]  roll angle 
 */
static inline float mavlink_msg_ascl_rl_observation_landing_get_phi(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field theta from ascl_rl_observation_landing message
 *
 * @return [rad]  pitch angle 
 */
static inline float mavlink_msg_ascl_rl_observation_landing_get_theta(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Decode a ascl_rl_observation_landing message into a struct
 *
 * @param msg The message to decode
 * @param ascl_rl_observation_landing C-struct to decode the message contents into
 */
static inline void mavlink_msg_ascl_rl_observation_landing_decode(const mavlink_message_t* msg, mavlink_ascl_rl_observation_landing_t* ascl_rl_observation_landing)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ascl_rl_observation_landing->h_bar = mavlink_msg_ascl_rl_observation_landing_get_h_bar(msg);
    ascl_rl_observation_landing->dImageX = mavlink_msg_ascl_rl_observation_landing_get_dImageX(msg);
    ascl_rl_observation_landing->dImageY = mavlink_msg_ascl_rl_observation_landing_get_dImageY(msg);
    ascl_rl_observation_landing->velBodyX = mavlink_msg_ascl_rl_observation_landing_get_velBodyX(msg);
    ascl_rl_observation_landing->velBodyY = mavlink_msg_ascl_rl_observation_landing_get_velBodyY(msg);
    ascl_rl_observation_landing->dz = mavlink_msg_ascl_rl_observation_landing_get_dz(msg);
    ascl_rl_observation_landing->p = mavlink_msg_ascl_rl_observation_landing_get_p(msg);
    ascl_rl_observation_landing->q = mavlink_msg_ascl_rl_observation_landing_get_q(msg);
    ascl_rl_observation_landing->phi = mavlink_msg_ascl_rl_observation_landing_get_phi(msg);
    ascl_rl_observation_landing->theta = mavlink_msg_ascl_rl_observation_landing_get_theta(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING_LEN? msg->len : MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING_LEN;
        memset(ascl_rl_observation_landing, 0, MAVLINK_MSG_ID_ASCL_RL_OBSERVATION_LANDING_LEN);
    memcpy(ascl_rl_observation_landing, _MAV_PAYLOAD(msg), len);
#endif
}
