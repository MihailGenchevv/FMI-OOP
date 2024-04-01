//
// Created by MGenchev on 31.03.24.
//


#include "Food.h"
#include "Drink.h"
#include "ResturantItem.h"
#include "Restaurant.h"


int main() {
    Food t1;
    t1.setName("Pizza");
    t1.setWeight(0.400);
    t1.setStock(30);
    t1.setPrice(5.50);


    Drink t2;
    t2.setName("Pizza");
    t2.setAlcohol(0.400);
    t2.setStock(30);
    t2.setPrice(5.50);

    Restaurant restaurant;
    restaurant.add(t1);
    restaurant.add(t2);
    restaurant.changePrice(1, 1.80);

}