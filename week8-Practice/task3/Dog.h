//
// Created by MGenchev on 29.03.24.
//

#ifndef FMI_OOP_DOG_H
#define FMI_OOP_DOG_H

#include "Animal.h"

class Dog : public Animal {
    string poroda;
public:
    Dog(string name, int number, string porodata) : Animal::Animal(name, number){
        this->poroda = porodata;

    }

    void makeSound(){
        cout << "Woof";
    }

};


#endif //FMI_OOP_DOG_H
