#include "LED.h"
#include "stm32f4xx_hal.h"

/*
PB7 - Red RGB
PB8 - Green RGB
PB6 - Blue RGB

*/
void RedLED_on(void) {
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, GPIO_PIN_RESET);
}

void GreenLED_on(void) {
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_RESET);
}

void BlueLED_on(void) {
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_RESET); 
}

void RedLED_off(void) {
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, GPIO_PIN_SET); 
}

void GreenLED_off(void) {
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_SET);
}

void BlueLED_off(void) {
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_SET); 
}

void RGB_startup(void) {
    for (int x = 0; x < 2; x++) {
        RedLED_on();
        HAL_Delay(500);
        RedLED_off();

        GreenLED_on();
        HAL_Delay(500);
        GreenLED_off();

        BlueLED_on();
        HAL_Delay(500);
        BlueLED_off();
    }
}