#pragma once
// MESSAGE ASCL_PARAM_VALUE PACKING

#define MAVLINK_MSG_ID_ASCL_PARAM_VALUE 53234

MAVPACKED(
typedef struct __mavlink_ascl_param_value_t {
 float param_value; /*<  Value of a parameter*/
 uint16_t param_id; /*<  ID of a parameter*/
 uint8_t param_type; /*<  Type of a parameter*/
 uint8_t result; /*<  Status of a parameter*/
}) mavlink_ascl_param_value_t;

#define MAVLINK_MSG_ID_ASCL_PARAM_VALUE_LEN 8
#define MAVLINK_MSG_ID_ASCL_PARAM_VALUE_MIN_LEN 8
#define MAVLINK_MSG_ID_53234_LEN 8
#define MAVLINK_MSG_ID_53234_MIN_LEN 8

#define MAVLINK_MSG_ID_ASCL_PARAM_VALUE_CRC 197
#define MAVLINK_MSG_ID_53234_CRC 197



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ASCL_PARAM_VALUE { \
    53234, \
    "ASCL_PARAM_VALUE", \
    4, \
    {  { "param_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_ascl_param_value_t, param_id) }, \
         { "param_value", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ascl_param_value_t, param_value) }, \
         { "param_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_ascl_param_value_t, param_type) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_ascl_param_value_t, result) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ASCL_PARAM_VALUE { \
    "ASCL_PARAM_VALUE", \
    4, \
    {  { "param_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_ascl_param_value_t, param_id) }, \
         { "param_value", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ascl_param_value_t, param_value) }, \
         { "param_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_ascl_param_value_t, param_type) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_ascl_param_value_t, result) }, \
         } \
}
#endif

