#include <iostream>
#include <map>
#include <string>
using namespace std;

class Account {
private:
    int actid;
    string name;
    double balance;
public:
	Account(){}
    Account(int id, string n, double b) {
        actid = id;
        name = n;
        balance = b;
    }
    int getId() const { return actid; }
    string getName() const { return name; }
    double getBalance() const { return balance; }
    void display() const {
        cout << "ID: " << actid << ", Name: " << name << ", Balance: " << balance << endl;
    }
};

int main() {
    map<int, Account> accounts;
    int choice;
    do {
        cout << "\n1. Add Account\n2. Display All\n3. Search by ID\n4. Remove All\n5. Exit\nEnter choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                int id;
                string name;
                double bal;
                cout << "Enter id: ";
                cin >> id;
                cout << "Enter name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter balance: ";
                cin >> bal;
                accounts[id] = Account(id, name, bal);
                break;
            }
            case 2:
                for (const auto& p : accounts) {
                    p.second.display();
                }
                break;
            case 3: {
                int id;
                cout << "Enter id: ";
                cin >> id;
                auto it = accounts.find(id);
                if (it != accounts.end()) {
                    it->second.display();
                } else {
                    cout << "Not found" << endl;
                }
                break;
            }
            case 4:
                accounts.clear();
                cout << "All accounts removed." << endl;
                break;
        }
    } while (choice != 5);
    return 0;
}
