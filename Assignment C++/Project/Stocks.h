#include <iostream>
#include <vector>
#include <math.h>
#include <stack>
#include <string>

//define enums
//define exception classes


class Stock{
    std::string name;
    double price;
    int availableQuantity;
    public:
        double getPrice();
        void setPrice();
        //do operator overloading;
};

template <typename T>
class Portfolio{
    std::vector<T>assets;

    public:
        void addAsset(T);
        void removeAsset(T);
        void displayPortfolio();

};