#pragma once
#include <iostream>
#include <exception>
#include "ProtectedValue.hpp"




template <class T>
class ProtectedArray {
private:
    ProtectedValue<T>* data = nullptr;
    size_t size = 0;
public:
    ProtectedArray(){}
    ProtectedArray(const ProtectedArray& rhs){
        size = rhs.size;
        data = new ProtectedValue<T>[size];
        for (size_t i = 0; i < rhs.size; i++){
            data[i] = rhs.data[i];
        }
    }
    ~ProtectedArray(){
        delete[] data;
    }
    ProtectedArray& operator=(const ProtectedArray& rhs){
        if (this != &rhs){
            delete[] data;
            size = rhs.size;
            data = new ProtectedValue<T>[size];
            for (size_t i = 0; i < rhs.size; i++){
                data[i] = rhs.data[i];
            }
        }
        return *this;
    }


    void add(T value, size_t code){
        ProtectedValue<T>* copy = new ProtectedValue<T>[size+1];
        for (size_t i = 0; i < size; i++) {
            copy[i] = data[i];
        }
        copy[size] =  ProtectedValue<T>(value, code);
        delete[] data;
        data = copy;
        size += 1;
    }

    T get_value(size_t code, size_t index) const {
        if (index < size){
            return data[index].getValue(code);
        }else {
            return T();
        }

    }
};