#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;
    string city;

public:

    Person(){
        name = "NULL";
        age = 0;
        city = "NULL";
    }

    Person(int age, string name, string city){
        this->age = age;
        this->name = name;
        this->city = city;
    }

    void setName(string name) { this->name = name; }
    void setAge(int age) { this->age = age; }
    void setCity(string city) { this->city = city; }
    string getName() { return name; }
    string getCity() { return city; }
    int getAge() { return age; }
    void displayData(){
        cout<<"\n Name : "<<name<<"\n City : "<<city<<"\n Age : "<<age<<"\n\n";
    }
};

int main(){
    Person p1;
    p1.displayData();
    Person p2(29,"Rajesh","New Delhi");
    p2.displayData();

    //setting data through setters
    p1.setName("ToothPaste");
    p1.setAge(90);
    p1.setCity("Agra");
    p1.displayData();

    // invoking getters

    cout<<"Data : [ Name : "<<p1.getName()<<" ,Age : "<<p1.getAge()<<" ,City : "<<p1.getCity()<<" ] \n";
}