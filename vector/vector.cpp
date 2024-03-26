//
// Created by MGenchev on 26.03.24.
//

#include <iostream>
#include "vector.h"


void Vector::push_back(int x){
    if (count < capacity){
        data[count] = x;
        count += 1;
    } else {
        int* newData = new int[capacity * 2];
        for (int i = 0; i < count; i++){
            newData[i] = data[i];
        }

        delete[] data;
        data = newData;
        capacity *= 2;

        data[count] = x;
        count +=1;
    }

}
//Constructor
Vector::Vector(int _capacity) : capacity(_capacity){
    constructorCalls += 1;
    std::cout << "Vectors created: " << constructorCalls << "\n";
    data = new int[capacity];
}
    // Copy constructor
Vector::Vector(const Vector & rhs) {
    this->capacity = rhs.capacity;
    this->count = rhs.count;

    this->data = new int[this->capacity];
    for (size_t i =0;i < this->count; i++){
        this->data[i] = rhs.data[i];
    }
}
    // Destructor
Vector::~Vector() {
    delete[] data;
}

int Vector::constructorCalls = 0;
