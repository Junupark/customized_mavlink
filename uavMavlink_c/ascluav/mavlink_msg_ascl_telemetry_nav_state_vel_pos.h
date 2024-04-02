#pragma once
// MESSAGE ASCL_TELEMETRY_NAV_STATE_VEL_POS PACKING

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS 55299

MAVPACKED(
typedef struct __mavlink_ascl_telemetry_nav_state_vel_pos_t {
 uint32_t timems; /*< [ms] FC time in ms*/
 float acc[3]; /*< [m/s] Linear acceleration in m/s2*/
 float velNed[3]; /*< [m/s] Velocity of a vehicle in NED frame in m/s*/
 float ned[3]; /*< [m] NED position in m*/
 uint32_t llh[3]; /*< [degE7,mm] latitude/longitude/height in degE7/degE7/mm as integer*/
 float covVelPos[21]; /*<  Covariance of ned velocity and ned position*/
 uint8_t fused; /*<  Flags whether sensor(s) data is fused*/
}) mavlink_ascl_telemetry_nav_state_vel_pos_t;

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_LEN 137
#define MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_MIN_LEN 137
#define MAVLINK_MSG_ID_55299_LEN 137
#define MAVLINK_MSG_ID_55299_MIN_LEN 137

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_CRC 114
#define MAVLINK_MSG_ID_55299_CRC 114

