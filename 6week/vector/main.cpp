#include <iostream>
#include "Vector.h"

using namespace std;

int main(){
    Vector<string> vector;

    vector.push("ivan");
    vector.push("Vanq");
    vector.add(1, "Viktor");
    vector.print();

}