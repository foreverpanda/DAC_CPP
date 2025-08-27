#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "\n--- Menu ---\n";
    cout << "1. Hello World\n";
    cout << "2. Addition of two numbers\n";
    cout << "3. Swap two numbers\n";
    cout << "4. Check Even or Odd\n";
    cout << "5. Check divisibility by 5 and 7\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1: {
            cout << "Hello World\n";
            break;
        }
        case 2: {
            int a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Sum = " << a + b << endl;
            break;
        }
        case 3: {
            int x, y;
            cout << "Enter two numbers: ";
            cin >> x >> y;
            cout << "Before swap: x=" << x << ", y=" << y << endl;
            int temp = x;
            x = y;
            y = temp;
            cout << "After swap: x=" << x << ", y=" << y << endl;
            break;
        }
        case 4: {
            int n;
            cout << "Enter an integer: ";
            cin >> n;
            if(n % 2 == 0)
                cout << n << " is Even\n";
            else
                cout << n << " is Odd\n";
            break;
        }
        case 5: {
            int n;
            cout << "Enter a number: ";
            cin >> n;
            if(n % 5 == 0 && n % 7 == 0)
                cout << n << " is divisible by 5 and 7\n";
            else
                cout << n << " is NOT divisible by 5 and 7\n";
            break;
        }
        default:
            cout << "Invalid choice\n";
    }

    return 0;
}
