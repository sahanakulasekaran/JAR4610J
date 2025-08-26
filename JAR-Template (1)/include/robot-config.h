using namespace vex;

extern brain Brain;

//To set up a motor called LeftFront here, you'd use
//extern motor LeftFront;

//Add your devices below, and don't forget to do the same in robot-config.cpp:
extern motor Right1;
extern motor Right2;
extern motor Right3;
extern motor Left1;
extern motor Left2;
extern motor Left3;


extern motor Intake;
extern motor TopRoller;


extern inertial Inert;

extern digital_out Tongue;
extern digital_out IntakeLift;
extern digital_out RearLift;


void  vexcodeInit( void );