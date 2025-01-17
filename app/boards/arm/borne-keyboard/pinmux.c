/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#include <kernel.h>
#include <device.h>
#include <init.h>
#include <drivers/gpio.h>
#include <sys/sys_io.h>
#include <devicetree.h>

#define CHARGE_CTRL_1 26
#define CHARGE_CTRL_2 4

static int pinmux_borne_init(const struct device *port) {
    ARG_UNUSED(port);

#if CONFIG_BOARD_BORNE
    const struct device *p0 = device_get_binding("GPIO_0");
    const struct device *p1 = device_get_binding("GPIO_1");
#if CONFIG_BOARD_BORNE_CHARGER_CURRENT_40MA
    gpio_pin_configure(p0, CHARGE_CTRL_1, GPIO_INPUT | GPIO_PULL_DOWN);
    gpio_pin_configure(p0, CHARGE_CTRL_2, GPIO_INPUT);
#elif CONFIG_BOARD_BORNE_CHARGER_CURRENT_100MA
    gpio_pin_configure(p0, CHARGE_CTRL_1, GPIO_OUTPUT);
    gpio_pin_set(p0, CHARGE_CTRL_1, 0);
    gpio_pin_configure(p0, CHARGE_CTRL_2, GPIO_INPUT);
#elif CONFIG_BOARD_BORNE_CHARGER_CURRENT_CHARGE_CTRL_20MA
    gpio_pin_configure(p0, CHARGE_CTRL_1, GPIO_OUTPUT);
    gpio_pin_set(p0, CHARGE_CTRL_1, 0);
    gpio_pin_configure(p0, CHARGE_CTRL_2, GPIO_INPUT | GPIO_PULL_DOWN);
#elif CONFIG_BOARD_BORNE_CHARGER_CURRENT_250MA
    gpio_pin_configure(p0, CHARGE_CTRL_1, GPIO_INPUT);
    gpio_pin_configure(p0, CHARGE_CTRL_2, GPIO_OUTPUT);
    gpio_pin_set(p0, CHARGE_CTRL_2, 0);
#elif CONFIG_BOARD_BORNE_CHARGER_CURRENT_350MA
    gpio_pin_configure(p0, CHARGE_CTRL_1, GPIO_OUTPUT);
    gpio_pin_set(p0, CHARGE_CTRL_1, 0);
    gpio_pin_configure(p0, CHARGE_CTRL_2, GPIO_OUTPUT);
    gpio_pin_set(p0, CHARGE_CTRL_2, 0);
#elif CONFIG_BOARD_BORNE_CHARGER_CURRENT_NONE
    gpio_pin_configure(p0, CHARGE_CTRL_1, GPIO_INPUT);
    gpio_pin_configure(p0, CHARGE_CTRL_2, GPIO_INPUT);
#endif
#endif
    return 0;
}

SYS_INIT(pinmux_borne_init, APPLICATION, CONFIG_APPLICATION_INIT_PRIORITY);
