#include<iostream>
using namespace std;
class BaseA{
int i;
    public:
    void greet(){
        cout<<"Greetings from A!";
    }
};

class BaseB{
    int i;
    public:
    void greet(){
        cout<<"Greetings from B!";
    }
};

class Derived: public BaseA, public BaseB{
public:
    void greetDerived(){
        cout<<"Hello";
    }
    void greet(){
        BaseB::greet();
        BaseA::greet();
    }
};


int main(){
    Derived d;
    d.greet();
}