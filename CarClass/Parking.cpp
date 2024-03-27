//
// Created by MGenchev on 27.03.24.
//

#include "Parking.h"
#include <iostream>
#include <string.h>

Parking::Parking() : name(nullptr), cars(nullptr), count(0) {

}

Parking::Parking(const char* name, Car cars[], const int &count): count(count) {
    int nameCount = strlen(name);
    this->name = new char[nameCount+1];
    strncpy(this->name, name , nameCount+1);

    this->cars = new Car[count];
    for (int i = 0; i < count; i++){
        this->cars[i] = cars[i];
    }
}


Parking::Parking(const Parking &newParking): count(newParking.count) {
    delete[] name;
    int nameCount = strlen(newParking.name);
    this->name = new char[nameCount+ 1];
    strncpy(this->name, newParking.name, nameCount + 1);

    delete[] cars;
    this->cars = new Car[count];
    for (int i = 0; i < count; i++){
        this->cars[i] = newParking.cars[i];
    }
}

Parking::~Parking(){
    delete[] name;
    delete[] cars;
}

char* Parking::getName() {
    return name;
}

void Parking::setName(const char* newName){
    delete[] name;
    int nameCount = strlen(newName);
    this->name = new char[nameCount];
    strncpy(this->name, newName, nameCount);
}

Car* Parking::getCars() {
    return cars;
}

void Parking::setCars(Car *newCars, const int &newCount) {
    if (newCount > 0) count = newCount;
    else cout << "Enter positive number" << endl;

    delete[] cars;
    this->cars = new Car[count];
    for(int i = 0; i < count; i++){
        this->cars[i] = newCars[i];
    }
}

int Parking::getCount() {
    return count;
}

void Parking::PrintAllCars() {
    for (int i=0; i < count; i++){
        cars[i].print();
    }
}

void Parking::addCar(const Car &newCar) {
    Car* newCars = new Car[count + 1];

    for (int i =0; i < count; i++){
        newCars[i] = cars[i];
    }

    newCars[count] =newCar;
    count++;

    delete[] cars;
    cars = newCars;
}


void Parking::removeCar(const int &index) {
    Car* newCars = new Car[count - 1];
    for (int i = 0; i < index; i++){
        newCars[i] = cars[i];
    }

    for (int i = index; i < count -1; i++) {
        newCars[i] = cars[i + 1];
    }

    count--;
    delete[] cars;
    cars = newCars;
}

char* Parking::getModel(const char *number) {
    for (int i = 0; i < count; i++){
        if (strcmp(cars[i].getNumber(), number) == 0){
            return cars[i].getModel();
        }
    }

    return "No such car";
}

void Parking::addCarAtIndex(const int &index, const Car &newCar) {
    Car* newCars = new Car[count+1];

    for (int i = 0; i < index; i++) {
        newCars[i] = cars[i];
    }

    newCars[index] = newCar;

    for(int i = index+1; i < count + 1; i++){
        newCars[i] = cars[i-1];
    }

    delete[] cars;
    count++;

    cars = newCars;
}