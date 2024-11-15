#pragma once
// MESSAGE COMMAND PACKING

#define MAVLINK_MSG_ID_COMMAND 1


typedef struct __mavlink_command_t {
 int8_t Rocker_LX; /*<  value of left Rocker X*/
 int8_t Rocker_LY; /*<  value of left Rocker Y*/
 int8_t Rocker_RX; /*<  value of right Rocker X*/
 int8_t Rocker_RY; /*<  value of right Rocker Y*/
 uint8_t L1; /*<  whether KEY L1 is pressed*/
 uint8_t L2; /*<  whether KEY L2 is pressed*/
 uint8_t R1; /*<  whether KEY R1 is pressed*/
 uint8_t R2; /*<  whether KEY R2 is pressed*/
 uint8_t L_Right; /*<  whether Left KEY right is pressed*/
 uint8_t L_Left; /*<  whether Left KEY left is pressed*/
 uint8_t L_Up; /*<  whether Left KEY up is pressed*/
 uint8_t L_Down; /*<  whether Left KEY down is pressed*/
 uint8_t R_Right; /*<  whether Right KEY right is pressed*/
 uint8_t R_Left; /*<  whether Right KEY left is pressed*/
 uint8_t R_Up; /*<  whether Right KEY up is pressed*/
 uint8_t R_Down; /*<  whether Right KEY down is pressed*/
} mavlink_command_t;

#define MAVLINK_MSG_ID_COMMAND_LEN 16
#define MAVLINK_MSG_ID_COMMAND_MIN_LEN 16
#define MAVLINK_MSG_ID_1_LEN 16
#define MAVLINK_MSG_ID_1_MIN_LEN 16

#define MAVLINK_MSG_ID_COMMAND_CRC 91
#define MAVLINK_MSG_ID_1_CRC 91



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_COMMAND { \
    1, \
    "COMMAND", \
    16, \
    {  { "Rocker_LX", NULL, MAVLINK_TYPE_INT8_T, 0, 0, offsetof(mavlink_command_t, Rocker_LX) }, \
         { "Rocker_LY", NULL, MAVLINK_TYPE_INT8_T, 0, 1, offsetof(mavlink_command_t, Rocker_LY) }, \
         { "Rocker_RX", NULL, MAVLINK_TYPE_INT8_T, 0, 2, offsetof(mavlink_command_t, Rocker_RX) }, \
         { "Rocker_RY", NULL, MAVLINK_TYPE_INT8_T, 0, 3, offsetof(mavlink_command_t, Rocker_RY) }, \
         { "L1", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_command_t, L1) }, \
         { "L2", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_command_t, L2) }, \
         { "R1", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_command_t, R1) }, \
         { "R2", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_command_t, R2) }, \
         { "L_Right", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_command_t, L_Right) }, \
         { "L_Left", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_command_t, L_Left) }, \
         { "L_Up", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_command_t, L_Up) }, \
         { "L_Down", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_command_t, L_Down) }, \
         { "R_Right", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_command_t, R_Right) }, \
         { "R_Left", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_command_t, R_Left) }, \
         { "R_Up", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_command_t, R_Up) }, \
         { "R_Down", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_command_t, R_Down) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_COMMAND { \
    "COMMAND", \
    16, \
    {  { "Rocker_LX", NULL, MAVLINK_TYPE_INT8_T, 0, 0, offsetof(mavlink_command_t, Rocker_LX) }, \
         { "Rocker_LY", NULL, MAVLINK_TYPE_INT8_T, 0, 1, offsetof(mavlink_command_t, Rocker_LY) }, \
         { "Rocker_RX", NULL, MAVLINK_TYPE_INT8_T, 0, 2, offsetof(mavlink_command_t, Rocker_RX) }, \
         { "Rocker_RY", NULL, MAVLINK_TYPE_INT8_T, 0, 3, offsetof(mavlink_command_t, Rocker_RY) }, \
         { "L1", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_command_t, L1) }, \
         { "L2", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_command_t, L2) }, \
         { "R1", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_command_t, R1) }, \
         { "R2", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_command_t, R2) }, \
         { "L_Right", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_command_t, L_Right) }, \
         { "L_Left", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_command_t, L_Left) }, \
         { "L_Up", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_command_t, L_Up) }, \
         { "L_Down", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_command_t, L_Down) }, \
         { "R_Right", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_command_t, R_Right) }, \
         { "R_Left", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_command_t, R_Left) }, \
         { "R_Up", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_command_t, R_Up) }, \
         { "R_Down", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_command_t, R_Down) }, \
         } \
}
#endif

