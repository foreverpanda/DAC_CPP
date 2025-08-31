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

void traderLogin(){

}

void premiumTraderLogin(){

}

void adminLogin(){

}


int main(){
    int choice;
    std::cout<<"Welcome to Portfolio Manager!";
    do{
        std::cout<<"Login as \n1. Trader\n2. Premium Trader\n3. Admin\n";
        std::cin>>choice;
        switch (choice)
        {
        case 1:
            traderLogin();
            break;
        case 2:
            premiumTraderLogin();
            break;
        case 3:
            adminLogin();
            break;
        default:
            std::cout<<"Invalid option\nPlease try again!!!\n";
            break;
        }
    }while(choice);

}