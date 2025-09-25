#include "header.h"
// Base Class: Employee
// Attributes: name, id, role

// Methods:

// virtual void displayInfo() → overridden in derived
// virtual ~Employee() {}

// Derived Classes:

// Developer → projectName, override displayInfo()
// Manager → teamSize, override displayInfo()
// Intern → durationMonths, override displayInfo()

enum Role
{
    DEVELOPER,
    MANAGER,
    INTERN
};

class Employee
{
public:
    int id;
    Role role;
    string name;
    Employee(int id, Role role, string name) : id(id), role(role), name(name) {}
    virtual void displayInfo() = 0;
    int getId() { return id; }
    string getName() { return name; }
};

class Developer : public Employee
{
    string projectName;

public:
    Developer(string projectName, int id, Role role, string name) : Employee(id, role, name) {
        this->projectName = projectName;
    }
    void displayInfo() override
    {
        cout << "Id : " << id << " | Role : " << static_cast<Role>(1) << " | Name : " << name << " | Project Name : " << projectName << endl;
    }

    void showProjectName()
    {
        cout << "Developers project name is " << projectName << endl;
    }

    string getRole() { return "DEVELOPER"; }
    string getProjectName() { return projectName; }
};

class Manager : public Employee
{

    int teamSize;

public:
    Manager(int teamSize, int id, Role role, string name) : Employee(id, role, name)
    {
        cout << "Manager constrcutor called!\n";
        this->teamSize = teamSize;
    }
    void displayInfo() override
    {
        cout << "Id : " << id << " | Role : " << static_cast<Role>(1) << " | Name : " << name << " | Team Size : " << teamSize << endl;
    }

    void showTeam()
    {
        cout << "Manager Team size is " << teamSize << endl;
    }
    string getRole() { return "MANAGER"; }
    int getTeamSize() { return teamSize; }
};

class Intern : public Employee
{

    int duration;

public:
    Intern(int duration, int id, Role role, string name) : Employee(id, role, name) {
        this->duration = duration;
    }
    void displayInfo() override
    {
        cout << "Id : " << id << " | Role : " << role << " | Name : " << name << " | Duration of Internship : " << duration << endl;
    }

    void showDuration()
    {
        cout << "Interns duration is " << duration << endl;
    }

    string getRole() { return "INETER"; }
    int getDuration() { return duration; }
};