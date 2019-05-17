#ifndef Student_hpp
#define Student_hpp
#include <iostream>

class Student
{
public:
    Student() : id_(0), name_("") {}
    
    Student(unsigned int id, std::string name);
    
    unsigned int getId();
    std::string getName();
    
private:
    unsigned int id_;
    std::string name_;
};

#endif /* Student_hpp */
