// Function Template – Swap
//  Write a function template swapValues() that swaps two variables of any type.

// Test with int, double, and string.

#include <iostream>
using namespace std;
#include <string>
template <typename T>
void swapValues(T &num1, T &num2)
{

    T temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{
    int num1, num2;
    string s1, s2;
    double d1, d2;
    int choice;
    do
    {
        cout << "1. Swap Integers \n2. Swap Strings\n3. Swap Doubles\n4. Exit\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "Enter two numbers :   ";
            cin >> num1 >> num2;
            cout<<endl;
            cout<<endl;
            cout << "Entered Numbers \n";
            cout << "Num1 : " << num1 << " Num2 : " << num2 << endl;
            swapValues(num1, num2);
            cout << "Swapped Numbers \n";
            cout << "Num1 : " << num1 << " Num2 : " << num2 << endl;
            cout<<endl;
            break;
        }
        case 2:
        {
            cout << "Enter first String :   ";
            cin.ignore();
            getline(cin, s1);
            cout << "Enter Second String :   ";

            getline(cin,s2);
            cout<<endl;
            cout<<endl;
            cout << "Entered Strings \n";
            cout << "S1 : " << s1 << " S2 : " << s2 << endl;
            swapValues(s1, s2);
            cout << "Swapped Strings \n";
            cout << "S1 : " << s1 << " S2 : " << s2 << endl;
            cout<<endl;
            break;
        }

        case 3:{
              cout << "Enter two numbers :   ";
	cin.ignore();
            cin >> d1 >> d2;
            cout<<endl;
            cout<<endl;
            cout << "Entered Numbers \n";
            cout << "Num1 : " << d1 << " Num2 : " << d2 << endl;
            swapValues(d1, d2);
            cout << "Swapped Numbers \n";
            cout << "Num1 : " << d1 << " Num2 : " << d2 << endl;
            cout<<endl;
            break;
        
        }

        default: cout<<"Invalid choice";
            break;
        }
    } while (choice != 0);

    return 0;
}
