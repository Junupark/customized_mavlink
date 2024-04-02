#pragma once
// MESSAGE ASCL_COMMAND_SEND_FI PACKING

#define MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI 53248


typedef struct __mavlink_ascl_command_send_fi_t {
 float paramf1; /*<  PARAM1, float, see ASCL_COMMAND enum*/
 float paramf2; /*<  PARAM2, float, see ASCL_COMMAND enum*/
 float paramf3; /*<  PARAM3, float, see ASCL_COMMAND enum*/
 int32_t parami1; /*<  PARAM1, int, see ASCL_COMMAND enum, e.g. local: x position in meters * 1e4, global: latitude in degrees * 10^7*/
 int32_t parami2; /*<  PARAM2, int, see ASCL_COMMAND enum, e.g. local: y position in meters * 1e4, global: longitude in degrees * 10^7*/
 int32_t parami3; /*<  PARAM3, int, see ASCL_COMMAND enum, e.g. z position: global: altitude in meters (relative or absolute, depending on frame).*/
 uint16_t command_id; /*<  Command ID*/
 uint16_t option; /*<  command option, see ASCL_COMMAND enum*/
} mavlink_ascl_command_send_fi_t;

#define MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN 28
#define MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_MIN_LEN 28
#define MAVLINK_MSG_ID_53248_LEN 28
#define MAVLINK_MSG_ID_53248_MIN_LEN 28

#define MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_CRC 145
#define MAVLINK_MSG_ID_53248_CRC 145



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ASCL_COMMAND_SEND_FI { \
    53248, \
    "ASCL_COMMAND_SEND_FI", \
    8, \
    {  { "command_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_ascl_command_send_fi_t, command_id) }, \
         { "option", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_ascl_command_send_fi_t, option) }, \
         { "paramf1", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ascl_command_send_fi_t, paramf1) }, \
         { "paramf2", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ascl_command_send_fi_t, paramf2) }, \
         { "paramf3", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ascl_command_send_fi_t, paramf3) }, \
         { "parami1", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_ascl_command_send_fi_t, parami1) }, \
         { "parami2", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_ascl_command_send_fi_t, parami2) }, \
         { "parami3", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_ascl_command_send_fi_t, parami3) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ASCL_COMMAND_SEND_FI { \
    "ASCL_COMMAND_SEND_FI", \
    8, \
    {  { "command_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_ascl_command_send_fi_t, command_id) }, \
         { "option", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_ascl_command_send_fi_t, option) }, \
         { "paramf1", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ascl_command_send_fi_t, paramf1) }, \
         { "paramf2", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ascl_command_send_fi_t, paramf2) }, \
         { "paramf3", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ascl_command_send_fi_t, paramf3) }, \
         { "parami1", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_ascl_command_send_fi_t, parami1) }, \
         { "parami2", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_ascl_command_send_fi_t, parami2) }, \
         { "parami3", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_ascl_command_send_fi_t, parami3) }, \
         } \
}
#endif

