//
// Created by MGenchev on 29.03.24.
//

#include "Food.h"


void Food::consume(){
    pieces--;
    price -= piecePrice;
}