#pragma once

#include "pros/motor_group.hpp"
#pragma once

#include "pros/motors.hpp"
#include "EZ-Template/drive/drive.hpp"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples
inline pros::MotorGroup intake({-4,-5,-14,15});