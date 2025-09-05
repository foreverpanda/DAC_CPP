#pragma once
#include "Stocks.h"
#include "Portfolio.h"
class Account
{
private:
    int userId;
    double balance;
    std::string name;

public:
    Account(int userId, double balance, std::string name) : userId(userId), balance(balance), name(name) {};
    void deposit(double);
    void withdraw(double);
    // virtual void displaySummary() ; 
    double getBalance();
};

class Trader : public Account
{
public:
    Trader(int userId, double balance, std::string name) : Account(userId, balance, name) {}
    virtual void buyStock(Stock&, int qty, Portfolio<Stock>&);
    void sellStock(Stock&, int qty, Portfolio<Stock>&);
    void viewPortfolio();
};

class PremiumTrader : public Trader
{

    void buyStock(); //5% brokerage discount
};

class Admin : public Account
{
    std::string userName;
    std::string pass;
    Portfolio<Stock> stockPortfolio;

public:
    Admin():Account(1,1,"1"){
        
        std::cout<<"Admin login";
    }
    void add(std::string name,int id, double price,int quantity);
    void updateStock(int id, double newPrice);
    void manageMarket(std::vector<Stock>&);
    void showAllStocks();
    void deleteStock(int id);
};
