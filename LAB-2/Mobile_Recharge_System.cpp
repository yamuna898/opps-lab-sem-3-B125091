#include <iostream>
#include <string>
using namespace std;

class MobileRecharge{
private:
    string mobileNumber;    // Stores mobile number
    string customerName;    // Stores customer name
    float balance;          // Stores current balance

public:
    void acceptDetails(){
        cout << "Enter Mobile Number: ";
        cin >> mobileNumber;

        cin.ignore();

        cout << "Enter Customer Name: ";
        getline(cin, customerName);

        cout << "Enter Current Balance: ";
        cin >> balance;
    }

    void recharge(){
        float amount;    // Stores recharge amount

        cout << "Enter Recharge Amount: ";
        cin >> amount;

        balance += amount;    // Add recharge amount
    }

    void deductBalance(){
        float plan;    // Stores recharge plan cost

        cout << "Enter Recharge Plan Amount: ";
        cin >> plan;

        if (plan <= balance)
            balance -= plan;    // Deduct plan amount
        else
            cout << "Insufficient Balance!" << endl;
    }

    void display(){
        cout << "\nMobile Details\n";
        cout << "Mobile Number: " << mobileNumber << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Updated Balance: " << balance << endl;
    }
};

int main(){
    MobileRecharge mobile;    // Create object

    mobile.acceptDetails();    // Take customer details
    mobile.recharge();         // Recharge balance
    mobile.deductBalance();    // Deduct plan amount
    mobile.display();          // Display updated balance

    return 0;
}