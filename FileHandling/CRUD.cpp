#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;

class Product{
    int prodId;
    int qty;
    double price;
    string name;
    public:
     void accept() {
        cout << "Enter ID: ";        cin >> prodId; cin.ignore();
        cout << "Enter Name: ";      getline(cin, name);
        cout << "Enter Qty: ";       cin >> qty;
        cout << "Enter Price: ";     cin >> price;
    }
    void setProduct(int prodId,int qty,double price, string name)
    {
        this->price = price;
        this->prodId = prodId;
        this->name = name;
        this->qty = qty;
    }
    void display(){
        cout<<"Name : "<<name<<" | Qty : "<<qty<<" | Price :" <<price<<endl;
    }
    int getId() const { return prodId; }
    string getName() const { return name; }
    int getQty() const { return qty; }
    float getPrice() const { return price; }

};

void loadProducts(vector<Product>& listOfProducts){
    fstream myFile;
    myFile.open("products.txt",ios::in);
    if(myFile.is_open()){
        int id,qty;
        string name;
        double price;
        while(myFile>>id){
            myFile>>name;
            myFile>>price;
            myFile>>qty;
            Product p;
            p.setProduct(id,qty,price,name);
            listOfProducts.push_back(p);
        }
        myFile.close();
    }
    else{
        cout<<"cant open file";
    }
}

void saveProducts(vector<Product> &products){
    fstream myFile("products.txt",ios::out);
    for(auto p : products){
        myFile << p.getId() << ' ' << p.getName() << ' ' << p.getQty() << ' ' << p.getPrice() << '\n';
    }
    myFile.close();
}

void addProduct(vector<Product> &products){
    Product p;
    p.accept();
    products.push_back(p);
    saveProducts(products);
}


void displayProducts(const vector<Product> &products){
    for(auto i : products){
        i.display();
    }
}

int main(){
    vector<Product> products;
    loadProducts(products);

    int choice;
    do {
        cout << "\n=== SHOP MENU ===\n";
        cout << "1. Add Product\n2. Display Products\n3. Search Product\n4. Update Product\n5. Delete Product\n0. Exit\n";
        cout << "Choice: "; cin >> choice;

        switch (choice) {
            case 1: addProduct(products); break;
            case 2: displayProducts(products); break;
            // case 3: searchProduct(products); break;
            // case 4: updateProduct(products); break;
            // case 5: deleteProduct(products); break;
            case 0: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 0);

    return 0;
}