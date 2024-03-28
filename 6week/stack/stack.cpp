//
// Created by MGenchev on 27.03.24.
//

#include "stack.h"


template <typename T>
Stack<T>::Stack() : capacity(0), size(0), vector(Vector<T>()) {

}

template <typename T>
Stack<T>::Stack(int capacity) : capacity(capacity), size(0) {
    vector = Vector<T>(capacity);
}
template <typename T>
Stack<T>::Stack(const Stack<T> &rhs){
    copyFrom(rhs);

}

template <typename T>
void Stack<T>::copyFrom(Stack<T> &rhs) {
    size = rhs.size;
    capacity = rhs.capacity;
    vector = rhs.vector;
}

template <typename T>
Stack<T>& Stack<T>::operator=(const Stack<T> &rhs) {
    if (this != &rhs){
        copyFrom(rhs);
    }

    return *this;
}

template <typename T>
int Stack<T>::getSize() {
    return size;
}

template <typename T>
void Stack<T>::push(T element) {
    vector.push(element);
}

template <typename T>
T Stack<T>::pop(){
    return vector.pop();
}
