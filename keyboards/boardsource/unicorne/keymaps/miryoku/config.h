#pragma once

#define SPLIT_USB_DETECT
#define SPLIT_WATCHDOG_ENABLE

#define EE_HANDS

#define DYNAMIC_KEYMAP_LAYER_COUNT 8
#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT

//reverse normal x y behavior because joystick is on the right keyboard which rotates the joystick by 90 degrees
#undef ANALOG_JOYSTICK_Y_AXIS_PIN // GP26
#undef ANALOG_JOYSTICK_X_AXIS_PIN // GP27
//#undef POINTING_DEVICE_INVERT_Y
#undef POINTING_DEVICE_INVERT_X

#define ANALOG_JOYSTICK_Y_AXIS_PIN GP27
#define ANALOG_JOYSTICK_X_AXIS_PIN GP26


// #define ROTATIONAL_TRANSFORM_ANGLE 90
