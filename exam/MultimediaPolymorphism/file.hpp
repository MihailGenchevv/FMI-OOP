#pragma once

#include <iostream>
#include <string>
#include <vector>


class File {
public:
    std::string name = "";
    size_t size  = 0;
    std::string extension = "";
    virtual void print_debug_state() const {
        std::cout << name << "." << extension << ", size: "<< size << std::endl;
    }

    virtual File* clone() const = 0;
};