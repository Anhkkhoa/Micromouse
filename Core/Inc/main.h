/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define RIGHT_MOTOR_CHA_Pin GPIO_PIN_0
#define RIGHT_MOTOR_CHA_GPIO_Port GPIOA
#define RIGHT_MOTOR_CHB_Pin GPIO_PIN_1
#define RIGHT_MOTOR_CHB_GPIO_Port GPIOA
#define FRONT_LEFT_READ_Pin GPIO_PIN_1
#define FRONT_LEFT_READ_GPIO_Port GPIOB
#define FRONT_LEFT_EMIT_Pin GPIO_PIN_12
#define FRONT_LEFT_EMIT_GPIO_Port GPIOB
#define LEFT_MOTOR_PWM1_Pin GPIO_PIN_8
#define LEFT_MOTOR_PWM1_GPIO_Port GPIOA
#define LEFT_MOTOR_PWM2_Pin GPIO_PIN_9
#define LEFT_MOTOR_PWM2_GPIO_Port GPIOA
#define RIGHT_MOTOR_PWM2_Pin GPIO_PIN_10
#define RIGHT_MOTOR_PWM2_GPIO_Port GPIOA
#define RIGHT_MOTOR_PWM1_Pin GPIO_PIN_11
#define RIGHT_MOTOR_PWM1_GPIO_Port GPIOA
#define LEFT_MOTOR_CHA_Pin GPIO_PIN_15
#define LEFT_MOTOR_CHA_GPIO_Port GPIOA
#define LEFT_MOTOR_CHB_Pin GPIO_PIN_3
#define LEFT_MOTOR_CHB_GPIO_Port GPIOB
#define MOTOR_SLEEP_Pin GPIO_PIN_4
#define MOTOR_SLEEP_GPIO_Port GPIOB
#define MOTOR_FAULT_Pin GPIO_PIN_5
#define MOTOR_FAULT_GPIO_Port GPIOB
#define BLUE_RGB_Pin GPIO_PIN_6
#define BLUE_RGB_GPIO_Port GPIOB
#define RED_RGB_Pin GPIO_PIN_7
#define RED_RGB_GPIO_Port GPIOB
#define GREEN_RGB_Pin GPIO_PIN_8
#define GREEN_RGB_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
