// 3:Create an application using set .
//   Accept name of city from user and store in set
//   Create Menu drivien app
//   1:add city
//   2:display  all city
//   3: serach city

#include <iostream>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
int main()
{
    set<string> cities;
    bool exit = false;
    while (!exit)
    {
        cout << "1. Enter city 2. Display all city 3. Search city\n";
        int choice;
        cin >> choice;
         cin.ignore();

        switch (choice)
        {
        case 1:
        {
            string city;
            cout << "Enter city name : \n";
            getline(cin, city);
            cities.insert(city);
            break;
        }
        case 2:
        {
            for (auto i : cities)
            {
                cout << i << " ";
            }
            break;
        }
        case 3:
        {
            cout << "Enter city name : ";
            string city;
            getline(cin, city);
            for (auto i : cities)
            {

                if (i == city)
                {
                    cout << "Present";
                }
            }
            break;
        }
        default:
        cout<<"Invalid\n";
        }
    }
}
