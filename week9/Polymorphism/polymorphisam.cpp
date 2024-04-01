#include <iostream>



class Parent {
public:

    virtual void print() {
        std::cout << "Base\n";
    }

    virtual ~Parent() {
        std::cout << "Parent destructor\n";
    }


};


class Child : public Parent {
public:
    void print() override{
        std::cout << "Child\n";
    }
    
    void printChild() {
        std::cout << "Child function\n";
    }

    ~Child() {
        std::cout << "Child destructor\n";
    }

};


int main() {
    Parent * p = new Parent();
    p->print();  

    Parent * c = new Child();
    ((Child*)c)->print();

    delete p;
    delete c;
}
