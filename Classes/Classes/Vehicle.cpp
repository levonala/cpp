#include "Vehicle.hpp"

Vehicle::Vehicle(unsigned char wheelCount)
{
    wheelCount_ = wheelCount;
}

unsigned char Vehicle::getWheelCount()
{
    return wheelCount_;
}
