
#include<iostream>
using namespace std;

template<typename T> class Box {
    T value;
    public:
    void setValue(T v) { value = v; }
    T getValue() { return value; }
};

int main() {
    Box<int> intBox;
    intBox.setValue(100);
    cout << "Int Box: " << intBox.getValue() << endl;

    Box<string> strBox;
    strBox.setValue("Templates are cool!");
    cout << "String Box: " << strBox.getValue() << endl;
    return 0;
}

