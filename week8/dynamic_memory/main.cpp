//
// Created by MGenchev on 28.03.24.
//


#include <iostream>
#include <cstring>

class User {
protected:
    char* name;
public:
    User(const char* newName = ""){
        std::cout << "Construct USER\n";

        setName(newName);
    }
    ~User(){
        std::cout << "Destruct USER\n";

        delete[] this->name;
    }
    User(const User& rhs){
        setName(rhs.name);
    }
    User& operator=(const User& rhs){
        if (this != &rhs){
            setName(rhs.name);
        }
        return *this;
    }
    void setName(const char* newName) {
        delete[] this->name;
        this->name = new char[strlen(newName)];
        strcpy(this->name, newName);
    }
    const char* getName() const{
        return this->name;
    }
};

class Student : public User {
public:
    int fn;
    Student(const char* name, int fn) : fn(fn), User(name){
        std::cout << "Construct student\n";

    }
    ~Student(){
        std::cout << "Destruct Student\n";

    }
//    Student& operator=(const Student& rhs){
//        User::operator=(rhs);
//
//    }



};


int main() {
    Student s("Ivan", 42);
}