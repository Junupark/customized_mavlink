#pragma once
// MESSAGE ASCL_COMMAND_SEND_F PACKING

#define MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F 53249


typedef struct __mavlink_ascl_command_send_f_t {
 float paramf1; /*<  PARAM1, float, see ASCL_COMMAND enum*/
 float paramf2; /*<  PARAM2, float, see ASCL_COMMAND enum*/
 float paramf3; /*<  PARAM3, float, see ASCL_COMMAND enum*/
 float paramf4; /*<  PARAM4, float, see ASCL_COMMAND enum*/
 float paramf5; /*<  PARAM5, float, see ASCL_COMMAND enum*/
 float paramf6; /*<  PARAM6, float, see ASCL_COMMAND enum*/
 uint16_t command_id; /*<  Command ID*/
 uint16_t option; /*<  command option, see ASCL_COMMAND enum*/
} mavlink_ascl_command_send_f_t;

#define MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN 28
#define MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_MIN_LEN 28
#define MAVLINK_MSG_ID_53249_LEN 28
#define MAVLINK_MSG_ID_53249_MIN_LEN 28

#define MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_CRC 216
#define MAVLINK_MSG_ID_53249_CRC 216



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ASCL_COMMAND_SEND_F { \
    53249, \
    "ASCL_COMMAND_SEND_F", \
    8, \
    {  { "command_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_ascl_command_send_f_t, command_id) }, \
         { "option", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_ascl_command_send_f_t, option) }, \
         { "paramf1", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ascl_command_send_f_t, paramf1) }, \
         { "paramf2", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ascl_command_send_f_t, paramf2) }, \
         { "paramf3", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ascl_command_send_f_t, paramf3) }, \
         { "paramf4", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_ascl_command_send_f_t, paramf4) }, \
         { "paramf5", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_ascl_command_send_f_t, paramf5) }, \
         { "paramf6", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_ascl_command_send_f_t, paramf6) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ASCL_COMMAND_SEND_F { \
    "ASCL_COMMAND_SEND_F", \
    8, \
    {  { "command_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_ascl_command_send_f_t, command_id) }, \
         { "option", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_ascl_command_send_f_t, option) }, \
         { "paramf1", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ascl_command_send_f_t, paramf1) }, \
         { "paramf2", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ascl_command_send_f_t, paramf2) }, \
         { "paramf3", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ascl_command_send_f_t, paramf3) }, \
         { "paramf4", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_ascl_command_send_f_t, paramf4) }, \
         { "paramf5", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_ascl_command_send_f_t, paramf5) }, \
         { "paramf6", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_ascl_command_send_f_t, paramf6) }, \
         } \
}
#endif

