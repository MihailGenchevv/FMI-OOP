#include <iostream>
#include <exception>

#include "ProtectedArray.hpp"
#include "ProtectedValue.hpp"



int main() {


    ProtectedArray<int> arr;

    arr.add(2,42);
    std::cout << arr.get_value(42,0) << std::endl;

}