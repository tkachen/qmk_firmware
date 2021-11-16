/*

Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define EE_HANDS

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#define MOUSEKEY_WHEEL_DELAY 10
#define MOUSEKEY_WHEEL_DELTA 1
#define MOUSEKEY_WHEEL_INTERVAL 25 // 50
#define MOUSEKEY_WHEEL_MAX_SPEED 3 //8
#define MOUSEKEY_WHEEL_TIME_TO_MAX 200 //80
#define MOUSEKEY_WHEEL_INITIAL_MOVEMENTS 3 //8
#define MOUSEKEY_WHEEL_BASE_MOVEMENTS 12 //48
#define MOUSEKEY_WHEEL_ACCELERATED_MOVEMENTS 12 //48
#define MOUSEKEY_WHEEL_DECELERATED_MOVEMENTS 3 //8

// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 200

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
// #define TAPPING_FORCE_HOLD
    
// Apply the modifier on keys that are tapped during a short hold of a modtap
// #define PERMISSIVE_HOLD

// #ifdef ROTATIONAL_TRANSFORM_ANGLE
// #undef   ROTATIONAL_TRANSFORM_ANGLE
// #define  ROTATIONAL_TRANSFORM_ANGLE     -35
// #endif

#define CHARYBDIS_DRAGSCROLL_INVERT_X
// #define CHARYBDIS_DRAGSCROLL_INVERT_Y

#define CHARYBDIS_DPI_OPTIONS { 400 }
#define CHARYBDIS_DPI_DEFAULT 0

#define CHARYBDIS_SNIPER_OPTIONS { 100 }
#define CHARYBDIS_SNIPER_DEFAULT 0

// #define CHARYBDIS_AUTO_SNIPER_LAYER 4

// #define CHARYBDIS_DRAGSCROLL_DPI 100 // Fixed-DPI Drag Scroll
// #define CHARYBDIS_DRAGSCROLL_MULTIPLIER 0.2 // Variable-DPI Drag Scroll

#define CHARYBDIS_TRACKBALL_SPEED_DIVIDER_X 30
#define CHARYBDIS_TRACKBALL_SPEED_DIVIDER_Y 12


#ifdef RGBLIGHT_ENABLE
#define   RGBLIGHT_DEFAULT_HUE 0
// #define   RGBLIGHT_DEFAULT_SAT 0
#define   RGBLIGHT_EFFECT_STATIC_GRADIENT
#define   RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_STATIC_GRADIENT
#endif

#define BACKLIGHT_PIN D3
#define RGB_DI_PIN D3
#define RGBLED_NUM 33
#define RGBLED_SPLIT { 18, 15 }


/* RGB matrix support. */
#ifdef RGB_MATRIX_ENABLE
#define SPLIT_TRANSPORT_MIRROR
#define DRIVER_LED_TOTAL 33
#define RGB_MATRIX_KEYPRESSES // reacts to keypresses
// #define RGB_MATRIX_KEYRELEASES // reacts to keyreleases (instead of keypresses)
// #define RGB_MATRIX_FRAMEBUFFER_EFFECTS // enable framebuffer effects
// #define RGB_DISABLE_TIMEOUT 0 // number of milliseconds to wait until rgb automatically turns off
// #define RGB_DISABLE_AFTER_TIMEOUT 0 // OBSOLETE: number of ticks to wait until disabling effects
// #define RGB_DISABLE_WHEN_USB_SUSPENDED // turn off effects when suspended
// #define RGB_MATRIX_LED_PROCESS_LIMIT (DRIVER_LED_TOTAL + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
// #define RGB_MATRIX_LED_FLUSH_LIMIT 16 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150 // limits maximum brightness of LEDs to 200 out of 255. If not defined maximum brightness is set to 255
#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_GRADIENT_LEFT_RIGHT // Sets the default mode, if none has been set
#define RGB_MATRIX_STARTUP_HUE 0 // Sets the default hue value, if none has been set
#define RGB_MATRIX_STARTUP_SAT 255 // Sets the default saturation value, if none has been set
#define RGB_MATRIX_STARTUP_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS // Sets the default brightness value, if none has been set
#define RGB_MATRIX_STARTUP_SPD 50 // Sets the default animation speed, if none has been set
// #define RGB_MATRIX_DISABLE_KEYCODES // disables control of rgb matrix by keycodes (must use code functions to control the feature)
#define RGB_MATRIX_SPLIT { 18, 15 } 	// (Optional) For split keyboards, the number of LEDs connected on each half. X = left, Y = Right.
                              		// If RGB_MATRIX_KEYPRESSES or RGB_MATRIX_KEYRELEASES is enabled, you also will want to enable SPLIT_TRANSPORT_MIRROR

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
// #define RGB_MATRIX_TYPING_HEATMAP_DECREASE_DELAY_MS 100

