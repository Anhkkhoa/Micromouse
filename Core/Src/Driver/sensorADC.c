#include <sensorADC.h>
#include <stdint.h>
#include "stm32f4xx_hal.h"

uint16_t WallSensorRead (GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin, ADC_HandleTypeDef *hadc) {
    uint16_t raw;
    HAL_GPIO_WritePin(GPIOx, GPIO_Pin, GPIO_PIN_SET); // Set GPIO pin high
    HAL_ADC_Start(hadc);                             // Start ADC conversion
    HAL_ADC_PollForConversion(hadc, HAL_MAX_DELAY);  // Wait until ADC conversion is complete
    raw = HAL_ADC_GetValue(hadc);        
    return raw;
}
