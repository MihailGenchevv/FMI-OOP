//
// Created by MGenchev on 31.03.24.
//

#include "ResturantItem.h"


ResturantItem::ResturantItem(ProductType type, int stock, double price )
: type(type), stock(stock), price(price){}
ProductType ResturantItem::getType() const{
    return type;
}
int ResturantItem::getStock() const{
    return stock;
}
double ResturantItem::getPrice() const{
    return price;
}

void ResturantItem::setPrice(double newPrice){
    if (newPrice >= 0) {
        price = newPrice;
    }
}
void ResturantItem::setStock(int newInStock){
    if (newInStock >= 0) {
        stock = newInStock;
    }
}

