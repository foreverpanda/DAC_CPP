#include<iostream>
#include<stack>

using namespace std;

template <typename t> 
class StackImple{
    t data;
    stack<t> s;
    public:
    
    StackImple(){


    }
    void push(t data){
        cout<<"Pushed : "<<data<<endl;
        s.push(data);
    }
    void pop(){
        t ele = s.top();
       cout<<"Popped : "<< ele <<endl;
       s.pop();
    }
    void top(){
        t ele = s.top();
        cout<<"Element at top : "<<ele;
    }
    bool isEmpty(){
        if(s.empty()){
            return 1;
        }
        else{
            return 0;
        }
    }
};

void integerImplementation(){
    StackImple<int> s;
    bool exit = false;
    cout<<"==Implementing Integer Stack==\n";
    while(!exit){
        cout<<"\n1.Create\n2.Push\n3.Pop\n4.Peek\n5.Exit\n";
        int choice;
        cin>>choice;
        switch(choice){
            case 1:{
                cout<<"Stack created\n";
                cout<<"Enter element : ";
                int data;
                cin>>data;
                s.push(data); break;
            }
            case 2:
            {
                cout<<"Enter element : ";
                int data;
                cin>>data;
                s.push(data);break;

            }
            case 3:
            {
                if(s.isEmpty()){
                    cout<<"Underflow\n";
                }
                else{
                    s.pop();
                }
                break;
            }
            case 4:{
                s.top();
                break;
            }
            case 5: exit = true;
        }
    }

}

void doubleImplementation(){

}


void stringImplementation(){
 StackImple<string> s;
    bool exit = false;
    cout<<"==Implementing String Stack==\n";
    while(!exit){
        cout<<"\n1.Create\n2.Push\n3.Pop\n4.Peek\n5.Exit\n";
        int choice;
        cin>>choice;
        switch(choice){
            case 1:{
                cout<<"Stack created\n";
                cout<<"Enter element : ";
                string data;
                cin>>data;
                s.push(data); break;
            }
            case 2:
            {
                cout<<"Enter element : ";
                string data;
                cin>>data;
                s.push(data);break;

            }
            case 3:
            {
                if(s.isEmpty()){
                    cout<<"Underflow\n";
                }
                else{
                    s.pop();
                }
                break;
            }
            case 4:{
                s.top();
                break;
            }
            case 5: exit = true;
        }
    }

}

int main(){
    bool exit = 0;
    while(!exit){
        cout<<"Enter data type\n1. Integer\n2.Double\n3.String\n";
        int choice;
        cin>>choice;
        switch (choice){
            case 1: 
            integerImplementation(); break;
            case 2:
            doubleImplementation(); break;
            case 3: 
            stringImplementation(); break;
            default: exit = 1;break;
        }

    }
}
