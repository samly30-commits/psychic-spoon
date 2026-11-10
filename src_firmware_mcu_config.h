/**
 * @file mcu_config.h
 * @brief Target MCU Hardware Specifications & Pin Mapping
 * @note Target: STM32F407VGT6 (ARM Cortex-M4)
 */

#ifndef MCU_CONFIG_H
#define MCU_CONFIG_H

#include <stdint.h>

/* System Clock Configuration */
#define MCU_SYS_CLK_HZ      168000000U  /* 168 MHz */

/* Peripheral Base Addresses (Virtual/Mock for Simulation) */
#define MOCK_PERIPH_BASE    0x40000000U
#define MOCK_GPIOA_BASE     (MOCK_PERIPH_BASE + 0x00020000U)
#define MOCK_I2C1_BASE      (MOCK_PERIPH_BASE + 0x00005400U)

/* Hardware Pin Mapping Rules */
#define LED_STATUS_PIN      5           /* GPIOA Pin 5 */
#define I2C1_SCL_PIN        6           /* GPIOB Pin 6 */
#define I2C1_SDA_PIN        7           /* GPIOB Pin 7 */

/* System Safety Thresholds */
#define MAX_SYSTEM_CURRENT_MA  500U     /* Hardware limit */
#define MAX_OPERATING_TEMP_C   85       /* Thermal throttling limit */

#endif /* MCU_CONFIG_H */