/**
 * @brief Pack a command message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param Rocker_LX  value of left Rocker X
 * @param Rocker_LY  value of left Rocker Y
 * @param Rocker_RX  value of right Rocker X
 * @param Rocker_RY  value of right Rocker Y
 * @param L1  whether KEY L1 is pressed
 * @param L2  whether KEY L2 is pressed
 * @param R1  whether KEY R1 is pressed
 * @param R2  whether KEY R2 is pressed
 * @param L_Right  whether Left KEY right is pressed
 * @param L_Left  whether Left KEY left is pressed
 * @param L_Up  whether Left KEY up is pressed
 * @param L_Down  whether Left KEY down is pressed
 * @param R_Right  whether Right KEY right is pressed
 * @param R_Left  whether Right KEY left is pressed
 * @param R_Up  whether Right KEY up is pressed
 * @param R_Down  whether Right KEY down is pressed
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_command_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int8_t Rocker_LX, int8_t Rocker_LY, int8_t Rocker_RX, int8_t Rocker_RY, uint8_t L1, uint8_t L2, uint8_t R1, uint8_t R2, uint8_t L_Right, uint8_t L_Left, uint8_t L_Up, uint8_t L_Down, uint8_t R_Right, uint8_t R_Left, uint8_t R_Up, uint8_t R_Down)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_COMMAND_LEN];
    _mav_put_int8_t(buf, 0, Rocker_LX);
    _mav_put_int8_t(buf, 1, Rocker_LY);
    _mav_put_int8_t(buf, 2, Rocker_RX);
    _mav_put_int8_t(buf, 3, Rocker_RY);
    _mav_put_uint8_t(buf, 4, L1);
    _mav_put_uint8_t(buf, 5, L2);
    _mav_put_uint8_t(buf, 6, R1);
    _mav_put_uint8_t(buf, 7, R2);
    _mav_put_uint8_t(buf, 8, L_Right);
    _mav_put_uint8_t(buf, 9, L_Left);
    _mav_put_uint8_t(buf, 10, L_Up);
    _mav_put_uint8_t(buf, 11, L_Down);
    _mav_put_uint8_t(buf, 12, R_Right);
    _mav_put_uint8_t(buf, 13, R_Left);
    _mav_put_uint8_t(buf, 14, R_Up);
    _mav_put_uint8_t(buf, 15, R_Down);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_COMMAND_LEN);
#else
    mavlink_command_t packet;
    packet.Rocker_LX = Rocker_LX;
    packet.Rocker_LY = Rocker_LY;
    packet.Rocker_RX = Rocker_RX;
    packet.Rocker_RY = Rocker_RY;
    packet.L1 = L1;
    packet.L2 = L2;
    packet.R1 = R1;
    packet.R2 = R2;
    packet.L_Right = L_Right;
    packet.L_Left = L_Left;
    packet.L_Up = L_Up;
    packet.L_Down = L_Down;
    packet.R_Right = R_Right;
    packet.R_Left = R_Left;
    packet.R_Up = R_Up;
    packet.R_Down = R_Down;

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
 * @param Rocker_LX  value of left Rocker X
 * @param Rocker_LY  value of left Rocker Y
 * @param Rocker_RX  value of right Rocker X
 * @param Rocker_RY  value of right Rocker Y
 * @param L1  whether KEY L1 is pressed
 * @param L2  whether KEY L2 is pressed
 * @param R1  whether KEY R1 is pressed
 * @param R2  whether KEY R2 is pressed
 * @param L_Right  whether Left KEY right is pressed
 * @param L_Left  whether Left KEY left is pressed
 * @param L_Up  whether Left KEY up is pressed
 * @param L_Down  whether Left KEY down is pressed
 * @param R_Right  whether Right KEY right is pressed
 * @param R_Left  whether Right KEY left is pressed
 * @param R_Up  whether Right KEY up is pressed
 * @param R_Down  whether Right KEY down is pressed
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_command_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               int8_t Rocker_LX, int8_t Rocker_LY, int8_t Rocker_RX, int8_t Rocker_RY, uint8_t L1, uint8_t L2, uint8_t R1, uint8_t R2, uint8_t L_Right, uint8_t L_Left, uint8_t L_Up, uint8_t L_Down, uint8_t R_Right, uint8_t R_Left, uint8_t R_Up, uint8_t R_Down)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_COMMAND_LEN];
    _mav_put_int8_t(buf, 0, Rocker_LX);
    _mav_put_int8_t(buf, 1, Rocker_LY);
    _mav_put_int8_t(buf, 2, Rocker_RX);
    _mav_put_int8_t(buf, 3, Rocker_RY);
    _mav_put_uint8_t(buf, 4, L1);
    _mav_put_uint8_t(buf, 5, L2);
    _mav_put_uint8_t(buf, 6, R1);
    _mav_put_uint8_t(buf, 7, R2);
    _mav_put_uint8_t(buf, 8, L_Right);
    _mav_put_uint8_t(buf, 9, L_Left);
    _mav_put_uint8_t(buf, 10, L_Up);
    _mav_put_uint8_t(buf, 11, L_Down);
    _mav_put_uint8_t(buf, 12, R_Right);
    _mav_put_uint8_t(buf, 13, R_Left);
    _mav_put_uint8_t(buf, 14, R_Up);
    _mav_put_uint8_t(buf, 15, R_Down);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_COMMAND_LEN);
#else
    mavlink_command_t packet;
    packet.Rocker_LX = Rocker_LX;
    packet.Rocker_LY = Rocker_LY;
    packet.Rocker_RX = Rocker_RX;
    packet.Rocker_RY = Rocker_RY;
    packet.L1 = L1;
    packet.L2 = L2;
    packet.R1 = R1;
    packet.R2 = R2;
    packet.L_Right = L_Right;
    packet.L_Left = L_Left;
    packet.L_Up = L_Up;
    packet.L_Down = L_Down;
    packet.R_Right = R_Right;
    packet.R_Left = R_Left;
    packet.R_Up = R_Up;
    packet.R_Down = R_Down;

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
 * @param Rocker_LX  value of left Rocker X
 * @param Rocker_LY  value of left Rocker Y
 * @param Rocker_RX  value of right Rocker X
 * @param Rocker_RY  value of right Rocker Y
 * @param L1  whether KEY L1 is pressed
 * @param L2  whether KEY L2 is pressed
 * @param R1  whether KEY R1 is pressed
 * @param R2  whether KEY R2 is pressed
 * @param L_Right  whether Left KEY right is pressed
 * @param L_Left  whether Left KEY left is pressed
 * @param L_Up  whether Left KEY up is pressed
 * @param L_Down  whether Left KEY down is pressed
 * @param R_Right  whether Right KEY right is pressed
 * @param R_Left  whether Right KEY left is pressed
 * @param R_Up  whether Right KEY up is pressed
 * @param R_Down  whether Right KEY down is pressed
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_command_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int8_t Rocker_LX,int8_t Rocker_LY,int8_t Rocker_RX,int8_t Rocker_RY,uint8_t L1,uint8_t L2,uint8_t R1,uint8_t R2,uint8_t L_Right,uint8_t L_Left,uint8_t L_Up,uint8_t L_Down,uint8_t R_Right,uint8_t R_Left,uint8_t R_Up,uint8_t R_Down)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_COMMAND_LEN];
    _mav_put_int8_t(buf, 0, Rocker_LX);
    _mav_put_int8_t(buf, 1, Rocker_LY);
    _mav_put_int8_t(buf, 2, Rocker_RX);
    _mav_put_int8_t(buf, 3, Rocker_RY);
    _mav_put_uint8_t(buf, 4, L1);
    _mav_put_uint8_t(buf, 5, L2);
    _mav_put_uint8_t(buf, 6, R1);
    _mav_put_uint8_t(buf, 7, R2);
    _mav_put_uint8_t(buf, 8, L_Right);
    _mav_put_uint8_t(buf, 9, L_Left);
    _mav_put_uint8_t(buf, 10, L_Up);
    _mav_put_uint8_t(buf, 11, L_Down);
    _mav_put_uint8_t(buf, 12, R_Right);
    _mav_put_uint8_t(buf, 13, R_Left);
    _mav_put_uint8_t(buf, 14, R_Up);
    _mav_put_uint8_t(buf, 15, R_Down);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_COMMAND_LEN);
#else
    mavlink_command_t packet;
    packet.Rocker_LX = Rocker_LX;
    packet.Rocker_LY = Rocker_LY;
    packet.Rocker_RX = Rocker_RX;
    packet.Rocker_RY = Rocker_RY;
    packet.L1 = L1;
    packet.L2 = L2;
    packet.R1 = R1;
    packet.R2 = R2;
    packet.L_Right = L_Right;
    packet.L_Left = L_Left;
    packet.L_Up = L_Up;
    packet.L_Down = L_Down;
    packet.R_Right = R_Right;
    packet.R_Left = R_Left;
    packet.R_Up = R_Up;
    packet.R_Down = R_Down;

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
    return mavlink_msg_command_pack(system_id, component_id, msg, command->Rocker_LX, command->Rocker_LY, command->Rocker_RX, command->Rocker_RY, command->L1, command->L2, command->R1, command->R2, command->L_Right, command->L_Left, command->L_Up, command->L_Down, command->R_Right, command->R_Left, command->R_Up, command->R_Down);
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
    return mavlink_msg_command_pack_chan(system_id, component_id, chan, msg, command->Rocker_LX, command->Rocker_LY, command->Rocker_RX, command->Rocker_RY, command->L1, command->L2, command->R1, command->R2, command->L_Right, command->L_Left, command->L_Up, command->L_Down, command->R_Right, command->R_Left, command->R_Up, command->R_Down);
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
    return mavlink_msg_command_pack_status(system_id, component_id, _status, msg,  command->Rocker_LX, command->Rocker_LY, command->Rocker_RX, command->Rocker_RY, command->L1, command->L2, command->R1, command->R2, command->L_Right, command->L_Left, command->L_Up, command->L_Down, command->R_Right, command->R_Left, command->R_Up, command->R_Down);
}

/**
 * @brief Send a command message
 * @param chan MAVLink channel to send the message
 *
 * @param Rocker_LX  value of left Rocker X
 * @param Rocker_LY  value of left Rocker Y
 * @param Rocker_RX  value of right Rocker X
 * @param Rocker_RY  value of right Rocker Y
 * @param L1  whether KEY L1 is pressed
 * @param L2  whether KEY L2 is pressed
 * @param R1  whether KEY R1 is pressed
 * @param R2  whether KEY R2 is pressed
 * @param L_Right  whether Left KEY right is pressed
 * @param L_Left  whether Left KEY left is pressed
 * @param L_Up  whether Left KEY up is pressed
 * @param L_Down  whether Left KEY down is pressed
 * @param R_Right  whether Right KEY right is pressed
 * @param R_Left  whether Right KEY left is pressed
 * @param R_Up  whether Right KEY up is pressed
 * @param R_Down  whether Right KEY down is pressed
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_command_send(mavlink_channel_t chan, int8_t Rocker_LX, int8_t Rocker_LY, int8_t Rocker_RX, int8_t Rocker_RY, uint8_t L1, uint8_t L2, uint8_t R1, uint8_t R2, uint8_t L_Right, uint8_t L_Left, uint8_t L_Up, uint8_t L_Down, uint8_t R_Right, uint8_t R_Left, uint8_t R_Up, uint8_t R_Down)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_COMMAND_LEN];
    _mav_put_int8_t(buf, 0, Rocker_LX);
    _mav_put_int8_t(buf, 1, Rocker_LY);
    _mav_put_int8_t(buf, 2, Rocker_RX);
    _mav_put_int8_t(buf, 3, Rocker_RY);
    _mav_put_uint8_t(buf, 4, L1);
    _mav_put_uint8_t(buf, 5, L2);
    _mav_put_uint8_t(buf, 6, R1);
    _mav_put_uint8_t(buf, 7, R2);
    _mav_put_uint8_t(buf, 8, L_Right);
    _mav_put_uint8_t(buf, 9, L_Left);
    _mav_put_uint8_t(buf, 10, L_Up);
    _mav_put_uint8_t(buf, 11, L_Down);
    _mav_put_uint8_t(buf, 12, R_Right);
    _mav_put_uint8_t(buf, 13, R_Left);
    _mav_put_uint8_t(buf, 14, R_Up);
    _mav_put_uint8_t(buf, 15, R_Down);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_COMMAND, buf, MAVLINK_MSG_ID_COMMAND_MIN_LEN, MAVLINK_MSG_ID_COMMAND_LEN, MAVLINK_MSG_ID_COMMAND_CRC);
#else
    mavlink_command_t packet;
    packet.Rocker_LX = Rocker_LX;
    packet.Rocker_LY = Rocker_LY;
    packet.Rocker_RX = Rocker_RX;
    packet.Rocker_RY = Rocker_RY;
    packet.L1 = L1;
    packet.L2 = L2;
    packet.R1 = R1;
    packet.R2 = R2;
    packet.L_Right = L_Right;
    packet.L_Left = L_Left;
    packet.L_Up = L_Up;
    packet.L_Down = L_Down;
    packet.R_Right = R_Right;
    packet.R_Left = R_Left;
    packet.R_Up = R_Up;
    packet.R_Down = R_Down;

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
    mavlink_msg_command_send(chan, command->Rocker_LX, command->Rocker_LY, command->Rocker_RX, command->Rocker_RY, command->L1, command->L2, command->R1, command->R2, command->L_Right, command->L_Left, command->L_Up, command->L_Down, command->R_Right, command->R_Left, command->R_Up, command->R_Down);
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
static inline void mavlink_msg_command_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int8_t Rocker_LX, int8_t Rocker_LY, int8_t Rocker_RX, int8_t Rocker_RY, uint8_t L1, uint8_t L2, uint8_t R1, uint8_t R2, uint8_t L_Right, uint8_t L_Left, uint8_t L_Up, uint8_t L_Down, uint8_t R_Right, uint8_t R_Left, uint8_t R_Up, uint8_t R_Down)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int8_t(buf, 0, Rocker_LX);
    _mav_put_int8_t(buf, 1, Rocker_LY);
    _mav_put_int8_t(buf, 2, Rocker_RX);
    _mav_put_int8_t(buf, 3, Rocker_RY);
    _mav_put_uint8_t(buf, 4, L1);
    _mav_put_uint8_t(buf, 5, L2);
    _mav_put_uint8_t(buf, 6, R1);
    _mav_put_uint8_t(buf, 7, R2);
    _mav_put_uint8_t(buf, 8, L_Right);
    _mav_put_uint8_t(buf, 9, L_Left);
    _mav_put_uint8_t(buf, 10, L_Up);
    _mav_put_uint8_t(buf, 11, L_Down);
    _mav_put_uint8_t(buf, 12, R_Right);
    _mav_put_uint8_t(buf, 13, R_Left);
    _mav_put_uint8_t(buf, 14, R_Up);
    _mav_put_uint8_t(buf, 15, R_Down);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_COMMAND, buf, MAVLINK_MSG_ID_COMMAND_MIN_LEN, MAVLINK_MSG_ID_COMMAND_LEN, MAVLINK_MSG_ID_COMMAND_CRC);
#else
    mavlink_command_t *packet = (mavlink_command_t *)msgbuf;
    packet->Rocker_LX = Rocker_LX;
    packet->Rocker_LY = Rocker_LY;
    packet->Rocker_RX = Rocker_RX;
    packet->Rocker_RY = Rocker_RY;
    packet->L1 = L1;
    packet->L2 = L2;
    packet->R1 = R1;
    packet->R2 = R2;
    packet->L_Right = L_Right;
    packet->L_Left = L_Left;
    packet->L_Up = L_Up;
    packet->L_Down = L_Down;
    packet->R_Right = R_Right;
    packet->R_Left = R_Left;
    packet->R_Up = R_Up;
    packet->R_Down = R_Down;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_COMMAND, (const char *)packet, MAVLINK_MSG_ID_COMMAND_MIN_LEN, MAVLINK_MSG_ID_COMMAND_LEN, MAVLINK_MSG_ID_COMMAND_CRC);
#endif
}
#endif

#endif

// MESSAGE COMMAND UNPACKING


/**
 * @brief Get field Rocker_LX from command message
 *
 * @return  value of left Rocker X
 */
