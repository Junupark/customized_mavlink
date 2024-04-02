#pragma once
// MESSAGE ASCL_RC_CHANNELS_SCALED PACKING

#define MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED 53501

MAVPACKED(
typedef struct __mavlink_ascl_rc_channels_scaled_t {
 int16_t chan1; /*<  RC Channel 1 Scaled Value*/
 int16_t chan2; /*<  RC Channel 2 Scaled Value*/
 int16_t chan3; /*<  RC Channel 3 Scaled Value*/
 int16_t chan4; /*<  RC Channel 4 Scaled Value*/
 int16_t chan5; /*<  RC Channel 5 Scaled Value*/
 int16_t chan6; /*<  RC Channel 6 Scaled Value*/
 int16_t chan7; /*<  RC Channel 7 Scaled Value*/
 int16_t chan8; /*<  RC Channel 8 Scaled Value*/
 int16_t chan9; /*<  RC Channel 9 Scaled Value*/
 int16_t chan10; /*<  RC Channel 10 Scaled Value*/
 int16_t chan11; /*<  RC Channel 11 Scaled Value*/
 int16_t chan12; /*<  RC Channel 12 Scaled Value*/
 int16_t chan13; /*<  RC Channel 13 Scaled Value*/
 int16_t chan14; /*<  RC Channel 14 Scaled Value*/
 int16_t chan15; /*<  RC Channel 15 Scaled Value*/
 int16_t chan16; /*<  RC Channel 16 Scaled Value*/
}) mavlink_ascl_rc_channels_scaled_t;

#define MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_LEN 32
#define MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_MIN_LEN 32
#define MAVLINK_MSG_ID_53501_LEN 32
#define MAVLINK_MSG_ID_53501_MIN_LEN 32

#define MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_CRC 75
#define MAVLINK_MSG_ID_53501_CRC 75



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ASCL_RC_CHANNELS_SCALED { \
    53501, \
    "ASCL_RC_CHANNELS_SCALED", \
    16, \
    {  { "chan1", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_ascl_rc_channels_scaled_t, chan1) }, \
         { "chan2", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_ascl_rc_channels_scaled_t, chan2) }, \
         { "chan3", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_ascl_rc_channels_scaled_t, chan3) }, \
         { "chan4", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_ascl_rc_channels_scaled_t, chan4) }, \
         { "chan5", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_ascl_rc_channels_scaled_t, chan5) }, \
         { "chan6", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_ascl_rc_channels_scaled_t, chan6) }, \
         { "chan7", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_ascl_rc_channels_scaled_t, chan7) }, \
         { "chan8", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_ascl_rc_channels_scaled_t, chan8) }, \
         { "chan9", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_ascl_rc_channels_scaled_t, chan9) }, \
         { "chan10", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_ascl_rc_channels_scaled_t, chan10) }, \
         { "chan11", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_ascl_rc_channels_scaled_t, chan11) }, \
         { "chan12", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_ascl_rc_channels_scaled_t, chan12) }, \
         { "chan13", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_ascl_rc_channels_scaled_t, chan13) }, \
         { "chan14", NULL, MAVLINK_TYPE_INT16_T, 0, 26, offsetof(mavlink_ascl_rc_channels_scaled_t, chan14) }, \
         { "chan15", NULL, MAVLINK_TYPE_INT16_T, 0, 28, offsetof(mavlink_ascl_rc_channels_scaled_t, chan15) }, \
         { "chan16", NULL, MAVLINK_TYPE_INT16_T, 0, 30, offsetof(mavlink_ascl_rc_channels_scaled_t, chan16) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ASCL_RC_CHANNELS_SCALED { \
    "ASCL_RC_CHANNELS_SCALED", \
    16, \
    {  { "chan1", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_ascl_rc_channels_scaled_t, chan1) }, \
         { "chan2", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_ascl_rc_channels_scaled_t, chan2) }, \
         { "chan3", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_ascl_rc_channels_scaled_t, chan3) }, \
         { "chan4", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_ascl_rc_channels_scaled_t, chan4) }, \
         { "chan5", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_ascl_rc_channels_scaled_t, chan5) }, \
         { "chan6", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_ascl_rc_channels_scaled_t, chan6) }, \
         { "chan7", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_ascl_rc_channels_scaled_t, chan7) }, \
         { "chan8", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_ascl_rc_channels_scaled_t, chan8) }, \
         { "chan9", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_ascl_rc_channels_scaled_t, chan9) }, \
         { "chan10", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_ascl_rc_channels_scaled_t, chan10) }, \
         { "chan11", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_ascl_rc_channels_scaled_t, chan11) }, \
         { "chan12", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_ascl_rc_channels_scaled_t, chan12) }, \
         { "chan13", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_ascl_rc_channels_scaled_t, chan13) }, \
         { "chan14", NULL, MAVLINK_TYPE_INT16_T, 0, 26, offsetof(mavlink_ascl_rc_channels_scaled_t, chan14) }, \
         { "chan15", NULL, MAVLINK_TYPE_INT16_T, 0, 28, offsetof(mavlink_ascl_rc_channels_scaled_t, chan15) }, \
         { "chan16", NULL, MAVLINK_TYPE_INT16_T, 0, 30, offsetof(mavlink_ascl_rc_channels_scaled_t, chan16) }, \
         } \
}
#endif

