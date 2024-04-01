//
// Created by MGenchev on 1.04.24.
//

#include "bomber.hpp"


void Bomber::printInfo() {
    cout << "This bomber has " << bombs.size() << " bombs left and weights: " << weight << "tons!" << endl;
}

Bomber::~Bomber() {

    for (auto i : bombs) {
        delete i;
    }



}


void Bomber::attack() {
    if (bombs.size() > 0){
        weight -= 2;
        cout << "Bomb dropped!" << endl;
        delete bombs[bombs.size() - 1];
        bombs.pop_back();
    } else {
        cout << "Bomber has no bombs left for attack" << endl;
    }
}