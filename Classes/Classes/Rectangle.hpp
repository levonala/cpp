#ifndef Rectangle_hpp
#define Rectangle_hpp

class Rectangle
{
public:
    Rectangle() : width_(1.0), height_(1.0) {}
    
    Rectangle(double width, double height);
    
    double area();
    double perimeter();
    
private:
    double width_;
    double height_;
};
#endif /* Rectangle_hpp */