/**
 * @brief Pack a ascl_command_send_f message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param command_id  Command ID
 * @param option  command option, see ASCL_COMMAND enum
 * @param paramf1  PARAM1, float, see ASCL_COMMAND enum
 * @param paramf2  PARAM2, float, see ASCL_COMMAND enum
 * @param paramf3  PARAM3, float, see ASCL_COMMAND enum
 * @param paramf4  PARAM4, float, see ASCL_COMMAND enum
 * @param paramf5  PARAM5, float, see ASCL_COMMAND enum
 * @param paramf6  PARAM6, float, see ASCL_COMMAND enum
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_command_send_f_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t command_id, uint16_t option, float paramf1, float paramf2, float paramf3, float paramf4, float paramf5, float paramf6)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN];
    _mav_put_float(buf, 0, paramf1);
    _mav_put_float(buf, 4, paramf2);
    _mav_put_float(buf, 8, paramf3);
    _mav_put_float(buf, 12, paramf4);
    _mav_put_float(buf, 16, paramf5);
    _mav_put_float(buf, 20, paramf6);
    _mav_put_uint16_t(buf, 24, command_id);
    _mav_put_uint16_t(buf, 26, option);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN);
#else
    mavlink_ascl_command_send_f_t packet;
    packet.paramf1 = paramf1;
    packet.paramf2 = paramf2;
    packet.paramf3 = paramf3;
    packet.paramf4 = paramf4;
    packet.paramf5 = paramf5;
    packet.paramf6 = paramf6;
    packet.command_id = command_id;
    packet.option = option;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_MIN_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_CRC);
}

/**
 * @brief Pack a ascl_command_send_f message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param command_id  Command ID
 * @param option  command option, see ASCL_COMMAND enum
 * @param paramf1  PARAM1, float, see ASCL_COMMAND enum
 * @param paramf2  PARAM2, float, see ASCL_COMMAND enum
 * @param paramf3  PARAM3, float, see ASCL_COMMAND enum
 * @param paramf4  PARAM4, float, see ASCL_COMMAND enum
 * @param paramf5  PARAM5, float, see ASCL_COMMAND enum
 * @param paramf6  PARAM6, float, see ASCL_COMMAND enum
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_command_send_f_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t command_id,uint16_t option,float paramf1,float paramf2,float paramf3,float paramf4,float paramf5,float paramf6)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN];
    _mav_put_float(buf, 0, paramf1);
    _mav_put_float(buf, 4, paramf2);
    _mav_put_float(buf, 8, paramf3);
    _mav_put_float(buf, 12, paramf4);
    _mav_put_float(buf, 16, paramf5);
    _mav_put_float(buf, 20, paramf6);
    _mav_put_uint16_t(buf, 24, command_id);
    _mav_put_uint16_t(buf, 26, option);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN);
#else
    mavlink_ascl_command_send_f_t packet;
    packet.paramf1 = paramf1;
    packet.paramf2 = paramf2;
    packet.paramf3 = paramf3;
    packet.paramf4 = paramf4;
    packet.paramf5 = paramf5;
    packet.paramf6 = paramf6;
    packet.command_id = command_id;
    packet.option = option;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_MIN_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_CRC);
}

/**
 * @brief Encode a ascl_command_send_f struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ascl_command_send_f C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_command_send_f_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ascl_command_send_f_t* ascl_command_send_f)
{
    return mavlink_msg_ascl_command_send_f_pack(system_id, component_id, msg, ascl_command_send_f->command_id, ascl_command_send_f->option, ascl_command_send_f->paramf1, ascl_command_send_f->paramf2, ascl_command_send_f->paramf3, ascl_command_send_f->paramf4, ascl_command_send_f->paramf5, ascl_command_send_f->paramf6);
}

/**
 * @brief Encode a ascl_command_send_f struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ascl_command_send_f C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_command_send_f_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ascl_command_send_f_t* ascl_command_send_f)
{
    return mavlink_msg_ascl_command_send_f_pack_chan(system_id, component_id, chan, msg, ascl_command_send_f->command_id, ascl_command_send_f->option, ascl_command_send_f->paramf1, ascl_command_send_f->paramf2, ascl_command_send_f->paramf3, ascl_command_send_f->paramf4, ascl_command_send_f->paramf5, ascl_command_send_f->paramf6);
}

/**
 * @brief Send a ascl_command_send_f message
 * @param chan MAVLink channel to send the message
 *
 * @param command_id  Command ID
 * @param option  command option, see ASCL_COMMAND enum
 * @param paramf1  PARAM1, float, see ASCL_COMMAND enum
 * @param paramf2  PARAM2, float, see ASCL_COMMAND enum
 * @param paramf3  PARAM3, float, see ASCL_COMMAND enum
 * @param paramf4  PARAM4, float, see ASCL_COMMAND enum
 * @param paramf5  PARAM5, float, see ASCL_COMMAND enum
 * @param paramf6  PARAM6, float, see ASCL_COMMAND enum
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ascl_command_send_f_send(mavlink_channel_t chan, uint16_t command_id, uint16_t option, float paramf1, float paramf2, float paramf3, float paramf4, float paramf5, float paramf6)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN];
    _mav_put_float(buf, 0, paramf1);
    _mav_put_float(buf, 4, paramf2);
    _mav_put_float(buf, 8, paramf3);
    _mav_put_float(buf, 12, paramf4);
    _mav_put_float(buf, 16, paramf5);
    _mav_put_float(buf, 20, paramf6);
    _mav_put_uint16_t(buf, 24, command_id);
    _mav_put_uint16_t(buf, 26, option);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F, buf, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_MIN_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_CRC);
#else
    mavlink_ascl_command_send_f_t packet;
    packet.paramf1 = paramf1;
    packet.paramf2 = paramf2;
    packet.paramf3 = paramf3;
    packet.paramf4 = paramf4;
    packet.paramf5 = paramf5;
    packet.paramf6 = paramf6;
    packet.command_id = command_id;
    packet.option = option;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F, (const char *)&packet, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_MIN_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_CRC);
#endif
}

/**
 * @brief Send a ascl_command_send_f message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ascl_command_send_f_send_struct(mavlink_channel_t chan, const mavlink_ascl_command_send_f_t* ascl_command_send_f)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ascl_command_send_f_send(chan, ascl_command_send_f->command_id, ascl_command_send_f->option, ascl_command_send_f->paramf1, ascl_command_send_f->paramf2, ascl_command_send_f->paramf3, ascl_command_send_f->paramf4, ascl_command_send_f->paramf5, ascl_command_send_f->paramf6);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F, (const char *)ascl_command_send_f, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_MIN_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_CRC);
#endif
}

#if MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ascl_command_send_f_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t command_id, uint16_t option, float paramf1, float paramf2, float paramf3, float paramf4, float paramf5, float paramf6)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, paramf1);
    _mav_put_float(buf, 4, paramf2);
    _mav_put_float(buf, 8, paramf3);
    _mav_put_float(buf, 12, paramf4);
    _mav_put_float(buf, 16, paramf5);
    _mav_put_float(buf, 20, paramf6);
    _mav_put_uint16_t(buf, 24, command_id);
    _mav_put_uint16_t(buf, 26, option);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F, buf, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_MIN_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_CRC);
#else
    mavlink_ascl_command_send_f_t *packet = (mavlink_ascl_command_send_f_t *)msgbuf;
    packet->paramf1 = paramf1;
    packet->paramf2 = paramf2;
    packet->paramf3 = paramf3;
    packet->paramf4 = paramf4;
    packet->paramf5 = paramf5;
    packet->paramf6 = paramf6;
    packet->command_id = command_id;
    packet->option = option;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F, (const char *)packet, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_MIN_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_CRC);
#endif
}
#endif

#endif

// MESSAGE ASCL_COMMAND_SEND_F UNPACKING


/**
 * @brief Get field command_id from ascl_command_send_f message
 *
 * @return  Command ID
 */
