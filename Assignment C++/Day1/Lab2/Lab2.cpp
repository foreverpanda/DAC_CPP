#include <iostream>
using namespace std;

bool isPrime(int n) {
    if(n <= 1) return false;
    for(int i = 2; i*i <= n; i++)
        if(n % i == 0)
            return false;
    return true;
}

int gcd(int a, int b) {
    while(b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    int choice;
    while(true) {
        cout << "Menu:\n";
        cout << "1. Sum of positive numbers\n";
        cout << "2. x raised to n\n";
        cout << "3. Next n characters from a character\n";
        cout << "4. Factorial of a number\n";
        cout << "5. Factors of a number\n";
        cout << "6. GCD of two numbers\n";
        cout << "7. Area calculations\n";
        cout << "8. Prime numbers between 1 to n\n";
        cout << "9. Exit\n";
        cin >> choice;
        if(choice == 9) break;
        
        if(choice == 1) {
            int n, sum = 0;
            cout << "Enter numbers (positive only, 0 or negative to stop):\n";
            while(true) {
                cin >> n;
                if(n <= 0) break;
                sum += n;
            }
            cout << "Sum = " << sum << endl;
        }
        
        else if(choice == 2) {
            int x, n, result = 1;
            cout << "Enter x and n:\n";
            cin >> x >> n;
            for(int i = 0; i < n; i++)
                result *= x;
            cout << "Result = " << result << endl;
        }
        
        else if(choice == 3) {
            char ch;
            int n;
            cout << "Enter character and n:\n";
            cin >> ch >> n;
            cout << "Next " << n << " characters:\n";
            for(int i = 1; i <= n; i++)
                cout << char(ch + i) << " ";
            cout << endl;
        }
        
        else if(choice == 4) {
            int n, fact = 1;
            cout << "Enter number:\n";
            cin >> n;
            for(int i = 1; i <= n; i++)
                fact *= i;
            cout << "Factorial = " << fact << endl;
        }
        
        else if(choice == 5) {
            int n;
            cout << "Enter number:\n";
            cin >> n;
            cout << "Factors:\n";
            for(int i = 1; i <= n; i++)
                if(n % i == 0)
                    cout << i << " ";
            cout << endl;
        }
        
        else if(choice == 6) {
            int a, b;
            cout << "Enter two numbers:\n";
            cin >> a >> b;
            cout << "GCD = " << gcd(a, b) << endl;
        }
        
        else if(choice == 7) {
            int sub;
            while(true) {
                cout << "Area Calculation Menu:\n";
                cout << "1. Area of Circle\n";
                cout << "2. Area of Rectangle\n";
                cout << "3. Area of Triangle\n";
                cout << "4. Exit to main menu\n";
                cin >> sub;
                if(sub == 4) break;
                if(sub == 1) {
                    double r;
                    cout << "Enter radius:\n";
                    cin >> r;
                    cout << "Area = " << 3.14 * r * r << endl;
                } else if(sub == 2) {
                    double l, b;
                    cout << "Enter length and breadth:\n";
                    cin >> l >> b;
                    cout << "Area = " << l * b << endl;
                } else if(sub == 3) {
                    double b, h;
                    cout << "Enter base and height:\n";
                    cin >> b >> h;
                    cout << "Area = " << 0.5 * b * h << endl;
                }
            }
        }
        
        else if(choice == 8) {
            int n;
            cout << "Enter n:\n";
            cin >> n;
            cout << "Prime numbers between 1 and " << n << ":\n";
            for(int i = 1; i <= n; i++)
                if(isPrime(i))
                    cout << i << " ";
            cout << endl;
        }
        
        else {
            cout << "Invalid choice\n";
        }
    }
    return 0;
}
