//
// Created by MGenchev on 26.03.24.
//

#ifndef UNTITLED_CAR_H
#define UNTITLED_CAR_H

#include <iostream>
#include <string.h>

using namespace std;
class Car {
private:
    char model[250];
    char number[250];
    char color[250];
public:
    Car(char model[]="defaultModel", char number[]="no number", char color[]="no color");
    Car(const Car& copyCar);
    void print();

    void setModel(char newModel[]);
    char* getModel();

};


#endif //UNTITLED_CAR_H