/**
 * @brief Pack a ascl_command_send_fi message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param command_id  Command ID
 * @param option  command option, see ASCL_COMMAND enum
 * @param paramf1  PARAM1, float, see ASCL_COMMAND enum
 * @param paramf2  PARAM2, float, see ASCL_COMMAND enum
 * @param paramf3  PARAM3, float, see ASCL_COMMAND enum
 * @param parami1  PARAM1, int, see ASCL_COMMAND enum, e.g. local: x position in meters * 1e4, global: latitude in degrees * 10^7
 * @param parami2  PARAM2, int, see ASCL_COMMAND enum, e.g. local: y position in meters * 1e4, global: longitude in degrees * 10^7
 * @param parami3  PARAM3, int, see ASCL_COMMAND enum, e.g. z position: global: altitude in meters (relative or absolute, depending on frame).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_command_send_fi_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t command_id, uint16_t option, float paramf1, float paramf2, float paramf3, int32_t parami1, int32_t parami2, int32_t parami3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN];
    _mav_put_float(buf, 0, paramf1);
    _mav_put_float(buf, 4, paramf2);
    _mav_put_float(buf, 8, paramf3);
    _mav_put_int32_t(buf, 12, parami1);
    _mav_put_int32_t(buf, 16, parami2);
    _mav_put_int32_t(buf, 20, parami3);
    _mav_put_uint16_t(buf, 24, command_id);
    _mav_put_uint16_t(buf, 26, option);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN);
#else
    mavlink_ascl_command_send_fi_t packet;
    packet.paramf1 = paramf1;
    packet.paramf2 = paramf2;
    packet.paramf3 = paramf3;
    packet.parami1 = parami1;
    packet.parami2 = parami2;
    packet.parami3 = parami3;
    packet.command_id = command_id;
    packet.option = option;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_MIN_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_CRC);
}

/**
 * @brief Pack a ascl_command_send_fi message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param command_id  Command ID
 * @param option  command option, see ASCL_COMMAND enum
 * @param paramf1  PARAM1, float, see ASCL_COMMAND enum
 * @param paramf2  PARAM2, float, see ASCL_COMMAND enum
 * @param paramf3  PARAM3, float, see ASCL_COMMAND enum
 * @param parami1  PARAM1, int, see ASCL_COMMAND enum, e.g. local: x position in meters * 1e4, global: latitude in degrees * 10^7
 * @param parami2  PARAM2, int, see ASCL_COMMAND enum, e.g. local: y position in meters * 1e4, global: longitude in degrees * 10^7
 * @param parami3  PARAM3, int, see ASCL_COMMAND enum, e.g. z position: global: altitude in meters (relative or absolute, depending on frame).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_command_send_fi_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t command_id,uint16_t option,float paramf1,float paramf2,float paramf3,int32_t parami1,int32_t parami2,int32_t parami3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN];
    _mav_put_float(buf, 0, paramf1);
    _mav_put_float(buf, 4, paramf2);
    _mav_put_float(buf, 8, paramf3);
    _mav_put_int32_t(buf, 12, parami1);
    _mav_put_int32_t(buf, 16, parami2);
    _mav_put_int32_t(buf, 20, parami3);
    _mav_put_uint16_t(buf, 24, command_id);
    _mav_put_uint16_t(buf, 26, option);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN);
#else
    mavlink_ascl_command_send_fi_t packet;
    packet.paramf1 = paramf1;
    packet.paramf2 = paramf2;
    packet.paramf3 = paramf3;
    packet.parami1 = parami1;
    packet.parami2 = parami2;
    packet.parami3 = parami3;
    packet.command_id = command_id;
    packet.option = option;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_MIN_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_CRC);
}

/**
 * @brief Encode a ascl_command_send_fi struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ascl_command_send_fi C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_command_send_fi_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ascl_command_send_fi_t* ascl_command_send_fi)
{
    return mavlink_msg_ascl_command_send_fi_pack(system_id, component_id, msg, ascl_command_send_fi->command_id, ascl_command_send_fi->option, ascl_command_send_fi->paramf1, ascl_command_send_fi->paramf2, ascl_command_send_fi->paramf3, ascl_command_send_fi->parami1, ascl_command_send_fi->parami2, ascl_command_send_fi->parami3);
}

/**
 * @brief Encode a ascl_command_send_fi struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ascl_command_send_fi C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_command_send_fi_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ascl_command_send_fi_t* ascl_command_send_fi)
{
    return mavlink_msg_ascl_command_send_fi_pack_chan(system_id, component_id, chan, msg, ascl_command_send_fi->command_id, ascl_command_send_fi->option, ascl_command_send_fi->paramf1, ascl_command_send_fi->paramf2, ascl_command_send_fi->paramf3, ascl_command_send_fi->parami1, ascl_command_send_fi->parami2, ascl_command_send_fi->parami3);
}

/**
 * @brief Send a ascl_command_send_fi message
 * @param chan MAVLink channel to send the message
 *
 * @param command_id  Command ID
 * @param option  command option, see ASCL_COMMAND enum
 * @param paramf1  PARAM1, float, see ASCL_COMMAND enum
 * @param paramf2  PARAM2, float, see ASCL_COMMAND enum
 * @param paramf3  PARAM3, float, see ASCL_COMMAND enum
 * @param parami1  PARAM1, int, see ASCL_COMMAND enum, e.g. local: x position in meters * 1e4, global: latitude in degrees * 10^7
 * @param parami2  PARAM2, int, see ASCL_COMMAND enum, e.g. local: y position in meters * 1e4, global: longitude in degrees * 10^7
 * @param parami3  PARAM3, int, see ASCL_COMMAND enum, e.g. z position: global: altitude in meters (relative or absolute, depending on frame).
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ascl_command_send_fi_send(mavlink_channel_t chan, uint16_t command_id, uint16_t option, float paramf1, float paramf2, float paramf3, int32_t parami1, int32_t parami2, int32_t parami3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN];
    _mav_put_float(buf, 0, paramf1);
    _mav_put_float(buf, 4, paramf2);
    _mav_put_float(buf, 8, paramf3);
    _mav_put_int32_t(buf, 12, parami1);
    _mav_put_int32_t(buf, 16, parami2);
    _mav_put_int32_t(buf, 20, parami3);
    _mav_put_uint16_t(buf, 24, command_id);
    _mav_put_uint16_t(buf, 26, option);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI, buf, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_MIN_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_CRC);
#else
    mavlink_ascl_command_send_fi_t packet;
    packet.paramf1 = paramf1;
    packet.paramf2 = paramf2;
    packet.paramf3 = paramf3;
    packet.parami1 = parami1;
    packet.parami2 = parami2;
    packet.parami3 = parami3;
    packet.command_id = command_id;
    packet.option = option;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI, (const char *)&packet, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_MIN_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_CRC);
#endif
}

/**
 * @brief Send a ascl_command_send_fi message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ascl_command_send_fi_send_struct(mavlink_channel_t chan, const mavlink_ascl_command_send_fi_t* ascl_command_send_fi)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ascl_command_send_fi_send(chan, ascl_command_send_fi->command_id, ascl_command_send_fi->option, ascl_command_send_fi->paramf1, ascl_command_send_fi->paramf2, ascl_command_send_fi->paramf3, ascl_command_send_fi->parami1, ascl_command_send_fi->parami2, ascl_command_send_fi->parami3);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI, (const char *)ascl_command_send_fi, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_MIN_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_CRC);
#endif
}

#if MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ascl_command_send_fi_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t command_id, uint16_t option, float paramf1, float paramf2, float paramf3, int32_t parami1, int32_t parami2, int32_t parami3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, paramf1);
    _mav_put_float(buf, 4, paramf2);
    _mav_put_float(buf, 8, paramf3);
    _mav_put_int32_t(buf, 12, parami1);
    _mav_put_int32_t(buf, 16, parami2);
    _mav_put_int32_t(buf, 20, parami3);
    _mav_put_uint16_t(buf, 24, command_id);
    _mav_put_uint16_t(buf, 26, option);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI, buf, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_MIN_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_CRC);
#else
    mavlink_ascl_command_send_fi_t *packet = (mavlink_ascl_command_send_fi_t *)msgbuf;
    packet->paramf1 = paramf1;
    packet->paramf2 = paramf2;
    packet->paramf3 = paramf3;
    packet->parami1 = parami1;
    packet->parami2 = parami2;
    packet->parami3 = parami3;
    packet->command_id = command_id;
    packet->option = option;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI, (const char *)packet, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_MIN_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_CRC);
#endif
}
#endif

#endif

// MESSAGE ASCL_COMMAND_SEND_FI UNPACKING


/**
 * @brief Get field command_id from ascl_command_send_fi message
 *
 * @return  Command ID
 */
