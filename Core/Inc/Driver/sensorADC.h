#pragma once

#include <stdint.h>
#include "stm32f4xx_hal.h"

uint16_t WallSensorRead (GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin, ADC_HandleTypeDef *hadc);