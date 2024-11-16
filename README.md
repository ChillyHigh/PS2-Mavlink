# 基于HAL库的STM32通信，用于WTR校赛
基于mavlink通信，传输从ps2手柄接收的数据，通过UART传输给底盘和机械臂。

传输的数据如下所示：

+ 对于摇杆，传输-128~127的模拟量数据

+ 对于按键，1表示按下

```c
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
```

