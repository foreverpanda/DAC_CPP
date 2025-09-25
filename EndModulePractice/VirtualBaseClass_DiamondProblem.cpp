#include <iostream>
using namespace std;
class Person
{
    string name;
    int age;

public:
    void displayPerson()
    {
        cout << "Age : " << age << " | Name : " << name << endl;
    }
};

class Employee : virtual public Person
{
    int empId;
    int salary;

public:
    void displayEmployee()
    {
        displayPerson();
        cout << "Emp Id : " << empId << " | Salary : " << salary << endl;
    }
};

class Manager : virtual public Person
{
    string deptName;

public:
    void displayManager()
    {
        displayPerson();
        cout << "Dept name : " << deptName << endl;
    }
};

class TeamLead :  public Employee,  public Manager
{

    int teamSize;

public:
    void displayTeamLead(){
        displayPerson();

    }
};