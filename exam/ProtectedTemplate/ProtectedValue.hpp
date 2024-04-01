#pragma once


#include <iostream>

#include <exception>

template <class T>
class ProtectedValue {
private:
    T value;
    size_t code;
public:
    ProtectedValue(T value  = T(), size_t code = 0)
    : code(code), value(value) {}


    T getValue(size_t code) const {
        if (this->code == code) {
            return value;
        }
        return T();
//        throw std::invalid_argument("code is different");
    }
};