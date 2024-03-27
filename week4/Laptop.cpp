//
// Created by MGenchev on 27.03.24.
//

#include "Laptop.h"
#include <iostream>
#include <cstring>

Laptop::Laptop()
        : brandAndModel(nullptr), price(0.0), screenInches(0.0), processor(Processor()), ram(0.0),batteryCapacity(0.0) {

}

Laptop::Laptop(const char *name, const double &price)
        : brandAndModel(new char[strlen(name) + 1]), price(price), screenInches(0.0), processor(Processor()), ram(0.0),
          batteryCapacity(0.0){
    strncpy(this->brandAndModel, name, strlen(name));
    this->brandAndModel[strlen(this->brandAndModel)] = '\0';
}

Laptop::Laptop(const char *brandAndModel,
               const double &price,
               const double &screenInches,
               const Processor &processor,
               const double &ram,
               const int &batteryCapacity)
        : brandAndModel(new char[strlen(brandAndModel) + 1]), price(price), screenInches(screenInches),
          processor(processor), ram(ram), batteryCapacity(batteryCapacity){
    strncpy(this->brandAndModel, brandAndModel, strlen(brandAndModel));
    this->brandAndModel[strlen(this->brandAndModel)] = '\0';
}

Laptop::Laptop(const Laptop &other) {
    copyFrom(other);
}

Laptop& Laptop::operator=(const Laptop &other) {
    if (this != &other) {
        deallocateMemory();
        copyFrom(other);
    }
    return *this;
}

Laptop::~Laptop(){
    deallocateMemory();
}

bool Laptop::operator==(const Laptop &other) const {
    return this->screenInches == other.screenInches;
}

bool Laptop::operator!=(const Laptop &other) const {
    return !(*this == other);
}

bool Laptop::operator<(const Laptop &other) const {
    return this->screenInches < other.screenInches;
}

bool Laptop::operator>(const Laptop &other) const {
    return this->screenInches > other.screenInches;
}


void Laptop::printLaptopInformation() const {
    std::cout << this->brandAndModel << std::endl;
    std::cout << "Price: " << this->price << std::endl;
    std::cout << "Screen: " << this->screenInches << std::endl;
    std::cout << "Processor: " << std::endl;
    this->processor.printProcessorInformation();
    std::cout << "Ram: " << this->ram << std::endl;
    std::cout << "Battery: " << this->batteryCapacity << " mAh" << std::endl;

}

void Laptop::copyFrom(const Laptop &other) {
    this->brandAndModel = new char[strlen(other.brandAndModel) + 1];
    strncpy(this->brandAndModel, other.brandAndModel, strlen(other.brandAndModel));
    this->brandAndModel[strlen(this->brandAndModel)] = '\0';
    this->price = other.price;
    this->screenInches = other.screenInches;
    this->processor = other.processor;
    this->ram = other.ram;
    this->batteryCapacity = other.batteryCapacity;
}

void Laptop::deallocateMemory() {
    delete[] this->brandAndModel;
}