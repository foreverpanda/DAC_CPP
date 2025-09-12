#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int num;
    cin >> num;
    bool found = false;
    for(int i = 0; i < n; i++) {
        if(a[i] == num) {
            found = true;
            break;
        }
    }
    if(found)
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;
    return 0;
}
