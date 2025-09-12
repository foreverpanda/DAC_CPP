#include <iostream>
using namespace std;

namespace CDAC {
    class Student {
    public:
        void info() {
            cout << "CDAC Student\n";
        }
    };
}

namespace IACSD {
    class Student {
    public:
        void info() {
            cout << "IACSD Student\n";
        }
    };
}

int main() {
    CDAC::Student cdacStudent;
    IACSD::Student iacsdStudent;

    cdacStudent.info();
    iacsdStudent.info();

    return 0;
}