/**
 * @brief Pack a ascl_rc_channels_scaled message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param chan1  RC Channel 1 Scaled Value
 * @param chan2  RC Channel 2 Scaled Value
 * @param chan3  RC Channel 3 Scaled Value
 * @param chan4  RC Channel 4 Scaled Value
 * @param chan5  RC Channel 5 Scaled Value
 * @param chan6  RC Channel 6 Scaled Value
 * @param chan7  RC Channel 7 Scaled Value
 * @param chan8  RC Channel 8 Scaled Value
 * @param chan9  RC Channel 9 Scaled Value
 * @param chan10  RC Channel 10 Scaled Value
 * @param chan11  RC Channel 11 Scaled Value
 * @param chan12  RC Channel 12 Scaled Value
 * @param chan13  RC Channel 13 Scaled Value
 * @param chan14  RC Channel 14 Scaled Value
 * @param chan15  RC Channel 15 Scaled Value
 * @param chan16  RC Channel 16 Scaled Value
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_rc_channels_scaled_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int16_t chan1, int16_t chan2, int16_t chan3, int16_t chan4, int16_t chan5, int16_t chan6, int16_t chan7, int16_t chan8, int16_t chan9, int16_t chan10, int16_t chan11, int16_t chan12, int16_t chan13, int16_t chan14, int16_t chan15, int16_t chan16)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_LEN];
    _mav_put_int16_t(buf, 0, chan1);
    _mav_put_int16_t(buf, 2, chan2);
    _mav_put_int16_t(buf, 4, chan3);
    _mav_put_int16_t(buf, 6, chan4);
    _mav_put_int16_t(buf, 8, chan5);
    _mav_put_int16_t(buf, 10, chan6);
    _mav_put_int16_t(buf, 12, chan7);
    _mav_put_int16_t(buf, 14, chan8);
    _mav_put_int16_t(buf, 16, chan9);
    _mav_put_int16_t(buf, 18, chan10);
    _mav_put_int16_t(buf, 20, chan11);
    _mav_put_int16_t(buf, 22, chan12);
    _mav_put_int16_t(buf, 24, chan13);
    _mav_put_int16_t(buf, 26, chan14);
    _mav_put_int16_t(buf, 28, chan15);
    _mav_put_int16_t(buf, 30, chan16);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_LEN);
#else
    mavlink_ascl_rc_channels_scaled_t packet;
    packet.chan1 = chan1;
    packet.chan2 = chan2;
    packet.chan3 = chan3;
    packet.chan4 = chan4;
    packet.chan5 = chan5;
    packet.chan6 = chan6;
    packet.chan7 = chan7;
    packet.chan8 = chan8;
    packet.chan9 = chan9;
    packet.chan10 = chan10;
    packet.chan11 = chan11;
    packet.chan12 = chan12;
    packet.chan13 = chan13;
    packet.chan14 = chan14;
    packet.chan15 = chan15;
    packet.chan16 = chan16;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_MIN_LEN, MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_LEN, MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_CRC);
}

/**
 * @brief Pack a ascl_rc_channels_scaled message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param chan1  RC Channel 1 Scaled Value
 * @param chan2  RC Channel 2 Scaled Value
 * @param chan3  RC Channel 3 Scaled Value
 * @param chan4  RC Channel 4 Scaled Value
 * @param chan5  RC Channel 5 Scaled Value
 * @param chan6  RC Channel 6 Scaled Value
 * @param chan7  RC Channel 7 Scaled Value
 * @param chan8  RC Channel 8 Scaled Value
 * @param chan9  RC Channel 9 Scaled Value
 * @param chan10  RC Channel 10 Scaled Value
 * @param chan11  RC Channel 11 Scaled Value
 * @param chan12  RC Channel 12 Scaled Value
 * @param chan13  RC Channel 13 Scaled Value
 * @param chan14  RC Channel 14 Scaled Value
 * @param chan15  RC Channel 15 Scaled Value
 * @param chan16  RC Channel 16 Scaled Value
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_rc_channels_scaled_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int16_t chan1,int16_t chan2,int16_t chan3,int16_t chan4,int16_t chan5,int16_t chan6,int16_t chan7,int16_t chan8,int16_t chan9,int16_t chan10,int16_t chan11,int16_t chan12,int16_t chan13,int16_t chan14,int16_t chan15,int16_t chan16)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_LEN];
    _mav_put_int16_t(buf, 0, chan1);
    _mav_put_int16_t(buf, 2, chan2);
    _mav_put_int16_t(buf, 4, chan3);
    _mav_put_int16_t(buf, 6, chan4);
    _mav_put_int16_t(buf, 8, chan5);
    _mav_put_int16_t(buf, 10, chan6);
    _mav_put_int16_t(buf, 12, chan7);
    _mav_put_int16_t(buf, 14, chan8);
    _mav_put_int16_t(buf, 16, chan9);
    _mav_put_int16_t(buf, 18, chan10);
    _mav_put_int16_t(buf, 20, chan11);
    _mav_put_int16_t(buf, 22, chan12);
    _mav_put_int16_t(buf, 24, chan13);
    _mav_put_int16_t(buf, 26, chan14);
    _mav_put_int16_t(buf, 28, chan15);
    _mav_put_int16_t(buf, 30, chan16);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_LEN);
#else
    mavlink_ascl_rc_channels_scaled_t packet;
    packet.chan1 = chan1;
    packet.chan2 = chan2;
    packet.chan3 = chan3;
    packet.chan4 = chan4;
    packet.chan5 = chan5;
    packet.chan6 = chan6;
    packet.chan7 = chan7;
    packet.chan8 = chan8;
    packet.chan9 = chan9;
    packet.chan10 = chan10;
    packet.chan11 = chan11;
    packet.chan12 = chan12;
    packet.chan13 = chan13;
    packet.chan14 = chan14;
    packet.chan15 = chan15;
    packet.chan16 = chan16;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_MIN_LEN, MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_LEN, MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_CRC);
}

/**
 * @brief Encode a ascl_rc_channels_scaled struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ascl_rc_channels_scaled C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_rc_channels_scaled_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ascl_rc_channels_scaled_t* ascl_rc_channels_scaled)
{
    return mavlink_msg_ascl_rc_channels_scaled_pack(system_id, component_id, msg, ascl_rc_channels_scaled->chan1, ascl_rc_channels_scaled->chan2, ascl_rc_channels_scaled->chan3, ascl_rc_channels_scaled->chan4, ascl_rc_channels_scaled->chan5, ascl_rc_channels_scaled->chan6, ascl_rc_channels_scaled->chan7, ascl_rc_channels_scaled->chan8, ascl_rc_channels_scaled->chan9, ascl_rc_channels_scaled->chan10, ascl_rc_channels_scaled->chan11, ascl_rc_channels_scaled->chan12, ascl_rc_channels_scaled->chan13, ascl_rc_channels_scaled->chan14, ascl_rc_channels_scaled->chan15, ascl_rc_channels_scaled->chan16);
}

/**
 * @brief Encode a ascl_rc_channels_scaled struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ascl_rc_channels_scaled C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_rc_channels_scaled_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ascl_rc_channels_scaled_t* ascl_rc_channels_scaled)
{
    return mavlink_msg_ascl_rc_channels_scaled_pack_chan(system_id, component_id, chan, msg, ascl_rc_channels_scaled->chan1, ascl_rc_channels_scaled->chan2, ascl_rc_channels_scaled->chan3, ascl_rc_channels_scaled->chan4, ascl_rc_channels_scaled->chan5, ascl_rc_channels_scaled->chan6, ascl_rc_channels_scaled->chan7, ascl_rc_channels_scaled->chan8, ascl_rc_channels_scaled->chan9, ascl_rc_channels_scaled->chan10, ascl_rc_channels_scaled->chan11, ascl_rc_channels_scaled->chan12, ascl_rc_channels_scaled->chan13, ascl_rc_channels_scaled->chan14, ascl_rc_channels_scaled->chan15, ascl_rc_channels_scaled->chan16);
}

/**
 * @brief Send a ascl_rc_channels_scaled message
 * @param chan MAVLink channel to send the message
 *
 * @param chan1  RC Channel 1 Scaled Value
 * @param chan2  RC Channel 2 Scaled Value
 * @param chan3  RC Channel 3 Scaled Value
 * @param chan4  RC Channel 4 Scaled Value
 * @param chan5  RC Channel 5 Scaled Value
 * @param chan6  RC Channel 6 Scaled Value
 * @param chan7  RC Channel 7 Scaled Value
 * @param chan8  RC Channel 8 Scaled Value
 * @param chan9  RC Channel 9 Scaled Value
 * @param chan10  RC Channel 10 Scaled Value
 * @param chan11  RC Channel 11 Scaled Value
 * @param chan12  RC Channel 12 Scaled Value
 * @param chan13  RC Channel 13 Scaled Value
 * @param chan14  RC Channel 14 Scaled Value
 * @param chan15  RC Channel 15 Scaled Value
 * @param chan16  RC Channel 16 Scaled Value
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ascl_rc_channels_scaled_send(mavlink_channel_t chan, int16_t chan1, int16_t chan2, int16_t chan3, int16_t chan4, int16_t chan5, int16_t chan6, int16_t chan7, int16_t chan8, int16_t chan9, int16_t chan10, int16_t chan11, int16_t chan12, int16_t chan13, int16_t chan14, int16_t chan15, int16_t chan16)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_LEN];
    _mav_put_int16_t(buf, 0, chan1);
    _mav_put_int16_t(buf, 2, chan2);
    _mav_put_int16_t(buf, 4, chan3);
    _mav_put_int16_t(buf, 6, chan4);
    _mav_put_int16_t(buf, 8, chan5);
    _mav_put_int16_t(buf, 10, chan6);
    _mav_put_int16_t(buf, 12, chan7);
    _mav_put_int16_t(buf, 14, chan8);
    _mav_put_int16_t(buf, 16, chan9);
    _mav_put_int16_t(buf, 18, chan10);
    _mav_put_int16_t(buf, 20, chan11);
    _mav_put_int16_t(buf, 22, chan12);
    _mav_put_int16_t(buf, 24, chan13);
    _mav_put_int16_t(buf, 26, chan14);
    _mav_put_int16_t(buf, 28, chan15);
    _mav_put_int16_t(buf, 30, chan16);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED, buf, MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_MIN_LEN, MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_LEN, MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_CRC);
#else
    mavlink_ascl_rc_channels_scaled_t packet;
    packet.chan1 = chan1;
    packet.chan2 = chan2;
    packet.chan3 = chan3;
    packet.chan4 = chan4;
    packet.chan5 = chan5;
    packet.chan6 = chan6;
    packet.chan7 = chan7;
    packet.chan8 = chan8;
    packet.chan9 = chan9;
    packet.chan10 = chan10;
    packet.chan11 = chan11;
    packet.chan12 = chan12;
    packet.chan13 = chan13;
    packet.chan14 = chan14;
    packet.chan15 = chan15;
    packet.chan16 = chan16;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED, (const char *)&packet, MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_MIN_LEN, MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_LEN, MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_CRC);
#endif
}

/**
 * @brief Send a ascl_rc_channels_scaled message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ascl_rc_channels_scaled_send_struct(mavlink_channel_t chan, const mavlink_ascl_rc_channels_scaled_t* ascl_rc_channels_scaled)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ascl_rc_channels_scaled_send(chan, ascl_rc_channels_scaled->chan1, ascl_rc_channels_scaled->chan2, ascl_rc_channels_scaled->chan3, ascl_rc_channels_scaled->chan4, ascl_rc_channels_scaled->chan5, ascl_rc_channels_scaled->chan6, ascl_rc_channels_scaled->chan7, ascl_rc_channels_scaled->chan8, ascl_rc_channels_scaled->chan9, ascl_rc_channels_scaled->chan10, ascl_rc_channels_scaled->chan11, ascl_rc_channels_scaled->chan12, ascl_rc_channels_scaled->chan13, ascl_rc_channels_scaled->chan14, ascl_rc_channels_scaled->chan15, ascl_rc_channels_scaled->chan16);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED, (const char *)ascl_rc_channels_scaled, MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_MIN_LEN, MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_LEN, MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_CRC);
#endif
}

#if MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ascl_rc_channels_scaled_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t chan1, int16_t chan2, int16_t chan3, int16_t chan4, int16_t chan5, int16_t chan6, int16_t chan7, int16_t chan8, int16_t chan9, int16_t chan10, int16_t chan11, int16_t chan12, int16_t chan13, int16_t chan14, int16_t chan15, int16_t chan16)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 0, chan1);
    _mav_put_int16_t(buf, 2, chan2);
    _mav_put_int16_t(buf, 4, chan3);
    _mav_put_int16_t(buf, 6, chan4);
    _mav_put_int16_t(buf, 8, chan5);
    _mav_put_int16_t(buf, 10, chan6);
    _mav_put_int16_t(buf, 12, chan7);
    _mav_put_int16_t(buf, 14, chan8);
    _mav_put_int16_t(buf, 16, chan9);
    _mav_put_int16_t(buf, 18, chan10);
    _mav_put_int16_t(buf, 20, chan11);
    _mav_put_int16_t(buf, 22, chan12);
    _mav_put_int16_t(buf, 24, chan13);
    _mav_put_int16_t(buf, 26, chan14);
    _mav_put_int16_t(buf, 28, chan15);
    _mav_put_int16_t(buf, 30, chan16);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED, buf, MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_MIN_LEN, MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_LEN, MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_CRC);
#else
    mavlink_ascl_rc_channels_scaled_t *packet = (mavlink_ascl_rc_channels_scaled_t *)msgbuf;
    packet->chan1 = chan1;
    packet->chan2 = chan2;
    packet->chan3 = chan3;
    packet->chan4 = chan4;
    packet->chan5 = chan5;
    packet->chan6 = chan6;
    packet->chan7 = chan7;
    packet->chan8 = chan8;
    packet->chan9 = chan9;
    packet->chan10 = chan10;
    packet->chan11 = chan11;
    packet->chan12 = chan12;
    packet->chan13 = chan13;
    packet->chan14 = chan14;
    packet->chan15 = chan15;
    packet->chan16 = chan16;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED, (const char *)packet, MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_MIN_LEN, MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_LEN, MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_CRC);
#endif
}
#endif

#endif

// MESSAGE ASCL_RC_CHANNELS_SCALED UNPACKING


/**
 * @brief Get field chan1 from ascl_rc_channels_scaled message
 *
 * @return  RC Channel 1 Scaled Value
 */
