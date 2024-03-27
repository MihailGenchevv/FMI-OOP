//
// Created by MGenchev on 27.03.24.
//

#ifndef FMI_OOP_PARKING_H
#define FMI_OOP_PARKING_H

#include "Car.h"

class Parking {
private:
    char *name;
    Car *cars;
    int count;
public:
    Parking();

    Parking(const char* name, Car* cars, const int &count);

    Parking(const Parking &newParking);

    ~Parking();

    void setCars(Car newCars[], const int &newCount);

    void setName(const char* newName);

    int getCount();

    Car *getCars();

    char* getName();

    void PrintAllCars();

    void addCar(const Car &newCar);

    void removeCar(const int &index);

    void addCarAtIndex(const int &index, const Car &newCar);

    char *getModel(const char *number);
};


#endif //FMI_OOP_PARKING_H
