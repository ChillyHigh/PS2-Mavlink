/** @file
 *    @brief MAVLink comm protocol testsuite generated from robo.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef ROBO_TESTSUITE_H
#define ROBO_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL

static void mavlink_test_robo(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{

    mavlink_test_robo(system_id, component_id, last_msg);
}
#endif




static void mavlink_test_command(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_COMMAND >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_command_t packet_in = {
        5,72,139,206,17,84
    };
    mavlink_command_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.LX = packet_in.LX;
        packet1.LY = packet_in.LY;
        packet1.KEY_L1 = packet_in.KEY_L1;
        packet1.RX = packet_in.RX;
        packet1.RY = packet_in.RY;
        packet1.KEY_R1 = packet_in.KEY_R1;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_COMMAND_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_COMMAND_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_command_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_command_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_command_pack(system_id, component_id, &msg , packet1.LX , packet1.LY , packet1.KEY_L1 , packet1.RX , packet1.RY , packet1.KEY_R1 );
    mavlink_msg_command_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_command_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.LX , packet1.LY , packet1.KEY_L1 , packet1.RX , packet1.RY , packet1.KEY_R1 );
    mavlink_msg_command_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_command_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_command_send(MAVLINK_COMM_1 , packet1.LX , packet1.LY , packet1.KEY_L1 , packet1.RX , packet1.RY , packet1.KEY_R1 );
    mavlink_msg_command_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("COMMAND") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_COMMAND) != NULL);
#endif
}

static void mavlink_test_robo(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_command(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // ROBO_TESTSUITE_H
