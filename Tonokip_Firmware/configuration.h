#ifndef PARAMETERS_H
#define PARAMETERS_H

// NO RS485/EXTRUDER CONTROLLER SUPPORT
// PLEASE VERIFY PIN ASSIGNMENTS FOR YOUR CONFIGURATION!!!!!!!
#define MOTHERBOARD 5 // ATMEGA168 = 0, SANGUINO = 1, MOTHERBOARD = 2, MEGA/RAMPS = 3, ATMEGA328 = 4, Gen6 = 5

//Comment out to disable SD support
//#define SDSUPPORT 1

//Acceleration settings
float full_velocity_units = 10.0; // the units between minimum and G1 move feedrate
float min_units_per_second = 35.0; // the minimum feedrate

// THERMOCOUPLE SUPPORT UNTESTED... USE WITH CAUTION!!!!
const bool USE_THERMISTOR = true; //Set to false if using thermocouple

//PID settings:
//Uncomment the following line to enable PID support. This is untested and could be disastrous. Be careful.
#define PIDTEMP 1
#ifdef PIDTEMP
#define PID_MAX 255 // limits current to nozzle
#define PID_INTEGRAL_DRIVE_MAX 255
#define PID_PGAIN 500 //100 is 1.0
#define PID_IGAIN 95 //100 is 1.0
#define PID_DGAIN 60 //100 is 1.0
#endif


// Calibration formulas
// e_extruded_steps_per_mm = e_feedstock_steps_per_mm * (desired_extrusion_diameter^2 / feedstock_diameter^2)
// new_axis_steps_per_mm = previous_axis_steps_per_mm * (test_distance_instructed/test_distance_traveled)
// units are in millimeters or whatever length unit you prefer: inches,football-fields,parsecs etc

//Calibration variables
float x_steps_per_unit = 40.000;
float y_steps_per_unit = 40.000;
float z_steps_per_unit = 3369.525;
float e_steps_per_unit = 442.302;
float max_feedrate = 200000; //mmm, acceleration!

//float x_steps_per_unit = 10.047;
//float y_steps_per_unit = 10.047;
//float z_steps_per_unit = 833.398;
//float e_steps_per_unit = 0.706;
//float max_feedrate = 3000;

//For Inverting Stepper Enable Pins (Active Low) use 0, Non Inverting (Active High) use 1
const bool X_ENABLE_ON = 0;
const bool Y_ENABLE_ON = 0;
const bool Z_ENABLE_ON = 0;
const bool E_ENABLE_ON = 0;

//Disables axis when it's not being used.
const bool DISABLE_X = false;
const bool DISABLE_Y = false;
const bool DISABLE_Z = true;
const bool DISABLE_E = false;

const bool INVERT_X_DIR = false;
const bool INVERT_Y_DIR = true;
const bool INVERT_Z_DIR = false;
const bool INVERT_E_DIR = false;

//Thermistor settings:

//Uncomment for 100k thermistor
//#include "ThermistorTable_100k.h"
//#include "BedThermistorTable_100k.h"

//Uncomment for 200k thermistor
//#include "ThermistorTable_200k.h"
//#include "BedThermistorTable_200k.h"

//Identical thermistors on heater and bed - use this if you have no heated bed or if the thermistors are the same on both:
//#include "ThermistorTable_200k.h"
//#include "ThermistorTable_100k.h"
#include "ThermistorTable_mendelparts.h"
#define BNUMTEMPS NUMTEMPS
#define bedtemptable temptable
#define filterSamples   25              // filterSamples should  be an odd number, no smaller than 3


//Endstop Settings
#define ENDSTOPPULLUPS 1
const bool ENDSTOPS_INVERTING = true;
const bool min_software_endstops = false; //If true, axis won't move to coordinates less than zero.
const bool max_software_endstops = true;  //If true, axis won't move to coordinates greater than the defined lengths below.
const int X_MAX_LENGTH = 200;
const int Y_MAX_LENGTH = 200;
const int Z_MAX_LENGTH = 100;

#define BAUDRATE 57600



#endif