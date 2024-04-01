//
// Created by MGenchev on 31.03.24.
//

#ifndef FMI_OOP_COURSE_H
#define FMI_OOP_COURSE_H

#include <string>
#include "person.h"
using namespace std;

class Course {
    string name;
    Person* teacher;
    double grade;
public:
    Course(string name, Person* teacher, double grade);
};


#endif //FMI_OOP_COURSE_H
