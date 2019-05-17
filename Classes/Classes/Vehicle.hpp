#ifndef Vehicle_hpp
#define Vehicle_hpp
#include <string>

class Vehicle
{
public:
    Vehicle() : wheelCount_(4) {}
    
    Vehicle(unsigned char wheelCount);
    
    unsigned char getWheelCount();
    
private:
    unsigned char wheelCount_;
};

#endif /* Vehicle_hpp */
