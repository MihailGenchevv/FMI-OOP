#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "file.hpp"

class Stream: protected File {
public:
    std::string source = "";

    File* clone() const override {
        return new Stream(*this);
    }
};