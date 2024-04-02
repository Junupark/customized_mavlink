#pragma once
// MESSAGE ASCL_RL_RESET_COMMAND_LANDING PACKING

#define MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING 55600


typedef struct __mavlink_ascl_rl_reset_command_landing_t {
 float x; /*< [m]  multirotor reset position x(inertial) */
 float y; /*< [m]  multirotor reset position y(inertial) */
 float z; /*< [m]  multirotor reset position h(inertial) */
 float dx; /*< [m/s]  multirotor reset velocity x(inertial) */
 float dy; /*< [m/s]  multirotor reset velocity y(inertial) */
 float dz; /*< [m/s]  multirotor reset velocity z(inertial) */
 float roll; /*< [rad]  multirotor reset attitude roll*/
 float pitch; /*< [rad]  multirotor reset attitude pitch*/
 float yaw; /*< [rad]  multirotor reset attitude yaw*/
 float p; /*< [rad/s]  multirotor reset body angular rate p*/
 float q; /*< [rad/s]  multirotor reset body angular rate q*/
 float r; /*< [rad/s]  multirotor reset body angular rate r*/
} mavlink_ascl_rl_reset_command_landing_t;

#define MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING_LEN 48
#define MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING_MIN_LEN 48
#define MAVLINK_MSG_ID_55600_LEN 48
#define MAVLINK_MSG_ID_55600_MIN_LEN 48

#define MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING_CRC 110
#define MAVLINK_MSG_ID_55600_CRC 110



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ASCL_RL_RESET_COMMAND_LANDING { \
    55600, \
    "ASCL_RL_RESET_COMMAND_LANDING", \
    12, \
    {  { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ascl_rl_reset_command_landing_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ascl_rl_reset_command_landing_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ascl_rl_reset_command_landing_t, z) }, \
         { "dx", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_ascl_rl_reset_command_landing_t, dx) }, \
         { "dy", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_ascl_rl_reset_command_landing_t, dy) }, \
         { "dz", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_ascl_rl_reset_command_landing_t, dz) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_ascl_rl_reset_command_landing_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_ascl_rl_reset_command_landing_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_ascl_rl_reset_command_landing_t, yaw) }, \
         { "p", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_ascl_rl_reset_command_landing_t, p) }, \
         { "q", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_ascl_rl_reset_command_landing_t, q) }, \
         { "r", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_ascl_rl_reset_command_landing_t, r) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ASCL_RL_RESET_COMMAND_LANDING { \
    "ASCL_RL_RESET_COMMAND_LANDING", \
    12, \
    {  { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ascl_rl_reset_command_landing_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ascl_rl_reset_command_landing_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ascl_rl_reset_command_landing_t, z) }, \
         { "dx", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_ascl_rl_reset_command_landing_t, dx) }, \
         { "dy", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_ascl_rl_reset_command_landing_t, dy) }, \
         { "dz", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_ascl_rl_reset_command_landing_t, dz) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_ascl_rl_reset_command_landing_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_ascl_rl_reset_command_landing_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_ascl_rl_reset_command_landing_t, yaw) }, \
         { "p", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_ascl_rl_reset_command_landing_t, p) }, \
         { "q", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_ascl_rl_reset_command_landing_t, q) }, \
         { "r", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_ascl_rl_reset_command_landing_t, r) }, \
         } \
}
#endif

