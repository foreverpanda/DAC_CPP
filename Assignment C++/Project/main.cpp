// std::cout<<"Menu:";
//         std::cout<<"\n1. Buy Asset\n2. Sell Asset\n3. Show Portfolio\n4. Show Transaction History\n0. Exit\n";
//         std::cin>>choice;
//         std::cout<<"User chooses : "<<choice;
//         switch (choice){
//             case 1 :{
//                 std::cout<<"(Buy Asset)\n";
//             }

//         }


#include "Accounts.h"
#include "Stocks.h"
#include "Portfolio.h"
#include <iostream>
void traderLogin(){

}

void premiumTraderLogin(){

}

void adminLogin(){
    Admin admin;
    int choice;


    do {
        std::cout << "\n--- Admin Menu ---\n";
        std::cout << "1. Add Stock\n";
        std::cout << "2. Update Stock\n";
        std::cout << "3. Show All Stocks\n";
        std::cout << "0. Logout\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        switch(choice) {
            case 1: {
                std::string symbol;
                double price;
                int qty, id;
                std::cout << "Enter ID: ";
                std::cin >> id;
                std::cout << "Enter Symbol: ";
                std::cin >> symbol;
                std::cout << "Enter Price: ";
                std::cin >> price;
                std::cout << "Enter Quantity: ";
                std::cin >> qty;
                admin.add(symbol, id, price, qty);
                break;
            }
            case 2: {
                int id;
                double newPrice;
                std::cout << "Enter Stock ID to update: ";
                std::cin >> id;
                std::cout << "Enter new Price: ";
                std::cin >> newPrice;
                admin.updateStock(id,newPrice);

                // Dummy way: pehle portfolio ka stock nikalna padega
                // Abhi simple rakhta hu → portfolio ke andar se update call karenge
                // Placeholder
                break;
            }
            case 3:
                admin.showAllStocks();
                break;
            case 0:
                std::cout << "Logging out Admin...\n";
                break;
            default:
                std::cout << "Invalid choice, try again.\n";
        }
    } while(choice != 0);
}


int main(){
    int choice;
    adminLogin();
    // std::cout<<"Welcome to Portfolio Manager!";
    // do{
    //     std::cout<<"Login as \n1. Trader\n2. Premium Trader\n3. Admin\n";
    //     std::cin>>choice;
    //     switch (choice)
    //     {
    //     case 1:
    //         // traderLogin();
    //         break;
    //     case 2:
    //         // premiumTraderLogin();
    //         break;
    //     case 3:
    //         adminLogin();
    //         break;
    //     default:
    //         std::cout<<"Invalid option\nPlease try again!!!\n";
    //         break;
    //     }
    // }while(choice);

}