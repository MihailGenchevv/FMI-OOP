//
// Created by MGenchev on 28.03.24.
//

#ifndef FMI_OOP_USER_H
#define FMI_OOP_USER_H
#include <iostream>
#include <string>

class User {
protected:
    std::string name;
public:
    void info() const {
        std::cout << name << "\n";
    }

    void setName(std::string newName) {
        this->name = newName;
    }
};

#endif //FMI_OOP_USER_H
