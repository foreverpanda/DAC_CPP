#include <iostream>
#include<string>
using namespace std;

class Employee
{

    int empId;
    string empName;
    int deptId;
    double basicSalary;

public:
    Employee()
    {
        cout << "No data given about the user | SETTING TO NULL\n";
        empId = 0;
        empName = "NULL";
        deptId = 0;
        basicSalary = 0;
    }
    Employee(int empId, string empName, int deptId, double basicSalary)
    {
        this->empId = empId;
        this->empName = empName;
        this->deptId = deptId;
        this->basicSalary = basicSalary;
    }

    double getBasicSalary()
    {
        return basicSalary;
    }

    virtual double computeNetSalary() = 0;
    virtual void display() {
        cout << "\nID: " << empId << "\nName: " << empName 
             << "\nDept: " << deptId 
             << "\nBasic: " << basicSalary << endl;
    }

    virtual string employeeType() =0 ;

};

class Manager : public Employee
{

    int perfBonus;

public:
    Manager(){
        
        perfBonus = 0 ;
    }
    Manager(int empId, string empName, int deptId, double basicSalary, int perfBonus) : Employee(empId, empName, deptId, basicSalary)
    {
        this->perfBonus = perfBonus;
    }

    virtual double computeNetSalary() override
    {
        return getBasicSalary() + perfBonus;
    }

    virtual void display() override{
        cout<<"\nPost :  Manager \n";

        Employee::display();
        cout << "\nPerf Bonus : " << perfBonus 
             << "\nNet Salary : " << computeNetSalary() << endl;
    }

    virtual string employeeType() override{
        return "Manager";
    }

};

class Worker : public Employee
{

    int hoursWorked, hourlyRate;

public:
    Worker(int empId, string empName, int deptId, double basicSalary, int hoursWorked, int hourlyRate) : Employee(empId, empName, deptId, basicSalary)
    {
        this->hourlyRate = hourlyRate;
        this->hoursWorked = hoursWorked;
    }


    virtual double computeNetSalary() override
    {
        return getBasicSalary() + (hoursWorked * hourlyRate);
    }

    void display() override {
        cout<<"\nPost :  Worker \n";
        Employee::display();
        cout << "\nHours Worked : " << hoursWorked 
             << "\nHourly Rate : " << hourlyRate 
             << "\nNet Salary : " << computeNetSalary() << endl;
    }
    int getHourlyRate()
    {
        return hourlyRate;
    }

    virtual string employeeType() override{
        return "Worker";
    }

};

int main()
{

    Employee ** empData;
    int id,deptId, hourlyRate, hoursWorked; double basicSalary,perfBonus;
    string name;
    int numberOfEmployess = 0;
    int iterator = 0 ;
    cout<<"How many Employees are there ? \n";
    cin>>numberOfEmployess;
    int choice;
    empData  = new Employee*[numberOfEmployess];
    do{
        cout<<"\n1. Enter Manager Details\n2. Enter Worker Details\n3. Show All Employess\n4. Show All Managers\n5. Show All Workers\n 6. Exit\n";
        cin>>choice;
        switch (choice){
            case 1 : {
                cout<<"\n\nAdding Manager Info\n\n";
                cout<<"\nEnter Emp Id : ";
                cin>>id;
                cout<<"\nEnter Name : ";
                cin.ignore();
                getline(cin, name);
                cout<<"\nEnter Department Id : ";
                cin>>deptId;
                cout<<"Enter Basic Salary : ";
                cin>>basicSalary;
                cout<<"Enter Performance Bonus : ";
                cin>>perfBonus;

                empData[iterator++] = new Manager(id,name,deptId,basicSalary,perfBonus);
                break;

            }
            case 2: {
            int id, deptId, hoursWorked, hourlyRate;
            double basicSalary;
            string name;
            cout<<"\n\nAdding Worker Data\n\n";
            cout << "\nEnter Emp Id: ";
            cin >> id;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, name);
            cout << "Enter Department Id: ";
            cin >> deptId;
            cout << "Enter Basic Salary: ";
            cin >> basicSalary;
            cout << "Enter Hours Worked: ";
            cin >> hoursWorked;
            cout << "Enter Hourly Rate: ";
            cin >> hourlyRate;

            empData[iterator++] = new Worker(id, name, deptId, basicSalary, hoursWorked, hourlyRate);
            break;
        }

         case 3:
            {cout << "\n--- Employee Details ---\n";
            if(iterator == 0) {
                cout<<"\nNo data found\n";
                break;
            }
            for (int i = 0; i < iterator; i++) {
                empData[i]->display();
            }
            break;}
        
        case 4:{
            cout << "\n--- Managers Details ---\n";
            if(iterator == 0) {
                cout<<"\nNo data found\n";
                break;
            }
            for (int i = 0; i < iterator; i++) {
                
                if(empData[i]->employeeType() == "Manager"){
                empData[i]->display();

                };
            }
            break;

        }
         case 5:{
            cout << "\n--- Workers Details ---\n";
            if(iterator == 0) {
                cout<<"\nNo data found\n";
                break;
            }
            for (int i = 0; i < iterator; i++) {
                
                if(empData[i]->employeeType() == "Worker"){
                empData[i]->display();

                };
            }
            break;

        }
        }
    }while(choice != 6);

}