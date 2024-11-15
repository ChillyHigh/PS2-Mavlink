#pragma once
// MESSAGE COMMAND PACKING

#define MAVLINK_MSG_ID_COMMAND 1


typedef struct __mavlink_command_t {
 int8_t LX; /*<  value of LX*/
 int8_t LY; /*<  value of LY*/
 uint8_t KEY_L1; /*<  whether KEY_L1 is pressed*/
 int8_t RX; /*<  value of RX*/
 int8_t RY; /*<  value of RY*/
 uint8_t KEY_R1; /*<  whether KEY_R1 is pressed*/
} mavlink_command_t;

#define MAVLINK_MSG_ID_COMMAND_LEN 6
#define MAVLINK_MSG_ID_COMMAND_MIN_LEN 6
#define MAVLINK_MSG_ID_1_LEN 6
#define MAVLINK_MSG_ID_1_MIN_LEN 6

#define MAVLINK_MSG_ID_COMMAND_CRC 1
#define MAVLINK_MSG_ID_1_CRC 1



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_COMMAND { \
    1, \
    "COMMAND", \
    6, \
    {  { "LX", NULL, MAVLINK_TYPE_INT8_T, 0, 0, offsetof(mavlink_command_t, LX) }, \
         { "LY", NULL, MAVLINK_TYPE_INT8_T, 0, 1, offsetof(mavlink_command_t, LY) }, \
         { "KEY_L1", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_command_t, KEY_L1) }, \
         { "RX", NULL, MAVLINK_TYPE_INT8_T, 0, 3, offsetof(mavlink_command_t, RX) }, \
         { "RY", NULL, MAVLINK_TYPE_INT8_T, 0, 4, offsetof(mavlink_command_t, RY) }, \
         { "KEY_R1", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_command_t, KEY_R1) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_COMMAND { \
    "COMMAND", \
    6, \
    {  { "LX", NULL, MAVLINK_TYPE_INT8_T, 0, 0, offsetof(mavlink_command_t, LX) }, \
         { "LY", NULL, MAVLINK_TYPE_INT8_T, 0, 1, offsetof(mavlink_command_t, LY) }, \
         { "KEY_L1", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_command_t, KEY_L1) }, \
         { "RX", NULL, MAVLINK_TYPE_INT8_T, 0, 3, offsetof(mavlink_command_t, RX) }, \
         { "RY", NULL, MAVLINK_TYPE_INT8_T, 0, 4, offsetof(mavlink_command_t, RY) }, \
         { "KEY_R1", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_command_t, KEY_R1) }, \
         } \
}
#endif

