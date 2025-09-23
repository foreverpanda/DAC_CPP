#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v1;
    bool exit = false;
    while (!exit)
    {
        int choice;
        // 1:add 2:show all 3:search 4:sort 5:reverse 6:clear

        cout << "1. Add \n2. Show all elements\n3. Search\n4. Sort\n5. Reverse\n6. Clear\n7.Exit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            int n;
            cin >> n;
            v1.push_back(n);
            break;
        }
        case 2:
        {
            for (auto i : v1)
            {
                cout << i << " ";
            }
            break;
        }
        case 3:
        {
            break;
        }
        case 4:
        {
            sort(v1.begin(), v1.end());
            break;
        }
        case 5:
            reverse(v1.begin(), v1.end());
            break;
        case 6:
        {
            v1.clear();
            break;
        }
        }
    }
}