#pragma once

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
    int id;

public:
    Stock()
    {
        id = -1;
        name = "";
        price = 0;
        availableQuantity = 0;
    }
    Stock(int id,std::string name, double price, int availableQuantity)
    {
        this->id = id;
        this->name = name;
        this->price = price;
        this->availableQuantity = availableQuantity;
    }

    void setPrice(double);
    void updateQty(int);
    int getId()const;
    double getPrice() const;
    int getQtyAvailable() const;
    std::string getSector() const;

    void displayStock() const;
    // do operator overloading;
};