static inline int16_t mavlink_msg_ascl_rc_channels_scaled_get_chan1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Get field chan2 from ascl_rc_channels_scaled message
 *
 * @return  RC Channel 2 Scaled Value
 */
static inline int16_t mavlink_msg_ascl_rc_channels_scaled_get_chan2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Get field chan3 from ascl_rc_channels_scaled message
 *
 * @return  RC Channel 3 Scaled Value
 */
static inline int16_t mavlink_msg_ascl_rc_channels_scaled_get_chan3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  4);
}

/**
 * @brief Get field chan4 from ascl_rc_channels_scaled message
 *
 * @return  RC Channel 4 Scaled Value
 */
static inline int16_t mavlink_msg_ascl_rc_channels_scaled_get_chan4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  6);
}

/**
 * @brief Get field chan5 from ascl_rc_channels_scaled message
 *
 * @return  RC Channel 5 Scaled Value
 */
static inline int16_t mavlink_msg_ascl_rc_channels_scaled_get_chan5(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  8);
}

/**
 * @brief Get field chan6 from ascl_rc_channels_scaled message
 *
 * @return  RC Channel 6 Scaled Value
 */
static inline int16_t mavlink_msg_ascl_rc_channels_scaled_get_chan6(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  10);
}

/**
 * @brief Get field chan7 from ascl_rc_channels_scaled message
 *
 * @return  RC Channel 7 Scaled Value
 */
