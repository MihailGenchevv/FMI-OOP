//
// Created by MGenchev on 27.03.24.
//

#include "Vector.h"
#include <iostream>

template <typename T>
Vector<T>::Vector() : size(0), capacity(0), arr(nullptr){
}

template <typename T>
Vector<T>::Vector(int capacity) : capacity(capacity){
    arr = new T[capacity];
}

template <typename T>
Vector<T>::Vector(const Vector<T> &lhs) {
    copyFrom(lhs);
}

template <typename T>
Vector<T>& Vector<T>::operator=(const Vector<T> &lhs) {
    if (this != &lhs){
        deallocate();
        copyFrom(lhs);

    }
    return *this;
}

template <typename T>
void Vector<T>::deallocate() {
    delete[] arr;
}


template <typename T>
void Vector<T>::copyFrom(const Vector<T> &lhs) {
    this->capacity = lhs.capacity;
    this->size = lhs.size;
    this->arr = new T[capacity];
    for (int i = 0; i < size; i++) {
        this->arr[i] = lhs.arr[i];
    }
}

template <typename T>
Vector<T>::~Vector(){
    deallocate();
}

template <typename T>
void Vector<T>::push(T element){
    if (size == capacity){
        resize();
    }

    arr[size] = element;
    size++;
}

template <typename T>
int Vector<T>::getSize() {
    return size;
}


template <typename T>
T Vector<T>::pop() {
    if (size == 0) return T();
    T answer = arr[size - 1];
    size--;
    return answer;
}


template <typename T>
void Vector<T>::resize() {
    if (capacity ==0 ) capacity = 1;
    T* newArray = new T[capacity*2];

    for (size_t i = 0; i < size; i++ ){
        newArray[i] = arr[i];
    }

    deallocate();
    capacity *= 2;
    arr = newArray;
}


template <typename T>
void Vector<T>::add(int idx, const T& element){
    if (idx >= size) {
        throw std::invalid_argument("Vector is not large enough");
    };
    if (size == capacity) capacity *= 2;

    T* newArray = new T[capacity];

    for (int i=0; i < idx; i++){
        newArray[i] = arr[i];
    }

    newArray[idx] = element;

    for (int i = idx; i < size; i++){
        newArray[i+1] = arr[i];
    }

    deallocate();
    size++;
    arr = newArray;
}


template <typename T>
void Vector<T>::remove(int idx) {
    if (idx >= size) {
        throw std::invalid_argument("Vector is not large enough");
    }

    T* newArr = new T[capacity - 1];

    for (int i=0; i < idx; i++){
        newArr[i] = arr[i];
    }

    size--;
    for (int i=idx; i < size; i++){
        newArr[i] = arr[i + 1];
    }
    deallocate();
    arr = newArr;
}

template <typename T>
void Vector<T>::print(){
    for (int i= 0; i < size; i++){
        std::cout <<  arr[i] << " ";

    }
    std::cout << std::endl;
}