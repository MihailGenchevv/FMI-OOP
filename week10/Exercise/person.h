//
// Created by MGenchev on 31.03.24.
//

#ifndef FMI_OOP_PERSON_H
#define FMI_OOP_PERSON_H

#include <string>

using namespace std;

class Person {
private:
    string name;
    string familyName;
    unsigned int age;
    string city;
    string street;
public:
    Person(string name="", string familyName = "", int age = 0, string city = "", string street = "");

    virtual Person* clone() = 0;


};


#endif //FMI_OOP_PERSON_H
