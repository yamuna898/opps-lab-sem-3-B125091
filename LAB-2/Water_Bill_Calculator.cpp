#include <iostream>
#include <string>
using namespace std;

class WaterBill{
private:
    int consumerNumber;       // Stores consumer number
    string consumerName;      // Stores consumer name
    int consumption;          // Stores water consumption

public:
    void acceptDetails(){
        cout << "Enter Consumer Number: ";
        cin >> consumerNumber;

        cin.ignore();

        cout << "Enter Consumer Name: ";
        getline(cin, consumerName);

        cout << "Enter Water Consumption (litres): ";
        cin >> consumption;
    }

    float calculateBill(){
        float bill = 0;    // Stores total bill

        if (consumption <= 500)
            bill = consumption * 2;
        else if (consumption <= 1000)
            bill = (500 * 2) + ((consumption - 500) * 3);
        else
            bill = (500 * 2) + (500 * 3) + ((consumption - 1000) * 5);

        return bill;
    }

    void display(){
        cout << "\nWater Bill\n";
        cout << "Consumer Number: " << consumerNumber << endl;
        cout << "Consumer Name: " << consumerName << endl;
        cout << "Consumption: " << consumption << " litres" << endl;
        cout << "Total Bill: Rs. " << calculateBill() << endl;
    }
};

int main(){
    WaterBill bill;    // Create object

    bill.acceptDetails();    // Take consumer details
    bill.display();          // Display bill

    return 0;
}