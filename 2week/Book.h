//
// Created by MGenchev on 26.03.24.
//

#ifndef FMI_OOP_BOOK_H
#define FMI_OOP_BOOK_H


class Book {
public:
    char title[250];
    char author[250];
    char genre[250];
    double price;
    int sales;

    void init();
    void print();
    void print(const Book& b)

};


#endif //FMI_OOP_BOOK_H
