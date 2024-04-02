#pragma once
// MESSAGE ASCL_COMMAND_ACK PACKING

#define MAVLINK_MSG_ID_ASCL_COMMAND_ACK 53250

MAVPACKED(
typedef struct __mavlink_ascl_command_ack_t {
 uint16_t command_id; /*<  Command ID*/
 uint8_t result; /*<  Result of Command designated by Command ID*/
}) mavlink_ascl_command_ack_t;

#define MAVLINK_MSG_ID_ASCL_COMMAND_ACK_LEN 3
#define MAVLINK_MSG_ID_ASCL_COMMAND_ACK_MIN_LEN 3
#define MAVLINK_MSG_ID_53250_LEN 3
#define MAVLINK_MSG_ID_53250_MIN_LEN 3

#define MAVLINK_MSG_ID_ASCL_COMMAND_ACK_CRC 123
#define MAVLINK_MSG_ID_53250_CRC 123



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ASCL_COMMAND_ACK { \
    53250, \
    "ASCL_COMMAND_ACK", \
    2, \
    {  { "command_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_ascl_command_ack_t, command_id) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_ascl_command_ack_t, result) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ASCL_COMMAND_ACK { \
    "ASCL_COMMAND_ACK", \
    2, \
    {  { "command_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_ascl_command_ack_t, command_id) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_ascl_command_ack_t, result) }, \
         } \
}
#endif

/**
 * @brief Pack a ascl_command_ack message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param command_id  Command ID
 * @param result  Result of Command designated by Command ID
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_command_ack_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t command_id, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_COMMAND_ACK_LEN];
    _mav_put_uint16_t(buf, 0, command_id);
    _mav_put_uint8_t(buf, 2, result);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_COMMAND_ACK_LEN);
#else
    mavlink_ascl_command_ack_t packet;
    packet.command_id = command_id;
    packet.result = result;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_COMMAND_ACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_COMMAND_ACK;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ASCL_COMMAND_ACK_MIN_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_ACK_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_ACK_CRC);
}

/**
 * @brief Pack a ascl_command_ack message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param command_id  Command ID
 * @param result  Result of Command designated by Command ID
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_command_ack_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t command_id,uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_COMMAND_ACK_LEN];
    _mav_put_uint16_t(buf, 0, command_id);
    _mav_put_uint8_t(buf, 2, result);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_COMMAND_ACK_LEN);
#else
    mavlink_ascl_command_ack_t packet;
    packet.command_id = command_id;
    packet.result = result;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_COMMAND_ACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_COMMAND_ACK;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ASCL_COMMAND_ACK_MIN_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_ACK_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_ACK_CRC);
}

/**
 * @brief Encode a ascl_command_ack struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ascl_command_ack C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_command_ack_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ascl_command_ack_t* ascl_command_ack)
{
    return mavlink_msg_ascl_command_ack_pack(system_id, component_id, msg, ascl_command_ack->command_id, ascl_command_ack->result);
}

/**
 * @brief Encode a ascl_command_ack struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ascl_command_ack C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_command_ack_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ascl_command_ack_t* ascl_command_ack)
{
    return mavlink_msg_ascl_command_ack_pack_chan(system_id, component_id, chan, msg, ascl_command_ack->command_id, ascl_command_ack->result);
}

/**
 * @brief Send a ascl_command_ack message
 * @param chan MAVLink channel to send the message
 *
 * @param command_id  Command ID
 * @param result  Result of Command designated by Command ID
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ascl_command_ack_send(mavlink_channel_t chan, uint16_t command_id, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_COMMAND_ACK_LEN];
    _mav_put_uint16_t(buf, 0, command_id);
    _mav_put_uint8_t(buf, 2, result);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_COMMAND_ACK, buf, MAVLINK_MSG_ID_ASCL_COMMAND_ACK_MIN_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_ACK_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_ACK_CRC);
#else
    mavlink_ascl_command_ack_t packet;
    packet.command_id = command_id;
    packet.result = result;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_COMMAND_ACK, (const char *)&packet, MAVLINK_MSG_ID_ASCL_COMMAND_ACK_MIN_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_ACK_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_ACK_CRC);
#endif
}

/**
 * @brief Send a ascl_command_ack message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ascl_command_ack_send_struct(mavlink_channel_t chan, const mavlink_ascl_command_ack_t* ascl_command_ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ascl_command_ack_send(chan, ascl_command_ack->command_id, ascl_command_ack->result);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_COMMAND_ACK, (const char *)ascl_command_ack, MAVLINK_MSG_ID_ASCL_COMMAND_ACK_MIN_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_ACK_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_ACK_CRC);
#endif
}

#if MAVLINK_MSG_ID_ASCL_COMMAND_ACK_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ascl_command_ack_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t command_id, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, command_id);
    _mav_put_uint8_t(buf, 2, result);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_COMMAND_ACK, buf, MAVLINK_MSG_ID_ASCL_COMMAND_ACK_MIN_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_ACK_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_ACK_CRC);
#else
    mavlink_ascl_command_ack_t *packet = (mavlink_ascl_command_ack_t *)msgbuf;
    packet->command_id = command_id;
    packet->result = result;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_COMMAND_ACK, (const char *)packet, MAVLINK_MSG_ID_ASCL_COMMAND_ACK_MIN_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_ACK_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_ACK_CRC);
#endif
}
#endif

#endif

// MESSAGE ASCL_COMMAND_ACK UNPACKING


/**
 * @brief Get field command_id from ascl_command_ack message
 *
 * @return  Command ID
 */
static inline uint16_t mavlink_msg_ascl_command_ack_get_command_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field result from ascl_command_ack message
 *
 * @return  Result of Command designated by Command ID
 */
static inline uint8_t mavlink_msg_ascl_command_ack_get_result(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Decode a ascl_command_ack message into a struct
 *
 * @param msg The message to decode
 * @param ascl_command_ack C-struct to decode the message contents into
 */
static inline void mavlink_msg_ascl_command_ack_decode(const mavlink_message_t* msg, mavlink_ascl_command_ack_t* ascl_command_ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ascl_command_ack->command_id = mavlink_msg_ascl_command_ack_get_command_id(msg);
    ascl_command_ack->result = mavlink_msg_ascl_command_ack_get_result(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ASCL_COMMAND_ACK_LEN? msg->len : MAVLINK_MSG_ID_ASCL_COMMAND_ACK_LEN;
        memset(ascl_command_ack, 0, MAVLINK_MSG_ID_ASCL_COMMAND_ACK_LEN);
    memcpy(ascl_command_ack, _MAV_PAYLOAD(msg), len);
#endif
}
