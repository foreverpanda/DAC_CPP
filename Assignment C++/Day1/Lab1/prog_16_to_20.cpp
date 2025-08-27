#include <iostream>
#include <cmath>
using namespace std;

// 16. Print all Prime numbers between 1 to n
void printPrimes() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Prime numbers between 1 and " << n << " are: ";
    for (int num = 2; num <= n; num++) {
        bool prime = true;
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                prime = false;
                break;
            }
        }
        if (prime) cout << num << " ";
    }
    cout << endl;
}

// 17. Armstrong number check
void checkArmstrong() {
    int n, sum = 0, temp, digits = 0;
    cout << "Enter number: ";
    cin >> n;
    temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp > 0) {
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }
    if (sum == n) cout << n << " is an Armstrong number\n";
    else cout << n << " is NOT an Armstrong number\n";
}

// 18. Greatest of three numbers using nested if-else
void greatestOfThree() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if (a >= b) {
        if (a >= c) cout << a << " is greatest\n";
        else cout << c << " is greatest\n";
    } else {
        if (b >= c) cout << b << " is greatest\n";
        else cout << c << " is greatest\n";
    }
}

// 19. Pizza Shop Menu
void pizzaShop() {
    int choice, qty;
    double total = 0;
    do {
        cout << "\n--- Pizza Menu ---\n";
        cout << "1. Margherita (200 Rs)\n";
        cout << "2. Farmhouse (300 Rs)\n";
        cout << "3. Cheese Burst (400 Rs)\n";
        cout << "4. Exit & Show Bill\n";
        cout << "Enter choice: ";
        cin >> choice;
        if (choice >= 1 && choice <= 3) {
            cout << "Enter quantity: ";
            cin >> qty;
            if (choice == 1) total += 200 * qty;
            else if (choice == 2) total += 300 * qty;
            else if (choice == 3) total += 400 * qty;
        }
    } while (choice != 4);
    cout << "Total Bill = Rs. " << total << endl;
}

// 20. Single digit to words
void digitToWord() {
    int digit;
    cout << "Enter single digit (0-9): ";
    cin >> digit;
    switch(digit) {
        case 0: cout << "Zero\n"; break;
        case 1: cout << "One\n"; break;
        case 2: cout << "Two\n"; break;
        case 3: cout << "Three\n"; break;
        case 4: cout << "Four\n"; break;
        case 5: cout << "Five\n"; break;
        case 6: cout << "Six\n"; break;
        case 7: cout << "Seven\n"; break;
        case 8: cout << "Eight\n"; break;
        case 9: cout << "Nine\n"; break;
        default: cout << "Not a single digit!\n";
    }
}

int main() {
    int choice;
    cout << "\n--- Menu ---\n";
    cout << "16. Print all Prime numbers 1 to n\n";
    cout << "17. Check Armstrong number\n";
    cout << "18. Greatest of 3 numbers\n";
    cout << "19. Pizza Shop Billing\n";
    cout << "20. Single Digit to Word\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {
        case 16: printPrimes(); break;
        case 17: checkArmstrong(); break;
        case 18: greatestOfThree(); break;
        case 19: pizzaShop(); break;
        case 20: digitToWord(); break;
        default: cout << "Invalid choice!\n";
    }
    return 0;
}
