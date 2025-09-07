#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain  Brain;

//The motor constructor takes motors as (port, ratio, reversed), so for example
//motor LeftFront = motor(PORT1, ratio6_1, false);

//Add your devices below, and don't forget to do the same in robot-config.h:
motor Right1 = motor(PORT18, ratio6_1, false);
motor Right2 = motor(PORT19, ratio6_1, false);
motor Right3 = motor(PORT20, ratio6_1, true);
motor Left1 = motor(PORT11, ratio6_1, false);
motor Left2 = motor(PORT12, ratio6_1, true);
motor Left3 = motor(PORT13, ratio6_1, true);

motor Intake = motor(PORT21, ratio6_1, false);
motor TopRoller = motor(PORT1, ratio6_1, false);

digital_out Tongue = digital_out(Brain.ThreeWirePort.C);
digital_out RearLift = digital_out(Brain.ThreeWirePort.A);
digital_out IntakeLift = digital_out(Brain.ThreeWirePort.B);
digital_out DescoreMech = digital_out(Brain.ThreeWirePort.D);

distance RLidar = distance(PORT8);
distance LLidar = distance(PORT2);
distance FLidar = distance(PORT9);
distance BLidar = distance(PORT7);

inertial Inert = inertial(PORT16);

void vexcodeInit( void ) {
  // nothing to initialize
}