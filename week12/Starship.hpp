//
// Created by MGenchev on 1.04.24.
//

#ifndef FMI_OOP_STARSHIP_H
#define FMI_OOP_STARSHIP_H

#include <string>

class Starship {
protected:
    std::string type;
    double weight;
    Starship(std::string type, double weight){
        this->type = type;
        this->weight = weight;
    };


public:
    virtual ~Starship() = 0;
    virtual void attack() = 0;
    virtual void printInfo() = 0;

    std::string getType(){
        return type;
    }


};


#endif //FMI_OOP_STARSHIP_H
