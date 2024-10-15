#include "main.h"

#define LEFT_WHEELS_PORT 1
#define RIGHT_WHEELS_PORT 10

void opcontrol() {
    while (true) {
        int lx = controller_get_analog(CONTROLLER_MASTER, ANALOG_LEFT_X);
        int rx = controller_get_analog(CONTROLLER_MASTER, ANALOG_RIGHT_X);
        int ly = controller_get_analog(CONTROLLER_MASTER, ANALOG_LEFT_Y);
        int ry = controller_get_analog(CONTROLLER_MASTER, ANALOG_RIGHT_Y);
        printf("left: (%d, %d)\nright: (%d, %d)\n", lx, ly, rx, ry);
        right *= -1; // This will reverse the right motor
        motor_move(LEFT_WHEELS_PORT, ly);
        motor_move(RIGHT_WHEELS_PORT, ry);
        delay(2);
    }
}
