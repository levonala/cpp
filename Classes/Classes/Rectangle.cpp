#include "Rectangle.hpp"

Rectangle::Rectangle(double width, double height)
{
    width_  = width;
    height_ = height;
}

double Rectangle::area()
{
    return width_ * height_;
}

double Rectangle::perimeter()
{
    return (width_ + height_) * 2;
}
