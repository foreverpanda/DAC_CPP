#include <iostream>
using namespace std;

struct student
{
    int rollNo;
    int marks1;
    int marks2;
    int marks3;
};

void acceptsInfo(struct student *s, int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << "Enter data of student" << i + 1 << endl;
        cout << "Enter the rollNumber : ";
        cin >> s[i].rollNo;
        cout << "Enter Marks1 : ";
        cin >> s[i].marks1;
        cout << "Enter Marks2 : ";
        cin >> s[i].marks2;
        cout << "Enter Marks3 : ";
        cin >> s[i].marks3;
    }
}

void displayInfo(struct student *s, int size)
{
    if(size == 0) 
    {
        cout<<"\n\nNo Record Found : ADD STUDENTS \n\n";
        return;
    }
    
    for (int i = 0; i < size; i++)
    {
        int percentage = (s[i].marks1 + s[i].marks2 + s[i].marks3) / 3;
        cout << "Information of Student -> [ " << s[i].rollNo << " : " << s[i].marks1 << ", " << s[i].marks2 << ", " << s[i].marks3 << " ]\n";
        cout << "Percentage : " << percentage;
        cout << endl;
        if (percentage > 80)
            cout << "Grade : A+\n";
        else if (percentage >= 60 && percentage < 80)
            cout << "Grade : B+\n";
        else if (percentage >= 50 && percentage < 60)
            cout << "Grade : C \n ";
        else
            cout << "Grade : D\n";
    }
}

int main()
{
    int choice = 0;
    int size = 0;
    struct student *s = NULL;

    do
    {
        cout << "1. Add Student \n2. Display Student \n0. Exit\n";
        cin >> choice;
        if (choice == 1)
        {
            cout << "How many students are there ? ";
            cin >> size;
            s = new struct student[size];

        }
        switch (choice)
        {
        case 1:
        {

            acceptsInfo(s, size);
        }
        case 2:
        {
            displayInfo(s, size);
        }
        }

    } while (choice != 0);
}