/**
 * @brief Pack a ascl_rl_reset_command_landing message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param x [m]  multirotor reset position x(inertial) 
 * @param y [m]  multirotor reset position y(inertial) 
 * @param z [m]  multirotor reset position h(inertial) 
 * @param dx [m/s]  multirotor reset velocity x(inertial) 
 * @param dy [m/s]  multirotor reset velocity y(inertial) 
 * @param dz [m/s]  multirotor reset velocity z(inertial) 
 * @param roll [rad]  multirotor reset attitude roll
 * @param pitch [rad]  multirotor reset attitude pitch
 * @param yaw [rad]  multirotor reset attitude yaw
 * @param p [rad/s]  multirotor reset body angular rate p
 * @param q [rad/s]  multirotor reset body angular rate q
 * @param r [rad/s]  multirotor reset body angular rate r
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_rl_reset_command_landing_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float x, float y, float z, float dx, float dy, float dz, float roll, float pitch, float yaw, float p, float q, float r)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);
    _mav_put_float(buf, 12, dx);
    _mav_put_float(buf, 16, dy);
    _mav_put_float(buf, 20, dz);
    _mav_put_float(buf, 24, roll);
    _mav_put_float(buf, 28, pitch);
    _mav_put_float(buf, 32, yaw);
    _mav_put_float(buf, 36, p);
    _mav_put_float(buf, 40, q);
    _mav_put_float(buf, 44, r);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING_LEN);
#else
    mavlink_ascl_rl_reset_command_landing_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.dx = dx;
    packet.dy = dy;
    packet.dz = dz;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yaw = yaw;
    packet.p = p;
    packet.q = q;
    packet.r = r;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING_MIN_LEN, MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING_LEN, MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING_CRC);
}

/**
 * @brief Pack a ascl_rl_reset_command_landing message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param x [m]  multirotor reset position x(inertial) 
 * @param y [m]  multirotor reset position y(inertial) 
 * @param z [m]  multirotor reset position h(inertial) 
 * @param dx [m/s]  multirotor reset velocity x(inertial) 
 * @param dy [m/s]  multirotor reset velocity y(inertial) 
 * @param dz [m/s]  multirotor reset velocity z(inertial) 
 * @param roll [rad]  multirotor reset attitude roll
 * @param pitch [rad]  multirotor reset attitude pitch
 * @param yaw [rad]  multirotor reset attitude yaw
 * @param p [rad/s]  multirotor reset body angular rate p
 * @param q [rad/s]  multirotor reset body angular rate q
 * @param r [rad/s]  multirotor reset body angular rate r
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_rl_reset_command_landing_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float x,float y,float z,float dx,float dy,float dz,float roll,float pitch,float yaw,float p,float q,float r)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);
    _mav_put_float(buf, 12, dx);
    _mav_put_float(buf, 16, dy);
    _mav_put_float(buf, 20, dz);
    _mav_put_float(buf, 24, roll);
    _mav_put_float(buf, 28, pitch);
    _mav_put_float(buf, 32, yaw);
    _mav_put_float(buf, 36, p);
    _mav_put_float(buf, 40, q);
    _mav_put_float(buf, 44, r);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING_LEN);
#else
    mavlink_ascl_rl_reset_command_landing_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.dx = dx;
    packet.dy = dy;
    packet.dz = dz;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yaw = yaw;
    packet.p = p;
    packet.q = q;
    packet.r = r;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING_MIN_LEN, MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING_LEN, MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING_CRC);
}

/**
 * @brief Encode a ascl_rl_reset_command_landing struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ascl_rl_reset_command_landing C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_rl_reset_command_landing_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ascl_rl_reset_command_landing_t* ascl_rl_reset_command_landing)
{
    return mavlink_msg_ascl_rl_reset_command_landing_pack(system_id, component_id, msg, ascl_rl_reset_command_landing->x, ascl_rl_reset_command_landing->y, ascl_rl_reset_command_landing->z, ascl_rl_reset_command_landing->dx, ascl_rl_reset_command_landing->dy, ascl_rl_reset_command_landing->dz, ascl_rl_reset_command_landing->roll, ascl_rl_reset_command_landing->pitch, ascl_rl_reset_command_landing->yaw, ascl_rl_reset_command_landing->p, ascl_rl_reset_command_landing->q, ascl_rl_reset_command_landing->r);
}

/**
 * @brief Encode a ascl_rl_reset_command_landing struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ascl_rl_reset_command_landing C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_rl_reset_command_landing_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ascl_rl_reset_command_landing_t* ascl_rl_reset_command_landing)
{
    return mavlink_msg_ascl_rl_reset_command_landing_pack_chan(system_id, component_id, chan, msg, ascl_rl_reset_command_landing->x, ascl_rl_reset_command_landing->y, ascl_rl_reset_command_landing->z, ascl_rl_reset_command_landing->dx, ascl_rl_reset_command_landing->dy, ascl_rl_reset_command_landing->dz, ascl_rl_reset_command_landing->roll, ascl_rl_reset_command_landing->pitch, ascl_rl_reset_command_landing->yaw, ascl_rl_reset_command_landing->p, ascl_rl_reset_command_landing->q, ascl_rl_reset_command_landing->r);
}

/**
 * @brief Send a ascl_rl_reset_command_landing message
 * @param chan MAVLink channel to send the message
 *
 * @param x [m]  multirotor reset position x(inertial) 
 * @param y [m]  multirotor reset position y(inertial) 
 * @param z [m]  multirotor reset position h(inertial) 
 * @param dx [m/s]  multirotor reset velocity x(inertial) 
 * @param dy [m/s]  multirotor reset velocity y(inertial) 
 * @param dz [m/s]  multirotor reset velocity z(inertial) 
 * @param roll [rad]  multirotor reset attitude roll
 * @param pitch [rad]  multirotor reset attitude pitch
 * @param yaw [rad]  multirotor reset attitude yaw
 * @param p [rad/s]  multirotor reset body angular rate p
 * @param q [rad/s]  multirotor reset body angular rate q
 * @param r [rad/s]  multirotor reset body angular rate r
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ascl_rl_reset_command_landing_send(mavlink_channel_t chan, float x, float y, float z, float dx, float dy, float dz, float roll, float pitch, float yaw, float p, float q, float r)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);
    _mav_put_float(buf, 12, dx);
    _mav_put_float(buf, 16, dy);
    _mav_put_float(buf, 20, dz);
    _mav_put_float(buf, 24, roll);
    _mav_put_float(buf, 28, pitch);
    _mav_put_float(buf, 32, yaw);
    _mav_put_float(buf, 36, p);
    _mav_put_float(buf, 40, q);
    _mav_put_float(buf, 44, r);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING, buf, MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING_MIN_LEN, MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING_LEN, MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING_CRC);
#else
    mavlink_ascl_rl_reset_command_landing_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.dx = dx;
    packet.dy = dy;
    packet.dz = dz;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yaw = yaw;
    packet.p = p;
    packet.q = q;
    packet.r = r;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING, (const char *)&packet, MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING_MIN_LEN, MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING_LEN, MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING_CRC);
#endif
}

/**
 * @brief Send a ascl_rl_reset_command_landing message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ascl_rl_reset_command_landing_send_struct(mavlink_channel_t chan, const mavlink_ascl_rl_reset_command_landing_t* ascl_rl_reset_command_landing)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ascl_rl_reset_command_landing_send(chan, ascl_rl_reset_command_landing->x, ascl_rl_reset_command_landing->y, ascl_rl_reset_command_landing->z, ascl_rl_reset_command_landing->dx, ascl_rl_reset_command_landing->dy, ascl_rl_reset_command_landing->dz, ascl_rl_reset_command_landing->roll, ascl_rl_reset_command_landing->pitch, ascl_rl_reset_command_landing->yaw, ascl_rl_reset_command_landing->p, ascl_rl_reset_command_landing->q, ascl_rl_reset_command_landing->r);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING, (const char *)ascl_rl_reset_command_landing, MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING_MIN_LEN, MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING_LEN, MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING_CRC);
#endif
}

#if MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ascl_rl_reset_command_landing_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float x, float y, float z, float dx, float dy, float dz, float roll, float pitch, float yaw, float p, float q, float r)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);
    _mav_put_float(buf, 12, dx);
    _mav_put_float(buf, 16, dy);
    _mav_put_float(buf, 20, dz);
    _mav_put_float(buf, 24, roll);
    _mav_put_float(buf, 28, pitch);
    _mav_put_float(buf, 32, yaw);
    _mav_put_float(buf, 36, p);
    _mav_put_float(buf, 40, q);
    _mav_put_float(buf, 44, r);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING, buf, MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING_MIN_LEN, MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING_LEN, MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING_CRC);
#else
    mavlink_ascl_rl_reset_command_landing_t *packet = (mavlink_ascl_rl_reset_command_landing_t *)msgbuf;
    packet->x = x;
    packet->y = y;
    packet->z = z;
    packet->dx = dx;
    packet->dy = dy;
    packet->dz = dz;
    packet->roll = roll;
    packet->pitch = pitch;
    packet->yaw = yaw;
    packet->p = p;
    packet->q = q;
    packet->r = r;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING, (const char *)packet, MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING_MIN_LEN, MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING_LEN, MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING_CRC);
#endif
}
#endif

#endif

// MESSAGE ASCL_RL_RESET_COMMAND_LANDING UNPACKING


/**
 * @brief Get field x from ascl_rl_reset_command_landing message
 *
 * @return [m]  multirotor reset position x(inertial) 
 */
