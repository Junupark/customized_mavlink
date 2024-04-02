#pragma once
// MESSAGE ASCL_PARAM_REQUEST PACKING

#define MAVLINK_MSG_ID_ASCL_PARAM_REQUEST 53233

MAVPACKED(
typedef struct __mavlink_ascl_param_request_t {
 uint16_t param_id; /*<  ID of a parameter*/
}) mavlink_ascl_param_request_t;

#define MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_LEN 2
#define MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_MIN_LEN 2
#define MAVLINK_MSG_ID_53233_LEN 2
#define MAVLINK_MSG_ID_53233_MIN_LEN 2

#define MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_CRC 50
#define MAVLINK_MSG_ID_53233_CRC 50



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ASCL_PARAM_REQUEST { \
    53233, \
    "ASCL_PARAM_REQUEST", \
    1, \
    {  { "param_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_ascl_param_request_t, param_id) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ASCL_PARAM_REQUEST { \
    "ASCL_PARAM_REQUEST", \
    1, \
    {  { "param_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_ascl_param_request_t, param_id) }, \
         } \
}
#endif

/**
 * @brief Pack a ascl_param_request message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param param_id  ID of a parameter
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_param_request_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t param_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_LEN];
    _mav_put_uint16_t(buf, 0, param_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_LEN);
#else
    mavlink_ascl_param_request_t packet;
    packet.param_id = param_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_PARAM_REQUEST;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_MIN_LEN, MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_LEN, MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_CRC);
}

/**
 * @brief Pack a ascl_param_request message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param param_id  ID of a parameter
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_param_request_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t param_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_LEN];
    _mav_put_uint16_t(buf, 0, param_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_LEN);
#else
    mavlink_ascl_param_request_t packet;
    packet.param_id = param_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_PARAM_REQUEST;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_MIN_LEN, MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_LEN, MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_CRC);
}

/**
 * @brief Encode a ascl_param_request struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ascl_param_request C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_param_request_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ascl_param_request_t* ascl_param_request)
{
    return mavlink_msg_ascl_param_request_pack(system_id, component_id, msg, ascl_param_request->param_id);
}

/**
 * @brief Encode a ascl_param_request struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ascl_param_request C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_param_request_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ascl_param_request_t* ascl_param_request)
{
    return mavlink_msg_ascl_param_request_pack_chan(system_id, component_id, chan, msg, ascl_param_request->param_id);
}

/**
 * @brief Send a ascl_param_request message
 * @param chan MAVLink channel to send the message
 *
 * @param param_id  ID of a parameter
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ascl_param_request_send(mavlink_channel_t chan, uint16_t param_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_LEN];
    _mav_put_uint16_t(buf, 0, param_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_PARAM_REQUEST, buf, MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_MIN_LEN, MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_LEN, MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_CRC);
#else
    mavlink_ascl_param_request_t packet;
    packet.param_id = param_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_PARAM_REQUEST, (const char *)&packet, MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_MIN_LEN, MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_LEN, MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_CRC);
#endif
}

/**
 * @brief Send a ascl_param_request message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ascl_param_request_send_struct(mavlink_channel_t chan, const mavlink_ascl_param_request_t* ascl_param_request)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ascl_param_request_send(chan, ascl_param_request->param_id);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_PARAM_REQUEST, (const char *)ascl_param_request, MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_MIN_LEN, MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_LEN, MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_CRC);
#endif
}

#if MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ascl_param_request_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t param_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, param_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_PARAM_REQUEST, buf, MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_MIN_LEN, MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_LEN, MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_CRC);
#else
    mavlink_ascl_param_request_t *packet = (mavlink_ascl_param_request_t *)msgbuf;
    packet->param_id = param_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_PARAM_REQUEST, (const char *)packet, MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_MIN_LEN, MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_LEN, MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_CRC);
#endif
}
#endif

#endif

// MESSAGE ASCL_PARAM_REQUEST UNPACKING


/**
 * @brief Get field param_id from ascl_param_request message
 *
 * @return  ID of a parameter
 */
static inline uint16_t mavlink_msg_ascl_param_request_get_param_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Decode a ascl_param_request message into a struct
 *
 * @param msg The message to decode
 * @param ascl_param_request C-struct to decode the message contents into
 */
static inline void mavlink_msg_ascl_param_request_decode(const mavlink_message_t* msg, mavlink_ascl_param_request_t* ascl_param_request)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ascl_param_request->param_id = mavlink_msg_ascl_param_request_get_param_id(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_LEN? msg->len : MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_LEN;
        memset(ascl_param_request, 0, MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_LEN);
    memcpy(ascl_param_request, _MAV_PAYLOAD(msg), len);
#endif
}
