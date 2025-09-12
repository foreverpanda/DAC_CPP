#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Stack {
    vector<T> elements;
public:
    void push(T val) { elements.push_back(val); }
    void pop() {
        if (!elements.empty()) elements.pop_back();
    }
    T peek() {
        return (!elements.empty()) ? elements.back() : T();
    }
    bool isEmpty() { return elements.empty(); }
};
int main() {
    Stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    cout << "Peek Int: " << intStack.peek() << endl;
    intStack.pop();
    cout << "Peek Int After Pop: " << intStack.peek() << endl;

    Stack<string> strStack;
    strStack.push("Hello");
    strStack.push("World");
    cout << "Peek String: " << strStack.peek() << endl;
}

