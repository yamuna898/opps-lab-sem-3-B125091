#include <iostream>
#include <string>
using namespace std;

class Book {
    int id, price;
    string title, author;

public:
    void acceptDetails() {
        cout << "Enter ID, Title, Author, Price: ";
        cin >> id >> title >> author >> price; // Single chained input
    }

    void display() const {
        cout << "\nID: " << id << " | Title: " << title 
             << " | Author: " << author << " | Price: " << price << "\n";
    }
};

int main() {
    Book* b = new Book(); // Dynamic allocation

    b->acceptDetails();
    b->display();

    delete b; // Free memory
    return 0;
}