#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

class Product {
public:
    int prdid;
    string name;
    int qty;
    double price;

    Product(int id = 0, string n = "", int q = 0, double p = 0.0) { // default + param constructor
        prdid = id;
        name = n;
        qty = q;
        price = p;
    }

    string toString() const {  // const method
        return to_string(prdid) + "," + name + "," + to_string(qty) + "," + to_string(price);
    }

    static Product fromString(const string &line) {
        stringstream ss(line);
        string id_str, name, qty_str, price_str;
        getline(ss, id_str, ',');
        getline(ss, name, ',');
        getline(ss, qty_str, ',');
        getline(ss, price_str, ',');
        return Product(stoi(id_str), name, stoi(qty_str), stod(price_str));
    }

    void display() const {  // const method
        cout << "ID: " << prdid << ", Name: " << name
             << ", Quantity: " << qty << ", Price: " << price << endl;
    }
};

const string filename = "products.txt";

// Add Product
void addProduct() {
    ofstream fout(filename, ios::app);
    int id, qty;
    string name;
    double price;
    cout << "Enter Product ID: ";
    cin >> id;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Quantity: ";
    cin >> qty;
    cout << "Enter Price: ";
    cin >> price;
    Product p(id, name, qty, price);
    fout << p.toString() << endl;
    fout.close();
    cout << "Product added.\n";
}

// Load Products from file
vector<Product> loadProducts() {
    vector<Product> products;
    ifstream fin(filename);
    string line;
    while(getline(fin, line)) {
        if(!line.empty())
            products.push_back(Product::fromString(line));
    }
    fin.close();
    return products;
}

// Save Products to file
void saveProducts(const vector<Product> &products) {
    ofstream fout(filename);
    for(const auto &p : products) {
        fout << p.toString() << endl;
    }
    fout.close();
}

// Display all products
void displayProducts() {
    vector<Product> products = loadProducts();
    if(products.empty()) {
        cout << "No products found.\n";
    } else {
        for(const auto &p : products)
            p.display();
    }
}

// Search product by ID
void searchProduct() {
    vector<Product> products = loadProducts();
    int id;
    cout << "Enter Product ID to search: ";
    cin >> id;
    bool found = false;
    for(const auto &p : products) {
        if(p.prdid == id) {
            p.display();
            found = true;
            break;
        }
    }
    if(!found)
        cout << "Product not found.\n";
}

// Update product
void updateProduct() {
    vector<Product> products = loadProducts();
    int id;
    cout << "Enter Product ID to update: ";
    cin >> id;
    bool found = false;
    for(auto &p : products) {
        if(p.prdid == id) {
            cin.ignore();
            cout << "Enter new name: ";
            getline(cin, p.name);
            cout << "Enter new quantity: ";
            cin >> p.qty;
            cout << "Enter new price: ";
            cin >> p.price;
            found = true;
            break;
        }
    }
    if(found) {
        saveProducts(products);
        cout << "Product updated.\n";
    } else {
        cout << "Product not found.\n";
    }
}

// Delete all products
void deleteProduct() {
    saveProducts({});
    cout << "All products deleted.\n";
}

// Main menu
int main() {
    int choice;
    do {
        cout << "\n--- Shop Menu ---\n";
        cout << "1. Add Product\n";
        cout << "2. Display Products\n";
        cout << "3. Search Product\n";
        cout << "4. Update Product\n";
        cout << "5. Delete All Products\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: addProduct(); break;
            case 2: displayProducts(); break;
            case 3: searchProduct(); break;
            case 4: updateProduct(); break;
            case 5: deleteProduct(); break;
            case 0: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while(choice != 0);

    return 0;
}

