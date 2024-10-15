#include "main.h"

#define leftFrontWheelPort 1
#define leftBackWheelPort 2
#define rightFrontWheelPort 10
#define rightBackWheelPort 11

void opcontrol() {
    while (true) {
        int lx = controller_get_analog(CONTROLLER_MASTER, ANALOG_LEFT_X);
        int rx = controller_get_analog(CONTROLLER_MASTER, ANALOG_RIGHT_X);
        int ly = controller_get_analog(CONTROLLER_MASTER, ANALOG_LEFT_Y);
        int ry = controller_get_analog(CONTROLLER_MASTER, ANALOG_RIGHT_Y);
        printf("left: (%d, %d)\nright: (%d, %d)\n", lx, ly, rx, ry);
        motor_move(leftFrontWheelPort, ly);
        motor_move(leftBackWheelPort, ly);
        motor_move(rightBackWheelPort, ry);
        motor_move(rightBackWheelPort, ry);
        delay(2);
    }
}
