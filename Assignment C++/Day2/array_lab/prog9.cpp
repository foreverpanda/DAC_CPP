#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    map<int, int> freq;
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    cout << "Frequency of each element:\n";
    for(auto it : freq) {
        cout << it.first << " occurs " << it.second << " times\n";
    }

    return 0;
}
