#include <iostream>
#include <string>
using namespace std;

class HotelRoom{
private:
    int roomNumber;          // Stores room number
    string guestName;        // Stores guest name
    int daysStayed;          // Stores number of days
    float costPerDay;        // Stores cost per day

public:
    void acceptDetails(){
        cout << "Enter Room Number: ";
        cin >> roomNumber;

        cin.ignore();

        cout << "Enter Guest Name: ";
        getline(cin, guestName);

        cout << "Enter Number of Days: ";
        cin >> daysStayed;

        cout << "Enter Cost Per Day: ";
        cin >> costPerDay;
    }

    float calculateRent(){
        return daysStayed * costPerDay;    // Calculate total rent
    }

    void displayDetails(){
        cout << "\nBooking Details\n";
        cout << "Room Number: " << roomNumber << endl;
        cout << "Guest Name: " << guestName << endl;
        cout << "Days Stayed: " << daysStayed << endl;
        cout << "Cost Per Day: " << costPerDay << endl;
        cout << "Total Rent: " << calculateRent() << endl;
    }
};

int main(){
    HotelRoom room;    // Create object

    room.acceptDetails();    // Take booking details
    room.displayDetails();   // Display booking details

    return 0;
}