#include <iostream>
#include <string>
using namespace std;

class Employee {
    int id;
    string name;
    double salary;

public:
    void accept() {
        cout << "Enter ID, Name, Salary: ";
        cin >> id; cin.ignore(); // Clear buffer for getline
        getline(cin, name);
        cin >> salary;
    }

    void display() const {
        cout << "ID: " << id << " | Name: " << name << " | Salary: $" << salary << "\n";
    }

    double getSalary() const { return salary; }
};

int main() {
    int n, topIdx = 0;
    double total = 0;

    cout << "Enter number of employees: "; cin >> n;
    Employee* emp = new Employee[n]; // Dynamically allocate array

    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << ":\n";
        emp[i].accept();
        emp[i].display();

        // Accumulate total and track highest salary index
        total += emp[i].getSalary();
        if (emp[i].getSalary() > emp[topIdx].getSalary()) topIdx = i;
    }

    // Output stats
    cout << "\nHighest Earner:\n"; emp[topIdx].display();
    cout << "Average Salary: $" << total / n << "\n";

    delete[] emp; // Free memory
    return 0;
}