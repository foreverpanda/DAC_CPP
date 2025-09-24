#include "headers.h"

class Student
{
    int id;
    string name;
    int age;
    int marks;

public:
    void accept(int id, string name, int age, int marks)
    {
        this->id = id;
        this->name = name;
        this->age = age;
        this->marks = marks;
    }

    void display()
    {
        cout << "Id : " << id << " | Name : " << name << " | Age : " << age << " | Marks : " << marks << endl;
    }

    int getId(){
        return id;
    }
    int getMarks(){return marks;}
    int getAge(){return age;}
    string getName(){return name;}
};




