// Test with int, double, and string.

// Function Template – Maximum
//  Write a function template findMax() that returns the maximum of two values.

// Test with int, double.

#include <iostream>
using namespace std;
#include <string>

template <typename T>
T minMax(T &num1, T &num2)
{

    return (num1 > num2) ? num1 : num2;
}

int main()
{
    int num1, num2;
    double d1, d2;
    int choice;
    do
    {
        cout << "1. Max of Integers \n2. Max of Doubles\n3. Exit\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << endl;

            cout << "Enter two numbers :   ";
            cin >> num1 >> num2;

            cout << "Entered Numbers \n";
            cout << "Num1 : " << num1 << " Num2 : " << num2 << endl;
            cout << "Max : " << minMax(num1, num2) << endl
                 << endl;

            cout << endl;
            break;
        }

        case 2:
        {
            cout << endl;
            cout << "Enter two numbers :   ";
            cin >> d1 >> d2;
            cout << "Entered Numbers \n";
            cout << "Num1 : " << d1 << " Num2 : " << d2 << endl;
            cout << "Max : " << minMax(d1, d2) << endl
                 << endl;

            cout << endl;
            break;
        }
        case 0 : cout<<"Exiting";
        default:
            cout << "Invalid choice";
            break;
        }
    } while (choice != 3);

    return 0;
}