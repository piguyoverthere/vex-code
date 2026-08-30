#include "vex.h"
bool clawState;
//true=up false=down
void clawToggle() {
    if (clawRot.angle() > 90){
        clawState = true;
    } else {
        clawState = false;
    }
    if (clawState) {
        claw.spin(fwd,-100,pct);
    } else {
        claw.spin(fwd,100,pct);
    }

}
void elevatorToggle() {
    if (master.ButtonR1.PRESSED){
        elevator.spin(fwd,10,pct);
        elevatorToggle();
    } else if(master.ButtonR2.PRESSED) {
        elevator.spin(fwd,-10,pct);
        elevatorToggle();
    } else {
        elevator.spin(fwd,0,pct);
    }
}