static inline int16_t mavlink_msg_ascl_rc_channels_scaled_get_chan7(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  12);
}

/**
 * @brief Get field chan8 from ascl_rc_channels_scaled message
 *
 * @return  RC Channel 8 Scaled Value
 */
static inline int16_t mavlink_msg_ascl_rc_channels_scaled_get_chan8(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  14);
}

/**
 * @brief Get field chan9 from ascl_rc_channels_scaled message
 *
 * @return  RC Channel 9 Scaled Value
 */
static inline int16_t mavlink_msg_ascl_rc_channels_scaled_get_chan9(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  16);
}

/**
 * @brief Get field chan10 from ascl_rc_channels_scaled message
 *
 * @return  RC Channel 10 Scaled Value
 */
static inline int16_t mavlink_msg_ascl_rc_channels_scaled_get_chan10(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  18);
}

/**
 * @brief Get field chan11 from ascl_rc_channels_scaled message
 *
 * @return  RC Channel 11 Scaled Value
 */
static inline int16_t mavlink_msg_ascl_rc_channels_scaled_get_chan11(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  20);
}

/**
 * @brief Get field chan12 from ascl_rc_channels_scaled message
 *
 * @return  RC Channel 12 Scaled Value
 */
static inline int16_t mavlink_msg_ascl_rc_channels_scaled_get_chan12(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  22);
}

