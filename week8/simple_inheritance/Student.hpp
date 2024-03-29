//
// Created by MGenchev on 28.03.24.
//
#include "User.hpp"

class Student : public User {
public:
    int fn;

    void info() const {
        User::info();
        std::cout << " fn: " << fn << "\n";
    }
};