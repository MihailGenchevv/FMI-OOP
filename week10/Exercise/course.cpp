//
// Created by MGenchev on 31.03.24.
//

#include "course.h"


Course::Course(std::string name, Person *teacher, double grade) : name(name), grade(grade){
    this->teacher = teacher->clone();
}