#include <iostream>

#include "Car.h"

using namespace std;

int main(){
    Car defaultCar = Car();

    defaultCar.print();

    Car car2("vw golf", "CV 666");
    car2.print();

    Car car3(car2);
    car3.print();

    car3.setModel("LADA");
    car3.print();

    cout << car3.getModel() << endl;


}