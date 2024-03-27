 //
// Created by MGenchev on 27.03.24.
//

#ifndef FMI_OOP_LAPTOP_H
#define FMI_OOP_LAPTOP_H

#include "Processor.h"

class Laptop {
private:
    char *brandAndModel;

    double price;

    double screenInches;

    Processor processor;

    double ram;

    int batteryCapacity;

    void copyFrom(const Laptop &);

    void deallocateMemory();
public:
    Laptop();

     Laptop(const char *, const double &); // create Laptop by name and price.

     Laptop(const char *,
            const double &,
            const double &,
            const Processor &,
            const double &,
            const int &);


     Laptop(const Laptop &);

     Laptop& operator=(const Laptop &);

     ~Laptop();

     bool operator==(const Laptop &) const;

     bool operator!=(const Laptop &) const const;

     bool operator<(const Laptop &) const;

     bool operator>(const Laptop &) const;

     void printLaptopInformation() const;

};


#endif //FMI_OOP_LAPTOP_H
