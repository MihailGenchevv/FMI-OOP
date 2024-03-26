//
// Created by MGenchev on 26.03.24.
//
#include <iostream>
#include "vector.h"

using namespace std;

int main(){

    Vector x = Vector::createVector();
    for (int i =0; i< 10; i++){
        x.push_back(i);
    }

    Vector y(42);
    Vector z;
    z = y = x;

    cout << y[1] << endl;
}