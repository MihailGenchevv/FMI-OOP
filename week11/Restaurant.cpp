//
// Created by MGenchev on 31.03.24.
//

#include "Restaurant.h"
#include <vector>
#include <string>
#include "Drink.h"
#include "Food.h"
#include "ResturantItem.h"


void Restaurant::add(ResturantItem*){}
void Restaurant::add(Food& item){
    items.push_back(&item);

}
void Restaurant::add(Drink& item){
    items.push_back(&item);
}

void Restaurant::remove(size_t index){

    items.erase(items.begin() + index);
}

void Restaurant::changePrice(size_t index, double newPrice){
    items[index]->setPrice(newPrice);
}

void Restaurant::changeName(size_t index, std::string newName){
    auto foodPtr = dynamic_cast<Food*>(items[index]);
    if (foodPtr) {
        foodPtr->setName(newName);
    }

    auto drinkPtr = dynamic_cast<Drink*>(items[index]);
    if (drinkPtr) {
        drinkPtr->setName(newName);
    }
}


void Restaurant::print() const{
    for (auto x : items) {
        x->print();
    }
}


void Restaurant::printNonAlcoholic() const{
    for (auto x : items ){
        auto drinkPtr = dynamic_cast<Drink*>(x);
        if (drinkPtr) {
            auto zero = Drink(0,0,"",0.001);
            if (zero > *drinkPtr) {
                drinkPtr->print();
            }
        }
    }
}