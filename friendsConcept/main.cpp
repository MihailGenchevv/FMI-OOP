#include <iostream>
#include <vector>

class Car{
    int x = 0;
    int y = 0;
public:
    void moveOnce(){
        x += 1;
    }

    friend void moveOnce(Car& car);
    friend class Driver;
};

class Driver {
    Car car;
public:
    void driveCar() {
        car.x += 1;
    }
};

void moveOnce(Car& car) {
    car.x += 1;
}
int main() {
    Car car;
    car.moveOnce();

    Driver driver;
    driver.driveCar();




}