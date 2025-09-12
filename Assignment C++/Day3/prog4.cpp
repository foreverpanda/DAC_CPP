#include <iostream>
using namespace std;

class Book {
private:
    string bname;
    int id;
    string author;
    double price;

public:
    Book() {
        bname = "Unknown";
        id = 0;
        author = "Unknown";
        price = 0.0;
    }

    Book(string name, int bookId, string auth, double pr) {
        bname = name;
        id = bookId;
        author = auth;
        price = pr;
    }

    string getBname() {
        return bname;
    }

    int getId() {
        return id;
    }

    string getAuthor() {
        return author;
    }

    double getPrice() {
        return price;
    }

    void setBname(string name) {
        bname = name;
    }

    void setId(int bookId) {
        id = bookId;
    }

    void setAuthor(string auth) {
        author = auth;
    }

    void setPrice(double pr) {
        price = pr;
    }

    void display() {
        cout << "Book Name: " << bname << endl;
        cout << "ID: " << id << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Book book1;
    Book book2("C++ Guide", 101, "Sigma Boy", 499.99);

    cout << "Default Book:" << endl;
    book1.display();

    cout << "\nParameterized Book:" << endl;
    book2.display();

    book2.setPrice(549.99);

    cout << "\nUpdated Parameterized Book:" << endl;
    book2.display();

    return 0;
}
