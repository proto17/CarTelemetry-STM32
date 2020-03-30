/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

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
#define usr_led_out_Pin GPIO_PIN_13
#define usr_led_out_GPIO_Port GPIOC
#define clk_32khz_in_Pin GPIO_PIN_14
#define clk_32khz_in_GPIO_Port GPIOC
#define clk_32khz_out_Pin GPIO_PIN_15
#define clk_32khz_out_GPIO_Port GPIOC
#define clk_8mhz_in_Pin GPIO_PIN_0
#define clk_8mhz_in_GPIO_Port GPIOD
#define clk_8mhz_out_Pin GPIO_PIN_1
#define clk_8mhz_out_GPIO_Port GPIOD
#define oil_pressure_in_Pin GPIO_PIN_0
#define oil_pressure_in_GPIO_Port GPIOA
#define water_pressure_in_Pin GPIO_PIN_1
#define water_pressure_in_GPIO_Port GPIOA
#define host_tx_Pin GPIO_PIN_2
#define host_tx_GPIO_Port GPIOA
#define host_rx_Pin GPIO_PIN_3
#define host_rx_GPIO_Port GPIOA
#define fuel_pressure_in_Pin GPIO_PIN_4
#define fuel_pressure_in_GPIO_Port GPIOA
#define spi_sck_Pin GPIO_PIN_5
#define spi_sck_GPIO_Port GPIOA
#define spi_miso_Pin GPIO_PIN_6
#define spi_miso_GPIO_Port GPIOA
#define spi_mosi_Pin GPIO_PIN_7
#define spi_mosi_GPIO_Port GPIOA
#define water_temp_in_Pin GPIO_PIN_0
#define water_temp_in_GPIO_Port GPIOB
#define oil_temp_in_Pin GPIO_PIN_1
#define oil_temp_in_GPIO_Port GPIOB
#define rpm_in_Pin GPIO_PIN_2
#define rpm_in_GPIO_Port GPIOB
#define multi_proc_tx_Pin GPIO_PIN_10
#define multi_proc_tx_GPIO_Port GPIOB
#define multi_proc_rx_Pin GPIO_PIN_11
#define multi_proc_rx_GPIO_Port GPIOB
#define brake_pedal_sw_in_Pin GPIO_PIN_12
#define brake_pedal_sw_in_GPIO_Port GPIOB
#define brake_pedal_sw_in_EXTI_IRQn EXTI15_10_IRQn
#define head_temp_cs_out_Pin GPIO_PIN_13
#define head_temp_cs_out_GPIO_Port GPIOB
#define water_temp_sw_low_in_Pin GPIO_PIN_14
#define water_temp_sw_low_in_GPIO_Port GPIOB
#define water_temp_sw_low_in_EXTI_IRQn EXTI15_10_IRQn
#define speed_in_Pin GPIO_PIN_15
#define speed_in_GPIO_Port GPIOB
#define speed_in_EXTI_IRQn EXTI15_10_IRQn
#define brake_fluid_lvl_in_Pin GPIO_PIN_8
#define brake_fluid_lvl_in_GPIO_Port GPIOA
#define brake_fluid_lvl_in_EXTI_IRQn EXTI9_5_IRQn
#define gps_tx_Pin GPIO_PIN_9
#define gps_tx_GPIO_Port GPIOA
#define gps_rx_Pin GPIO_PIN_10
#define gps_rx_GPIO_Port GPIOA
#define dyn_oil_lvl_sw_in_Pin GPIO_PIN_11
#define dyn_oil_lvl_sw_in_GPIO_Port GPIOA
#define dyn_oil_lvl_sw_in_EXTI_IRQn EXTI15_10_IRQn
#define lora_cs_out_Pin GPIO_PIN_12
#define lora_cs_out_GPIO_Port GPIOA
#define accel_2_cs_out_Pin GPIO_PIN_15
#define accel_2_cs_out_GPIO_Port GPIOA
#define lora_dio_trigger_Pin GPIO_PIN_3
#define lora_dio_trigger_GPIO_Port GPIOB
#define lora_rst_out_Pin GPIO_PIN_4
#define lora_rst_out_GPIO_Port GPIOB
#define water_temp_sw_high_in_Pin GPIO_PIN_5
#define water_temp_sw_high_in_GPIO_Port GPIOB
#define water_temp_sw_high_in_EXTI_IRQn EXTI9_5_IRQn
#define static_oil_lvl_sw_in_Pin GPIO_PIN_6
#define static_oil_lvl_sw_in_GPIO_Port GPIOB
#define static_oil_lvl_sw_in_EXTI_IRQn EXTI9_5_IRQn
#define water_lvl_sw_in_Pin GPIO_PIN_7
#define water_lvl_sw_in_GPIO_Port GPIOB
#define water_lvl_sw_in_EXTI_IRQn EXTI9_5_IRQn
#define accel_1_cs_out_Pin GPIO_PIN_8
#define accel_1_cs_out_GPIO_Port GPIOB
#define full_throt_sw_in_Pin GPIO_PIN_9
#define full_throt_sw_in_GPIO_Port GPIOB
#define full_throt_sw_in_EXTI_IRQn EXTI9_5_IRQn
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
