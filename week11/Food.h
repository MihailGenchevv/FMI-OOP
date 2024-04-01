//
// Created by MGenchev on 31.03.24.
//

#ifndef FMI_OOP_FOOD_H
#define FMI_OOP_FOOD_H

#include "ResturantItem.h"
#include <string>

class Food : public ResturantItem{
protected:
    std::string name = "";
    double weight = 0;
public:
    std::string getName() const;
    void setName(std::string newName);
    void setWeight(double newWeight);
    Food(int stock = 0, double price = 0, std::string name = "", double weight = 0);

    bool operator>(const Food& rhs) const;
    void print();
};


#endif //FMI_OOP_FOOD_H
