//
// Created by MGenchev on 29.03.24.
//

#ifndef FMI_OOP_ANIMAL_H
#define FMI_OOP_ANIMAL_H

#include <string>
#include <iostream>

using namespace std;

class Animal {
    string name;
protected:
    int numberOfLegs;
public:
    Animal(string name, int numberOfLegs ) : name(name), numberOfLegs(numberOfLegs) {}
    void makeSound(){
        cout<<"I am an animal and I can't make sounds";
    }

};


#endif //FMI_OOP_ANIMAL_H
