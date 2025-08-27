#include <iostream>
#include <cmath>
using namespace std;

// 6. Income Tax
void incomeTax() {
    double salary, tax = 0;
    cout << "Enter annual basic salary: ";
    cin >> salary;
    if (salary < 150000)
        tax = 0;
    else if (salary <= 300000)
        tax = (salary - 150000) * 0.2;
    else
        tax = (150000 * 0.2) + (salary - 300000) * 0.3;
    cout << "Income Tax = " << tax << endl;
}

// 7. Vowel or Consonant
void checkVowel() {
    char ch;
    cout << "Enter a lowercase character: ";
    cin >> ch;
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        cout << ch << " is a vowel\n";
    else
        cout << ch << " is a consonant\n";
}

// 8. Valid Triangle
void validTriangle() {
    int a, b, c;
    cout << "Enter three angles of a triangle: ";
    cin >> a >> b >> c;
    if (a+b+c == 180)
        cout << "Triangle is valid\n";
    else
        cout << "Triangle is NOT valid\n";
}

// 9. Factorial
void factorial() {
    int n, fact=1;
    cout << "Enter a number: ";
    cin >> n;
    for (int i=1; i<=n; i++)
        fact *= i;
    cout << "Factorial = " << fact << endl;
}

// 10. Power
void powerCalc() {
    int m, n;
    long long result = 1;
    cout << "Enter base (m): ";
    cin >> m;
    cout << "Enter exponent (n): ";
    cin >> n;
    for (int i=1; i<=n; i++)
        result *= m;
    cout << m << "^" << n << " = " << result << endl;
}

int main() {
    int choice;
    cout << "\n--- Menu ---\n";
    cout << "6. Income Tax Calculator\n";
    cout << "7. Check Vowel or Consonant\n";
    cout << "8. Check Valid Triangle\n";
    cout << "9. Factorial of a Number\n";
    cout << "10. Power (m^n)\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 6: incomeTax(); break;
        case 7: checkVowel(); break;
        case 8: validTriangle(); break;
        case 9: factorial(); break;
        case 10: powerCalc(); break;
        default: cout << "Invalid choice!\n";
    }
    return 0;
}
