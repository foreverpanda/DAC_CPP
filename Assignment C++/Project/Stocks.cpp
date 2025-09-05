#include "Stocks.h"


void Stock::setPrice(double newPrice)
{
    this->price = newPrice;
}

void Stock::updateQty(int newQty)
{
    this->availableQuantity = newQty;
}

int Stock::getId() const
{
    return id;
}

double Stock::getPrice() const{
    return price;
}

int Stock::getQtyAvailable() const
{
    return availableQuantity;
}

void Stock::displayStock() const
{
    std::cout << "\n--STOCK DETAILS--\n";
    std::cout << "Name : " << name;
    std::cout<<"\nId : "<<id;
    std::cout << "\nPrice : " << price;
    std::cout << "\nQuantity available : " << availableQuantity;
    // std::cout << "Sector : " << getSector();
    
}



