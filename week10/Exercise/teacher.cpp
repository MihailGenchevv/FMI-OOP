//
// Created by MGenchev on 31.03.24.
//

#include "teacher.h"

Teacher::Teacher(std::string name,
                 std::string familyName,
                 int age,
                 std::string city,
                 std::string street,
                 unsigned int experience,
                 double salary,
                 unsigned int numberOfCourses) : Person(name, familyName, age, city, street),
                 experience(experience),
                 salary(salary),
                 numberOfCourses(numberOfCourses){}





Person* Teacher::clone() {
    return new Teacher(*this);
}