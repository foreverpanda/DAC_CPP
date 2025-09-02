#include "Stocks.h"

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
    virtual void displaySummary() = 0; 
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

class Admin : public Account
{
public:
    void updateStock(Stock&, double newPrice);
    void manageMarket(std::vector<Stock>&);
};

class PremiumTrader : public Trader
{

    void buyStock(); //5% brokerage discount
};

void Account::deposit(double amount){
    std::cout<<"\nAmount deposited Successfully\n";
    balance += amount;
    std::cout<<"\nUpdated account balance : "<<balance;
    std::cout<<std::endl;
}

void Account::withdraw(double amount){
    if(amount > balance){
        std::cout<<"\nInsufficient Balance\n";
        std::cout<<"\nCurrent Balance : "<<balance<<"\n";
    }
    else{
        std::cout<<"\nWithdraw Successful\n";
        std::cout<<"\n Withdraw amount : "<<amount<<"\n";
        balance -= amount;
        std::cout<<"\nRemaining Balance : "<<balance<<"\n";
    }
}

double Account::getBalance(){
    return balance;
}