/**
 * @brief Pack a command message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param LX  value of LX
 * @param LY  value of LY
 * @param KEY_L1  whether KEY_L1 is pressed
 * @param RX  value of RX
 * @param RY  value of RY
 * @param KEY_R1  whether KEY_R1 is pressed
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_command_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int8_t LX, int8_t LY, uint8_t KEY_L1, int8_t RX, int8_t RY, uint8_t KEY_R1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_COMMAND_LEN];
    _mav_put_int8_t(buf, 0, LX);
    _mav_put_int8_t(buf, 1, LY);
    _mav_put_uint8_t(buf, 2, KEY_L1);
    _mav_put_int8_t(buf, 3, RX);
    _mav_put_int8_t(buf, 4, RY);
    _mav_put_uint8_t(buf, 5, KEY_R1);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_COMMAND_LEN);
#else
    mavlink_command_t packet;
    packet.LX = LX;
    packet.LY = LY;
    packet.KEY_L1 = KEY_L1;
    packet.RX = RX;
    packet.RY = RY;
    packet.KEY_R1 = KEY_R1;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_COMMAND_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_COMMAND;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_COMMAND_MIN_LEN, MAVLINK_MSG_ID_COMMAND_LEN, MAVLINK_MSG_ID_COMMAND_CRC);
}

/**
 * @brief Pack a command message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param LX  value of LX
 * @param LY  value of LY
 * @param KEY_L1  whether KEY_L1 is pressed
 * @param RX  value of RX
 * @param RY  value of RY
 * @param KEY_R1  whether KEY_R1 is pressed
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_command_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               int8_t LX, int8_t LY, uint8_t KEY_L1, int8_t RX, int8_t RY, uint8_t KEY_R1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_COMMAND_LEN];
    _mav_put_int8_t(buf, 0, LX);
    _mav_put_int8_t(buf, 1, LY);
    _mav_put_uint8_t(buf, 2, KEY_L1);
    _mav_put_int8_t(buf, 3, RX);
    _mav_put_int8_t(buf, 4, RY);
    _mav_put_uint8_t(buf, 5, KEY_R1);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_COMMAND_LEN);
#else
    mavlink_command_t packet;
    packet.LX = LX;
    packet.LY = LY;
    packet.KEY_L1 = KEY_L1;
    packet.RX = RX;
    packet.RY = RY;
    packet.KEY_R1 = KEY_R1;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_COMMAND_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_COMMAND;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_COMMAND_MIN_LEN, MAVLINK_MSG_ID_COMMAND_LEN, MAVLINK_MSG_ID_COMMAND_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_COMMAND_MIN_LEN, MAVLINK_MSG_ID_COMMAND_LEN);
#endif
}

/**
 * @brief Pack a command message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param LX  value of LX
 * @param LY  value of LY
 * @param KEY_L1  whether KEY_L1 is pressed
 * @param RX  value of RX
 * @param RY  value of RY
 * @param KEY_R1  whether KEY_R1 is pressed
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_command_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int8_t LX,int8_t LY,uint8_t KEY_L1,int8_t RX,int8_t RY,uint8_t KEY_R1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_COMMAND_LEN];
    _mav_put_int8_t(buf, 0, LX);
    _mav_put_int8_t(buf, 1, LY);
    _mav_put_uint8_t(buf, 2, KEY_L1);
    _mav_put_int8_t(buf, 3, RX);
    _mav_put_int8_t(buf, 4, RY);
    _mav_put_uint8_t(buf, 5, KEY_R1);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_COMMAND_LEN);
#else
    mavlink_command_t packet;
    packet.LX = LX;
    packet.LY = LY;
    packet.KEY_L1 = KEY_L1;
    packet.RX = RX;
    packet.RY = RY;
    packet.KEY_R1 = KEY_R1;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_COMMAND_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_COMMAND;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_COMMAND_MIN_LEN, MAVLINK_MSG_ID_COMMAND_LEN, MAVLINK_MSG_ID_COMMAND_CRC);
}

/**
 * @brief Encode a command struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param command C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_command_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_command_t* command)
{
    return mavlink_msg_command_pack(system_id, component_id, msg, command->LX, command->LY, command->KEY_L1, command->RX, command->RY, command->KEY_R1);
}

/**
 * @brief Encode a command struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param command C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_command_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_command_t* command)
{
    return mavlink_msg_command_pack_chan(system_id, component_id, chan, msg, command->LX, command->LY, command->KEY_L1, command->RX, command->RY, command->KEY_R1);
}

/**
 * @brief Encode a command struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param command C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_command_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_command_t* command)
{
    return mavlink_msg_command_pack_status(system_id, component_id, _status, msg,  command->LX, command->LY, command->KEY_L1, command->RX, command->RY, command->KEY_R1);
}

/**
 * @brief Send a command message
 * @param chan MAVLink channel to send the message
 *
 * @param LX  value of LX
 * @param LY  value of LY
 * @param KEY_L1  whether KEY_L1 is pressed
 * @param RX  value of RX
 * @param RY  value of RY
 * @param KEY_R1  whether KEY_R1 is pressed
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_command_send(mavlink_channel_t chan, int8_t LX, int8_t LY, uint8_t KEY_L1, int8_t RX, int8_t RY, uint8_t KEY_R1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_COMMAND_LEN];
    _mav_put_int8_t(buf, 0, LX);
    _mav_put_int8_t(buf, 1, LY);
    _mav_put_uint8_t(buf, 2, KEY_L1);
    _mav_put_int8_t(buf, 3, RX);
    _mav_put_int8_t(buf, 4, RY);
    _mav_put_uint8_t(buf, 5, KEY_R1);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_COMMAND, buf, MAVLINK_MSG_ID_COMMAND_MIN_LEN, MAVLINK_MSG_ID_COMMAND_LEN, MAVLINK_MSG_ID_COMMAND_CRC);
#else
    mavlink_command_t packet;
    packet.LX = LX;
    packet.LY = LY;
    packet.KEY_L1 = KEY_L1;
    packet.RX = RX;
    packet.RY = RY;
    packet.KEY_R1 = KEY_R1;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_COMMAND, (const char *)&packet, MAVLINK_MSG_ID_COMMAND_MIN_LEN, MAVLINK_MSG_ID_COMMAND_LEN, MAVLINK_MSG_ID_COMMAND_CRC);
#endif
}

/**
 * @brief Send a command message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_command_send_struct(mavlink_channel_t chan, const mavlink_command_t* command)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_command_send(chan, command->LX, command->LY, command->KEY_L1, command->RX, command->RY, command->KEY_R1);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_COMMAND, (const char *)command, MAVLINK_MSG_ID_COMMAND_MIN_LEN, MAVLINK_MSG_ID_COMMAND_LEN, MAVLINK_MSG_ID_COMMAND_CRC);
#endif
}

#if MAVLINK_MSG_ID_COMMAND_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_command_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int8_t LX, int8_t LY, uint8_t KEY_L1, int8_t RX, int8_t RY, uint8_t KEY_R1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int8_t(buf, 0, LX);
    _mav_put_int8_t(buf, 1, LY);
    _mav_put_uint8_t(buf, 2, KEY_L1);
    _mav_put_int8_t(buf, 3, RX);
    _mav_put_int8_t(buf, 4, RY);
    _mav_put_uint8_t(buf, 5, KEY_R1);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_COMMAND, buf, MAVLINK_MSG_ID_COMMAND_MIN_LEN, MAVLINK_MSG_ID_COMMAND_LEN, MAVLINK_MSG_ID_COMMAND_CRC);
#else
    mavlink_command_t *packet = (mavlink_command_t *)msgbuf;
    packet->LX = LX;
    packet->LY = LY;
    packet->KEY_L1 = KEY_L1;
    packet->RX = RX;
    packet->RY = RY;
    packet->KEY_R1 = KEY_R1;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_COMMAND, (const char *)packet, MAVLINK_MSG_ID_COMMAND_MIN_LEN, MAVLINK_MSG_ID_COMMAND_LEN, MAVLINK_MSG_ID_COMMAND_CRC);
#endif
}
#endif

#endif

// MESSAGE COMMAND UNPACKING


/**
 * @brief Get field LX from command message
 *
 * @return  value of LX
 */
