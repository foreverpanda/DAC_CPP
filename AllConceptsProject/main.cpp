#include "Employee.cpp"

Manager *createManager()
{
    int teamSize, id;
    string name;
    Role role;
    // Manager(int teamSize, int id, Role role, string name) : Employee(id, role, name) {}
    cout << "Enter team size : ";
    cin >> teamSize;
    cout << "Enter id : ";
    cin >> id;
    cin.ignore();
    cout << "Enter name : ";
    getline(cin, name);
    role = MANAGER;
    Manager *newManager = new Manager(teamSize, id, role, name);
    return newManager;
}

Developer *createDeveloper()
{
    int id;
    string name, projectName;
    Role role;
    // Developer(string projectName, int id, Role role, string name) : Employee(id, role, name) {}
    cout << "Enter Project Name : ";
    cin.ignore();
    getline(cin, projectName);
    cout << "Enter id : ";
    cin >> id;
    cin.ignore();
    cout << "Enter name : ";
    getline(cin, name);
    role = DEVELOPER;
    Developer *newDeveloper = new Developer(projectName, id, role, name);
    return newDeveloper;
}

Intern *createIntern()
{
    int duration, id;
    string name;
    Role role;
    // Developer(string projectName, int id, Role role, string name) : Employee(id, role, name) {}
    cout << "Enter Duration : ";
    cin >> duration;
    cout << "Enter id : ";
    cin >> id;
    cin.ignore();
    cout << "Enter name : ";
    getline(cin, name);
    role = INTERN;
    Intern *newIntern = new Intern(duration, id, role, name);
    return newIntern;
}

void addEmployee(vector<Employee *> &list)
{
    bool exit = false;
    while (!exit)
    {
        cout << "1. Add Manager\n2. Add Developer\n3. Add Intern\n0. Exit!\n";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            Manager *newMan = createManager();
            list.push_back(newMan);
            break;
        }
        case 2:
        {
            Developer *dev = createDeveloper();
            list.push_back(dev);
            break;
        }
        case 3:
        {

            Intern *intern = createIntern();
            list.push_back(intern);
            break;
        }
        case 0:
            exit = true;
        }
    }
}

void loadFile(vector<Employee *> &list)
{
    // role id name specific
    cout << "LOADING FILE!!\n";
    fstream myFile("emp.txt", ios::in);
    string sRole;
    int id, teamSize, duration;
    string name, projectName;

    if (myFile.is_open())
    {

        while (myFile >> sRole)
        {
            if (sRole == "MANAGER")
            {
                cout << "LOADING Manager data!!\n";

                Role addRole = MANAGER;
                myFile >> id >> name >> teamSize;
                Manager *newManager = new Manager(teamSize, id, addRole, name);
                list.push_back(newManager);
            }
            else if (sRole == "DEVELOPER")
            {
                myFile >> id >> name >> projectName;
                Role addRole = DEVELOPER;
                Developer *newDeveloper = new Developer(projectName, id, addRole, name);
                list.push_back(newDeveloper);
            }
            else
            {
                myFile >> id >> name >> duration;
                Role addRole = INTERN;
                Intern *newIntern = new Intern(duration, id, addRole, name);
                list.push_back(newIntern);
            }
        }
        myFile.close();
    }
    else
    {
        cout << "No file found!\n";
    }
}

void saveAndExit(vector<Employee *> const list)
{
    fstream myFile("emp.txt", ios::out);
    string sRole;
    int id, teamSize, duration;
    string name, projectName;
    for (auto i : list)
    {
        if (typeid(*i) == typeid(Manager))
        {
            id = i->getId();
            name = i->getName();
            auto it = dynamic_cast<Manager *>(i);
            sRole = it->getRole();
            teamSize = it->getTeamSize();
            myFile << sRole << ' ' << id << ' ' << ' ' << name << ' ' << teamSize;
            myFile << endl;
        }
        else if (typeid(*i) == typeid(Developer))
        {
            id = i->getId();
            name = i->getName();
            auto it = dynamic_cast<Developer *>(i);
            sRole = it->getRole();
            projectName = it->getProjectName();
            myFile << sRole << ' ' << id << ' ' << ' ' << name << ' ' << projectName;
            myFile << endl;
        }
        else
        {
            id = i->getId();
            name = i->getName();
            auto it = dynamic_cast<Intern *>(i);
            sRole = it->getRole();
            duration = it->getDuration();
            myFile << sRole << ' ' << id << ' ' << ' ' << name << ' ' << duration;
            myFile << endl;
        }
    }
    myFile.close();
}
int main()
{
    vector<Employee *> list;
    loadFile(list);
    bool exit = false;

    int choice;
    while (!exit)
    {
        cout << "1 Add Employee\n2. Get Employee\n3. Show all Emps\n4. Remove Emp\n5. Update Emp";
        cin >> choice;
        switch (choice)
        {
        case 1:
            addEmployee(list);
            break;
        case 2:
        {
            int id;
            bool found = false;
            cout << "Enter the id to search : ";
            cin >> id;
            for (auto i : list)
            {
                if (i->getId() == id)
                {
                    i->displayInfo();
                    found = true;
                }
            }
            if (!found)
            {
                cout << "Id not found!!\n";
            }
            break;
        }

        case 3:
        {
            cout << "Size of list : " << list.size() << endl;
            for (auto i : list)
            {

                i->displayInfo();
            }
            break;
        }
        case 0:
        {
            exit = true;
            saveAndExit(list);
            break;
        }
        }
    }
}