static inline uint16_t mavlink_msg_ascl_command_send_f_get_command_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  24);
}

/**
 * @brief Get field option from ascl_command_send_f message
 *
 * @return  command option, see ASCL_COMMAND enum
 */
static inline uint16_t mavlink_msg_ascl_command_send_f_get_option(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  26);
}

/**
 * @brief Get field paramf1 from ascl_command_send_f message
 *
 * @return  PARAM1, float, see ASCL_COMMAND enum
 */
static inline float mavlink_msg_ascl_command_send_f_get_paramf1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field paramf2 from ascl_command_send_f message
 *
 * @return  PARAM2, float, see ASCL_COMMAND enum
 */
static inline float mavlink_msg_ascl_command_send_f_get_paramf2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field paramf3 from ascl_command_send_f message
 *
 * @return  PARAM3, float, see ASCL_COMMAND enum
 */
static inline float mavlink_msg_ascl_command_send_f_get_paramf3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field paramf4 from ascl_command_send_f message
 *
 * @return  PARAM4, float, see ASCL_COMMAND enum
 */
static inline float mavlink_msg_ascl_command_send_f_get_paramf4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field paramf5 from ascl_command_send_f message
 *
 * @return  PARAM5, float, see ASCL_COMMAND enum
 */
static inline float mavlink_msg_ascl_command_send_f_get_paramf5(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field paramf6 from ascl_command_send_f message
 *
 * @return  PARAM6, float, see ASCL_COMMAND enum
 */
static inline float mavlink_msg_ascl_command_send_f_get_paramf6(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Decode a ascl_command_send_f message into a struct
 *
 * @param msg The message to decode
 * @param ascl_command_send_f C-struct to decode the message contents into
 */
static inline void mavlink_msg_ascl_command_send_f_decode(const mavlink_message_t* msg, mavlink_ascl_command_send_f_t* ascl_command_send_f)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ascl_command_send_f->paramf1 = mavlink_msg_ascl_command_send_f_get_paramf1(msg);
    ascl_command_send_f->paramf2 = mavlink_msg_ascl_command_send_f_get_paramf2(msg);
    ascl_command_send_f->paramf3 = mavlink_msg_ascl_command_send_f_get_paramf3(msg);
    ascl_command_send_f->paramf4 = mavlink_msg_ascl_command_send_f_get_paramf4(msg);
    ascl_command_send_f->paramf5 = mavlink_msg_ascl_command_send_f_get_paramf5(msg);
    ascl_command_send_f->paramf6 = mavlink_msg_ascl_command_send_f_get_paramf6(msg);
    ascl_command_send_f->command_id = mavlink_msg_ascl_command_send_f_get_command_id(msg);
    ascl_command_send_f->option = mavlink_msg_ascl_command_send_f_get_option(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN? msg->len : MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN;
        memset(ascl_command_send_f, 0, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN);
    memcpy(ascl_command_send_f, _MAV_PAYLOAD(msg), len);
#endif
}
