#pragma once 


#include "vehicle.hpp"


class Microbus : public Vehicle {
    bool hasPassengers = false;
public: 

    Microbus() = default;

    Vehicle* clone() const {
        return new Microbus(*this);
    }

    bool getHasPassengers() const {
        return hasPassengers;
    }

    void setHasPassengers(bool newHasPassengers) {
        hasPassengers = newHasPassengers;
    }
};