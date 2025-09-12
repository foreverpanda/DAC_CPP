#include <iostream>
using namespace std;

template <typename T>
T sumArray(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

int main() {
    int intArr[] = {1, 2, 3, 4, 5};
    cout << "Int Array Sum: " << sumArray(intArr, 5) << endl;

    double dblArr[] = {1.1, 2.2, 3.3};
    cout << "Double Array Sum: " << sumArray(dblArr, 3) << endl;
}
