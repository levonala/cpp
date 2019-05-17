#include "Student.hpp"

Student::Student(unsigned int id, std::string name)
{
    id_  = id;
    name_ = name;
}

unsigned int Student::getId()
{
    return id_;
}

std::string Student::getName()
{
    return name_;
}
