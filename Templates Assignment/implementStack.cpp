#include<iostream>
#include<stack>

using namespace std;

template <typename t> 
class StackImple{
    t data;
    stack<t> s;
    public:
    StackImple(t data){
        cout<<"Stack Initialised!\n";
        s.push(data);
    }
    void push(t data){
        cout<<"Pushed : "<<data<<endl;
        s.push(data);
    }
    void pop(){
       cout<<"Popped : "<< s.pop()<<endl;
    }
    void top(){
        cout<<"Element at top : "<< s.top();
    }
    void isEmpty(){
        if(s.empty()){
            cout<<"Empty stack!\n";
        }
        else{
            cout<<"Not empty!\n";
        }
    }
};