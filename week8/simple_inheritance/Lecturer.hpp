//
// Created by MGenchev on 28.03.24.
//

#ifndef FMI_OOP_LECTURER_H
#define FMI_OOP_LECTURER_H

#include "User.hpp"



class Lecturer : public User {
public:
    std::string title;

    void info() const {
        std::cout << title << " ";
        User::info();
    }
};

#endif //FMI_OOP_LECTURER_H
