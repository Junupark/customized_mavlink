#pragma once
// MESSAGE ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE PACKING

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE 55296

MAVPACKED(
typedef struct __mavlink_ascl_telemetry_nav_state_regular_value_t {
 uint32_t timems; /*< [ms] FC time in ms*/
 float pqr[3]; /*< [rad/s] Angular rate in rad/s*/
 float euler[3]; /*< [deg] Euler angle in deg*/
 float quat[4]; /*< [none] Quaternion*/
 float acc[3]; /*< [m/s] Linear acceleration in m/s2*/
 float velNed[3]; /*< [m/s] Velocity of a vehicle in NED frame in m/s*/
 float ned[3]; /*< [m] NED position in m*/
 uint32_t llh[3]; /*< [degE7,mm] latitude/longitude/height in degE7/degE7/mm as integer*/
 uint16_t navStatus; /*< [none] navigational status. Filter validity/Sensor validity*/
 uint16_t filterStatus; /*< [none] filter status. msB: calibrated sensors on hot, lsB: fused*/
}) mavlink_ascl_telemetry_nav_state_regular_value_t;

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_LEN 96
#define MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_MIN_LEN 96
#define MAVLINK_MSG_ID_55296_LEN 96
#define MAVLINK_MSG_ID_55296_MIN_LEN 96

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_CRC 141
#define MAVLINK_MSG_ID_55296_CRC 141

