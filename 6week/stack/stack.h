//
// Created by MGenchev on 27.03.24.
//

#ifndef FMI_OOP_STACK_H
#define FMI_OOP_STACK_H

#include "../vector/Vector.h"

template <typename T>
class Stack {
private:
    int size;
    int capacity;
    Vector<T> vector;
    void copyFrom(Stack<T> &);
public:
    Stack();
    ~Stack() = default;
    Stack<T>& operator=(const Stack<T>&);
    Stack<T>(int);
    Stack<T>(const Stack&);
    void push(T);
    T pop();
    int getSize();

};


#endif //FMI_OOP_STACK_H
