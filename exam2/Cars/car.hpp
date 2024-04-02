#pragma once 


#include "vehicle.hpp"


class Car : public Vehicle {
    bool isPersonal = false;
public: 

    Car() = default;

    Vehicle* clone() const {
        return new Car(*this);
    }

    bool getIsPersonal() const {
        return isPersonal;
    }

    bool getIsCompanyOwned() const {
        return !isPersonal;
    }

    void setIsPersonal(bool newIsPersonal) {
        isPersonal = newIsPersonal;
    }
};