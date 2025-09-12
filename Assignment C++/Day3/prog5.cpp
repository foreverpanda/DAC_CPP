#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;

public:
    Point() {
        x = 0;
        y = 0;
    }

    Point(int xVal, int yVal) {
        x = xVal;
        y = yVal;
    }

    int getX() {
        return x;
    }

    int getY() {
        return y;
    }

    void setX(int xVal) {
        x = xVal;
    }

    void setY(int yVal) {
        y = yVal;
    }

    void display() {
        cout << "Point: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point point1;
    Point point2(3, 4);

    cout << "Default Point:" << endl;
    point1.display();

    cout << "\nParameterized Point:" << endl;
    point2.display();

    point1.setX(7);
    point1.setY(8);

    cout << "\nUpdated Default Point:" << endl;
    point1.display();

    return 0;
}
