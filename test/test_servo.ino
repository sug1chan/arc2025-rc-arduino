#include "operate.h"

void setup() {
    init_pinMode();
}

void loop() {    
    cmd_ctrl_servo_motor(SERVO_ON);
    delay(5000);
}

