#include<iostream>
using namespace std;

class Base{
    int i ;
    friend void friendFunction(Base );
    public:
    Base(){
        cout<<"Base called!\n";
        i  = 100;
    }

};

void friendFunction(Base b1){

    cout<<b1.i;

}

int main(){
    Base b;
    friendFunction(b);

}