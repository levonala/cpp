#include "Vehicle.hpp"
#include "Rectangle.hpp"
#include "Student.hpp"
#include "Animal.hpp"
#include "Person.hpp"
#include "Circle.hpp"
#include "Shape.hpp"

#include <iostream>

int main()
{
    Rectangle rect1;
    std::cout << "rect1 area = " << rect1.area() << std::endl;
    std::cout << "rect1 perimeter = " << rect1.perimeter() << std::endl;
    
    Rectangle rect2(4.0, 5.0);
    std::cout << "rect2 area = " << rect2.area() << std::endl;
    std::cout << "rect2 perimeter = " << rect2.perimeter() << std::endl;
    
    
    std::cout << sizeof(Vehicle) << std::endl;
    std::cout << sizeof(Rectangle) << std::endl;
    std::cout << sizeof(Student) << std::endl;
    std::cout << sizeof(Animal) << std::endl;
    std::cout << sizeof(Person) << std::endl;
    std::cout << sizeof(Circle) << std::endl;
    std::cout << sizeof(Shape) << std::endl;
}

//Նախորդ օրինակի նման գրում և github եք գցում հետևյալ տնայինները։ Ձեր պատկերացմամբ ինչ members և methods հնարավոր է կգրեք հետևյալ class -ների համար։
//1. class Vehicle
//2. class Animal
//3. class Person
//4. class Circle

//Փորձեք ինչքան հնարավորա շատ member֊ներ ու method֊ներ գրել։
//1. Գրել class Student, որի համար սահմանել copy constructor և assignment operator.
//2. Գրել class Shape, ժառանգել class Circle, Rectangle, Triangle: Ունենալ մակերես ու պարագիծ հաշվող ֆուկցիաներ Shape class-ում և overload անել derived class-ներում։
//3. Գրել class Distance հարթության մեջ ունեցող 2 կոորդինատներով և վերասահմանել հետևյալ օպորատորները՝ օգտագործելով friend functions.
//operator+
//operator/
//operator<<
