#include <iostream>
#include <string>
using namespace std;

class HostelFee{
private:
    string studentName;    // Stores student name
    int hostelID;          // Stores hostel ID
    float monthlyFee;      // Stores monthly fee
    int months;            // Stores number of months
    bool delayed;          // Stores payment delay status

public:
    void acceptDetails(){
        cout << "Enter Student Name: ";
        getline(cin, studentName);

        cout << "Enter Hostel ID: ";
        cin >> hostelID;

        cout << "Enter Monthly Fee: ";
        cin >> monthlyFee;

        cout << "Enter Number of Months: ";
        cin >> months;

        cout << "Payment delayed? (1 = Yes, 0 = No): ";
        cin >> delayed;
    }

    float calculateFee(){
        float total = monthlyFee * months;    // Calculate basic fee

        if (delayed)
            total += 500;    // Add late fine

        return total;
    }

    void display(){
        cout << "\nHostel Fee Details\n";
        cout << "Student Name: " << studentName << endl;
        cout << "Hostel ID: " << hostelID << endl;
        cout << "Monthly Fee: " << monthlyFee << endl;
        cout << "Number of Months: " << months << endl;
        cout << "Final Amount: " << calculateFee() << endl;
    }
};

int main(){
    HostelFee student;    // Create object

    student.acceptDetails();    // Take student details
    student.display();          // Display final fee

    return 0;
}