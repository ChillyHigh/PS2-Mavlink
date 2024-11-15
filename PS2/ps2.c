/**
  ******************************************************************************
  * @file    ps2.c
  * @author  程晗
  * @brief   PS2驱动
  *
  ******************************************************************************
  */
#include "ps2.h"


PS2* ps2_p; //ps2结构体指针
TIM_HandleTypeDef PSTIM; //定时器

SPI_HandleTypeDef* PS2_SPI;//SPI

//spi片选引脚
GPIO_TypeDef* CS_GPIX;
uint16_t CS_GPIO_PIN;

uint8_t RawData[9] = { 0 }; //原始数据

/**
  * @brief  微秒级延时
  * @param  us  延迟的微秒数,不应大于65535
  * @retval none
  */
void Delay_us(uint16_t us)
{
    __HAL_TIM_SET_COUNTER(&PSTIM, 0);
    while (__HAL_TIM_GET_COUNTER(&PSTIM) <= us);
    return;
}

/**
 * @brief  PS2初始化
 * @param  tim 定时器
 * @param  ps2_pointer PS2结构体指针
 * @param  spi SPI端口
 * @param  GPIOx 片选GPIO端口
 * @param  GPIO_Pin 片选GPIO引脚
 * @retval none
 */
void PS2_Init(TIM_HandleTypeDef* tim, PS2* ps2_pointer, SPI_HandleTypeDef* spi, GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin)
{
    ps2_p = ps2_pointer;
    PSTIM = *tim;
    PS2_SPI = spi;
    CS_GPIX = GPIOx;
    CS_GPIO_PIN = GPIO_Pin;
    HAL_TIM_Base_Start(&PSTIM);
    // HAL_GPIO_WritePin(CS_GPIX, CS_GPIO_PIN, GPIO_PIN_RESET);
    PS2_Read();//读取并解码
    return;
}

/**
 * @brief  PS2读取数据
 * @retval none
 */
void PS2_Read()
{
    uint8_t SendData[9] = { 0x01, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
    HAL_GPIO_WritePin(CS_GPIX, CS_GPIO_PIN, GPIO_PIN_RESET);    //拉低片选
    for (uint8_t i = 0; i < 9; i++)
    {
        HAL_SPI_TransmitReceive(PS2_SPI, &SendData[i], &RawData[i], 1, HAL_MAX_DELAY);  //发送和接收数据
        Delay_us(8);
    }
    HAL_GPIO_WritePin(CS_GPIX, CS_GPIO_PIN, GPIO_PIN_SET);     //拉高片选
    PS2_Decode();
}


/**
  * @brief  解析数据
  * @retval none
  */
void PS2_Decode()
{
    if (RawData[2] == 0x5A) //判断设备是否已经准备好接收数据
    {
        ps2_p->Select = (~RawData[3] >> 0) & 0x01; //选择键
        ps2_p->Start = (~RawData[3] >> 3) & 0x01;  //开始键

        //左侧按键
        ps2_p->L_Up = (~RawData[3] >> 4) & 0x01;
        ps2_p->L_Right = (~RawData[3] >> 5) & 0x01;
        ps2_p->L_Down = (~RawData[3] >> 6) & 0x01;
        ps2_p->L_Left = (~RawData[3] >> 7) & 0x01;

        //后侧按键
        ps2_p->L2 = (~RawData[4] >> 0) & 0x01;
        ps2_p->R2 = (~RawData[4] >> 1) & 0x01;
        ps2_p->L1 = (~RawData[4] >> 2) & 0x01;
        ps2_p->R1 = (~RawData[4] >> 3) & 0x01;

        //右侧按键
        ps2_p->R_Up = (~RawData[4] >> 4) & 0x01;
        ps2_p->R_Right = (~RawData[4] >> 5) & 0x01;
        ps2_p->R_Down = (~RawData[4] >> 6) & 0x01;
        ps2_p->R_Left = (~RawData[4] >> 7) & 0x01;

        if (RawData[1] == 0x41)
        { //绿灯模式(摇杆值八向)
            ps2_p->A_D = 0;
            ps2_p->Rocker_LX = 127 * (ps2_p->L_Right - ps2_p->L_Left);
            ps2_p->Rocker_LY = 127 * (ps2_p->L_Up - ps2_p->L_Down);

            ps2_p->Rocker_RX = 127 * (ps2_p->R_Right - ps2_p->R_Left);
            ps2_p->Rocker_RY = 127 * (ps2_p->R_Up - ps2_p->R_Down);
        }
        else if (RawData[1] == 0x73)
        { //红灯模式(摇杆值模拟)

            ps2_p->A_D = 1;
            //摇杆按键
            ps2_p->Rocker_Left = (~RawData[3] >> 1) & 0x01;
            ps2_p->Rocker_Right = (~RawData[3] >> 2) & 0x01;

            //摇杆值
            ps2_p->Rocker_LX = RawData[7] - 0x80;
            ps2_p->Rocker_LY = -1 - (RawData[8] - 0x80);
            ps2_p->Rocker_RX = RawData[5] - 0x80;
            ps2_p->Rocker_RY = -1 - (RawData[6] - 0x80);
        }
    }
}
//供调试用，获取源数据
void GetData(uint8_t* Data)
{
    uint8_t i;
    for (i = 0; i < 9; i++)
    {
        Data[i] = RawData[i];
    }
}
