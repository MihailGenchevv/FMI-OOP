//
// Created by MGenchev on 31.03.24.
//

#ifndef FMI_OOP_DRINK_H
#define FMI_OOP_DRINK_H

#include "ResturantItem.h"
#include <string>

class Drink : public ResturantItem{
protected:
    std::string name = "";
    double alcohol = 0;
public:
    std::string getName() const;
    void setName(std::string name);
    void setAlcohol(double alcohol);
    Drink(int stock = 0, double price = 0, std::string name = "", double alcohol = 0);
    bool operator>(const Drink&) const;
    void print();
};


#endif //FMI_OOP_DRINK_H
