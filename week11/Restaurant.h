//
// Created by MGenchev on 31.03.24.
//

#ifndef FMI_OOP_RESTAURANT_H
#define FMI_OOP_RESTAURANT_H

#include <vector>
#include <string>
#include "ResturantItem.h"
#include "Drink.h"
#include "Food.h"

class Restaurant {
private:
    std::vector<ResturantItem*> items;
public:
    void add(ResturantItem*);
    void add(Food&);
    void add(Drink&);

    void remove(size_t);
    void changePrice(size_t, double);
    void changeName(size_t, std::string);
    void print() const;
    void printNonAlcoholic() const;
};


#endif //FMI_OOP_RESTAURANT_H
