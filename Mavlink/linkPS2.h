#ifndef _LINK_PS2_H
#define _LINK_PS2_H

#include "mavlink.h"
#include "ps2.h"

void link_PS2Start(UART_HandleTypeDef* uart, TIM_HandleTypeDef* timer, PS2* ps2);
void link_PS2Send(void);

#endif // _LINK_PS2_H