#define MAVLINK_MSG_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_FIELD_PQR_LEN 3
#define MAVLINK_MSG_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_FIELD_EULER_LEN 3
#define MAVLINK_MSG_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_FIELD_QUAT_LEN 4
#define MAVLINK_MSG_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_FIELD_ACC_LEN 3
#define MAVLINK_MSG_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_FIELD_VELNED_LEN 3
#define MAVLINK_MSG_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_FIELD_NED_LEN 3
#define MAVLINK_MSG_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_FIELD_LLH_LEN 3

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE { \
    55296, \
    "ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE", \
    10, \
    {  { "timems", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ascl_telemetry_nav_state_regular_value_t, timems) }, \
         { "pqr", NULL, MAVLINK_TYPE_FLOAT, 3, 4, offsetof(mavlink_ascl_telemetry_nav_state_regular_value_t, pqr) }, \
         { "euler", NULL, MAVLINK_TYPE_FLOAT, 3, 16, offsetof(mavlink_ascl_telemetry_nav_state_regular_value_t, euler) }, \
         { "quat", NULL, MAVLINK_TYPE_FLOAT, 4, 28, offsetof(mavlink_ascl_telemetry_nav_state_regular_value_t, quat) }, \
         { "acc", NULL, MAVLINK_TYPE_FLOAT, 3, 44, offsetof(mavlink_ascl_telemetry_nav_state_regular_value_t, acc) }, \
         { "velNed", NULL, MAVLINK_TYPE_FLOAT, 3, 56, offsetof(mavlink_ascl_telemetry_nav_state_regular_value_t, velNed) }, \
         { "ned", NULL, MAVLINK_TYPE_FLOAT, 3, 68, offsetof(mavlink_ascl_telemetry_nav_state_regular_value_t, ned) }, \
         { "llh", NULL, MAVLINK_TYPE_UINT32_T, 3, 80, offsetof(mavlink_ascl_telemetry_nav_state_regular_value_t, llh) }, \
         { "navStatus", NULL, MAVLINK_TYPE_UINT16_T, 0, 92, offsetof(mavlink_ascl_telemetry_nav_state_regular_value_t, navStatus) }, \
         { "filterStatus", NULL, MAVLINK_TYPE_UINT16_T, 0, 94, offsetof(mavlink_ascl_telemetry_nav_state_regular_value_t, filterStatus) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE { \
    "ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE", \
    10, \
    {  { "timems", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ascl_telemetry_nav_state_regular_value_t, timems) }, \
         { "pqr", NULL, MAVLINK_TYPE_FLOAT, 3, 4, offsetof(mavlink_ascl_telemetry_nav_state_regular_value_t, pqr) }, \
         { "euler", NULL, MAVLINK_TYPE_FLOAT, 3, 16, offsetof(mavlink_ascl_telemetry_nav_state_regular_value_t, euler) }, \
         { "quat", NULL, MAVLINK_TYPE_FLOAT, 4, 28, offsetof(mavlink_ascl_telemetry_nav_state_regular_value_t, quat) }, \
         { "acc", NULL, MAVLINK_TYPE_FLOAT, 3, 44, offsetof(mavlink_ascl_telemetry_nav_state_regular_value_t, acc) }, \
         { "velNed", NULL, MAVLINK_TYPE_FLOAT, 3, 56, offsetof(mavlink_ascl_telemetry_nav_state_regular_value_t, velNed) }, \
         { "ned", NULL, MAVLINK_TYPE_FLOAT, 3, 68, offsetof(mavlink_ascl_telemetry_nav_state_regular_value_t, ned) }, \
         { "llh", NULL, MAVLINK_TYPE_UINT32_T, 3, 80, offsetof(mavlink_ascl_telemetry_nav_state_regular_value_t, llh) }, \
         { "navStatus", NULL, MAVLINK_TYPE_UINT16_T, 0, 92, offsetof(mavlink_ascl_telemetry_nav_state_regular_value_t, navStatus) }, \
         { "filterStatus", NULL, MAVLINK_TYPE_UINT16_T, 0, 94, offsetof(mavlink_ascl_telemetry_nav_state_regular_value_t, filterStatus) }, \
         } \
}
#endif

/**
 * @brief Pack a ascl_telemetry_nav_state_regular_value message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timems [ms] FC time in ms
 * @param pqr [rad/s] Angular rate in rad/s
 * @param euler [deg] Euler angle in deg
 * @param quat [none] Quaternion
 * @param acc [m/s] Linear acceleration in m/s2
 * @param velNed [m/s] Velocity of a vehicle in NED frame in m/s
 * @param ned [m] NED position in m
 * @param llh [degE7,mm] latitude/longitude/height in degE7/degE7/mm as integer
 * @param navStatus [none] navigational status. Filter validity/Sensor validity
 * @param filterStatus [none] filter status. msB: calibrated sensors on hot, lsB: fused
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_regular_value_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t timems, const float *pqr, const float *euler, const float *quat, const float *acc, const float *velNed, const float *ned, const uint32_t *llh, uint16_t navStatus, uint16_t filterStatus)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_uint16_t(buf, 92, navStatus);
    _mav_put_uint16_t(buf, 94, filterStatus);
    _mav_put_float_array(buf, 4, pqr, 3);
    _mav_put_float_array(buf, 16, euler, 3);
    _mav_put_float_array(buf, 28, quat, 4);
    _mav_put_float_array(buf, 44, acc, 3);
    _mav_put_float_array(buf, 56, velNed, 3);
    _mav_put_float_array(buf, 68, ned, 3);
    _mav_put_uint32_t_array(buf, 80, llh, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_LEN);
#else
    mavlink_ascl_telemetry_nav_state_regular_value_t packet;
    packet.timems = timems;
    packet.navStatus = navStatus;
    packet.filterStatus = filterStatus;
    mav_array_memcpy(packet.pqr, pqr, sizeof(float)*3);
    mav_array_memcpy(packet.euler, euler, sizeof(float)*3);
    mav_array_memcpy(packet.quat, quat, sizeof(float)*4);
    mav_array_memcpy(packet.acc, acc, sizeof(float)*3);
    mav_array_memcpy(packet.velNed, velNed, sizeof(float)*3);
    mav_array_memcpy(packet.ned, ned, sizeof(float)*3);
    mav_array_memcpy(packet.llh, llh, sizeof(uint32_t)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_CRC);
}

/**
 * @brief Pack a ascl_telemetry_nav_state_regular_value message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timems [ms] FC time in ms
 * @param pqr [rad/s] Angular rate in rad/s
 * @param euler [deg] Euler angle in deg
 * @param quat [none] Quaternion
 * @param acc [m/s] Linear acceleration in m/s2
 * @param velNed [m/s] Velocity of a vehicle in NED frame in m/s
 * @param ned [m] NED position in m
 * @param llh [degE7,mm] latitude/longitude/height in degE7/degE7/mm as integer
 * @param navStatus [none] navigational status. Filter validity/Sensor validity
 * @param filterStatus [none] filter status. msB: calibrated sensors on hot, lsB: fused
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_regular_value_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t timems,const float *pqr,const float *euler,const float *quat,const float *acc,const float *velNed,const float *ned,const uint32_t *llh,uint16_t navStatus,uint16_t filterStatus)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_uint16_t(buf, 92, navStatus);
    _mav_put_uint16_t(buf, 94, filterStatus);
    _mav_put_float_array(buf, 4, pqr, 3);
    _mav_put_float_array(buf, 16, euler, 3);
    _mav_put_float_array(buf, 28, quat, 4);
    _mav_put_float_array(buf, 44, acc, 3);
    _mav_put_float_array(buf, 56, velNed, 3);
    _mav_put_float_array(buf, 68, ned, 3);
    _mav_put_uint32_t_array(buf, 80, llh, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_LEN);
#else
    mavlink_ascl_telemetry_nav_state_regular_value_t packet;
    packet.timems = timems;
    packet.navStatus = navStatus;
    packet.filterStatus = filterStatus;
    mav_array_memcpy(packet.pqr, pqr, sizeof(float)*3);
    mav_array_memcpy(packet.euler, euler, sizeof(float)*3);
    mav_array_memcpy(packet.quat, quat, sizeof(float)*4);
    mav_array_memcpy(packet.acc, acc, sizeof(float)*3);
    mav_array_memcpy(packet.velNed, velNed, sizeof(float)*3);
    mav_array_memcpy(packet.ned, ned, sizeof(float)*3);
    mav_array_memcpy(packet.llh, llh, sizeof(uint32_t)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_CRC);
}

/**
 * @brief Encode a ascl_telemetry_nav_state_regular_value struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ascl_telemetry_nav_state_regular_value C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_regular_value_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ascl_telemetry_nav_state_regular_value_t* ascl_telemetry_nav_state_regular_value)
{
    return mavlink_msg_ascl_telemetry_nav_state_regular_value_pack(system_id, component_id, msg, ascl_telemetry_nav_state_regular_value->timems, ascl_telemetry_nav_state_regular_value->pqr, ascl_telemetry_nav_state_regular_value->euler, ascl_telemetry_nav_state_regular_value->quat, ascl_telemetry_nav_state_regular_value->acc, ascl_telemetry_nav_state_regular_value->velNed, ascl_telemetry_nav_state_regular_value->ned, ascl_telemetry_nav_state_regular_value->llh, ascl_telemetry_nav_state_regular_value->navStatus, ascl_telemetry_nav_state_regular_value->filterStatus);
}

/**
 * @brief Encode a ascl_telemetry_nav_state_regular_value struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ascl_telemetry_nav_state_regular_value C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_regular_value_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ascl_telemetry_nav_state_regular_value_t* ascl_telemetry_nav_state_regular_value)
{
    return mavlink_msg_ascl_telemetry_nav_state_regular_value_pack_chan(system_id, component_id, chan, msg, ascl_telemetry_nav_state_regular_value->timems, ascl_telemetry_nav_state_regular_value->pqr, ascl_telemetry_nav_state_regular_value->euler, ascl_telemetry_nav_state_regular_value->quat, ascl_telemetry_nav_state_regular_value->acc, ascl_telemetry_nav_state_regular_value->velNed, ascl_telemetry_nav_state_regular_value->ned, ascl_telemetry_nav_state_regular_value->llh, ascl_telemetry_nav_state_regular_value->navStatus, ascl_telemetry_nav_state_regular_value->filterStatus);
}

/**
 * @brief Send a ascl_telemetry_nav_state_regular_value message
 * @param chan MAVLink channel to send the message
 *
 * @param timems [ms] FC time in ms
 * @param pqr [rad/s] Angular rate in rad/s
 * @param euler [deg] Euler angle in deg
 * @param quat [none] Quaternion
 * @param acc [m/s] Linear acceleration in m/s2
 * @param velNed [m/s] Velocity of a vehicle in NED frame in m/s
 * @param ned [m] NED position in m
 * @param llh [degE7,mm] latitude/longitude/height in degE7/degE7/mm as integer
 * @param navStatus [none] navigational status. Filter validity/Sensor validity
 * @param filterStatus [none] filter status. msB: calibrated sensors on hot, lsB: fused
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ascl_telemetry_nav_state_regular_value_send(mavlink_channel_t chan, uint32_t timems, const float *pqr, const float *euler, const float *quat, const float *acc, const float *velNed, const float *ned, const uint32_t *llh, uint16_t navStatus, uint16_t filterStatus)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_uint16_t(buf, 92, navStatus);
    _mav_put_uint16_t(buf, 94, filterStatus);
    _mav_put_float_array(buf, 4, pqr, 3);
    _mav_put_float_array(buf, 16, euler, 3);
    _mav_put_float_array(buf, 28, quat, 4);
    _mav_put_float_array(buf, 44, acc, 3);
    _mav_put_float_array(buf, 56, velNed, 3);
    _mav_put_float_array(buf, 68, ned, 3);
    _mav_put_uint32_t_array(buf, 80, llh, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE, buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_CRC);
#else
    mavlink_ascl_telemetry_nav_state_regular_value_t packet;
    packet.timems = timems;
    packet.navStatus = navStatus;
    packet.filterStatus = filterStatus;
    mav_array_memcpy(packet.pqr, pqr, sizeof(float)*3);
    mav_array_memcpy(packet.euler, euler, sizeof(float)*3);
    mav_array_memcpy(packet.quat, quat, sizeof(float)*4);
    mav_array_memcpy(packet.acc, acc, sizeof(float)*3);
    mav_array_memcpy(packet.velNed, velNed, sizeof(float)*3);
    mav_array_memcpy(packet.ned, ned, sizeof(float)*3);
    mav_array_memcpy(packet.llh, llh, sizeof(uint32_t)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE, (const char *)&packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_CRC);
#endif
}

/**
 * @brief Send a ascl_telemetry_nav_state_regular_value message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ascl_telemetry_nav_state_regular_value_send_struct(mavlink_channel_t chan, const mavlink_ascl_telemetry_nav_state_regular_value_t* ascl_telemetry_nav_state_regular_value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ascl_telemetry_nav_state_regular_value_send(chan, ascl_telemetry_nav_state_regular_value->timems, ascl_telemetry_nav_state_regular_value->pqr, ascl_telemetry_nav_state_regular_value->euler, ascl_telemetry_nav_state_regular_value->quat, ascl_telemetry_nav_state_regular_value->acc, ascl_telemetry_nav_state_regular_value->velNed, ascl_telemetry_nav_state_regular_value->ned, ascl_telemetry_nav_state_regular_value->llh, ascl_telemetry_nav_state_regular_value->navStatus, ascl_telemetry_nav_state_regular_value->filterStatus);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE, (const char *)ascl_telemetry_nav_state_regular_value, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_CRC);
#endif
}

#if MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ascl_telemetry_nav_state_regular_value_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t timems, const float *pqr, const float *euler, const float *quat, const float *acc, const float *velNed, const float *ned, const uint32_t *llh, uint16_t navStatus, uint16_t filterStatus)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_uint16_t(buf, 92, navStatus);
    _mav_put_uint16_t(buf, 94, filterStatus);
    _mav_put_float_array(buf, 4, pqr, 3);
    _mav_put_float_array(buf, 16, euler, 3);
    _mav_put_float_array(buf, 28, quat, 4);
    _mav_put_float_array(buf, 44, acc, 3);
    _mav_put_float_array(buf, 56, velNed, 3);
    _mav_put_float_array(buf, 68, ned, 3);
    _mav_put_uint32_t_array(buf, 80, llh, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE, buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_CRC);
#else
    mavlink_ascl_telemetry_nav_state_regular_value_t *packet = (mavlink_ascl_telemetry_nav_state_regular_value_t *)msgbuf;
    packet->timems = timems;
    packet->navStatus = navStatus;
    packet->filterStatus = filterStatus;
    mav_array_memcpy(packet->pqr, pqr, sizeof(float)*3);
    mav_array_memcpy(packet->euler, euler, sizeof(float)*3);
    mav_array_memcpy(packet->quat, quat, sizeof(float)*4);
    mav_array_memcpy(packet->acc, acc, sizeof(float)*3);
    mav_array_memcpy(packet->velNed, velNed, sizeof(float)*3);
    mav_array_memcpy(packet->ned, ned, sizeof(float)*3);
    mav_array_memcpy(packet->llh, llh, sizeof(uint32_t)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE, (const char *)packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_CRC);
#endif
}
#endif

#endif

// MESSAGE ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE UNPACKING


/**
 * @brief Get field timems from ascl_telemetry_nav_state_regular_value message
 *
 * @return [ms] FC time in ms
 */
static inline uint32_t mavlink_msg_ascl_telemetry_nav_state_regular_value_get_timems(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field pqr from ascl_telemetry_nav_state_regular_value message
 *
 * @return [rad/s] Angular rate in rad/s
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_regular_value_get_pqr(const mavlink_message_t* msg, float *pqr)
{
    return _MAV_RETURN_float_array(msg, pqr, 3,  4);
}

/**
 * @brief Get field euler from ascl_telemetry_nav_state_regular_value message
 *
 * @return [deg] Euler angle in deg
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_regular_value_get_euler(const mavlink_message_t* msg, float *euler)
{
    return _MAV_RETURN_float_array(msg, euler, 3,  16);
}

/**
 * @brief Get field quat from ascl_telemetry_nav_state_regular_value message
 *
 * @return [none] Quaternion
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_regular_value_get_quat(const mavlink_message_t* msg, float *quat)
{
    return _MAV_RETURN_float_array(msg, quat, 4,  28);
}

/**
 * @brief Get field acc from ascl_telemetry_nav_state_regular_value message
 *
 * @return [m/s] Linear acceleration in m/s2
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_regular_value_get_acc(const mavlink_message_t* msg, float *acc)
{
    return _MAV_RETURN_float_array(msg, acc, 3,  44);
}

/**
 * @brief Get field velNed from ascl_telemetry_nav_state_regular_value message
 *
 * @return [m/s] Velocity of a vehicle in NED frame in m/s
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_regular_value_get_velNed(const mavlink_message_t* msg, float *velNed)
{
    return _MAV_RETURN_float_array(msg, velNed, 3,  56);
}

/**
 * @brief Get field ned from ascl_telemetry_nav_state_regular_value message
 *
 * @return [m] NED position in m
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_regular_value_get_ned(const mavlink_message_t* msg, float *ned)
{
    return _MAV_RETURN_float_array(msg, ned, 3,  68);
}

/**
 * @brief Get field llh from ascl_telemetry_nav_state_regular_value message
 *
 * @return [degE7,mm] latitude/longitude/height in degE7/degE7/mm as integer
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_regular_value_get_llh(const mavlink_message_t* msg, uint32_t *llh)
{
    return _MAV_RETURN_uint32_t_array(msg, llh, 3,  80);
}

/**
 * @brief Get field navStatus from ascl_telemetry_nav_state_regular_value message
 *
 * @return [none] navigational status. Filter validity/Sensor validity
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_regular_value_get_navStatus(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  92);
}

/**
 * @brief Get field filterStatus from ascl_telemetry_nav_state_regular_value message
 *
 * @return [none] filter status. msB: calibrated sensors on hot, lsB: fused
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_regular_value_get_filterStatus(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  94);
}

/**
 * @brief Decode a ascl_telemetry_nav_state_regular_value message into a struct
 *
 * @param msg The message to decode
 * @param ascl_telemetry_nav_state_regular_value C-struct to decode the message contents into
 */
static inline void mavlink_msg_ascl_telemetry_nav_state_regular_value_decode(const mavlink_message_t* msg, mavlink_ascl_telemetry_nav_state_regular_value_t* ascl_telemetry_nav_state_regular_value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ascl_telemetry_nav_state_regular_value->timems = mavlink_msg_ascl_telemetry_nav_state_regular_value_get_timems(msg);
    mavlink_msg_ascl_telemetry_nav_state_regular_value_get_pqr(msg, ascl_telemetry_nav_state_regular_value->pqr);
    mavlink_msg_ascl_telemetry_nav_state_regular_value_get_euler(msg, ascl_telemetry_nav_state_regular_value->euler);
    mavlink_msg_ascl_telemetry_nav_state_regular_value_get_quat(msg, ascl_telemetry_nav_state_regular_value->quat);
    mavlink_msg_ascl_telemetry_nav_state_regular_value_get_acc(msg, ascl_telemetry_nav_state_regular_value->acc);
    mavlink_msg_ascl_telemetry_nav_state_regular_value_get_velNed(msg, ascl_telemetry_nav_state_regular_value->velNed);
    mavlink_msg_ascl_telemetry_nav_state_regular_value_get_ned(msg, ascl_telemetry_nav_state_regular_value->ned);
    mavlink_msg_ascl_telemetry_nav_state_regular_value_get_llh(msg, ascl_telemetry_nav_state_regular_value->llh);
    ascl_telemetry_nav_state_regular_value->navStatus = mavlink_msg_ascl_telemetry_nav_state_regular_value_get_navStatus(msg);
    ascl_telemetry_nav_state_regular_value->filterStatus = mavlink_msg_ascl_telemetry_nav_state_regular_value_get_filterStatus(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_LEN? msg->len : MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_LEN;
        memset(ascl_telemetry_nav_state_regular_value, 0, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE_LEN);
    memcpy(ascl_telemetry_nav_state_regular_value, _MAV_PAYLOAD(msg), len);
#endif
}
