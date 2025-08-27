#include <iostream>
using namespace std;

inline int calcSquare(int side)
{
    return side * side;
}

inline int calcRect(int l, int b)
{
    return l * b;
}

inline int calcCircle(int r)
{
    return 3.14159 * r * r;
}

int main()
{

    int choice = 0;
    do
    {
        cout << "\n\n----------Area Calculator------------------\n";
        cout << "\n1. Calculate Square Area\n2. Calculate Rectangle Area\n3. Calculate Circle Area \n0. Exit \n";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            int side;
            cout << "\nEnter side of Square : ";
            cin >> side;
            cout << "\nArea is : " << calcSquare(side)<<endl;
            break;
        }
        case 2:
        {
            int l, b;
            cout << "\nEnter Lenght of Rectangle : ";
            cin >> l;
            cout << "\nEnter Width of Rectangle : ";
            cin >> b;
            cout << "\nArea is : " << calcRect(l, b)<<endl;
            break;
        }
        case 3:
        {
            int r;
            cout << "\nEnter radius of Circle : ";
            cin >> r;
            cout << "\nArea is : " << calcCircle(r)<<endl;
            break;

        }
        default : cout<<"\n\n\n\n INVALID CHOICE \n\n\n\n";
        }
    } while (choice != 0);

    return 0;
}