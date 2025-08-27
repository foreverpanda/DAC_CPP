#include <iostream>
using namespace std;

// 21. Simple Calculator (+ - * /)
void calculator() {
    int a, b;
    char op;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter operator (+ - * /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> b;

    switch(op) {
        case '+': cout << "Result = " << a + b << endl; break;
        case '-': cout << "Result = " << a - b << endl; break;
        case '*': cout << "Result = " << a * b << endl; break;
        case '/': 
            if (b != 0) cout << "Result = " << (float)a / b << endl;
            else cout << "Error: Division by zero!\n";
            break;
        default: cout << "Invalid operator!\n";
    }
}

int main() {
    int choice;
    do {
        cout << "\n--- Menu ---\n";
        cout << "21. Calculator\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 21: calculator(); break;
            case 0: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 0);

    return 0;
}
