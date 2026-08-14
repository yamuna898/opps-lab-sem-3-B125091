#include <iostream>
#include <string>
using namespace std;

class Product {
    int id, price, qty; // Grouped attributes for brevity
    string Pname;

public:
    void acceptDetails() {
        cout << "Enter ID, Name, Price, Quantity: ";
        cin >> id >> Pname >> price >> qty; // Single chained input
    }

    void display() const {
        cout << "\nID: " << id << " | Name: " << Pname 
             << " | Price: " << price << " | Qty: " << qty 
             << " | Total: " << price * qty << "\n";
    }
};

int main() {
    int n = 5;
    Product* p = new Product[n]; // Dynamically allocate array of products

    for (int i = 0; i < n; i++) {
        p[i].acceptDetails();
        p[i].display();
    }

    delete[] p;  // Correct delete[] syntax for dynamic arrays
    p = nullptr; // Reset pointer
    return 0;
}