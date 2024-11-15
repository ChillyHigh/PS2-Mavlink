#include "linkPS2.h"

UART_HandleTypeDef* _PS2UART;
TIM_HandleTypeDef* _PS2Timer;
PS2* _PS2Data;

void link_PS2Start(UART_HandleTypeDef* uart, TIM_HandleTypeDef* timer, PS2* ps2)
{
    _PS2UART = uart;
    _PS2Timer = timer;
    _PS2Data = ps2;
    HAL_TIM_Base_Start_IT(_PS2Timer);
}

void link_PS2Send()
{
    mavlink_message_t PS2msg;
    mavlink_msg_command_pack(1, 1, &PS2msg, //system id 和 component id
        _PS2Data->Rocker_LX, _PS2Data->Rocker_LY, _PS2Data->Rocker_RX, _PS2Data->Rocker_RY, //摇杆数据
        _PS2Data->L1, _PS2Data->L2, _PS2Data->R1, _PS2Data->R2,                             //后部按键数据
        _PS2Data->L_Right, _PS2Data->L_Left, _PS2Data->L_Up, _PS2Data->L_Down,              //左侧按键数据
        _PS2Data->R_Right, _PS2Data->R_Left, _PS2Data->R_Up, _PS2Data->R_Down);             //右侧按键数据
    uint8_t buf[MAVLINK_MAX_PACKET_LEN];
    uint16_t len = mavlink_msg_to_send_buffer(buf, &PS2msg);
    HAL_UART_Transmit_DMA(_PS2UART, buf, len);
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef* htim)
{
    if (htim == _PS2Timer) {
        link_PS2Send();
    }
}
