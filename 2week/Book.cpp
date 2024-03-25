//
// Created by MGenchev on 26.03.24.
//

#include "Book.h"
#include <iostream>

using namespace std;

void Book::init(){
    cin >> title;
    cin >> author;
    cin >> genre;
    cin>> sales;
    cin >> price;
}

void Book::print(){
    cout << title << " " << author << " " << genre << " " << sales << " " << price << endl;
}