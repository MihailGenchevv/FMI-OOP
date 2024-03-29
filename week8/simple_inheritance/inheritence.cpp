//
// Created by MGenchev on 28.03.24.
//

#include <iostream>
#include "User.hpp"
#include "Student.hpp"
#include "Lecturer.hpp"


int main(){
    User user;
    user.setName("User 1");
    user.info();

    Student student;
    student.fn = 65232;
    student.setName("student 1");
    student.info();

    Lecturer lecturer;
    lecturer.setName("Gx1");
    lecturer.title = "DR";
    lecturer.info();





}