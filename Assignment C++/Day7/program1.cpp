#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vec;
    int choice;

    do {
        cout << "\n--- Menu ---\n";
        cout << "1. Add\n";
        cout << "2. Show all\n";
        cout << "3. Search\n";
        cout << "4. Sort\n";
        cout << "5. Reverse\n";
        cout << "6. Clear\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1) {
            int value;
            cout << "Enter value to add: ";
            cin >> value;
            vec.push_back(value);
            cout << "Added " << value << " to the vector.\n";
        }
        else if(choice == 2) {
            cout << "Vector elements: ";
            for(int val : vec)
                cout << val << " ";
            cout << endl;
        }
        else if(choice == 3) {
            int key;
            cout << "Enter value to search: ";
            cin >> key;
            auto it = find(vec.begin(), vec.end(), key);
            if(it != vec.end())
                cout << key << " found at position " << distance(vec.begin(), it) << endl;
            else
                cout << key << " not found.\n";
        }
        else if(choice == 4) {
            sort(vec.begin(), vec.end());
            cout << "Vector sorted.\n";
        }
        else if(choice == 5) {
            reverse(vec.begin(), vec.end());
            cout << "Vector reversed.\n";
        }
        else if(choice == 6) {
            vec.clear();
            cout << "Vector cleared.\n";
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
