//
// Created by MGenchev on 1.04.24.
//

#ifndef FMI_OOP_BOMBER_H
#define FMI_OOP_BOMBER_H

#include "Starship.hpp"
#include <vector>
#include <string>

#include <iostream>

using namespace std;

class Bomber : protected Starship{
    struct Bomb{
        int damage = 10;
    };


    vector<Bomb*> bombs;


    Bomber(std::string type): Starship(type, 40){
        this->type = type;
        this->weight = 40;

        for (int i = 0; i< 10; i++){
            this->bombs.push_back(new Bomb());
        }
    }
public:
    Bomber& operator=(Bomber& bomber) = delete;
    Bomber() = delete;
    ~Bomber();
    void printInfo() override;

    void attack() override;

};


#endif //FMI_OOP_BOMBER_H
