#include<iostream>
#include<exception>
using namespace std;

class NegativeAmountException: public exception{
    string msg;
    public:
    NegativeAmountException(string msg): msg(msg){}
    const char* what() const noexcept override{
        return msg.c_str();
    }
};

class BankAccount{
    int balance;
    public:
    BankAccount(int bal): balance(bal){}

    void withdraw(int amt){
        if(amt < 0) 
        throw NegativeAmountException("Ammount negative!");
        if (amt > balance) throw runtime_error("Insufficient balance!");
        balance -= amt;
        cout << "Withdrawal successful. Remaining balance: " << balance << endl;
    }
     int getBalance() const { return balance; }
};


int main(){
    BankAccount acc(1000);
    bool exit = false;
    while(!exit){
        try{
        cout<<"Enter withdraw amount : ";
        int amt;
        cin>>amt;

        acc.withdraw(amt);
        exit =true;
    }
    catch(NegativeAmountException e){
        cout<<"Custom exceptin"<<e.what()<<endl;
    }
    }
}