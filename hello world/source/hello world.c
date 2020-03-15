/*
 * Copyright 2016-2020 NXP
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of NXP Semiconductor, Inc. nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
 
/**
 * @file    hello world.c
 * @brief   Application entry point.
 */
#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MK22F51212.h"
/* TODO: insert other include files here. */
#include "fsl_gpio.h"
#include "led.h"
/* TODO: insert other definitions and declarations here. */

/*
 * @brief   Application entry point.
 */
int main(void) {
  	/* Init board hardware. */
    BOARD_InitBootPins();
    BOARD_InitBootClocks();
    BOARD_InitBootPeripherals();

    disable_all_leds();

	char front_led_on = 0;
	char back_led_on = 0;
	char color_right = 0;
	char color_left = 0;

    char js_up_brake = 1;
    char js_down_brake = 1;
    char js_left_brake = 1;
    char js_right_brake = 1;
    char js_push_brake = 1;

    while(1) {

        char js_up_state = GPIO_PinRead(BOARD_INITPINS_JS_UP_GPIO, BOARD_INITPINS_JS_UP_PIN);
        char js_down_state = GPIO_PinRead(BOARD_INITPINS_JS_DOWN_GPIO, BOARD_INITPINS_JS_DOWN_PIN);
        char js_left_state = GPIO_PinRead(BOARD_INITPINS_JS_LEFT_GPIO, BOARD_INITPINS_JS_LEFT_PIN);
        char js_right_state = GPIO_PinRead(BOARD_INITPINS_JS_RIGHT_GPIO, BOARD_INITPINS_JS_RIGHT_PIN);
        char js_push_state = GPIO_PinRead(BOARD_INITPINS_JS_PUSH_GPIO, BOARD_INITPINS_JS_PUSH_PIN);


        // if joystick up pressed
		if (js_up_state != 1) {
			if (js_up_brake) {
				front_led_on = 1;
			}
			js_up_brake = 0;
		}
		else {
			js_up_brake = 1;
		}

		// if joystick down pressed
		if (js_down_state != 1) {
			if (js_down_brake) {
				back_led_on = 1;
			}
			js_down_brake = 0;
		}
		else {
			js_down_brake = 1;
		}

		// if joystick left pressed
		if (js_left_state != 1) {
			if (js_left_brake) {
				if (color_left < 5) {
					color_left++;
				}
				else {
					color_left = 0;
				}
			}
			js_left_brake = 0;
		}
		else {
			js_left_brake = 1;
		}

		// if joystick right pressed
		if (js_right_state != 1) {
			if (js_right_brake) {
				if (color_right < 5) {
					color_right++;
				}
				else {
					color_right = 0;
				}
			}
			js_right_brake = 0;
		}
		else {
			js_right_brake = 1;
		}

		// if joystick middle pressed
		if (js_push_state != 1) {
			if (js_push_brake) {
				front_led_on = 0;
				back_led_on = 0;
			}
			js_push_brake = 0;
		}
		else {
			js_push_brake = 1;
		}

		if (front_led_on) {
			if (color_left == 0) {
				GPIO_PinWrite(BOARD_INITPINS_LED_GREEN_F_L_GPIO, BOARD_INITPINS_LED_GREEN_F_L_PIN, 1);
				GPIO_PinWrite(BOARD_INITPINS_LED_BLUE_F_L_GPIO, BOARD_INITPINS_LED_BLUE_F_L_PIN, 1);
				GPIO_PinWrite(BOARD_INITPINS_LED_RED_F_L_GPIO, BOARD_INITPINS_LED_RED_F_L_PIN, 0);
			}
			else if (color_left == 1) {
				GPIO_PinWrite(BOARD_INITPINS_LED_BLUE_F_L_GPIO, BOARD_INITPINS_LED_BLUE_F_L_PIN, 1);
				GPIO_PinWrite(BOARD_INITPINS_LED_RED_F_L_GPIO, BOARD_INITPINS_LED_RED_F_L_PIN, 1);
				GPIO_PinWrite(BOARD_INITPINS_LED_GREEN_F_L_GPIO, BOARD_INITPINS_LED_GREEN_F_L_PIN, 0);
			}
			else if (color_left == 2) {
				GPIO_PinWrite(BOARD_INITPINS_LED_RED_F_L_GPIO, BOARD_INITPINS_LED_RED_F_L_PIN, 1);
				GPIO_PinWrite(BOARD_INITPINS_LED_GREEN_F_L_GPIO, BOARD_INITPINS_LED_GREEN_F_L_PIN, 1);
				GPIO_PinWrite(BOARD_INITPINS_LED_BLUE_F_L_GPIO, BOARD_INITPINS_LED_BLUE_F_L_PIN, 0);
			}
			else if (color_left == 3) {
				GPIO_PinWrite(BOARD_INITPINS_LED_BLUE_F_L_GPIO, BOARD_INITPINS_LED_BLUE_F_L_PIN, 1);
				GPIO_PinWrite(BOARD_INITPINS_LED_RED_F_L_GPIO, BOARD_INITPINS_LED_RED_F_L_PIN, 0);
				GPIO_PinWrite(BOARD_INITPINS_LED_GREEN_F_L_GPIO, BOARD_INITPINS_LED_GREEN_F_L_PIN, 0);
			}
			else if (color_left == 4) {
				GPIO_PinWrite(BOARD_INITPINS_LED_GREEN_F_L_GPIO, BOARD_INITPINS_LED_GREEN_F_L_PIN, 1);
				GPIO_PinWrite(BOARD_INITPINS_LED_BLUE_F_L_GPIO, BOARD_INITPINS_LED_BLUE_F_L_PIN, 0);
				GPIO_PinWrite(BOARD_INITPINS_LED_RED_F_L_GPIO, BOARD_INITPINS_LED_RED_F_L_PIN, 0);
			}
			else {
				GPIO_PinWrite(BOARD_INITPINS_LED_RED_F_L_GPIO, BOARD_INITPINS_LED_RED_F_L_PIN, 1);
				GPIO_PinWrite(BOARD_INITPINS_LED_GREEN_F_L_GPIO, BOARD_INITPINS_LED_GREEN_F_L_PIN, 0);
				GPIO_PinWrite(BOARD_INITPINS_LED_BLUE_F_L_GPIO, BOARD_INITPINS_LED_BLUE_F_L_PIN, 0);
			}

			if (color_right == 0) {
				GPIO_PinWrite(BOARD_INITPINS_LED_GREEN_F_R_GPIO, BOARD_INITPINS_LED_GREEN_F_R_PIN, 1);
				GPIO_PinWrite(BOARD_INITPINS_LED_BLUE_F_R_GPIO, BOARD_INITPINS_LED_BLUE_F_R_PIN, 1);
				GPIO_PinWrite(BOARD_INITPINS_LED_RED_F_R_GPIO, BOARD_INITPINS_LED_RED_F_R_PIN, 0);
			}
			else if (color_right == 1) {
				GPIO_PinWrite(BOARD_INITPINS_LED_BLUE_F_R_GPIO, BOARD_INITPINS_LED_BLUE_F_R_PIN, 1);
				GPIO_PinWrite(BOARD_INITPINS_LED_RED_F_R_GPIO, BOARD_INITPINS_LED_RED_F_R_PIN, 1);
				GPIO_PinWrite(BOARD_INITPINS_LED_GREEN_F_R_GPIO, BOARD_INITPINS_LED_GREEN_F_R_PIN, 0);
			}
			else if (color_right == 2) {
				GPIO_PinWrite(BOARD_INITPINS_LED_RED_F_R_GPIO, BOARD_INITPINS_LED_RED_F_R_PIN, 1);
				GPIO_PinWrite(BOARD_INITPINS_LED_GREEN_F_R_GPIO, BOARD_INITPINS_LED_GREEN_F_R_PIN, 1);
				GPIO_PinWrite(BOARD_INITPINS_LED_BLUE_F_R_GPIO, BOARD_INITPINS_LED_BLUE_F_R_PIN, 0);
			}
			else if (color_right == 3) {
				GPIO_PinWrite(BOARD_INITPINS_LED_BLUE_F_R_GPIO, BOARD_INITPINS_LED_BLUE_F_R_PIN, 1);
				GPIO_PinWrite(BOARD_INITPINS_LED_RED_F_R_GPIO, BOARD_INITPINS_LED_RED_F_R_PIN, 0);
				GPIO_PinWrite(BOARD_INITPINS_LED_GREEN_F_R_GPIO, BOARD_INITPINS_LED_GREEN_F_R_PIN, 0);
			}
			else if (color_right == 4) {
				GPIO_PinWrite(BOARD_INITPINS_LED_GREEN_F_R_GPIO, BOARD_INITPINS_LED_GREEN_F_R_PIN, 1);
				GPIO_PinWrite(BOARD_INITPINS_LED_BLUE_F_R_GPIO, BOARD_INITPINS_LED_BLUE_F_R_PIN, 0);
				GPIO_PinWrite(BOARD_INITPINS_LED_RED_F_R_GPIO, BOARD_INITPINS_LED_RED_F_R_PIN, 0);
			}
			else {
				GPIO_PinWrite(BOARD_INITPINS_LED_RED_F_R_GPIO, BOARD_INITPINS_LED_RED_F_R_PIN, 1);
				GPIO_PinWrite(BOARD_INITPINS_LED_GREEN_F_R_GPIO, BOARD_INITPINS_LED_GREEN_F_R_PIN, 0);
				GPIO_PinWrite(BOARD_INITPINS_LED_BLUE_F_R_GPIO, BOARD_INITPINS_LED_BLUE_F_R_PIN, 0);
			}
		}
        else {
        	GPIO_PinWrite(BOARD_INITPINS_LED_RED_F_L_GPIO, BOARD_INITPINS_LED_RED_F_L_PIN, 1);
        	GPIO_PinWrite(BOARD_INITPINS_LED_RED_F_R_GPIO, BOARD_INITPINS_LED_RED_F_R_PIN, 1);
        	GPIO_PinWrite(BOARD_INITPINS_LED_GREEN_F_L_GPIO, BOARD_INITPINS_LED_GREEN_F_L_PIN, 1);
        	GPIO_PinWrite(BOARD_INITPINS_LED_GREEN_F_R_GPIO, BOARD_INITPINS_LED_GREEN_F_R_PIN, 1);
        	GPIO_PinWrite(BOARD_INITPINS_LED_BLUE_F_L_GPIO, BOARD_INITPINS_LED_BLUE_F_L_PIN, 1);
        	GPIO_PinWrite(BOARD_INITPINS_LED_BLUE_F_R_GPIO, BOARD_INITPINS_LED_BLUE_F_R_PIN, 1);
        }

		if (back_led_on) {

			GPIO_PinWrite(BOARD_INITPINS_LED_RED_R_L_GPIO, BOARD_INITPINS_LED_RED_R_L_PIN, 0);
			GPIO_PinWrite(BOARD_INITPINS_LED_RED_R_R_GPIO, BOARD_INITPINS_LED_RED_R_R_PIN, 0);
		}
		else {
			GPIO_PinWrite(BOARD_INITPINS_LED_RED_R_L_GPIO, BOARD_INITPINS_LED_RED_R_L_PIN, 1);
			GPIO_PinWrite(BOARD_INITPINS_LED_RED_R_R_GPIO, BOARD_INITPINS_LED_RED_R_R_PIN, 1);
		}

        __asm volatile ("nop");
    }
    return 0 ;
}
