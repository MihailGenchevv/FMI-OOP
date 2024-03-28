#include <iostream>
#include <string>


int main () {

    std::string hello("hello world");

    hello.append("and");

    hello.push_back('!');

    std::string hello2 = hello;
    hello.clear();

    size_t posistion = hello.find("world");

    std::cout << hello2;

    hello2 += "!!!";

}