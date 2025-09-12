#include <iostream>
using namespace std;

class Date {
private:
    int dd;
    int mm;
    int yy;

public:
    Date() {
        dd = 1;
        mm = 1;
        yy = 2000;
    }

    Date(int d, int m, int y) {
        dd = d;
        mm = m;
        yy = y;
    }

    void accept() {
        cout << "Enter date (dd mm yyyy): ";
        cin >> dd >> mm >> yy;
    }

    void display() {
        cout << dd << "/" << mm << "/" << yy;
    }
};

class Employee {
private:
    int id;
    string name;
    Date dob;

public:
    Employee() {
        id = 0;
        name = "Unknown";
    }

    Employee(int i, string n, Date d) {
        id = i;
        name = n;
        dob = d;
    }

    void accept() {
        cout << "Enter ID: ";
        cin >> id;
        cin.ignore(); // to clear newline character
        cout << "Enter name: ";
        getline(cin, name);
        dob.accept();
    }

    void display() {
        cout << "Employee ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Date of Birth: ";
        dob.display();
        cout << endl;
    }
};

int main() {
    Employee emp1;
    Employee emp2(102, "Sigma Boy", Date(12, 9, 1995));

    cout << "Enter details for employee 1:" << endl;
    emp1.accept();

    cout << "\nEmployee 1 details:" << endl;
    emp1.display();

    cout << "\nEmployee 2 details:" << endl;
    emp2.display();

    return 0;
}

