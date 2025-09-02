#include <iostream>
#include <vector>
#include <math.h>
#include <stack>
#include <string>

// define enums
// define exception classes

enum Sector
{
    TECH,
    FINANCE,
    ENERGY,
    HEALTHCARE,
    AUTOMOBILE
};

class Stock
{
    std::string name;
    double price;
    int availableQuantity;

public:
    Stock()
    {
        name = "";
        price = 0;
        availableQuantity = 0;
    }
    Stock(std::string name, double price, int availableQuantity)
    {
        this->name = name;
        this->price = price;
        this->availableQuantity = availableQuantity;
    }

    void setPrice(double);
    void updateQty(int);

    double getPrice(double) const;
    int getQtyAvailable() const;
    std::string getSector() const;

    void displayStock() const;
    // do operator overloading;
};

template <typename T>
class Portfolio
{
    std::vector<T> assets;

public:
    void addAsset(T);
    void removeAsset(T);
    void displayPortfolio();
};

void Stock::displayStock() const
{
    std::cout << "\n--STOCK DETAILS--\n";
    std::cout << "Name : " << name;
    std::cout << "\nPrice : " << price;
    std::cout << "\nQuantity available : " << availableQuantity;
    std::cout << "Sector : " << getSector();
}

void Stock::setPrice(double newPrice)
{
    this->price = newPrice;
}

void Stock::updateQty(int newQty)
{
    this->availableQuantity = newQty;
}

int Stock::getQtyAvailable() const
{
    return availableQuantity;
}