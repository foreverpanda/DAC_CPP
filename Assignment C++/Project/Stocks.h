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

template <typename T>
class Portfolio
{
    std::vector<T> assets;

public:
    void addAsset(const T & asset);
    void removeAsset(const T & asset);
    void displayPortfolio();
};

void Stock::displayStock() const
{
    std::cout << "\n--STOCK DETAILS--\n";
    std::cout << "Name : " << name;
    std::cout<<"\nId : "<<id;
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

template<typename T>
void Portfolio<T>::addAsset(const T &asset){
    assets.push_back(asset);
}

template<typename T>
void Portfolio<T>::removeAsset(const T & asset){
    for (auto it = assets.begin(); it != assets.end(); ++it) {
    if (asset.getId() == it->getId()) {
        assets.erase(it);
        break;
    }
}
}
template<typename T>
void Portfolio<T>::displayPortfolio(){
    for(auto &i : assets){
        i.displayStock();
    }
}

int Stock::getId()const{
    return id;
}