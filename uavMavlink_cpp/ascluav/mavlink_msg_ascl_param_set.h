#pragma once
// MESSAGE ASCL_PARAM_SET PACKING

#define MAVLINK_MSG_ID_ASCL_PARAM_SET 53232


typedef struct __mavlink_ascl_param_set_t {
 float param_value; /*<  Value of a parameter*/
 uint16_t param_id; /*<  ID of a parameter*/
 uint8_t param_type; /*<  Type of a parameter*/
} mavlink_ascl_param_set_t;

#define MAVLINK_MSG_ID_ASCL_PARAM_SET_LEN 7
#define MAVLINK_MSG_ID_ASCL_PARAM_SET_MIN_LEN 7
#define MAVLINK_MSG_ID_53232_LEN 7
#define MAVLINK_MSG_ID_53232_MIN_LEN 7

#define MAVLINK_MSG_ID_ASCL_PARAM_SET_CRC 117
#define MAVLINK_MSG_ID_53232_CRC 117



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ASCL_PARAM_SET { \
    53232, \
    "ASCL_PARAM_SET", \
    3, \
    {  { "param_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_ascl_param_set_t, param_id) }, \
         { "param_value", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ascl_param_set_t, param_value) }, \
         { "param_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_ascl_param_set_t, param_type) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ASCL_PARAM_SET { \
    "ASCL_PARAM_SET", \
    3, \
    {  { "param_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_ascl_param_set_t, param_id) }, \
         { "param_value", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ascl_param_set_t, param_value) }, \
         { "param_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_ascl_param_set_t, param_type) }, \
         } \
}
#endif

/**
 * @brief Pack a ascl_param_set message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param param_id  ID of a parameter
 * @param param_value  Value of a parameter
 * @param param_type  Type of a parameter
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_param_set_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t param_id, float param_value, uint8_t param_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_PARAM_SET_LEN];
    _mav_put_float(buf, 0, param_value);
    _mav_put_uint16_t(buf, 4, param_id);
    _mav_put_uint8_t(buf, 6, param_type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_PARAM_SET_LEN);
#else
    mavlink_ascl_param_set_t packet;
    packet.param_value = param_value;
    packet.param_id = param_id;
    packet.param_type = param_type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_PARAM_SET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_PARAM_SET;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ASCL_PARAM_SET_MIN_LEN, MAVLINK_MSG_ID_ASCL_PARAM_SET_LEN, MAVLINK_MSG_ID_ASCL_PARAM_SET_CRC);
}

/**
 * @brief Pack a ascl_param_set message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param param_id  ID of a parameter
 * @param param_value  Value of a parameter
 * @param param_type  Type of a parameter
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_param_set_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t param_id,float param_value,uint8_t param_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_PARAM_SET_LEN];
    _mav_put_float(buf, 0, param_value);
    _mav_put_uint16_t(buf, 4, param_id);
    _mav_put_uint8_t(buf, 6, param_type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_PARAM_SET_LEN);
#else
    mavlink_ascl_param_set_t packet;
    packet.param_value = param_value;
    packet.param_id = param_id;
    packet.param_type = param_type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_PARAM_SET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_PARAM_SET;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ASCL_PARAM_SET_MIN_LEN, MAVLINK_MSG_ID_ASCL_PARAM_SET_LEN, MAVLINK_MSG_ID_ASCL_PARAM_SET_CRC);
}

/**
 * @brief Encode a ascl_param_set struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ascl_param_set C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_param_set_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ascl_param_set_t* ascl_param_set)
{
    return mavlink_msg_ascl_param_set_pack(system_id, component_id, msg, ascl_param_set->param_id, ascl_param_set->param_value, ascl_param_set->param_type);
}

/**
 * @brief Encode a ascl_param_set struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ascl_param_set C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_param_set_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ascl_param_set_t* ascl_param_set)
{
    return mavlink_msg_ascl_param_set_pack_chan(system_id, component_id, chan, msg, ascl_param_set->param_id, ascl_param_set->param_value, ascl_param_set->param_type);
}

/**
 * @brief Send a ascl_param_set message
 * @param chan MAVLink channel to send the message
 *
 * @param param_id  ID of a parameter
 * @param param_value  Value of a parameter
 * @param param_type  Type of a parameter
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ascl_param_set_send(mavlink_channel_t chan, uint16_t param_id, float param_value, uint8_t param_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_PARAM_SET_LEN];
    _mav_put_float(buf, 0, param_value);
    _mav_put_uint16_t(buf, 4, param_id);
    _mav_put_uint8_t(buf, 6, param_type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_PARAM_SET, buf, MAVLINK_MSG_ID_ASCL_PARAM_SET_MIN_LEN, MAVLINK_MSG_ID_ASCL_PARAM_SET_LEN, MAVLINK_MSG_ID_ASCL_PARAM_SET_CRC);
#else
    mavlink_ascl_param_set_t packet;
    packet.param_value = param_value;
    packet.param_id = param_id;
    packet.param_type = param_type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_PARAM_SET, (const char *)&packet, MAVLINK_MSG_ID_ASCL_PARAM_SET_MIN_LEN, MAVLINK_MSG_ID_ASCL_PARAM_SET_LEN, MAVLINK_MSG_ID_ASCL_PARAM_SET_CRC);
#endif
}

/**
 * @brief Send a ascl_param_set message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ascl_param_set_send_struct(mavlink_channel_t chan, const mavlink_ascl_param_set_t* ascl_param_set)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ascl_param_set_send(chan, ascl_param_set->param_id, ascl_param_set->param_value, ascl_param_set->param_type);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_PARAM_SET, (const char *)ascl_param_set, MAVLINK_MSG_ID_ASCL_PARAM_SET_MIN_LEN, MAVLINK_MSG_ID_ASCL_PARAM_SET_LEN, MAVLINK_MSG_ID_ASCL_PARAM_SET_CRC);
#endif
}

#if MAVLINK_MSG_ID_ASCL_PARAM_SET_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ascl_param_set_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t param_id, float param_value, uint8_t param_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, param_value);
    _mav_put_uint16_t(buf, 4, param_id);
    _mav_put_uint8_t(buf, 6, param_type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_PARAM_SET, buf, MAVLINK_MSG_ID_ASCL_PARAM_SET_MIN_LEN, MAVLINK_MSG_ID_ASCL_PARAM_SET_LEN, MAVLINK_MSG_ID_ASCL_PARAM_SET_CRC);
#else
    mavlink_ascl_param_set_t *packet = (mavlink_ascl_param_set_t *)msgbuf;
    packet->param_value = param_value;
    packet->param_id = param_id;
    packet->param_type = param_type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_PARAM_SET, (const char *)packet, MAVLINK_MSG_ID_ASCL_PARAM_SET_MIN_LEN, MAVLINK_MSG_ID_ASCL_PARAM_SET_LEN, MAVLINK_MSG_ID_ASCL_PARAM_SET_CRC);
#endif
}
#endif

#endif

// MESSAGE ASCL_PARAM_SET UNPACKING


/**
 * @brief Get field param_id from ascl_param_set message
 *
 * @return  ID of a parameter
 */
static inline uint16_t mavlink_msg_ascl_param_set_get_param_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field param_value from ascl_param_set message
 *
 * @return  Value of a parameter
 */
static inline float mavlink_msg_ascl_param_set_get_param_value(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field param_type from ascl_param_set message
 *
 * @return  Type of a parameter
 */
static inline uint8_t mavlink_msg_ascl_param_set_get_param_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Decode a ascl_param_set message into a struct
 *
 * @param msg The message to decode
 * @param ascl_param_set C-struct to decode the message contents into
 */
static inline void mavlink_msg_ascl_param_set_decode(const mavlink_message_t* msg, mavlink_ascl_param_set_t* ascl_param_set)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ascl_param_set->param_value = mavlink_msg_ascl_param_set_get_param_value(msg);
    ascl_param_set->param_id = mavlink_msg_ascl_param_set_get_param_id(msg);
    ascl_param_set->param_type = mavlink_msg_ascl_param_set_get_param_type(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ASCL_PARAM_SET_LEN? msg->len : MAVLINK_MSG_ID_ASCL_PARAM_SET_LEN;
        memset(ascl_param_set, 0, MAVLINK_MSG_ID_ASCL_PARAM_SET_LEN);
    memcpy(ascl_param_set, _MAV_PAYLOAD(msg), len);
#endif
}