// #define DISABLE_RGB_MATRIX_TYPING_HEATMAP	// Disables RGB_MATRIX_TYPING_HEATMAP
// #define DISABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT	// Disables RGB_MATRIX_CYCLE_LEFT_RIGHT
#define DISABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS	// Disables RGB_MATRIX_JELLYBEAN_RAINDROPS

#define DISABLE_RGB_MATRIX_ALPHAS_MODS          // Disables RGB_MATRIX_ALPHAS_MODS
#define DISABLE_RGB_MATRIX_GRADIENT_UP_DOWN     // Disables RGB_MATRIX_GRADIENT_UP_DOWN
// #define DISABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT	// Disables MATRIX_GRADIENT_LEFT_RIGHT
#define DISABLE_RGB_MATRIX_BREATHING	// Disables RGB_MATRIX_BREATHING
#define DISABLE_RGB_MATRIX_BAND_SAT	// Disables RGB_MATRIX_BAND_SAT
#define DISABLE_RGB_MATRIX_BAND_VAL	// Disables RGB_MATRIX_BAND_VAL
#define DISABLE_RGB_MATRIX_BAND_PINWHEEL_SAT	// Disables RGB_MATRIX_BAND_PINWHEEL_SAT
#define DISABLE_RGB_MATRIX_BAND_PINWHEEL_VAL	// Disables RGB_MATRIX_BAND_PINWHEEL_VAL
#define DISABLE_RGB_MATRIX_BAND_SPIRAL_SAT	// Disables RGB_MATRIX_BAND_SPIRAL_SAT
#define DISABLE_RGB_MATRIX_BAND_SPIRAL_VAL	// Disables RGB_MATRIX_BAND_SPIRAL_VAL
// #define DISABLE_RGB_MATRIX_CYCLE_ALL	// Disables RGB_MATRIX_CYCLE_ALL
#define DISABLE_RGB_MATRIX_CYCLE_UP_DOWN	// Disables RGB_MATRIX_CYCLE_UP_DOWN
// #define DISABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON	// Disables RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define DISABLE_RGB_MATRIX_CYCLE_OUT_IN	// Disables RGB_MATRIX_CYCLE_OUT_IN
#define DISABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL	// Disables RGB_MATRIX_CYCLE_OUT_IN_DUAL
#define DISABLE_RGB_MATRIX_CYCLE_PINWHEEL	// Disables RGB_MATRIX_CYCLE_PINWHEEL
#define DISABLE_RGB_MATRIX_CYCLE_SPIRAL	// Disables RGB_MATRIX_CYCLE_SPIRAL
#define DISABLE_RGB_MATRIX_DUAL_BEACON	// Disables RGB_MATRIX_DUAL_BEACON
#define DISABLE_RGB_MATRIX_RAINBOW_BEACON	// Disables RGB_MATRIX_RAINBOW_BEACON
#define DISABLE_RGB_MATRIX_RAINBOW_PINWHEELS	// Disables RGB_MATRIX_RAINBOW_PINWHEELS
#define DISABLE_RGB_MATRIX_RAINDROPS	// Disables RGB_MATRIX_RAINDROPS
// #define DISABLE_RGB_MATRIX_HUE_BREATHING	// Disables RGB_MATRIX_HUE_BREATHING
#define DISABLE_RGB_MATRIX_HUE_PENDULUM	// Disables RGB_MDULUM
// #define DISABLE_RGB_MATRIX_HUE_WAVE	// Disables RGB_MATRIX_HUE_WAVE
// #define DISABLE_RGB_MATRIX_DIGITAL_RAIN	// Disables RGB_MATRIX_DIGITAL_RAIN
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE	// Disables RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE	// Disables RGB_MATRIX_SOLID_REACTIVE
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE	// Disables RGB_MATRIX_SOLID_REACTIVE_WIDE
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE	// Disables RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS	// Disables RGB_MATRIX_SOLID_REACTIVE_CROSS
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS	// Disables RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS	// Disables RGB_MATRIX_SOLID_REACTIVE_NEXUS
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS	// Disables RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#define DISABLE_RGB_MATRIX_SPLASH	// Disables RGB_MATRIX_SPLASH
// #define DISABLE_RGB_MATRIX_MULTISPLASH	// Disables RGB_MATRIX_MULTISPLASH
#define DISABLE_RGB_MATRIX_SOLID_SPLASH	// Disables RGB_MATRIX_SOLID_SPLASH
#define DISABLE_RGB_MATRIX_SOLID_MULTISPLASH	// Disables RGB_MATRIX_SOLID_MULTISPLASH
#endif