static inline int8_t mavlink_msg_command_get_Rocker_LX(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  0);
}

/**
 * @brief Get field Rocker_LY from command message
 *
 * @return  value of left Rocker Y
 */
static inline int8_t mavlink_msg_command_get_Rocker_LY(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  1);
}

/**
 * @brief Get field Rocker_RX from command message
 *
 * @return  value of right Rocker X
 */
static inline int8_t mavlink_msg_command_get_Rocker_RX(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  2);
}

/**
 * @brief Get field Rocker_RY from command message
 *
 * @return  value of right Rocker Y
 */
static inline int8_t mavlink_msg_command_get_Rocker_RY(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  3);
}

/**
 * @brief Get field L1 from command message
 *
 * @return  whether KEY L1 is pressed
 */
static inline uint8_t mavlink_msg_command_get_L1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field L2 from command message
 *
 * @return  whether KEY L2 is pressed
 */
static inline uint8_t mavlink_msg_command_get_L2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field R1 from command message
 *
 * @return  whether KEY R1 is pressed
 */
static inline uint8_t mavlink_msg_command_get_R1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field R2 from command message
 *
 * @return  whether KEY R2 is pressed
 */
static inline uint8_t mavlink_msg_command_get_R2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  7);
}

/**
 * @brief Get field L_Right from command message
 *
 * @return  whether Left KEY right is pressed
 */
