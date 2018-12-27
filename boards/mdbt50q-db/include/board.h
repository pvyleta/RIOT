/*
 * Copyright (C) 2018 Petr Vyleta
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     boards_mdbt50q-db
 * @{
 *
 * @file
 * @brief       Board specific configuration for the Raytac MDBT50Q-DB.
 * 				Ported from nRF52840 DK.
 *
 * @author      Petr Vyleta <petr.vyleta@gmail.com>
 */

#ifndef BOARD_H
#define BOARD_H

#include "board_common.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @name    LED pin configuration
 * @{
 */
#define LED0_PIN            GPIO_PIN(0, 13)
#define LED1_PIN            GPIO_PIN(0, 14)
#define LED2_PIN            GPIO_PIN(0, 15)
#define LED3_PIN            GPIO_PIN(0, 16)

#define LED_PORT            (NRF_P0)
#define LED0_MASK           (1 << 13)
#define LED1_MASK           (1 << 14)
#define LED2_MASK           (1 << 15)
#define LED3_MASK           (1 << 16)
#define LED_MASK            (LED0_MASK | LED1_MASK | LED2_MASK | LED3_MASK)

#define LED0_ON             (LED_PORT->OUTCLR = LED0_MASK)
#define LED0_OFF            (LED_PORT->OUTSET = LED0_MASK)
#define LED0_TOGGLE         (LED_PORT->OUT   ^= LED0_MASK)

#define LED1_ON             (LED_PORT->OUTCLR = LED1_MASK)
#define LED1_OFF            (LED_PORT->OUTSET = LED1_MASK)
#define LED1_TOGGLE         (LED_PORT->OUT   ^= LED1_MASK)

#define LED2_ON             (LED_PORT->OUTCLR = LED2_MASK)
#define LED2_OFF            (LED_PORT->OUTSET = LED2_MASK)
#define LED2_TOGGLE         (LED_PORT->OUT   ^= LED2_MASK)

#define LED3_ON             (LED_PORT->OUTCLR = LED3_MASK)
#define LED3_OFF            (LED_PORT->OUTSET = LED3_MASK)
#define LED3_TOGGLE         (LED_PORT->OUT   ^= LED3_MASK)
/** @} */

/**
 * @name    Button pin configuration
 * @{
 */
#define BTN0_PIN            GPIO_PIN(0, 11)
#define BTN0_MODE           GPIO_IN_PU
#define BTN1_PIN            GPIO_PIN(0, 12)
#define BTN1_MODE           GPIO_IN_PU
#define BTN2_PIN            GPIO_PIN(0, 24)
#define BTN2_MODE           GPIO_IN_PU
#define BTN3_PIN            GPIO_PIN(0, 25)
#define BTN3_MODE           GPIO_IN_PU
/** @} */

/**
 * @name    UART board-specific configuration extending periph_conf.h
 * @{
 */
/* TODO: PV 28.12.2018 Consider adding this to the original nrf52840DK board, and mention the raytac there as well, remove raytac completely */
#define UART_HWFLOWCTRL		(1)
#define UART_PIN_CTS        GPIO_PIN(0,7)
#define UART_PIN_RTS        GPIO_PIN(0,5)
/** @} */

#ifdef __cplusplus
}
#endif

#endif /* BOARD_H */
/** @} */
