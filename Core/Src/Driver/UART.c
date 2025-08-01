//UART Transmit & Receive Code
#include <UART.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include "stm32f4xx_hal.h"

extern UART_HandleTypeDef huart6;

// HAL UART Driver
void UARTTransmit_HAL (uint16_t ADCReading) {
    char msg[8];
    sprintf(msg, "%hu\r\n", ADCReading); // h, short int, u unsign, r is back to beginning line, and n is down the line
    HAL_UART_Transmit(&huart6, (uint8_t*)msg, strlen(msg), HAL_MAX_DELAY); //HAL MAX DELAY mean it will wait until the thing finish
}

//Bare Metal UART Driver