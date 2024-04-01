//
// Created by MGenchev on 31.03.24.
//

#ifndef FMI_OOP_TEACHER_H
#define FMI_OOP_TEACHER_H

#include "person.h"
class Teacher : public Person {
private:
    unsigned int experience;
    double salary;
    unsigned int numberOfCourses;
public:
    Teacher(string name="",
            string familyName = "",
            int age = 0,
            string city = "",
            string street = "",
            unsigned int experience = 0,
            double salary = 0,
            unsigned int numberOfCourses=0);

    Person* clone() override;
};


#endif //FMI_OOP_TEACHER_H
