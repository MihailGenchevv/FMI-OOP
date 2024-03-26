//
// Created by MGenchev on 26.03.24.
//

#include "Car.h"


Car::Car() {
    strncpy(model, "default model", 250);
    strncpy(number, "default number", 250);
    strncpy(color, "no color", 250);
}


void Car::print() {
    cout << model << " " << number << " " << color << endl;
}