#define MAVLINK_MSG_ASCL_TELEMETRY_NAV_STATE_VEL_POS_FIELD_ACC_LEN 3
#define MAVLINK_MSG_ASCL_TELEMETRY_NAV_STATE_VEL_POS_FIELD_VELNED_LEN 3
#define MAVLINK_MSG_ASCL_TELEMETRY_NAV_STATE_VEL_POS_FIELD_NED_LEN 3
#define MAVLINK_MSG_ASCL_TELEMETRY_NAV_STATE_VEL_POS_FIELD_LLH_LEN 3
#define MAVLINK_MSG_ASCL_TELEMETRY_NAV_STATE_VEL_POS_FIELD_COVVELPOS_LEN 21

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_NAV_STATE_VEL_POS { \
    55299, \
    "ASCL_TELEMETRY_NAV_STATE_VEL_POS", \
    7, \
    {  { "timems", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ascl_telemetry_nav_state_vel_pos_t, timems) }, \
         { "acc", NULL, MAVLINK_TYPE_FLOAT, 3, 4, offsetof(mavlink_ascl_telemetry_nav_state_vel_pos_t, acc) }, \
         { "velNed", NULL, MAVLINK_TYPE_FLOAT, 3, 16, offsetof(mavlink_ascl_telemetry_nav_state_vel_pos_t, velNed) }, \
         { "ned", NULL, MAVLINK_TYPE_FLOAT, 3, 28, offsetof(mavlink_ascl_telemetry_nav_state_vel_pos_t, ned) }, \
         { "llh", NULL, MAVLINK_TYPE_UINT32_T, 3, 40, offsetof(mavlink_ascl_telemetry_nav_state_vel_pos_t, llh) }, \
         { "covVelPos", NULL, MAVLINK_TYPE_FLOAT, 21, 52, offsetof(mavlink_ascl_telemetry_nav_state_vel_pos_t, covVelPos) }, \
         { "fused", NULL, MAVLINK_TYPE_UINT8_T, 0, 136, offsetof(mavlink_ascl_telemetry_nav_state_vel_pos_t, fused) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_NAV_STATE_VEL_POS { \
    "ASCL_TELEMETRY_NAV_STATE_VEL_POS", \
    7, \
    {  { "timems", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ascl_telemetry_nav_state_vel_pos_t, timems) }, \
         { "acc", NULL, MAVLINK_TYPE_FLOAT, 3, 4, offsetof(mavlink_ascl_telemetry_nav_state_vel_pos_t, acc) }, \
         { "velNed", NULL, MAVLINK_TYPE_FLOAT, 3, 16, offsetof(mavlink_ascl_telemetry_nav_state_vel_pos_t, velNed) }, \
         { "ned", NULL, MAVLINK_TYPE_FLOAT, 3, 28, offsetof(mavlink_ascl_telemetry_nav_state_vel_pos_t, ned) }, \
         { "llh", NULL, MAVLINK_TYPE_UINT32_T, 3, 40, offsetof(mavlink_ascl_telemetry_nav_state_vel_pos_t, llh) }, \
         { "covVelPos", NULL, MAVLINK_TYPE_FLOAT, 21, 52, offsetof(mavlink_ascl_telemetry_nav_state_vel_pos_t, covVelPos) }, \
         { "fused", NULL, MAVLINK_TYPE_UINT8_T, 0, 136, offsetof(mavlink_ascl_telemetry_nav_state_vel_pos_t, fused) }, \
         } \
}
#endif

/**
 * @brief Pack a ascl_telemetry_nav_state_vel_pos message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timems [ms] FC time in ms
 * @param acc [m/s] Linear acceleration in m/s2
 * @param velNed [m/s] Velocity of a vehicle in NED frame in m/s
 * @param ned [m] NED position in m
 * @param llh [degE7,mm] latitude/longitude/height in degE7/degE7/mm as integer
 * @param covVelPos  Covariance of ned velocity and ned position
 * @param fused  Flags whether sensor(s) data is fused
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_vel_pos_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t timems, const float *acc, const float *velNed, const float *ned, const uint32_t *llh, const float *covVelPos, uint8_t fused)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_uint8_t(buf, 136, fused);
    _mav_put_float_array(buf, 4, acc, 3);
    _mav_put_float_array(buf, 16, velNed, 3);
    _mav_put_float_array(buf, 28, ned, 3);
    _mav_put_uint32_t_array(buf, 40, llh, 3);
    _mav_put_float_array(buf, 52, covVelPos, 21);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_LEN);
#else
    mavlink_ascl_telemetry_nav_state_vel_pos_t packet;
    packet.timems = timems;
    packet.fused = fused;
    mav_array_memcpy(packet.acc, acc, sizeof(float)*3);
    mav_array_memcpy(packet.velNed, velNed, sizeof(float)*3);
    mav_array_memcpy(packet.ned, ned, sizeof(float)*3);
    mav_array_memcpy(packet.llh, llh, sizeof(uint32_t)*3);
    mav_array_memcpy(packet.covVelPos, covVelPos, sizeof(float)*21);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_CRC);
}

/**
 * @brief Pack a ascl_telemetry_nav_state_vel_pos message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timems [ms] FC time in ms
 * @param acc [m/s] Linear acceleration in m/s2
 * @param velNed [m/s] Velocity of a vehicle in NED frame in m/s
 * @param ned [m] NED position in m
 * @param llh [degE7,mm] latitude/longitude/height in degE7/degE7/mm as integer
 * @param covVelPos  Covariance of ned velocity and ned position
 * @param fused  Flags whether sensor(s) data is fused
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_vel_pos_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t timems,const float *acc,const float *velNed,const float *ned,const uint32_t *llh,const float *covVelPos,uint8_t fused)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_uint8_t(buf, 136, fused);
    _mav_put_float_array(buf, 4, acc, 3);
    _mav_put_float_array(buf, 16, velNed, 3);
    _mav_put_float_array(buf, 28, ned, 3);
    _mav_put_uint32_t_array(buf, 40, llh, 3);
    _mav_put_float_array(buf, 52, covVelPos, 21);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_LEN);
#else
    mavlink_ascl_telemetry_nav_state_vel_pos_t packet;
    packet.timems = timems;
    packet.fused = fused;
    mav_array_memcpy(packet.acc, acc, sizeof(float)*3);
    mav_array_memcpy(packet.velNed, velNed, sizeof(float)*3);
    mav_array_memcpy(packet.ned, ned, sizeof(float)*3);
    mav_array_memcpy(packet.llh, llh, sizeof(uint32_t)*3);
    mav_array_memcpy(packet.covVelPos, covVelPos, sizeof(float)*21);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_CRC);
}

/**
 * @brief Encode a ascl_telemetry_nav_state_vel_pos struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ascl_telemetry_nav_state_vel_pos C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_vel_pos_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ascl_telemetry_nav_state_vel_pos_t* ascl_telemetry_nav_state_vel_pos)
{
    return mavlink_msg_ascl_telemetry_nav_state_vel_pos_pack(system_id, component_id, msg, ascl_telemetry_nav_state_vel_pos->timems, ascl_telemetry_nav_state_vel_pos->acc, ascl_telemetry_nav_state_vel_pos->velNed, ascl_telemetry_nav_state_vel_pos->ned, ascl_telemetry_nav_state_vel_pos->llh, ascl_telemetry_nav_state_vel_pos->covVelPos, ascl_telemetry_nav_state_vel_pos->fused);
}

/**
 * @brief Encode a ascl_telemetry_nav_state_vel_pos struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ascl_telemetry_nav_state_vel_pos C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_vel_pos_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ascl_telemetry_nav_state_vel_pos_t* ascl_telemetry_nav_state_vel_pos)
{
    return mavlink_msg_ascl_telemetry_nav_state_vel_pos_pack_chan(system_id, component_id, chan, msg, ascl_telemetry_nav_state_vel_pos->timems, ascl_telemetry_nav_state_vel_pos->acc, ascl_telemetry_nav_state_vel_pos->velNed, ascl_telemetry_nav_state_vel_pos->ned, ascl_telemetry_nav_state_vel_pos->llh, ascl_telemetry_nav_state_vel_pos->covVelPos, ascl_telemetry_nav_state_vel_pos->fused);
}

/**
 * @brief Send a ascl_telemetry_nav_state_vel_pos message
 * @param chan MAVLink channel to send the message
 *
 * @param timems [ms] FC time in ms
 * @param acc [m/s] Linear acceleration in m/s2
 * @param velNed [m/s] Velocity of a vehicle in NED frame in m/s
 * @param ned [m] NED position in m
 * @param llh [degE7,mm] latitude/longitude/height in degE7/degE7/mm as integer
 * @param covVelPos  Covariance of ned velocity and ned position
 * @param fused  Flags whether sensor(s) data is fused
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ascl_telemetry_nav_state_vel_pos_send(mavlink_channel_t chan, uint32_t timems, const float *acc, const float *velNed, const float *ned, const uint32_t *llh, const float *covVelPos, uint8_t fused)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_uint8_t(buf, 136, fused);
    _mav_put_float_array(buf, 4, acc, 3);
    _mav_put_float_array(buf, 16, velNed, 3);
    _mav_put_float_array(buf, 28, ned, 3);
    _mav_put_uint32_t_array(buf, 40, llh, 3);
    _mav_put_float_array(buf, 52, covVelPos, 21);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS, buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_CRC);
#else
    mavlink_ascl_telemetry_nav_state_vel_pos_t packet;
    packet.timems = timems;
    packet.fused = fused;
    mav_array_memcpy(packet.acc, acc, sizeof(float)*3);
    mav_array_memcpy(packet.velNed, velNed, sizeof(float)*3);
    mav_array_memcpy(packet.ned, ned, sizeof(float)*3);
    mav_array_memcpy(packet.llh, llh, sizeof(uint32_t)*3);
    mav_array_memcpy(packet.covVelPos, covVelPos, sizeof(float)*21);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS, (const char *)&packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_CRC);
#endif
}

/**
 * @brief Send a ascl_telemetry_nav_state_vel_pos message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ascl_telemetry_nav_state_vel_pos_send_struct(mavlink_channel_t chan, const mavlink_ascl_telemetry_nav_state_vel_pos_t* ascl_telemetry_nav_state_vel_pos)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ascl_telemetry_nav_state_vel_pos_send(chan, ascl_telemetry_nav_state_vel_pos->timems, ascl_telemetry_nav_state_vel_pos->acc, ascl_telemetry_nav_state_vel_pos->velNed, ascl_telemetry_nav_state_vel_pos->ned, ascl_telemetry_nav_state_vel_pos->llh, ascl_telemetry_nav_state_vel_pos->covVelPos, ascl_telemetry_nav_state_vel_pos->fused);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS, (const char *)ascl_telemetry_nav_state_vel_pos, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_CRC);
#endif
}

#if MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ascl_telemetry_nav_state_vel_pos_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t timems, const float *acc, const float *velNed, const float *ned, const uint32_t *llh, const float *covVelPos, uint8_t fused)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_uint8_t(buf, 136, fused);
    _mav_put_float_array(buf, 4, acc, 3);
    _mav_put_float_array(buf, 16, velNed, 3);
    _mav_put_float_array(buf, 28, ned, 3);
    _mav_put_uint32_t_array(buf, 40, llh, 3);
    _mav_put_float_array(buf, 52, covVelPos, 21);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS, buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_CRC);
#else
    mavlink_ascl_telemetry_nav_state_vel_pos_t *packet = (mavlink_ascl_telemetry_nav_state_vel_pos_t *)msgbuf;
    packet->timems = timems;
    packet->fused = fused;
    mav_array_memcpy(packet->acc, acc, sizeof(float)*3);
    mav_array_memcpy(packet->velNed, velNed, sizeof(float)*3);
    mav_array_memcpy(packet->ned, ned, sizeof(float)*3);
    mav_array_memcpy(packet->llh, llh, sizeof(uint32_t)*3);
    mav_array_memcpy(packet->covVelPos, covVelPos, sizeof(float)*21);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS, (const char *)packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_CRC);
#endif
}
#endif

#endif

// MESSAGE ASCL_TELEMETRY_NAV_STATE_VEL_POS UNPACKING


/**
 * @brief Get field timems from ascl_telemetry_nav_state_vel_pos message
 *
 * @return [ms] FC time in ms
 */
static inline uint32_t mavlink_msg_ascl_telemetry_nav_state_vel_pos_get_timems(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field acc from ascl_telemetry_nav_state_vel_pos message
 *
 * @return [m/s] Linear acceleration in m/s2
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_vel_pos_get_acc(const mavlink_message_t* msg, float *acc)
{
    return _MAV_RETURN_float_array(msg, acc, 3,  4);
}

/**
 * @brief Get field velNed from ascl_telemetry_nav_state_vel_pos message
 *
 * @return [m/s] Velocity of a vehicle in NED frame in m/s
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_vel_pos_get_velNed(const mavlink_message_t* msg, float *velNed)
{
    return _MAV_RETURN_float_array(msg, velNed, 3,  16);
}

/**
 * @brief Get field ned from ascl_telemetry_nav_state_vel_pos message
 *
 * @return [m] NED position in m
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_vel_pos_get_ned(const mavlink_message_t* msg, float *ned)
{
    return _MAV_RETURN_float_array(msg, ned, 3,  28);
}

/**
 * @brief Get field llh from ascl_telemetry_nav_state_vel_pos message
 *
 * @return [degE7,mm] latitude/longitude/height in degE7/degE7/mm as integer
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_vel_pos_get_llh(const mavlink_message_t* msg, uint32_t *llh)
{
    return _MAV_RETURN_uint32_t_array(msg, llh, 3,  40);
}

/**
 * @brief Get field covVelPos from ascl_telemetry_nav_state_vel_pos message
 *
 * @return  Covariance of ned velocity and ned position
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_vel_pos_get_covVelPos(const mavlink_message_t* msg, float *covVelPos)
{
    return _MAV_RETURN_float_array(msg, covVelPos, 21,  52);
}

/**
 * @brief Get field fused from ascl_telemetry_nav_state_vel_pos message
 *
 * @return  Flags whether sensor(s) data is fused
 */
static inline uint8_t mavlink_msg_ascl_telemetry_nav_state_vel_pos_get_fused(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  136);
}

/**
 * @brief Decode a ascl_telemetry_nav_state_vel_pos message into a struct
 *
 * @param msg The message to decode
 * @param ascl_telemetry_nav_state_vel_pos C-struct to decode the message contents into
 */
static inline void mavlink_msg_ascl_telemetry_nav_state_vel_pos_decode(const mavlink_message_t* msg, mavlink_ascl_telemetry_nav_state_vel_pos_t* ascl_telemetry_nav_state_vel_pos)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ascl_telemetry_nav_state_vel_pos->timems = mavlink_msg_ascl_telemetry_nav_state_vel_pos_get_timems(msg);
    mavlink_msg_ascl_telemetry_nav_state_vel_pos_get_acc(msg, ascl_telemetry_nav_state_vel_pos->acc);
    mavlink_msg_ascl_telemetry_nav_state_vel_pos_get_velNed(msg, ascl_telemetry_nav_state_vel_pos->velNed);
    mavlink_msg_ascl_telemetry_nav_state_vel_pos_get_ned(msg, ascl_telemetry_nav_state_vel_pos->ned);
    mavlink_msg_ascl_telemetry_nav_state_vel_pos_get_llh(msg, ascl_telemetry_nav_state_vel_pos->llh);
    mavlink_msg_ascl_telemetry_nav_state_vel_pos_get_covVelPos(msg, ascl_telemetry_nav_state_vel_pos->covVelPos);
    ascl_telemetry_nav_state_vel_pos->fused = mavlink_msg_ascl_telemetry_nav_state_vel_pos_get_fused(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_LEN? msg->len : MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_LEN;
        memset(ascl_telemetry_nav_state_vel_pos, 0, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_LEN);
    memcpy(ascl_telemetry_nav_state_vel_pos, _MAV_PAYLOAD(msg), len);
#endif
}
