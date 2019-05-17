#ifndef Shape_hpp
#define Shape_hpp

#include <stdio.h>

class Shape
{
public:
    double getPerimeter();
    double getArea();
    
private:
    double perimeter_;
    double area_;
};

#endif /* Shape_hpp */
