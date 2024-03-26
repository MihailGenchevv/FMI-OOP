//
// Created by MGenchev on 26.03.24.
//

#ifndef FMI_OOP_VECTOR_H
#define FMI_OOP_VECTOR_H


class Vector {
    int* data;
    int count = 0;
    int capacity;
    static int constructorCalls;

public:
    void push_back(int x);
    //Constructor
    Vector(int _capacity = 4);
    // Copy constructor
    Vector(const Vector & rhs);
    // Destructor
    ~Vector();
    // equals operator
    Vector& operator=(const Vector& rhs);

    int operator[](int index);

    static Vector createVector(){
        return Vector();
    }

};


#endif //FMI_OOP_VECTOR_H
