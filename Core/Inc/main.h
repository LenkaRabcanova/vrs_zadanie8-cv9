/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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

#include "stm32f3xx_ll_i2c.h"
#include "stm32f3xx_ll_rcc.h"
#include "stm32f3xx_ll_bus.h"
#include "stm32f3xx_ll_system.h"
#include "stm32f3xx_ll_exti.h"
#include "stm32f3xx_ll_cortex.h"
#include "stm32f3xx_ll_utils.h"
#include "stm32f3xx_ll_pwr.h"
#include "stm32f3xx_ll_dma.h"
#include "stm32f3xx_ll_tim.h"
#include "stm32f3xx_ll_gpio.h"

#if defined(USE_FULL_ASSERT)
#include "stm32_assert.h"
#endif /* USE_FULL_ASSERT */

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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define segmentB_Pin LL_GPIO_PIN_0
#define segmentB_GPIO_Port GPIOA
#define segmentA_Pin LL_GPIO_PIN_1
#define segmentA_GPIO_Port GPIOA
#define digit3_Pin LL_GPIO_PIN_2
#define digit3_GPIO_Port GPIOA
#define segmentF_Pin LL_GPIO_PIN_3
#define segmentF_GPIO_Port GPIOA
#define digit1_Pin LL_GPIO_PIN_4
#define digit1_GPIO_Port GPIOA
#define digitTime_Pin LL_GPIO_PIN_7
#define digitTime_GPIO_Port GPIOA
#define digit0_Pin LL_GPIO_PIN_0
#define digit0_GPIO_Port GPIOB
#define segmentDP_Pin LL_GPIO_PIN_1
#define segmentDP_GPIO_Port GPIOB
#define segmentC_Pin LL_GPIO_PIN_8
#define segmentC_GPIO_Port GPIOA
#define segmentE_Pin LL_GPIO_PIN_11
#define segmentE_GPIO_Port GPIOA
#define digit2_Pin LL_GPIO_PIN_12
#define digit2_GPIO_Port GPIOA
#define btn_Pin LL_GPIO_PIN_3
#define btn_GPIO_Port GPIOB
#define btn_EXTI_IRQn EXTI3_IRQn
#define segmentG_Pin LL_GPIO_PIN_4
#define segmentG_GPIO_Port GPIOB
#define segmentD_Pin LL_GPIO_PIN_5
#define segmentD_GPIO_Port GPIOB
#ifndef NVIC_PRIORITYGROUP_0
#define NVIC_PRIORITYGROUP_0         ((uint32_t)0x00000007) /*!< 0 bit  for pre-emption priority,
                                                                 4 bits for subpriority */
#define NVIC_PRIORITYGROUP_1         ((uint32_t)0x00000006) /*!< 1 bit  for pre-emption priority,
                                                                 3 bits for subpriority */
#define NVIC_PRIORITYGROUP_2         ((uint32_t)0x00000005) /*!< 2 bits for pre-emption priority,
                                                                 2 bits for subpriority */
#define NVIC_PRIORITYGROUP_3         ((uint32_t)0x00000004) /*!< 3 bits for pre-emption priority,
                                                                 1 bit  for subpriority */
#define NVIC_PRIORITYGROUP_4         ((uint32_t)0x00000003) /*!< 4 bits for pre-emption priority,
                                                                 0 bit  for subpriority */
#endif
/* USER CODE BEGIN Private defines */
#define DIGIT_0_ON		LL_GPIO_SetOutputPin(digit0_GPIO_Port, digit0_Pin)
#define DIGIT_1_ON		LL_GPIO_SetOutputPin(digit1_GPIO_Port, digit1_Pin)
#define DIGIT_2_ON		LL_GPIO_SetOutputPin(digit2_GPIO_Port, digit2_Pin)
#define DIGIT_3_ON		LL_GPIO_SetOutputPin(digit3_GPIO_Port, digit3_Pin)
#define DIGIT_TIME_ON	LL_GPIO_SetOutputPin(digitTime_GPIO_Port, digitTime_Pin)

// defines for input port used by button
#define		GPIO_PORT_BUTTON				btn_GPIO_Port
#define		GPIO_PIN_BUTTON					btn_Pin

// defines for "checkButtonState"
#define		TRIGGER_RISE					1
#define		TRIGGER_FALL					0

#define		BUTTON_EXTI_TRIGGER				TRIGGER_FALL
#define		BUTTON_EXTI_SAMPLES_WINDOW		30
#define		BUTTON_EXTI_SAMPLES_REQUIRED	20

uint8_t check_button_state(GPIO_TypeDef* PORT, uint8_t PIN);

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