static inline uint8_t mavlink_msg_command_get_L_Right(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field L_Left from command message
 *
 * @return  whether Left KEY left is pressed
 */
static inline uint8_t mavlink_msg_command_get_L_Left(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field L_Up from command message
 *
 * @return  whether Left KEY up is pressed
 */
static inline uint8_t mavlink_msg_command_get_L_Up(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field L_Down from command message
 *
 * @return  whether Left KEY down is pressed
 */
static inline uint8_t mavlink_msg_command_get_L_Down(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  11);
}

/**
 * @brief Get field R_Right from command message
 *
 * @return  whether Right KEY right is pressed
 */
static inline uint8_t mavlink_msg_command_get_R_Right(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field R_Left from command message
 *
 * @return  whether Right KEY left is pressed
 */
static inline uint8_t mavlink_msg_command_get_R_Left(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Get field R_Up from command message
 *
 * @return  whether Right KEY up is pressed
 */
static inline uint8_t mavlink_msg_command_get_R_Up(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  14);
}

/**
 * @brief Get field R_Down from command message
 *
 * @return  whether Right KEY down is pressed
 */
static inline uint8_t mavlink_msg_command_get_R_Down(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  15);
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
    command->Rocker_LX = mavlink_msg_command_get_Rocker_LX(msg);
    command->Rocker_LY = mavlink_msg_command_get_Rocker_LY(msg);
    command->Rocker_RX = mavlink_msg_command_get_Rocker_RX(msg);
    command->Rocker_RY = mavlink_msg_command_get_Rocker_RY(msg);
    command->L1 = mavlink_msg_command_get_L1(msg);
    command->L2 = mavlink_msg_command_get_L2(msg);
    command->R1 = mavlink_msg_command_get_R1(msg);
    command->R2 = mavlink_msg_command_get_R2(msg);
    command->L_Right = mavlink_msg_command_get_L_Right(msg);
    command->L_Left = mavlink_msg_command_get_L_Left(msg);
    command->L_Up = mavlink_msg_command_get_L_Up(msg);
    command->L_Down = mavlink_msg_command_get_L_Down(msg);
    command->R_Right = mavlink_msg_command_get_R_Right(msg);
    command->R_Left = mavlink_msg_command_get_R_Left(msg);
    command->R_Up = mavlink_msg_command_get_R_Up(msg);
    command->R_Down = mavlink_msg_command_get_R_Down(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_COMMAND_LEN? msg->len : MAVLINK_MSG_ID_COMMAND_LEN;
        memset(command, 0, MAVLINK_MSG_ID_COMMAND_LEN);
    memcpy(command, _MAV_PAYLOAD(msg), len);
#endif
}
