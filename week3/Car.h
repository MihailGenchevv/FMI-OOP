//
// Created by MGenchev on 26.03.24.
//

#ifndef FMI_OOP_CAR_H
#define FMI_OOP_CAR_H

#include <iostream>
#include <string.h>

using namespace std;
class Car {
private:
    char model[250];
    char number[250];
    char color[250];
public:
    Car();
    Car(char model[], char number[], char color[]);
    void print();
};


#endif //FMI_OOP_CAR_H