/**
 * @brief Get field chan13 from ascl_rc_channels_scaled message
 *
 * @return  RC Channel 13 Scaled Value
 */
static inline int16_t mavlink_msg_ascl_rc_channels_scaled_get_chan13(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  24);
}

/**
 * @brief Get field chan14 from ascl_rc_channels_scaled message
 *
 * @return  RC Channel 14 Scaled Value
 */
static inline int16_t mavlink_msg_ascl_rc_channels_scaled_get_chan14(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  26);
}

/**
 * @brief Get field chan15 from ascl_rc_channels_scaled message
 *
 * @return  RC Channel 15 Scaled Value
 */
static inline int16_t mavlink_msg_ascl_rc_channels_scaled_get_chan15(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  28);
}

/**
 * @brief Get field chan16 from ascl_rc_channels_scaled message
 *
 * @return  RC Channel 16 Scaled Value
 */
static inline int16_t mavlink_msg_ascl_rc_channels_scaled_get_chan16(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  30);
}

/**
 * @brief Decode a ascl_rc_channels_scaled message into a struct
 *
 * @param msg The message to decode
 * @param ascl_rc_channels_scaled C-struct to decode the message contents into
 */
static inline void mavlink_msg_ascl_rc_channels_scaled_decode(const mavlink_message_t* msg, mavlink_ascl_rc_channels_scaled_t* ascl_rc_channels_scaled)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ascl_rc_channels_scaled->chan1 = mavlink_msg_ascl_rc_channels_scaled_get_chan1(msg);
    ascl_rc_channels_scaled->chan2 = mavlink_msg_ascl_rc_channels_scaled_get_chan2(msg);
    ascl_rc_channels_scaled->chan3 = mavlink_msg_ascl_rc_channels_scaled_get_chan3(msg);
    ascl_rc_channels_scaled->chan4 = mavlink_msg_ascl_rc_channels_scaled_get_chan4(msg);
    ascl_rc_channels_scaled->chan5 = mavlink_msg_ascl_rc_channels_scaled_get_chan5(msg);
    ascl_rc_channels_scaled->chan6 = mavlink_msg_ascl_rc_channels_scaled_get_chan6(msg);
    ascl_rc_channels_scaled->chan7 = mavlink_msg_ascl_rc_channels_scaled_get_chan7(msg);
    ascl_rc_channels_scaled->chan8 = mavlink_msg_ascl_rc_channels_scaled_get_chan8(msg);
    ascl_rc_channels_scaled->chan9 = mavlink_msg_ascl_rc_channels_scaled_get_chan9(msg);
    ascl_rc_channels_scaled->chan10 = mavlink_msg_ascl_rc_channels_scaled_get_chan10(msg);
    ascl_rc_channels_scaled->chan11 = mavlink_msg_ascl_rc_channels_scaled_get_chan11(msg);
    ascl_rc_channels_scaled->chan12 = mavlink_msg_ascl_rc_channels_scaled_get_chan12(msg);
    ascl_rc_channels_scaled->chan13 = mavlink_msg_ascl_rc_channels_scaled_get_chan13(msg);
    ascl_rc_channels_scaled->chan14 = mavlink_msg_ascl_rc_channels_scaled_get_chan14(msg);
    ascl_rc_channels_scaled->chan15 = mavlink_msg_ascl_rc_channels_scaled_get_chan15(msg);
    ascl_rc_channels_scaled->chan16 = mavlink_msg_ascl_rc_channels_scaled_get_chan16(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_LEN? msg->len : MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_LEN;
        memset(ascl_rc_channels_scaled, 0, MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_LEN);
    memcpy(ascl_rc_channels_scaled, _MAV_PAYLOAD(msg), len);
#endif
}
