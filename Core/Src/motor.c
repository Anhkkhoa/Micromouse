//Encoder & Motor Driver Control
#include "motor.h"
#include "stm32f4xx_hal.h"
#include "main.h"

extern TIM_HandleTypeDef htim1;

/*
PWM value is 0-5000
Left Motor
PA8 - PWM1
PA9 - PWM2

Right Motor
PA10 - PWM2
PA11 - PWM1
*/

void MotorInit(void) {
    HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_1);
    HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_2);
    HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_3);
    HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_4);
    //HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_SET); Already set high through CubeMX
}

void LeftMotorPWM (int FWspeed, int BWspeed) {
    __HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_1, FWspeed);
    __HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_2, BWspeed);
}

void RightMotorPWM (int FWspeed, int BWspeed) {
    __HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_4, FWspeed);
    __HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_3, BWspeed);
}