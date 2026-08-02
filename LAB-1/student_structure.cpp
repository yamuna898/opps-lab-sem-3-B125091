#include <iostream>
using namespace std;

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    Student student[5];

    for(int i = 0; i < 5; i++) {
        cout << "\nEnter details of student " << i + 1 << ":\n";
        cout << "Roll Number: ";
        cin >> student[i].rollNo;
        cout << "Name: ";
        cin >> student[i].name;
        cout << "Marks: ";
        cin >> student[i].marks;
    }

    cout << "\n-------------------------------------------------\n";
    cout << "Roll No\tName\t\tMarks\n";
    cout << "-------------------------------------------------\n";

    for(int i = 0; i < 5; i++)
        cout << student[i].rollNo << "\t"
             << student[i].name << "\t\t"
             << student[i].marks << endl;

    return 0;
}