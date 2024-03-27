//
// Created by MGenchev on 26.03.24.
//

#include "Car.h"


Car::Car(char model[], char number[], char color[]){
    strncpy(this->model, model, 250);
    strncpy(this->number, number, 250);
    strncpy(this->color, color, 250);
}

Car::Car(const Car &copyCar){
    strncpy(this->model, copyCar.model, 250);
    strncpy(this->number, copyCar.number, 250);
    strncpy(this->color, copyCar.color, 250);
}

char *Car::getModel() {
    return model;
}
void Car::setModel(char newModel[]) {
    strncpy(model, newModel, 250);
}

char* Car::getNumber() {
    return number;
}

void Car::setNumber(char newNumber[]) {
    strncpy(number, newNumber, 250);
}

void Car::print() {
    cout << model << " " << number << " " << color << endl;
}
