#include <iostream>
#include "TimeStamp.h"
#include "Book.h"

using namespace std;

void print(const Book& b) {
    cout << b.title << " " << b.author << " " << b.genre << " " << b.sales << " " << b.price << endl;

}

int main() {

//    TimeStamp t1;
//
//
//    TimeStamp t2;
//    t2.min = 30;
//    t2.sec = 30;
//    t2.hours = 30;
//
//    cout << t1.calculateSeconds(t2)<< endl;

//    Book book1;
//    book1.init();
//    cout << book1.author << " " << book1.price << endl;

    Book bookarray[10];
    for (int i= 0; i < 3; i++ ){
        bookarray[i].init();
        bookarray[i].print();
    }

    double maxPrice = 0;
    int answer = 0;
    for (int i = 0; i < 3; i++) {
        if (maxPrice < bookarray[i].price) {
            maxPrice = bookarray[i].price;
            answer = i;
        }
    }

    cout << bookarray[answer].title;

}