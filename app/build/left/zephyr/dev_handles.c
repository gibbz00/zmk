#include <device.h>
#include <toolchain.h>

/* 1 : /soc/clock@40000000:
 * Direct Dependencies:
 *   - (/soc)
 *   - (/soc/interrupt-controller@e000e100)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_clock_40000000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 2 : /soc/gpio@50000300:
 * Direct Dependencies:
 *   - (/soc)
 * Supported:
 *   - /kscan
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_gpio_50000300[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 20, DEVICE_HANDLE_ENDS };

/* 3 : /soc/gpio@50000000:
 * Direct Dependencies:
 *   - (/soc)
 * Supported:
 *   - /kscan
 *   - (/leds/led_0)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_gpio_50000000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 20, DEVICE_HANDLE_ENDS };

/* 4 : /soc/random@4000d000:
 * Direct Dependencies:
 *   - (/soc)
 *   - (/soc/interrupt-controller@e000e100)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_random_4000d000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 5 : sysinit:
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_usb_hid_device_0[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 6 : /soc/adc@40007000:
 * Direct Dependencies:
 *   - (/soc)
 *   - (/soc/interrupt-controller@e000e100)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_adc_40007000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 7 : /soc/flash-controller@4001e000:
 * Direct Dependencies:
 *   - (/soc)
 * Supported:
 *   - (/soc/flash-controller@4001e000/flash@0)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_flash_controller_4001e000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 8 : /vbatt:
 * Direct Dependencies:
 *   - (/)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_vbatt[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 9 : /behaviors/behavior_reset_dfu:
 * Direct Dependencies:
 *   - (/behaviors)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_behaviors_S_behavior_reset_dfu[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 10 : /behaviors/behavior_reset:
 * Direct Dependencies:
 *   - (/behaviors)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_behaviors_S_behavior_reset[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 11 : /behaviors/behavior_key_press:
 * Direct Dependencies:
 *   - (/behaviors)
 * Supported:
 *   - /behaviors/ctrl_mod_tap_dance
 *   - (/keymap/default_layer)
 *   - (/keymap/function_layer)
 *   - (/keymap/lowered_layer)
 *   - (/keymap/raised_layer)
 *   - /macros/diaeresis_a
 *   - /macros/diaeresis_o
 *   - /macros/ring_a
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_behaviors_S_behavior_key_press[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 13, 16, 12, 14, DEVICE_HANDLE_ENDS };

/* 12 : /macros/ring_a:
 * Direct Dependencies:
 *   - (/macros)
 *   - /behaviors/behavior_key_press
 *   - (/behaviors/macro_control_mode_press)
 *   - (/behaviors/macro_control_mode_release)
 *   - (/behaviors/macro_control_mode_tap)
 * Supported:
 *   - (/keymap/default_layer)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_macros_S_ring_a[] = { 11, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 13 : /macros/diaeresis_a:
 * Direct Dependencies:
 *   - (/macros)
 *   - /behaviors/behavior_key_press
 *   - (/behaviors/macro_control_mode_press)
 *   - (/behaviors/macro_control_mode_release)
 *   - (/behaviors/macro_control_mode_tap)
 * Supported:
 *   - (/keymap/default_layer)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_macros_S_diaeresis_a[] = { 11, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 14 : /macros/diaeresis_o:
 * Direct Dependencies:
 *   - (/macros)
 *   - /behaviors/behavior_key_press
 *   - (/behaviors/macro_control_mode_press)
 *   - (/behaviors/macro_control_mode_release)
 *   - (/behaviors/macro_control_mode_tap)
 * Supported:
 *   - (/keymap/default_layer)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_macros_S_diaeresis_o[] = { 11, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 15 : /behaviors/behavior_momentary_layer:
 * Direct Dependencies:
 *   - (/behaviors)
 * Supported:
 *   - (/keymap/default_layer)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_behaviors_S_behavior_momentary_layer[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 16 : /behaviors/ctrl_mod_tap_dance:
 * Direct Dependencies:
 *   - (/behaviors)
 *   - /behaviors/behavior_key_press
 * Supported:
 *   - (/keymap/default_layer)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_behaviors_S_ctrl_mod_tap_dance[] = { 11, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 17 : /behaviors/behavior_transparent:
 * Direct Dependencies:
 *   - (/behaviors)
 * Supported:
 *   - (/keymap/function_layer)
 *   - (/keymap/lowered_layer)
 *   - (/keymap/raised_layer)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_behaviors_S_behavior_transparent[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 18 : /behaviors/behavior_none:
 * Direct Dependencies:
 *   - (/behaviors)
 * Supported:
 *   - (/keymap/default_layer)
 *   - (/keymap/lowered_layer)
 *   - (/keymap/raised_layer)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_behaviors_S_behavior_none[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 19 : /behaviors/behavior_ext_power:
 * Direct Dependencies:
 *   - (/behaviors)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_behaviors_S_behavior_ext_power[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 20 : /kscan:
 * Direct Dependencies:
 *   - (/)
 *   - /soc/gpio@50000000
 *   - /soc/gpio@50000300
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_kscan[] = { 2, 3, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };
