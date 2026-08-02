#include <iostream>
#include <cstdlib>
using namespace std;

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student *student = (Student*)malloc(n * sizeof(Student));

    for(int i = 0; i < n; i++) {
        cout << "\nEnter details of student " << i + 1 << ":\n";
        cout << "Roll Number: ";
        cin >> (student + i)->rollNo;

        cout << "Name: ";
        cin >> (student + i)->name;

        cout << "Marks: ";
        cin >> (student + i)->marks;
    }

    int highest = 0;

    for(int i = 1; i < n; i++)
        if((student + i)->marks > (student + highest)->marks)
            highest = i;

    cout << "\nHighest Marks Student\n";
    cout << "Roll Number: " << (student + highest)->rollNo << endl;
    cout << "Name: " << (student + highest)->name << endl;
    cout << "Marks: " << (student + highest)->marks;

    free(student);

    return 0;
}
