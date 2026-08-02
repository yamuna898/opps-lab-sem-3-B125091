#include <iostream>
using namespace std;

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    Student student;
    Student *ptr = &student;

    cout << "Enter Roll Number: ";
    cin >> ptr->rollNo;

    cout << "Enter Name: ";
    cin >> ptr->name;

    cout << "Enter Marks: ";
    cin >> ptr->marks;

    cout << "\nStudent Details\n";
    cout << "Roll Number: " << ptr->rollNo << endl;
    cout << "Name: " << ptr->name << endl;
    cout << "Marks: " << ptr->marks;

    return 0;
}