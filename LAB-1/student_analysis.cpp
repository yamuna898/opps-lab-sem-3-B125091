#include <iostream>
using namespace std;

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    Student student[5];
    float sum = 0;

    for(int i = 0; i < 5; i++) {
        cout << "\nEnter details of student " << i + 1 << ":\n";
        cout << "Roll Number: ";
        cin >> student[i].rollNo;
        cout << "Name: ";
        cin >> student[i].name;
        cout << "Marks: ";
        cin >> student[i].marks;

        sum += student[i].marks;
    }

    int highest = 0;

    for(int i = 1; i < 5; i++)
        if(student[i].marks > student[highest].marks)
            highest = i;

    cout << "\nHighest Marks Student\n";
    cout << "Roll Number: " << student[highest].rollNo << endl;
    cout << "Name: " << student[highest].name << endl;
    cout << "Marks: " << student[highest].marks << endl;

    cout << "\nAverage Marks: " << sum / 5;

    return 0;
}