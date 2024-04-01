//
// Created by MGenchev on 31.03.24.
//

#include "Food.h"
#include <iostream>

Food::Food(int stock, double price, std::string name , double weight)
: ResturantItem(ProductType::Food,stock, price), name(name), weight(weight){}

std::string Food::getName() const{
    return name;
}
void Food::setName(std::string newName){
    name = newName;
}
void Food::setWeight(double newWeight){
    if (newWeight >= 0) {
        weight = newWeight;
    }
}



bool Food::operator>(const Food& rhs) const{
    return weight > rhs.weight;

}
void Food::print(){
    std::cout << stock << " " << price << " " << name << " " << weight << std::endl;
}