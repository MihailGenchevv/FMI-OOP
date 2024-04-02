#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "file.hpp"


class Audio : public File {
public:
    size_t length = 0;
    std::string singer = "";

    File* clone() const override {
        return new Audio(*this);
    }
};