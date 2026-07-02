#include "vex.h"
void rotate(double target){
    double error = (target - armRot.angle());
    //pid controll thing later i wil write ok bye
    for (int i = 0; i > armDeg; i++){
        arm.spin(fwd,10,pct);
    }
}
void dwaynethestonejohnporkcenacherryshell(){
}