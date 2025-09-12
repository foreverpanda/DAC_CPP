#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int acctNo;
    string customerName;
    double balance;
public:
    BankAccount(int acctNo, string customerName, double balance) {
        this->acctNo = acctNo;
        this->customerName = customerName;
        this->balance = balance;
    }
    void withdraw(double amt) {
        if (amt > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amt;
            cout << "Withdrawn: " << amt << ", New Balance: " << balance << endl;
        }
    }
    void deposit(double amt) {
        balance += amt;
        cout << "Deposited: " << amt << ", New Balance: " << balance << endl;
    }
    void display() {
        cout << "Account No: " << acctNo << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc(101, "John Doe", 5000);
    acc.display();
    acc.deposit(1500);
    acc.withdraw(2000);
    acc.withdraw(6000); // Should show insufficient balance
    acc.display();
    return 0;
}

