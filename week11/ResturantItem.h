//
// Created by MGenchev on 31.03.24.
//

#ifndef FMI_OOP_RESTURANTITEM_H
#define FMI_OOP_RESTURANTITEM_H

enum class ProductType {
    Food,
    Drink,
    Invalid
};

class ResturantItem {
protected:
    ProductType type;
    double price;
    int stock;
public:
    ResturantItem(ProductType type = ProductType::Invalid, int stock = 0, double price = 0);
    ProductType getType() const;
    int getStock() const;
    double getPrice() const;

    void setPrice(double newPrice);
    void setStock(int newInStock);

    virtual void print() = 0;

    virtual ~ResturantItem();


};


#endif //FMI_OOP_RESTURANTITEM_H
