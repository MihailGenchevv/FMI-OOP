//
// Created by MGenchev on 29.03.24.
//

#ifndef FMI_OOP_FOOD_H
#define FMI_OOP_FOOD_H

#include <string>

using namespace std;

class Food {
    double weight;
    int pieces;
    double piecePrice;
    double price;
public:
    void consume();
    string getCategory();

};


#endif //FMI_OOP_FOOD_H
