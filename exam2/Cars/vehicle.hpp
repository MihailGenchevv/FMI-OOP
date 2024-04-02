#pragma once 

#include <string>
#include <iostream>

enum class Severity {
    LOW = 1,
    MEDIUM = 3,
    HIGH = 5,
};


class Vehicle {
    std::string mark;
    std::string model;
    size_t year;
    std::string problemDescription;
    Severity problemSeverity;
public:

    virtual Vehicle* clone() const = 0;
    virtual ~Vehicle() = default;

    Severity getSeverity() const { 
        return problemSeverity; 
    }
};