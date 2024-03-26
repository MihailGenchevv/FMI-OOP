//
// Created by MGenchev on 26.03.24.
//

#include "Dispenser.h"
#include <iostream>

using namespace std;

void Dispenser::fillCup(int mil) {
    if (this->curr*1000 > mil){
        this->curr -= mil;
    } else {
        cout << "Some Error" << endl;

    }
}

void Dispenser::addWater(double mil) {
    if(this->curr + mil > this->maxLit){
        cout<<"Too much water" << endl;
    }
    this->curr+=mil
}
