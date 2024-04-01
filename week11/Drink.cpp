//
// Created by MGenchev on 31.03.24.
//

#include "Drink.h"
#include <iostream>


Drink::Drink(int stock, double price, std::string name , double alcohol)
        : ResturantItem(ProductType::Drink,stock, price), name(name), alcohol(alcohol){}

std::string Drink::getName() const{
    return name;
}
void Drink::setName(std::string newName){
    name = newName;
}
void Drink::setAlcohol(double newAlcohol){
    if (newAlcohol >= 0) {
        alcohol = newAlcohol;
    }
}



bool Drink::operator>(const Drink& rhs) const{
    return alcohol > rhs.alcohol;

}
void Drink::print(){
    std::cout << stock << " " << price << " " << name << " " << alcohol << std::endl;
}