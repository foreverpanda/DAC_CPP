#pragma once

#include "Stocks.h"

template <typename T>
class Portfolio
{
    
    public:
    std::vector<T> assets;
    void addAsset(const T & asset);
    void removeAsset(const T & asset);
    void displayPortfolio();
};


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
