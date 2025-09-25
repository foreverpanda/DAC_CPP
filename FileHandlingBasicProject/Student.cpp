#include "headers.h"

class Student{
    int id;
    string name;
    int age;
    public:
    Student(int id,string name,int age){
        this->age = age;
        this->id = id;
        this->name = name;
    }

    string toString(){
        stringstream ss;
        ss<< id<<","<<age<<","<<name;
        return ss.str();
    }
    void display(){
        cout<<"Id: "<<id<<"\nName : "<<name<<"\n Age : "<<age<<endl;
    }

};