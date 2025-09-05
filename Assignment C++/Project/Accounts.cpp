#include "Accounts.h"

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



void Admin::add(std::string name, int id, double price, int quantity)
{
    Stock s(id,name,price,quantity);
    stockPortfolio.addAsset(s);
}


void Admin::showAllStocks(){

    for(auto i : stockPortfolio.assets){
        i.displayStock();

    }
 
}

void Admin::updateStock( int id,double newPrice){

    for(auto &i : stockPortfolio.assets){

        if(i.getId() == id )
        {
            i.setPrice(newPrice) ;
            std::cout<<"Price Updated";
        }

    }

}