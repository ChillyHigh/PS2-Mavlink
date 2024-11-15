#include "linkChassis.h"
#include "usart.h"

UART_HandleTypeDef* _ChaUart;
mavlink_message_t _ChaMsg;
mavlink_command_t PS2 = { 0 };
uint8_t _ChaBuf[MAVLINK_MAX_PACKET_LEN];

#define DEBUG_UART &huart3

/**
 * @brief 执行操作
 * @retval none
 */
void executeCommand()
{
    // TODO: 执行操作
    // motor(PS2.LX, PS2.LY);
    // Debug
    char buf[50] = { 0 };
    sprintf(buf, "LX,LY:%d,%d\n", PS2.LX, PS2.LY);
    HAL_UART_Transmit_DMA(DEBUG_UART, (uint8_t*)buf, sizeof(buf));
}

/**
 * @brief 开始底盘通信
 * @param uart 串口
 * @retval none
 */
void link_chassisStart(UART_HandleTypeDef* uart)
{
    _ChaUart = uart;
    HAL_UARTEx_ReceiveToIdle_DMA(_ChaUart, _ChaBuf, MAVLINK_MAX_PACKET_LEN); // Strat DMA接收
}


/**
 * @brief Mavlink消息接收完成回调函数
 * @param msg 消息内容
 * @retval none
 */
void link_MsgRxCpltCallback(mavlink_message_t* msg)
{
    switch (msg->msgid) {
    case 1:
        // id = 1 的消息对应的解码函数(mavlink_msg_xxx_decode)
        mavlink_msg_command_decode(msg, &PS2);
        executeCommand();
        break;
    default:
        break;
    }
}

/**
 * @brief 解析Mavlink消息
 * @param msg 消息内容
 * @param buffer 接收缓冲区
 * @param Size 缓冲区大小
 * @retval none
 */
void link_decodeMsg(mavlink_message_t* msg, uint8_t* buffer, uint16_t Size)
{
    mavlink_status_t status;
    for (int i = 0; i < Size; i++)
    {
        if (mavlink_parse_char(MAVLINK_COMM_0, buffer[i], msg, &status))
        {
            link_MsgRxCpltCallback(&_ChaMsg);
        }
    }
}

/**
 * @brief UART中断接收回调函数
 * @param huart UART句柄
 * @param Size 接收到的数据长度
 * @return None
 */
void HAL_UARTEx_RxEventCallback(UART_HandleTypeDef* huart, uint16_t Size) {
    if (huart->Instance == _ChaUart->Instance) {
        // HAL_UART_Transmit(DEBUG_UART, _ChaBuf, Size, 1000);
        link_decodeMsg(&_ChaMsg, _ChaBuf, Size);
    }
    HAL_UARTEx_ReceiveToIdle_DMA(_ChaUart, _ChaBuf, MAVLINK_MAX_PACKET_LEN);
}