/**
 * @brief Pack a ascl_param_value message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param param_id  ID of a parameter
 * @param param_value  Value of a parameter
 * @param param_type  Type of a parameter
 * @param result  Status of a parameter
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_param_value_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t param_id, float param_value, uint8_t param_type, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_PARAM_VALUE_LEN];
    _mav_put_float(buf, 0, param_value);
    _mav_put_uint16_t(buf, 4, param_id);
    _mav_put_uint8_t(buf, 6, param_type);
    _mav_put_uint8_t(buf, 7, result);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_PARAM_VALUE_LEN);
#else
    mavlink_ascl_param_value_t packet;
    packet.param_value = param_value;
    packet.param_id = param_id;
    packet.param_type = param_type;
    packet.result = result;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_PARAM_VALUE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_PARAM_VALUE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ASCL_PARAM_VALUE_MIN_LEN, MAVLINK_MSG_ID_ASCL_PARAM_VALUE_LEN, MAVLINK_MSG_ID_ASCL_PARAM_VALUE_CRC);
}

/**
 * @brief Pack a ascl_param_value message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param param_id  ID of a parameter
 * @param param_value  Value of a parameter
 * @param param_type  Type of a parameter
 * @param result  Status of a parameter
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_param_value_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t param_id,float param_value,uint8_t param_type,uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_PARAM_VALUE_LEN];
    _mav_put_float(buf, 0, param_value);
    _mav_put_uint16_t(buf, 4, param_id);
    _mav_put_uint8_t(buf, 6, param_type);
    _mav_put_uint8_t(buf, 7, result);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_PARAM_VALUE_LEN);
#else
    mavlink_ascl_param_value_t packet;
    packet.param_value = param_value;
    packet.param_id = param_id;
    packet.param_type = param_type;
    packet.result = result;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_PARAM_VALUE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_PARAM_VALUE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ASCL_PARAM_VALUE_MIN_LEN, MAVLINK_MSG_ID_ASCL_PARAM_VALUE_LEN, MAVLINK_MSG_ID_ASCL_PARAM_VALUE_CRC);
}

/**
 * @brief Encode a ascl_param_value struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ascl_param_value C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_param_value_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ascl_param_value_t* ascl_param_value)
{
    return mavlink_msg_ascl_param_value_pack(system_id, component_id, msg, ascl_param_value->param_id, ascl_param_value->param_value, ascl_param_value->param_type, ascl_param_value->result);
}

/**
 * @brief Encode a ascl_param_value struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ascl_param_value C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_param_value_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ascl_param_value_t* ascl_param_value)
{
    return mavlink_msg_ascl_param_value_pack_chan(system_id, component_id, chan, msg, ascl_param_value->param_id, ascl_param_value->param_value, ascl_param_value->param_type, ascl_param_value->result);
}

/**
 * @brief Send a ascl_param_value message
 * @param chan MAVLink channel to send the message
 *
 * @param param_id  ID of a parameter
 * @param param_value  Value of a parameter
 * @param param_type  Type of a parameter
 * @param result  Status of a parameter
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ascl_param_value_send(mavlink_channel_t chan, uint16_t param_id, float param_value, uint8_t param_type, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_PARAM_VALUE_LEN];
    _mav_put_float(buf, 0, param_value);
    _mav_put_uint16_t(buf, 4, param_id);
    _mav_put_uint8_t(buf, 6, param_type);
    _mav_put_uint8_t(buf, 7, result);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_PARAM_VALUE, buf, MAVLINK_MSG_ID_ASCL_PARAM_VALUE_MIN_LEN, MAVLINK_MSG_ID_ASCL_PARAM_VALUE_LEN, MAVLINK_MSG_ID_ASCL_PARAM_VALUE_CRC);
#else
    mavlink_ascl_param_value_t packet;
    packet.param_value = param_value;
    packet.param_id = param_id;
    packet.param_type = param_type;
    packet.result = result;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_PARAM_VALUE, (const char *)&packet, MAVLINK_MSG_ID_ASCL_PARAM_VALUE_MIN_LEN, MAVLINK_MSG_ID_ASCL_PARAM_VALUE_LEN, MAVLINK_MSG_ID_ASCL_PARAM_VALUE_CRC);
#endif
}

/**
 * @brief Send a ascl_param_value message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ascl_param_value_send_struct(mavlink_channel_t chan, const mavlink_ascl_param_value_t* ascl_param_value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ascl_param_value_send(chan, ascl_param_value->param_id, ascl_param_value->param_value, ascl_param_value->param_type, ascl_param_value->result);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_PARAM_VALUE, (const char *)ascl_param_value, MAVLINK_MSG_ID_ASCL_PARAM_VALUE_MIN_LEN, MAVLINK_MSG_ID_ASCL_PARAM_VALUE_LEN, MAVLINK_MSG_ID_ASCL_PARAM_VALUE_CRC);
#endif
}

#if MAVLINK_MSG_ID_ASCL_PARAM_VALUE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ascl_param_value_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t param_id, float param_value, uint8_t param_type, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, param_value);
    _mav_put_uint16_t(buf, 4, param_id);
    _mav_put_uint8_t(buf, 6, param_type);
    _mav_put_uint8_t(buf, 7, result);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_PARAM_VALUE, buf, MAVLINK_MSG_ID_ASCL_PARAM_VALUE_MIN_LEN, MAVLINK_MSG_ID_ASCL_PARAM_VALUE_LEN, MAVLINK_MSG_ID_ASCL_PARAM_VALUE_CRC);
#else
    mavlink_ascl_param_value_t *packet = (mavlink_ascl_param_value_t *)msgbuf;
    packet->param_value = param_value;
    packet->param_id = param_id;
    packet->param_type = param_type;
    packet->result = result;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_PARAM_VALUE, (const char *)packet, MAVLINK_MSG_ID_ASCL_PARAM_VALUE_MIN_LEN, MAVLINK_MSG_ID_ASCL_PARAM_VALUE_LEN, MAVLINK_MSG_ID_ASCL_PARAM_VALUE_CRC);
#endif
}
#endif

#endif

// MESSAGE ASCL_PARAM_VALUE UNPACKING


/**
 * @brief Get field param_id from ascl_param_value message
 *
 * @return  ID of a parameter
 */
static inline uint16_t mavlink_msg_ascl_param_value_get_param_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field param_value from ascl_param_value message
 *
 * @return  Value of a parameter
 */
static inline float mavlink_msg_ascl_param_value_get_param_value(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field param_type from ascl_param_value message
 *
 * @return  Type of a parameter
 */
static inline uint8_t mavlink_msg_ascl_param_value_get_param_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field result from ascl_param_value message
 *
 * @return  Status of a parameter
 */
static inline uint8_t mavlink_msg_ascl_param_value_get_result(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  7);
}

/**
 * @brief Decode a ascl_param_value message into a struct
 *
 * @param msg The message to decode
 * @param ascl_param_value C-struct to decode the message contents into
 */
static inline void mavlink_msg_ascl_param_value_decode(const mavlink_message_t* msg, mavlink_ascl_param_value_t* ascl_param_value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ascl_param_value->param_value = mavlink_msg_ascl_param_value_get_param_value(msg);
    ascl_param_value->param_id = mavlink_msg_ascl_param_value_get_param_id(msg);
    ascl_param_value->param_type = mavlink_msg_ascl_param_value_get_param_type(msg);
    ascl_param_value->result = mavlink_msg_ascl_param_value_get_result(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ASCL_PARAM_VALUE_LEN? msg->len : MAVLINK_MSG_ID_ASCL_PARAM_VALUE_LEN;
        memset(ascl_param_value, 0, MAVLINK_MSG_ID_ASCL_PARAM_VALUE_LEN);
    memcpy(ascl_param_value, _MAV_PAYLOAD(msg), len);
#endif
}