static inline int8_t mavlink_msg_command_get_LX(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  0);
}

/**
 * @brief Get field LY from command message
 *
 * @return  value of LY
 */
static inline int8_t mavlink_msg_command_get_LY(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  1);
}

/**
 * @brief Get field KEY_L1 from command message
 *
 * @return  whether KEY_L1 is pressed
 */
static inline uint8_t mavlink_msg_command_get_KEY_L1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field RX from command message
 *
 * @return  value of RX
 */
static inline int8_t mavlink_msg_command_get_RX(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  3);
}

/**
 * @brief Get field RY from command message
 *
 * @return  value of RY
 */
static inline int8_t mavlink_msg_command_get_RY(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  4);
}

/**
 * @brief Get field KEY_R1 from command message
 *
 * @return  whether KEY_R1 is pressed
 */
static inline uint8_t mavlink_msg_command_get_KEY_R1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Decode a command message into a struct
 *
 * @param msg The message to decode
 * @param command C-struct to decode the message contents into
 */
static inline void mavlink_msg_command_decode(const mavlink_message_t* msg, mavlink_command_t* command)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    command->LX = mavlink_msg_command_get_LX(msg);
    command->LY = mavlink_msg_command_get_LY(msg);
    command->KEY_L1 = mavlink_msg_command_get_KEY_L1(msg);
    command->RX = mavlink_msg_command_get_RX(msg);
    command->RY = mavlink_msg_command_get_RY(msg);
    command->KEY_R1 = mavlink_msg_command_get_KEY_R1(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_COMMAND_LEN? msg->len : MAVLINK_MSG_ID_COMMAND_LEN;
        memset(command, 0, MAVLINK_MSG_ID_COMMAND_LEN);
    memcpy(command, _MAV_PAYLOAD(msg), len);
#endif
}
