/**
  ******************************************************************************
  * @file    ps2.h
  * @author  程晗
  * @brief   PS2驱动
  *
  ******************************************************************************
  */
#ifndef __PS2_H
#define __PS2_H

#include "tim.h"
#include "gpio.h"
#include "spi.h"

typedef struct
{
  uint8_t A_D;                                       //模拟(红灯)为1 数字(无灯)为0
  int8_t Rocker_RX, Rocker_RY, Rocker_LX, Rocker_LY; //摇杆值(模拟状态为实际值0-0xFF)(数字态为等效的值0,0x80,0xFF)
  //按键值0为未触发,1为触发态
  uint8_t L1, L2, R1, R2;                //后侧大按键
  uint8_t L_Right, L_Left, L_Up, L_Down; //左侧按键
  uint8_t R_Right, R_Left, R_Up, R_Down; //右侧按键
  uint8_t Select;                                    //选择键
  uint8_t Start;                                     //开始键
  uint8_t Rocker_Left, Rocker_Right;             //摇杆按键

} PS2;

void Delay_us(uint16_t us);
void PS2_Init(TIM_HandleTypeDef* tim, PS2* ps2_pointer, SPI_HandleTypeDef* spi, GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
void PS2_Read(void);
void PS2_Decode(void);
void GetData(uint8_t* Data);

#endif
