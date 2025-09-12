
#include <iostream>
#include <string>
using namespace std;

class Emp {
protected:
    int id;
    string name;
    int deptId;
    double basicSalary;
public:
    Emp(int id, string name, int deptId, double basicSalary)
        : id(id), name(name), deptId(deptId), basicSalary(basicSalary) {}
    virtual double computeNetSalary() {
        return 0;
    }
    virtual void display() {
        cout << "ID: " << id << ", Name: " << name << ", DeptID: " << deptId << ", Basic Salary: " << basicSalary;
    }
    virtual ~Emp() {}
};

class Mgr : public Emp {
    double perfBonus;
public:
    Mgr(int id, string name, int deptId, double basicSalary, double perfBonus)
        : Emp(id, name, deptId, basicSalary), perfBonus(perfBonus) {}
    double computeNetSalary() override {
        return basicSalary + perfBonus;
    }
    void display() override {
        Emp::display();
        cout << ", Perf Bonus: " << perfBonus;
    }
};

class Worker : public Emp {
    int hoursWorked;
    double hourlyRate;
public:
    Worker(int id, string name, int deptId, double basicSalary, int hoursWorked, double hourlyRate)
        : Emp(id, name, deptId, basicSalary), hoursWorked(hoursWorked), hourlyRate(hourlyRate) {}
    double computeNetSalary() override {
        return basicSalary + (hoursWorked * hourlyRate);
    }
    double getHourlyRate() {
        return hourlyRate;
    }
    void display() override {
        Emp::display();
        cout << ", Hours Worked: " << hoursWorked << ", Hourly Rate: " << hourlyRate;
    }
};

int main() {
    const int MAX = 100;
    Emp* org[MAX];
    int count = 0;
    int choice;
    do {
        cout << "\n1. Hire Manager\n2. Hire Worker\n3. Display all Employees\n4. Exit\nEnter choice: ";
        cin >> choice;
        if (choice == 1) {
            int id, deptId;
            string name;
            double basic, bonus;
            cout << "Enter id, name, deptId, basic salary, perf bonus: ";
            cin >> id;
            cin.ignore();
            getline(cin, name);
            cin >> deptId >> basic >> bonus;
            org[count++] = new Mgr(id, name, deptId, basic, bonus);
        } else if (choice == 2) {
            int id, deptId, hours;
            string name;
            double basic, rate;
            cout << "Enter id, name, deptId, basic salary, hours worked, hourly rate: ";
            cin >> id;
            cin.ignore();
            getline(cin, name);
            cin >> deptId >> basic >> hours >> rate;
            org[count++] = new Worker(id, name, deptId, basic, hours, rate);
        } else if (choice == 3) {
            for (int i = 0; i < count; ++i) {
                org[i]->display();
                cout << ", Net Salary: " << org[i]->computeNetSalary() << endl;
            }
        }
    } while (choice != 4);
    for (int i = 0; i < count; ++i) delete org[i];
    return 0;
}
