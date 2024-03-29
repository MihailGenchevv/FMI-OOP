//
// Created by MGenchev on 29.03.24.
//

#include "Dog.h"
#include "Animal.h"

int main(){
    Animal *dog = new Dog("bobi", 4, "nemska");

    dog->makeSound();
}