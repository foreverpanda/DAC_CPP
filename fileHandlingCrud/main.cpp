#include "Student.cpp"

void addStudent(vector<Student> &list)
{
    int id, age, marks;
    string name;
    cout << "Id : ";
    cin >> id;
    cin.ignore();
    cout << "Age : ";
    cin >> age;
    cin.ignore();

    cout << "Marks : ";
    cin >> marks;
    cin.ignore();

    cout << "Name : ";
    getline(cin, name);

    Student s;
    s.accept(id, name, age, marks);

    list.push_back(s);
}

void displayStudents(vector<Student> list)
{
    for (auto i : list)
    {
        i.display();
    }
}

void searchStudent(vector<Student> list, int id)
{
    for (auto i : list)
    {
        if (i.getId() == id)
        {
            cout << "Found\n";
            return;
        }
    }
    cout << "Not found\n";
    return;
}

void updateStudent();

void deleteStudent(vector<Student> & list, int id){

    Student s;

    vector<Student>newList;

    for(auto i : list){
        if(i.getId() == id){
           continue;
        }
        else{
            newList.push_back(i);
        }
    }

    list= newList;
    

}

void saveAndExit(vector<Student> const list)
{
    fstream tempFile("student.txt", ios::out);

    for (auto i : list)
    {

        // while (myFile >> id)
        //     myFile >> age >> marks >> name;
        tempFile << i.getId() << " " << i.getAge() << " " << i.getMarks() << " " << i.getName();
        tempFile << endl;
    }

    tempFile.close();

}

void loadFiles(vector<Student> &list)
{

    fstream myFile;
    myFile.open("student.txt", ios::in);
    Student s;
    if (myFile.is_open())
    {
        // loading the files
        int id, age, marks;
        string name;

        while (myFile >> id)
        {
            myFile >> age >> marks >> name;

            s.accept(id, name, age, marks);
            list.push_back(s);
        }
        myFile.close();
    }
    else
    {
        cout << "Loading data from previous records\n";
        cout << "File not found!!!\n";
        cout << "Proceeding to create a new File!!\n";
        fstream newFile("student.txt",ios::out);
        newFile.close();
    }
}

int main()
{

    vector<Student> listOfStudents;
    loadFiles(listOfStudents);

    bool exit = false;
    while (!exit)
    {
        cout << "1. Add student\n2. Display Students\n3. Search Student\n4. Update Student\n5. Delete Student\n0. Save and Exit\n";
        int choice;
        cin >> choice;
        cin.ignore();
        switch (choice)
        {
        case 1:
        {
            addStudent(listOfStudents);

            break;
        }
        case 2:
        {

            displayStudents(listOfStudents);
            break;
        }
        case 3:
        {
            int id;
            cout << "Enter the id to search : ";
            cin >> id;
            cin.ignore();
            searchStudent(listOfStudents, id);

            break;
        }
        case 4:
        {

            break;
        }
        case 5:
        {
            int id;
            cout<<"Id to delete : ";
            cin>>id;
            cin.ignore();
            deleteStudent(listOfStudents,id);
            
            break;
        }
        case 0:
        {
            saveAndExit(listOfStudents);
            exit = true;
            break;
        }
        default:
        {
            cout << "Invalid Input!!!";
        }
        }
    }
}