static inline uint16_t mavlink_msg_ascl_command_send_fi_get_command_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  24);
}

/**
 * @brief Get field option from ascl_command_send_fi message
 *
 * @return  command option, see ASCL_COMMAND enum
 */
static inline uint16_t mavlink_msg_ascl_command_send_fi_get_option(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  26);
}

/**
 * @brief Get field paramf1 from ascl_command_send_fi message
 *
 * @return  PARAM1, float, see ASCL_COMMAND enum
 */
static inline float mavlink_msg_ascl_command_send_fi_get_paramf1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field paramf2 from ascl_command_send_fi message
 *
 * @return  PARAM2, float, see ASCL_COMMAND enum
 */
static inline float mavlink_msg_ascl_command_send_fi_get_paramf2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field paramf3 from ascl_command_send_fi message
 *
 * @return  PARAM3, float, see ASCL_COMMAND enum
 */
static inline float mavlink_msg_ascl_command_send_fi_get_paramf3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field parami1 from ascl_command_send_fi message
 *
 * @return  PARAM1, int, see ASCL_COMMAND enum, e.g. local: x position in meters * 1e4, global: latitude in degrees * 10^7
 */
static inline int32_t mavlink_msg_ascl_command_send_fi_get_parami1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  12);
}

/**
 * @brief Get field parami2 from ascl_command_send_fi message
 *
 * @return  PARAM2, int, see ASCL_COMMAND enum, e.g. local: y position in meters * 1e4, global: longitude in degrees * 10^7
 */
static inline int32_t mavlink_msg_ascl_command_send_fi_get_parami2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Get field parami3 from ascl_command_send_fi message
 *
 * @return  PARAM3, int, see ASCL_COMMAND enum, e.g. z position: global: altitude in meters (relative or absolute, depending on frame).
 */
static inline int32_t mavlink_msg_ascl_command_send_fi_get_parami3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  20);
}

/**
 * @brief Decode a ascl_command_send_fi message into a struct
 *
 * @param msg The message to decode
 * @param ascl_command_send_fi C-struct to decode the message contents into
 */
static inline void mavlink_msg_ascl_command_send_fi_decode(const mavlink_message_t* msg, mavlink_ascl_command_send_fi_t* ascl_command_send_fi)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ascl_command_send_fi->paramf1 = mavlink_msg_ascl_command_send_fi_get_paramf1(msg);
    ascl_command_send_fi->paramf2 = mavlink_msg_ascl_command_send_fi_get_paramf2(msg);
    ascl_command_send_fi->paramf3 = mavlink_msg_ascl_command_send_fi_get_paramf3(msg);
    ascl_command_send_fi->parami1 = mavlink_msg_ascl_command_send_fi_get_parami1(msg);
    ascl_command_send_fi->parami2 = mavlink_msg_ascl_command_send_fi_get_parami2(msg);
    ascl_command_send_fi->parami3 = mavlink_msg_ascl_command_send_fi_get_parami3(msg);
    ascl_command_send_fi->command_id = mavlink_msg_ascl_command_send_fi_get_command_id(msg);
    ascl_command_send_fi->option = mavlink_msg_ascl_command_send_fi_get_option(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN? msg->len : MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN;
        memset(ascl_command_send_fi, 0, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN);
    memcpy(ascl_command_send_fi, _MAV_PAYLOAD(msg), len);
#endif
}