static inline float mavlink_msg_ascl_rl_reset_command_landing_get_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field y from ascl_rl_reset_command_landing message
 *
 * @return [m]  multirotor reset position y(inertial) 
 */
static inline float mavlink_msg_ascl_rl_reset_command_landing_get_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field z from ascl_rl_reset_command_landing message
 *
 * @return [m]  multirotor reset position h(inertial) 
 */
static inline float mavlink_msg_ascl_rl_reset_command_landing_get_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field dx from ascl_rl_reset_command_landing message
 *
 * @return [m/s]  multirotor reset velocity x(inertial) 
 */
static inline float mavlink_msg_ascl_rl_reset_command_landing_get_dx(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field dy from ascl_rl_reset_command_landing message
 *
 * @return [m/s]  multirotor reset velocity y(inertial) 
 */
static inline float mavlink_msg_ascl_rl_reset_command_landing_get_dy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field dz from ascl_rl_reset_command_landing message
 *
 * @return [m/s]  multirotor reset velocity z(inertial) 
 */
static inline float mavlink_msg_ascl_rl_reset_command_landing_get_dz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field roll from ascl_rl_reset_command_landing message
 *
 * @return [rad]  multirotor reset attitude roll
 */
static inline float mavlink_msg_ascl_rl_reset_command_landing_get_roll(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field pitch from ascl_rl_reset_command_landing message
 *
 * @return [rad]  multirotor reset attitude pitch
 */
static inline float mavlink_msg_ascl_rl_reset_command_landing_get_pitch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field yaw from ascl_rl_reset_command_landing message
 *
 * @return [rad]  multirotor reset attitude yaw
 */
static inline float mavlink_msg_ascl_rl_reset_command_landing_get_yaw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field p from ascl_rl_reset_command_landing message
 *
 * @return [rad/s]  multirotor reset body angular rate p
 */
static inline float mavlink_msg_ascl_rl_reset_command_landing_get_p(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field q from ascl_rl_reset_command_landing message
 *
 * @return [rad/s]  multirotor reset body angular rate q
 */
static inline float mavlink_msg_ascl_rl_reset_command_landing_get_q(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field r from ascl_rl_reset_command_landing message
 *
 * @return [rad/s]  multirotor reset body angular rate r
 */
static inline float mavlink_msg_ascl_rl_reset_command_landing_get_r(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Decode a ascl_rl_reset_command_landing message into a struct
 *
 * @param msg The message to decode
 * @param ascl_rl_reset_command_landing C-struct to decode the message contents into
 */
static inline void mavlink_msg_ascl_rl_reset_command_landing_decode(const mavlink_message_t* msg, mavlink_ascl_rl_reset_command_landing_t* ascl_rl_reset_command_landing)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ascl_rl_reset_command_landing->x = mavlink_msg_ascl_rl_reset_command_landing_get_x(msg);
    ascl_rl_reset_command_landing->y = mavlink_msg_ascl_rl_reset_command_landing_get_y(msg);
    ascl_rl_reset_command_landing->z = mavlink_msg_ascl_rl_reset_command_landing_get_z(msg);
    ascl_rl_reset_command_landing->dx = mavlink_msg_ascl_rl_reset_command_landing_get_dx(msg);
    ascl_rl_reset_command_landing->dy = mavlink_msg_ascl_rl_reset_command_landing_get_dy(msg);
    ascl_rl_reset_command_landing->dz = mavlink_msg_ascl_rl_reset_command_landing_get_dz(msg);
    ascl_rl_reset_command_landing->roll = mavlink_msg_ascl_rl_reset_command_landing_get_roll(msg);
    ascl_rl_reset_command_landing->pitch = mavlink_msg_ascl_rl_reset_command_landing_get_pitch(msg);
    ascl_rl_reset_command_landing->yaw = mavlink_msg_ascl_rl_reset_command_landing_get_yaw(msg);
    ascl_rl_reset_command_landing->p = mavlink_msg_ascl_rl_reset_command_landing_get_p(msg);
    ascl_rl_reset_command_landing->q = mavlink_msg_ascl_rl_reset_command_landing_get_q(msg);
    ascl_rl_reset_command_landing->r = mavlink_msg_ascl_rl_reset_command_landing_get_r(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING_LEN? msg->len : MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING_LEN;
        memset(ascl_rl_reset_command_landing, 0, MAVLINK_MSG_ID_ASCL_RL_RESET_COMMAND_LANDING_LEN);
    memcpy(ascl_rl_reset_command_landing, _MAV_PAYLOAD(msg), len);
#endif
}
