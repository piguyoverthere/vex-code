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
vex::motor FRmotor = motor(PORT4,ratio6_1, false);
vex::motor BLmotor = motor(PORT2,ratio6_1, true);
vex::motor BRmotor = motor(PORT3,ratio6_1, false);

vex::motor arm = motor(PORT12, ratio18_1, false);


vex::motor clawflip = motor(PORT20,ratio18_1, false);//!change if is reversed later
vex::digital_out ClawPiston = digital_out(Brain.ThreeWirePort.F);
vex::rotation rotation(PORT16);
vex::controller master = controller();
bool pistonState = false;
vex::motor elevator = motor(PORT19); //ELEVATOR lift thing
void vexcodeInit( void ) {
  // nothing to initialize
}