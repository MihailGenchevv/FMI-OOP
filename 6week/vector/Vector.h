//
// Created by MGenchev on 27.03.24.
//

#ifndef FMI_OOP_VECTOR_H
#define FMI_OOP_VECTOR_H

template <typename T>
class Vector {
private:
    T* arr;
    int capacity;
    int size;
    void deallocate();
    void copyFrom(const Vector<T>& lhs);
    void resize();
public:
    Vector();
    Vector(int capacity);
    Vector(const Vector<T>& lhs);
    Vector<T>& operator=(const Vector<T>& lhs);
    ~Vector();

    void push(T element);
    int getSize();
    T pop();
    void add(int ,const T &);
    void remove(int);
    void print();
};


#endif //FMI_OOP_VECTOR_H
