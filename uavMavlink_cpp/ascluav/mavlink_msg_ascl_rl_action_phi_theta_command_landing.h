#pragma once
// MESSAGE ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING PACKING

#define MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING 55620


typedef struct __mavlink_ascl_rl_action_phi_theta_command_landing_t {
 float phi; /*< [none]  roll command */
 float theta; /*< [none]  pitch command */
} mavlink_ascl_rl_action_phi_theta_command_landing_t;

#define MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING_LEN 8
#define MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING_MIN_LEN 8
#define MAVLINK_MSG_ID_55620_LEN 8
#define MAVLINK_MSG_ID_55620_MIN_LEN 8

#define MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING_CRC 118
#define MAVLINK_MSG_ID_55620_CRC 118



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING { \
    55620, \
    "ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING", \
    2, \
    {  { "phi", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ascl_rl_action_phi_theta_command_landing_t, phi) }, \
         { "theta", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ascl_rl_action_phi_theta_command_landing_t, theta) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING { \
    "ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING", \
    2, \
    {  { "phi", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ascl_rl_action_phi_theta_command_landing_t, phi) }, \
         { "theta", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ascl_rl_action_phi_theta_command_landing_t, theta) }, \
         } \
}
#endif

/**
 * @brief Pack a ascl_rl_action_phi_theta_command_landing message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param phi [none]  roll command 
 * @param theta [none]  pitch command 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_rl_action_phi_theta_command_landing_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float phi, float theta)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING_LEN];
    _mav_put_float(buf, 0, phi);
    _mav_put_float(buf, 4, theta);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING_LEN);
#else
    mavlink_ascl_rl_action_phi_theta_command_landing_t packet;
    packet.phi = phi;
    packet.theta = theta;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING_MIN_LEN, MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING_LEN, MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING_CRC);
}

/**
 * @brief Pack a ascl_rl_action_phi_theta_command_landing message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param phi [none]  roll command 
 * @param theta [none]  pitch command 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_rl_action_phi_theta_command_landing_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float phi,float theta)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING_LEN];
    _mav_put_float(buf, 0, phi);
    _mav_put_float(buf, 4, theta);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING_LEN);
#else
    mavlink_ascl_rl_action_phi_theta_command_landing_t packet;
    packet.phi = phi;
    packet.theta = theta;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING_MIN_LEN, MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING_LEN, MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING_CRC);
}

/**
 * @brief Encode a ascl_rl_action_phi_theta_command_landing struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ascl_rl_action_phi_theta_command_landing C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_rl_action_phi_theta_command_landing_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ascl_rl_action_phi_theta_command_landing_t* ascl_rl_action_phi_theta_command_landing)
{
    return mavlink_msg_ascl_rl_action_phi_theta_command_landing_pack(system_id, component_id, msg, ascl_rl_action_phi_theta_command_landing->phi, ascl_rl_action_phi_theta_command_landing->theta);
}

/**
 * @brief Encode a ascl_rl_action_phi_theta_command_landing struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ascl_rl_action_phi_theta_command_landing C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_rl_action_phi_theta_command_landing_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ascl_rl_action_phi_theta_command_landing_t* ascl_rl_action_phi_theta_command_landing)
{
    return mavlink_msg_ascl_rl_action_phi_theta_command_landing_pack_chan(system_id, component_id, chan, msg, ascl_rl_action_phi_theta_command_landing->phi, ascl_rl_action_phi_theta_command_landing->theta);
}

/**
 * @brief Send a ascl_rl_action_phi_theta_command_landing message
 * @param chan MAVLink channel to send the message
 *
 * @param phi [none]  roll command 
 * @param theta [none]  pitch command 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ascl_rl_action_phi_theta_command_landing_send(mavlink_channel_t chan, float phi, float theta)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING_LEN];
    _mav_put_float(buf, 0, phi);
    _mav_put_float(buf, 4, theta);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING, buf, MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING_MIN_LEN, MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING_LEN, MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING_CRC);
#else
    mavlink_ascl_rl_action_phi_theta_command_landing_t packet;
    packet.phi = phi;
    packet.theta = theta;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING, (const char *)&packet, MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING_MIN_LEN, MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING_LEN, MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING_CRC);
#endif
}

/**
 * @brief Send a ascl_rl_action_phi_theta_command_landing message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ascl_rl_action_phi_theta_command_landing_send_struct(mavlink_channel_t chan, const mavlink_ascl_rl_action_phi_theta_command_landing_t* ascl_rl_action_phi_theta_command_landing)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ascl_rl_action_phi_theta_command_landing_send(chan, ascl_rl_action_phi_theta_command_landing->phi, ascl_rl_action_phi_theta_command_landing->theta);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING, (const char *)ascl_rl_action_phi_theta_command_landing, MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING_MIN_LEN, MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING_LEN, MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING_CRC);
#endif
}

#if MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ascl_rl_action_phi_theta_command_landing_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float phi, float theta)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, phi);
    _mav_put_float(buf, 4, theta);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING, buf, MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING_MIN_LEN, MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING_LEN, MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING_CRC);
#else
    mavlink_ascl_rl_action_phi_theta_command_landing_t *packet = (mavlink_ascl_rl_action_phi_theta_command_landing_t *)msgbuf;
    packet->phi = phi;
    packet->theta = theta;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING, (const char *)packet, MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING_MIN_LEN, MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING_LEN, MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING_CRC);
#endif
}
#endif

#endif

// MESSAGE ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING UNPACKING


/**
 * @brief Get field phi from ascl_rl_action_phi_theta_command_landing message
 *
 * @return [none]  roll command 
 */
static inline float mavlink_msg_ascl_rl_action_phi_theta_command_landing_get_phi(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field theta from ascl_rl_action_phi_theta_command_landing message
 *
 * @return [none]  pitch command 
 */
static inline float mavlink_msg_ascl_rl_action_phi_theta_command_landing_get_theta(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Decode a ascl_rl_action_phi_theta_command_landing message into a struct
 *
 * @param msg The message to decode
 * @param ascl_rl_action_phi_theta_command_landing C-struct to decode the message contents into
 */
static inline void mavlink_msg_ascl_rl_action_phi_theta_command_landing_decode(const mavlink_message_t* msg, mavlink_ascl_rl_action_phi_theta_command_landing_t* ascl_rl_action_phi_theta_command_landing)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ascl_rl_action_phi_theta_command_landing->phi = mavlink_msg_ascl_rl_action_phi_theta_command_landing_get_phi(msg);
    ascl_rl_action_phi_theta_command_landing->theta = mavlink_msg_ascl_rl_action_phi_theta_command_landing_get_theta(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING_LEN? msg->len : MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING_LEN;
        memset(ascl_rl_action_phi_theta_command_landing, 0, MAVLINK_MSG_ID_ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING_LEN);
    memcpy(ascl_rl_action_phi_theta_command_landing, _MAV_PAYLOAD(msg), len);
#endif
}
