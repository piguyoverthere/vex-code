#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain  Brain;

//The motor constructor takes motors as (port, ratio, reversed), so for example
//motor LeftFront = motor(PORT1, ratio6_1, false);

//Add your devices below, and don't forget to do the same in robot-config.h:
vex::motor FLmotor = motor(PORT1,ratio6_1, true);
vex::motor FRmotor = motor(PORT9,ratio6_1, false);
vex::motor BLmotor = motor(PORT12,ratio6_1, true);
vex::motor BRmotor = motor(PORT18,ratio6_1, false);

vex::motor claw = motor(PORT6,ratio18_1, false);
//CHANGE LATER
vex::motor elevatorL = motor(PORT11,ratio6_1,false);
vex::motor elevatorR = motor(PORT20,ratio6_1,true);
vex::motor_group elevator = vex::motor_group(elevatorL, elevatorR);

vex::motor toggle = motor(PORT19,ratio6_1, false);
vex::controller master = controller();
vex::rotation clawRot = rotation(PORT7);
void vexcodeInit( void ) {
  // nothing to initialize
}