#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// User class
class User {
public:
    int userid;
    string name;
    string email;
    string pwd;

    User(int id, string n, string e, string p) {
        userid = id;
        name = n;
        email = e;
        pwd = p;
    }

    void display() {
        cout << "ID: " << userid << ", Name: " << name << ", Email: " << email << endl;
    }
};

int main() {
    vector<User> users;
    int choice;

    do {
        cout << "\n--- User Menu ---\n";
        cout << "1. Add User\n";
        cout << "2. Display All Users\n";
        cout << "3. Search User\n";
        cout << "4. Change Password\n";
        cout << "5. Delete All Users\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1) {
            int id;
            string name, email, pwd;
            cout << "Enter User ID: ";
            cin >> id;
            cin.ignore(); // flush newline
            cout << "Enter Name: ";
            getline(cin, name);
            cout << "Enter Email: ";
            getline(cin, email);
            cout << "Enter Password: ";
            getline(cin, pwd);
            users.push_back(User(id, name, email, pwd));
            cout << "User added successfully.\n";
        }
        else if(choice == 2) {
            if(users.empty()) {
                cout << "No users to display.\n";
            } else {
                for(User &u : users)
                    u.display();
            }
        }
        else if(choice == 3) {
            int id;
            cout << "Enter User ID to search: ";
            cin >> id;
            bool found = false;
            for(User &u : users) {
                if(u.userid == id) {
                    u.display();
                    found = true;
                    break;
                }
            }
            if(!found)
                cout << "User not found.\n";
        }
        else if(choice == 4) {
            int id;
            cout << "Enter User ID to change password: ";
            cin >> id;
            bool found = false;
            for(User &u : users) {
                if(u.userid == id) {
                    cin.ignore();
                    cout << "Enter new password: ";
                    getline(cin, u.pwd);
                    cout << "Password updated.\n";
                    found = true;
                    break;
                }
            }
            if(!found)
                cout << "User not found.\n";
        }
        else if(choice == 5) {
            users.clear();
            cout << "All users deleted.\n";
        }
        else if(choice == 0) {
            cout << "Exiting...\n";
        }
        else {
            cout << "Invalid choice!\n";
        }
    } while(choice != 0);

    return 0;
}
