#include <iostream>
using namespace std;

class Date {
private:
    int dd;
    int mm;
    int yy;

public:
    // Default Constructor
    Date() {
        dd = 1;
        mm = 1;
        yy = 2000;
    }

    // Parameterized Constructor
    Date(int d, int m, int y) {
        dd = d;
        mm = m;
        yy = y;
    }

    // Getters
    int getDd() {
        return dd;
    }

    int getMm() {
        return mm;
    }

    int getYy() {
        return yy;
    }

    // Setters
    void setDd(int d) {
        dd = d;
    }

    void setMm(int m) {
        mm = m;
    }

    void setYy(int y) {
        yy = y;
    }

    // Display function
    void display() {
        cout << "Date: " << dd << "/" << mm << "/" << yy << endl;
    }
};

int main() {
    Date date1; // Default Constructor
    Date date2(12, 9, 2025); // Parameterized Constructor

    cout << "Default Date: ";
    date1.display();

    cout << "Parameterized Date: ";
    date2.display();

    // Using setters
    date1.setDd(15);
    date1.setMm(10);
    date1.setYy(2026);

    cout << "Updated Default Date: ";
    date1.display();

    return 0;
}
