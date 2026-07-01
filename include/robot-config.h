using namespace vex;

extern brain Brain;

//To set up a motor called LeftFront here, you'd use
//extern motor LeftFront;

//Add your devices below, and don't forget to do the same in robot-config.cpp:

extern motor FRmotor;
extern motor FLmotor;
extern motor BRmotor;
extern motor BLmotor;

extern motor arm;
extern motor clawflip;
extern controller master;
extern bool pistonState = false;
extern digital_out ClawPiston


void  vexcodeInit( void );