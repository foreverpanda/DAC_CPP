#include <iostream>
using namespace std;

class ComplexNumber {
private:
    double real;
    double imaginary;

public:
    ComplexNumber() {
        real = 0.0;
        imaginary = 0.0;
    }

    ComplexNumber(double r, double i) {
        real = r;
        imaginary = i;
    }

    double getReal() {
        return real;
    }

    double getImaginary() {
        return imaginary;
    }

    void setReal(double r) {
        real = r;
    }

    void setImaginary(double i) {
        imaginary = i;
    }

    void display() {
        cout << "Complex Number: " << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    ComplexNumber cn1;
    ComplexNumber cn2(5.5, 3.3);

    cout << "Default Complex Number:" << endl;
    cn1.display();

    cout << "\nParameterized Complex Number:" << endl;
    cn2.display();

    cn2.setReal(7.7);
    cn2.setImaginary(4.4);

    cout << "\nUpdated Complex Number:" << endl;
    cn2.display();

    return 0;
}

