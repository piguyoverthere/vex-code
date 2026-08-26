#include "vex.h"
bool clawState;
//true=up false=down
void clawToggle() {
    if (clawRot.angle() > 90){
        clawState = true;
    } else {
        clawState = false;
    }
    
}
