// Generic Stack/Queue Library

// Implement stack and queue using templates.

// Allow user to create int stack, double stack, or even custom object stack.

#include <iostream>
#include<queue>
#include <stack>
using namespace std;
template <typename T>
class getStack
{
    stack<T> s1;

public:
    getStack()
    {
        cout << "Empty stack has been created\nUse 1.push(T x) 2.pop() 3.peek() 4.isEmplty() \n\n";
    }
    void push(T x)
    {
        s1.push(x);
        cout << x << " pushed into stack.\n";
    }
    void pop()
    {
        if (s1.empty())
        {
            cout << "Stack is empty! \n";
            return;
        }
        cout << "Popped: " << s1.top() << endl;
        s1.pop();
    }
    void peek()
    {
        if (s1.empty())
        {
            cout << "Stack is empty! ❌\n";
            return;
        }
        cout << "Top element: " << s1.top() << endl;
    }
    void isEmpty()
    {
        if (!s1.empty())
        {
            cout << "Not empty\n";
            return;
        }
        cout << "Empty\n";
    }

    // inside getStack
void printAll() {
    if (s1.empty()) {
        cout << "Stack is empty!\n";
        return;
    }
    stack<T> temp = s1;
    cout << "Stack elements (top to bottom): ";
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}

};

template<typename T>
class getQueue
{
    queue<T> s1;

public:
    getQueue()
    {
        cout << "Empty Queue has been created\nUse 1.push(T x) 2.pop() 3.peek() 4.isEmplty() \n\n";
    }
    void peek(){
        if(s1.empty()){
            cout<<"Queue is empty";
        }
        else{
            cout<<"Front : "<<s1.front();
            cout<<endl;
            cout<<"Back : "<<s1.back();
            cout<<endl;
        }

    }
    void push(T val){
        s1.push(val);
        cout<<"Pushed : "<<val<<endl;
    }
    void pop(){
        if(s1.empty()){
            cout<<"Queue is empty";

        }
        else{
            cout<<"Popped : "<<s1.front();
            s1.pop();
        }
    }
        void isEmpty()
    {
        if (!s1.empty())
        {
            cout << "Not empty\n";
            return;
        }
        cout << "Empty\n";
    }
    // inside getQueue
void printAll() {
    if (s1.empty()) {
        cout << "Queue is empty!\n";
        return;
    }
    queue<T> temp = s1;
    cout << "Queue elements (front to back): ";
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;
}

   
};





template<typename T, template<typename> typename C>
void runMenu(){
    C<T>obj;
    int choice; T val;
    do
    {
        cout << "\n📌 Menu\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Check Empty\n";
        cout << "5. Exit\n";
                cout << "6. Print All\n";   // menu line

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> val;
            obj.push(val);
            break;
        case 2:
            obj.pop();
            break;
        case 3:
            obj.peek();
            break;
        case 4:
            obj.isEmpty();
            break;
        case 5:
            cout << "Exiting...\n";
            break;

// switch ke andar
case 6:
    obj.printAll();
    break;

        default:
            cout << "Invalid choice! ❌\n";
        }
    } while (choice != 5);


}


int main()
{
    int choice;
    do
    {

        cout << "Do you want to create Stack or Queue ? \n1. Stack Integer\n2. Stack Double\n3. Queue Integer\n4. Queue Double\n5. Exit\n";
        cin >> choice;
        switch (choice)
        {

        case 1:
            runMenu<int,getStack>();
            break;
        case 2:
            runMenu<double,getStack>();
            break;
        case 3:
        runMenu<int,getQueue>();
        break;
        case 4:
        runMenu<double,getQueue>();
        break;
        }

    } while (choice != 5);


}