/*
 * fsm_manual.c
 *
 *  Created on: Dec 16, 2024
 *      Author: LENOVO
 */
#include "fsm_manual.h"

void increase_duration() {
    led1_value = (led1_value + 1) % 100;
}

void check_and_update_durations() {
    if (((red_duration == -1) && (green_duration == -1)) ||
        ((green_duration == -1) && (yellow_duration == -1)) ||
        ((yellow_duration == -1) && (red_duration == -1))) {
        red_duration = DEFAULT_RED;
        green_duration = DEFAULT_GREEN;
        yellow_duration = DEFAULT_YELLOW;
    }
    else if (red_duration == -1) {
        red_duration = green_duration + yellow_duration;
    }
    else if (green_duration == -1) {
        green_duration = red_duration - yellow_duration;
    }
    else if (yellow_duration == -1) {
        yellow_duration = red_duration - green_duration;
    }
    else if (red_duration != green_duration + yellow_duration) {
        red_duration = DEFAULT_RED;
        green_duration = DEFAULT_GREEN;
        yellow_duration = DEFAULT_YELLOW;
    }
}

void fsm_manual() {
    switch (mode) {
        case MODE1:
            fsm_automatic();

            if (is_button_pressed(0)) {
                led1_value = 0;
                led2_value = 1;
                update_led7seg();
                led_status = INIT;
                mode = MODE2;
            }
            break;

        case MODE2:
        case MODE3:
        case MODE4:
            if (mode == MODE2) {
                RED_1();
                RED_2();
            } else if (mode == MODE3) {
                YELLOW_1();
                YELLOW_2();
            } else if (mode == MODE4) {
                GREEN_1();
                GREEN_2();
            }

            if (is_button_pressed(1)) {
                increase_duration();
                update_led7seg();
            }

            if (is_button_pressed(0)) {
                if (mode == MODE2) red_duration = -1;
                else if (mode == MODE3) yellow_duration = -1;
                else if (mode == MODE4) green_duration = -1;

                if (mode == MODE4) {
                    check_and_update_durations();
                    mode = MODE1;
                    led_status = INIT;
                    status = INIT;
                } else {
                    led1_value = 0;
                    led2_value = mode + 1;
                    update_led7seg();
                    led_status = INIT;
                    mode++;
                }
            }

            if (is_button_pressed(2)) {
                if (mode == MODE2) red_duration = led1_value;
                else if (mode == MODE3) yellow_duration = led1_value;
                else if (mode == MODE4) green_duration = led1_value;

                if (mode == MODE4) {
                    check_and_update_durations();
                    mode = MODE1;
                    led_status = INIT;
                    status = INIT;
                } else {
                    led1_value = 0;
                    led2_value = mode + 1;
                    update_led7seg();
                    led_status = INIT;
                    mode++;
                }
            }

            led7_segRun();
            break;

        default:
            break;
    }
}


