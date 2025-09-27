#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Base{
    public:
    virtual void msg(){
        cout<<"Base\n";
    }
    
};

class Derived: public Base{
    public:
    void msg(){
        cout<<"Derived\n";
    }

};

int main(){
    Base * newPtr;

    newPtr = new Base;
    newPtr->msg();
    Derived *dev = new Derived;
    newPtr =dev;

    newPtr->msg();

}