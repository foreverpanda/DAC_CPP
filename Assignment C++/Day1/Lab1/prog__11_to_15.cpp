#include <iostream>
using namespace std;

// 11. Prime check
void checkPrime() {
    int n, flag = 1;
    cout << "Enter a number: ";
    cin >> n;
    if (n <= 1) flag = 0;
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
    if (flag) cout << n << " is Prime\n";
    else cout << n << " is NOT Prime\n";
}

// 12. Sum of series 1+2+…+n
void sumSeries() {
    int n, sum = 0;
    cout << "Enter n: ";
    cin >> n;
    sum = (n * (n + 1)) / 2;  // formula
    cout << "Sum = " << sum << endl;
}

// 13. Palindrome check
void checkPalindrome() {
    int n, rev = 0, temp;
    cout << "Enter number: ";
    cin >> n;
    temp = n;
    while (temp > 0) {
        rev = rev*10 + temp%10;
        temp /= 10;
    }
    if (rev == n) cout << n << " is Palindrome\n";
    else cout << n << " is NOT Palindrome\n";
}

// 14. Sum of even and odd numbers
void sumEvenOdd() {
    int n, sumEven = 0, sumOdd = 0;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) sumEven += i;
        else sumOdd += i;
    }
    cout << "Sum of Even = " << sumEven << endl;
    cout << "Sum of Odd = " << sumOdd << endl;
}

// 15. Reverse of a number
void reverseNumber() {
    int n, rev = 0;
    cout << "Enter number: ";
    cin >> n;
    while (n > 0) {
        rev = rev*10 + n%10;
        n /= 10;
    }
    cout << "Reversed number = " << rev << endl;
}

int main() {
    int choice;
    cout << "\n--- Menu ---\n";
    cout << "11. Check Prime Number\n";
    cout << "12. Sum of Series 1+2+..+n\n";
    cout << "13. Palindrome Check\n";
    cout << "14. Sum of Even & Odd till n\n";
    cout << "15. Reverse of a Number\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {
        case 11: checkPrime(); break;
        case 12: sumSeries(); break;
        case 13: checkPalindrome(); break;
        case 14: sumEvenOdd(); break;
        case 15: reverseNumber(); break;
        default: cout << "Invalid choice!\n";
    }
    return 0;
}
