#pragma once

/// https://thomasbaart.nl/2018/12/01/reducing-firmware-size-in-qmk/

#define LED_PIN_ON_STATE 1

//#define MASTER_LEFT
#define MASTER_RIGHT

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
//#define NO_ACTION_LAYER
#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT

#ifndef NO_DEBUG
#    define NO_DEBUG
#endif
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#    define NO_PRINT
#endif

#define CUSTOM_FONT
#define CUSTOM_LAYER_READ
#define SPLIT_TRANSPORT_MIRROR

#ifdef ENCODER_ENABLE
#    define TAPPING_FORCE_HOLD
#    ifdef TAPPING_TERM
#        undef TAPPING_TERM
#        define TAPPING_TERM 200
#    endif
//#    define ENCODER_DIRECTION_FLIP
#endif

#ifdef RGBLIGHT_ENABLE
#    define RGBLED_NUM 72
#endif

#ifdef RGB_MATRIX_ENABLE
#    define RGB_DI_PIN D3

#    define RGB_MATRIX_LED_COUNT 72
#    define RGB_MATRIX_SPLIT \
        { 36, 36 }
#    define RGB_MATRIX_HUE_STEP 5
#    define RGB_MATRIX_SAT_STEP 5
#    define RGB_MATRIX_VAL_STEP 5
#    define RGB_MATRIX_SPD_STEP 5
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 100 // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash.

// Normal effects
#    define ENABLE_RGB_MATRIX_SOLID_COLOR            // Static single hue no speed support
#    define ENABLE_RGB_MATRIX_ALPHAS_MODS            // Static dual hue speed is hue for secondary hue
#    define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN       // Static gradient top to bottom speed controls how much gradient changes
#    define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT    // Static gradient left to right speed controls how much gradient changes
#    define ENABLE_RGB_MATRIX_BREATHING              // Single hue brightness cycling animation
#    define ENABLE_RGB_MATRIX_BAND_SAT               // Single hue band fading saturation scrolling left to right
#    define ENABLE_RGB_MATRIX_BAND_VAL               // Single hue band fading brightness scrolling left to right
#    define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT      // Single hue 3 blade spinning pinwheel fades saturation
#    define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL      // Single hue 3 blade spinning pinwheel fades brightness
#    define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT        // Single hue spinning spiral fades saturation
#    define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL        // Single hue spinning spiral fades brightness
#    define ENABLE_RGB_MATRIX_CYCLE_ALL              // Full keyboard solid hue cycling through full gradient
#    define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT       // Full gradient scrolling left to right
#    define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN          // Full gradient scrolling top to bottom
#    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN           // Full gradient scrolling out to in
#    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL      // Full dual gradients scrolling out to in
#    define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON // Full gradient Chevron shapped scrolling left to right
// #    define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL         // Full gradient spinning pinwheel around center of keyboard
// #    define ENABLE_RGB_MATRIX_CYCLE_SPIRAL           // Full gradient spinning spiral around center of keyboard
// #    define ENABLE_RGB_MATRIX_DUAL_BEACON            // Full gradient spinning around center of keyboard
// #    define ENABLE_RGB_MATRIX_RAINBOW_BEACON         // Full tighter gradient spinning around center of keyboard
// #    define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS      // Full dual gradients spinning two halfs of keyboard
// #    define ENABLE_RGB_MATRIX_RAINDROPS              // Randomly changes a single key's hue
// #    define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS    // Randomly changes a single key's hue and saturation
// #    define ENABLE_RGB_MATRIX_HUE_BREATHING          // Hue shifts up a slight ammount at the same time then shifts back
// #    define ENABLE_RGB_MATRIX_HUE_PENDULUM           // Hue shifts up a slight ammount in a wave to the right then back to the left
// #    define ENABLE_RGB_MATRIX_HUE_WAVE               // Hue shifts up a slight ammount and then back down in a wave to the right
// #    define ENABLE_RGB_MATRIX_PIXEL_FRACTAL          // Single hue fractal filled keys pulsing horizontally out to edges
// #    define ENABLE_RGB_MATRIX_PIXEL_FLOW             // Pulsing RGB flow along LED wiring with random hues
// #    define ENABLE_RGB_MATRIX_PIXEL_RAIN             // Randomly light keys with random hues

// Framebuffer effects
//#    define RGB_MATRIX_FRAMEBUFFER_EFFECTS
//#    define ENABLE_RGB_MATRIX_TYPING_HEATMAP // How hot is your WPM!
//#    define ENABLE_RGB_MATRIX_DIGITAL_RAIN   // That famous computer simulation

// Keypress events
//#    define RGB_MATRIX_KEYPRESSES
//#    define RGB_MATRIX_KEYRELEASES
//#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE     // Pulses keys hit to hue & value then fades value out
//#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE            // Static single hue pulses keys hit to shifted hue then fades to current hue
//#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE       // Hue & value pulse near a single key hit then fades value out
//#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE  // Hue & value pulse near multiple key hits then fades value out
//#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS      // Hue & value pulse the same column and row of a single key hit then fades value out
//#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS // Hue & value pulse the same column and row of multiple key hits then fades value out
//#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS      // Hue & value pulse away on the same column and row of a single key hit then fades value out
//#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS // Hue & value pulse away on the same column and row of multiple key hits then fades value out
//#    define ENABLE_RGB_MATRIX_SPLASH                    // Full gradient & value pulse away from a single key hit then fades value out
//#    define ENABLE_RGB_MATRIX_MULTISPLASH               // Full gradient & value pulse away from multiple key hits then fades value out
//#    define ENABLE_RGB_MATRIX_SOLID_SPLASH              // Hue & value pulse away from a single key hit then fades value out
//#    define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH         // Hue & value pulse away from multiple key hits then fades value out

// #define RGB_MATRIX_KEYPRESSES // reacts to keypresses
// #define RGB_MATRIX_KEYRELEASES // reacts to keyreleases (instead of keypresses)
// #define RGB_DISABLE_WHEN_USB_SUSPENDED // turn off effects when suspended
// #define RGB_MATRIX_LED_PROCESS_LIMIT (RGB_MATRIX_LED_COUNT + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
// #define RGB_MATRIX_LED_FLUSH_LIMIT 16 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
#endif
