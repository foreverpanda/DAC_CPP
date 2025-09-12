#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    set<string> cities;
    int choice;

    do {
        cout << "\n--- City Menu ---\n";
        cout << "1. Add City\n";
        cout << "2. Display All Cities\n";
        cout << "3. Search City\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        if(choice == 1) {
            string city;
            cout << "Enter city name: ";
            getline(cin, city);
            cities.insert(city);
            cout << "City added.\n";
        }
        else if(choice == 2) {
            cout << "Cities:\n";
            for(const string &city : cities)
                cout << city << endl;
        }
        else if(choice == 3) {
            string city;
            cout << "Enter city name to search: ";
            getline(cin, city);
            if(cities.find(city) != cities.end())
                cout << city << " found.\n";
            else
                cout << city << " not found.\n";
        }
        else if(choice == 0) {
            cout << "Exiting...\n";
        }
        else {
            cout << "Invalid choice!\n";
        }
    } while(choice != 0);

    return 0;
}
