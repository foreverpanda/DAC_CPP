
#include <iostream>
using namespace std;

template <typename T>
class Calculator {
public:
    T add(T a, T b) { return a + b; }
    T subtract(T a, T b) { return a - b; }
    T multiply(T a, T b) { return a * b; }
    T divide(T a, T b) { return (b != 0) ? a / b : 0; }
};

int main() {
    Calculator<int> intCalc;
    cout << "Int Add: " << intCalc.add(10, 5) << endl;
    cout << "Int Divide: " << intCalc.divide(10, 2) << endl;

    Calculator<double> doubleCalc;
    cout << "Double Multiply: " << doubleCalc.multiply(3.5, 2.0) << endl;
    cout << "Double Subtract: " << doubleCalc.subtract(7.8, 2.2) << endl;
}

